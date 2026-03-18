/*
 * XREFs of MiZeroWithSystemPtes @ 0x1403F39F8
 * Callers:
 *     MiZeroInParallelWorker @ 0x140333530 (MiZeroInParallelWorker.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402CA1DC (MiMakeProtectionPfnCompatible.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiZeroPhysicalPage @ 0x1403332D4 (MiZeroPhysicalPage.c)
 *     MiZeroMemory @ 0x1403338A0 (MiZeroMemory.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F533C (MiGetPfnPageSizeIndex.c)
 *     memset @ 0x140411300 (memset.c)
 */

unsigned __int64 __fastcall MiZeroWithSystemPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 PfnPageSizeIndex; // rax
  unsigned __int64 v7; // rbp
  ULONG_PTR v8; // rbx
  unsigned __int8 *v9; // rdi
  unsigned __int64 v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // r14
  int ProtectionPfnCompatible; // eax
  __int64 v15; // r9
  __int64 v16; // r13
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v18; // rbx
  __int64 v19; // r8
  int v20; // eax
  unsigned __int64 i; // rcx
  _KPROCESS *v22; // rdx
  __int64 v23; // [rsp+28h] [rbp-120h]
  unsigned __int64 v24; // [rsp+30h] [rbp-118h]
  _QWORD v25[24]; // [rsp+40h] [rbp-108h] BYREF

  if ( (*(_QWORD *)(a3 + 40) & 0x1000000000LL) == 0 )
    goto LABEL_6;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(a3, a2, a3, a4);
  if ( (_DWORD)PfnPageSizeIndex == -1 )
    PfnPageSizeIndex = 3LL;
  if ( (unsigned int)PfnPageSizeIndex < 3 )
    v7 = MiLargePageSizes[PfnPageSizeIndex];
  else
LABEL_6:
    v7 = 1LL;
  v8 = (a3 + 0x58000000000LL) / 48;
  if ( !a1 )
  {
    if ( v7 )
    {
      v9 = (unsigned __int8 *)(a3 + 34);
      do
      {
        MiZeroPhysicalPage(v8++, 1, *v9 >> 6);
        v9 += 48;
        --v7;
      }
      while ( v7 );
    }
    return 0LL;
  }
  v11 = a2;
  v12 = (_QWORD *)a1;
  if ( a2 >= v7 )
    v11 = v7;
  v24 = v11;
  v13 = (__int64)(a1 << 25) >> 16;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a3);
  v16 = 0LL;
  ValidPte = MiMakeValidPte(a1, v8, ProtectionPfnCompatible | 0xA0000000, v15);
  v23 = 0LL;
  if ( v7 )
  {
    while ( 1 )
    {
      v18 = ValidPte;
      if ( !MiPteInShadowRange((unsigned __int64)v12) )
        goto LABEL_23;
      if ( !(unsigned int)MiPteHasShadow() )
        break;
      v20 = 1;
      if ( !HIBYTE(word_140C4DE88) && (ValidPte & 1) != 0 )
        v18 = ValidPte | 0x8000000000000000uLL;
LABEL_24:
      *v12 = v18;
      if ( v20 )
        MiWritePteShadow((__int64)v12, v18, v19);
      ++v12;
      ++v16;
      ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFF000LL;
      if ( v16 == a2 )
      {
        memset(v25, 0, 0xB8uLL);
        MiZeroMemory(v13, (__int64)((__int64)v12 - a1) >> 3 << 12);
        if ( v23 + 1 == v7 )
        {
          v13 = 0LL;
          goto LABEL_34;
        }
        for ( i = 0LL; i < a2; ++i )
          *(_QWORD *)(a1 + 8 * i) = ZeroPte;
        LODWORD(v25[0]) = 0;
        WORD2(v25[0]) = 0;
        v25[2] = 0LL;
        v25[3] = 0LL;
        v25[1] = 20LL;
        MiInsertTbFlushEntry((__int64)v25, v13, a2, 0);
        MiFlushTbList((unsigned int *)v25, v22);
        v16 = 0LL;
        v12 = (_QWORD *)a1;
      }
      if ( ++v23 >= v7 )
        goto LABEL_34;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ValidPte & 1) != 0 )
    {
      v18 = ValidPte | 0x8000000000000000uLL;
    }
LABEL_23:
    v20 = 0;
    goto LABEL_24;
  }
LABEL_34:
  if ( v13 )
    MiZeroMemory(v13, (__int64)((__int64)v12 - a1) >> 3 << 12);
  return v24;
}
