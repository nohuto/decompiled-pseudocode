/*
 * XREFs of MiZeroWithSystemPtes @ 0x1403EF588
 * Callers:
 *     MiZeroInParallelWorker @ 0x1402DF7C0 (MiZeroInParallelWorker.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14022978C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiZeroMemory @ 0x1402DFB30 (MiZeroMemory.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F0E28 (MiGetPfnPageSizeIndex.c)
 *     memset @ 0x14040A280 (memset.c)
 */

unsigned __int64 __fastcall MiZeroWithSystemPtes(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
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
  __int64 v18; // r8
  unsigned __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // r8
  unsigned __int64 i; // rcx
  _KPROCESS *v23; // rdx
  __int64 v24; // [rsp+28h] [rbp-120h]
  unsigned __int64 v25; // [rsp+30h] [rbp-118h]
  _QWORD v26[24]; // [rsp+40h] [rbp-108h] BYREF

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
  v25 = v11;
  v13 = (__int64)(a1 << 25) >> 16;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a3);
  v16 = 0LL;
  ValidPte = MiMakeValidPte(a1, v8, ProtectionPfnCompatible | 0xA0000000, v15);
  v24 = 0LL;
  if ( v7 )
  {
    while ( 1 )
    {
      v19 = ValidPte;
      if ( !MiPteInShadowRange((unsigned __int64)v12) )
        goto LABEL_23;
      if ( !(unsigned int)MiPteHasShadow() )
        break;
      v20 = 1;
      if ( !HIBYTE(word_140C4DE08) && (ValidPte & 1) != 0 )
        v19 = ValidPte | 0x8000000000000000uLL;
LABEL_24:
      *v12 = v19;
      if ( v20 )
        MiWritePteShadow((__int64)v12, v19, v18);
      ++v12;
      ++v16;
      ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFF000LL;
      if ( v16 == a2 )
      {
        memset(v26, 0, 0xB8uLL);
        MiZeroMemory(v13, (__int64)((__int64)v12 - a1) >> 3 << 12, v21);
        if ( v24 + 1 == v7 )
        {
          v13 = 0LL;
          goto LABEL_34;
        }
        for ( i = 0LL; i < a2; ++i )
          *(_QWORD *)(a1 + 8 * i) = ZeroPte;
        LODWORD(v26[0]) = 0;
        WORD2(v26[0]) = 0;
        v26[2] = 0LL;
        v26[3] = 0LL;
        v26[1] = 20LL;
        MiInsertTbFlushEntry((__int64)v26, v13, a2, 0);
        MiFlushTbList((__int64)v26, v23);
        v16 = 0LL;
        v12 = (_QWORD *)a1;
      }
      if ( ++v24 >= v7 )
        goto LABEL_34;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ValidPte & 1) != 0 )
    {
      v19 = ValidPte | 0x8000000000000000uLL;
    }
LABEL_23:
    v20 = 0;
    goto LABEL_24;
  }
LABEL_34:
  if ( v13 )
    MiZeroMemory(v13, (__int64)((__int64)v12 - a1) >> 3 << 12, v18);
  return v25;
}
