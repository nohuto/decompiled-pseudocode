/*
 * XREFs of MiZeroWithSystemPtes @ 0x1403EE228
 * Callers:
 *     MiZeroInParallelWorker @ 0x1403248C0 (MiZeroInParallelWorker.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402827DC (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiZeroMemory @ 0x140324C30 (MiZeroMemory.c)
 *     MiZeroPhysicalPage @ 0x1403510C0 (MiZeroPhysicalPage.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiGetPfnPageSizeIndex @ 0x1403EFAC8 (MiGetPfnPageSizeIndex.c)
 *     memset @ 0x140408F80 (memset.c)
 */

unsigned __int64 __fastcall MiZeroWithSystemPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
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
  int v19; // eax
  unsigned __int64 i; // rcx
  _KPROCESS *v21; // rdx
  __int64 v22; // [rsp+28h] [rbp-120h]
  unsigned __int64 v23; // [rsp+30h] [rbp-118h]
  _QWORD v24[24]; // [rsp+40h] [rbp-108h] BYREF

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
        MiZeroPhysicalPage(v8++, 1, *v9 >> 6, a4);
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
  v23 = v11;
  v13 = (__int64)(a1 << 25) >> 16;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a3);
  v16 = 0LL;
  ValidPte = MiMakeValidPte(a1, v8, ProtectionPfnCompatible | 0xA0000000, v15);
  v22 = 0LL;
  if ( v7 )
  {
    while ( 1 )
    {
      v18 = ValidPte;
      if ( !MiPteInShadowRange((unsigned __int64)v12) )
        goto LABEL_23;
      if ( !(unsigned int)MiPteHasShadow() )
        break;
      v19 = 1;
      if ( !HIBYTE(word_140C4DF48) && (ValidPte & 1) != 0 )
        v18 = ValidPte | 0x8000000000000000uLL;
LABEL_24:
      *v12 = v18;
      if ( v19 )
        MiWritePteShadow((__int64)v12, v18);
      ++v12;
      ++v16;
      ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFF000LL;
      if ( v16 == a2 )
      {
        memset(v24, 0, 0xB8uLL);
        MiZeroMemory(v13, (__int64)((__int64)v12 - a1) >> 3 << 12);
        if ( v22 + 1 == v7 )
        {
          v13 = 0LL;
          goto LABEL_34;
        }
        for ( i = 0LL; i < a2; ++i )
          *(_QWORD *)(a1 + 8 * i) = ZeroPte;
        LODWORD(v24[0]) = 0;
        WORD2(v24[0]) = 0;
        v24[2] = 0LL;
        v24[3] = 0LL;
        v24[1] = 20LL;
        MiInsertTbFlushEntry((__int64)v24, v13, a2, 0);
        MiFlushTbList((__int64)v24, v21);
        v16 = 0LL;
        v12 = (_QWORD *)a1;
      }
      if ( ++v22 >= v7 )
        goto LABEL_34;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ValidPte & 1) != 0 )
    {
      v18 = ValidPte | 0x8000000000000000uLL;
    }
LABEL_23:
    v19 = 0;
    goto LABEL_24;
  }
LABEL_34:
  if ( v13 )
    MiZeroMemory(v13, (__int64)((__int64)v12 - a1) >> 3 << 12);
  return v23;
}
