/*
 * XREFs of MiZeroLargePage @ 0x140349124
 * Callers:
 *     MiGetLargePage @ 0x140319D60 (MiGetLargePage.c)
 *     MiZeroAndConvertPage @ 0x14031A554 (MiZeroAndConvertPage.c)
 *     MiAllocateLargeZeroPages @ 0x1405585BC (MiAllocateLargeZeroPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408D7378 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x14022978C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14023D870 (MiGetUltraMapping.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiDeleteUltraThreadContext @ 0x1402E14F0 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x1402E1D50 (MiCreateUltraThreadContext.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeZeroPages @ 0x1403FB000 (KeZeroPages.c)
 *     memset @ 0x14040A280 (memset.c)
 */

char __fastcall MiZeroLargePage(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r12d
  unsigned __int64 v5; // r9
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  __int64 *v8; // r13
  unsigned __int64 v9; // rbp
  int ProtectionPfnCompatible; // ebx
  unsigned __int64 v11; // rsi
  ULONG_PTR v12; // rax
  unsigned __int64 v13; // r9
  ULONG_PTR v14; // r13
  unsigned __int64 v15; // rdi
  unsigned __int64 *v16; // r15
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rbx
  __int64 v20; // r9
  unsigned __int64 UltraMapping; // r13
  unsigned __int64 v22; // rdi
  __int64 v23; // rdx
  unsigned __int64 ValidPte; // rbx
  int v25; // r14d
  __int64 v26; // r8
  BOOL v27; // r15d
  bool v28; // zf
  __int64 v29; // rdx
  __int64 v30; // r8
  bool v31; // zf
  __int64 v32; // r8
  _QWORD *v34; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v35[16]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = a3;
  v5 = a1;
  v6 = a2;
  v7 = (a1 + 0x58000000000LL) / 48;
  v8 = &MiLargePageSizes[a2];
  v9 = *v8;
  if ( v7 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * v7 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a1);
  else
    ProtectionPfnCompatible = 4;
  v11 = 0LL;
  if ( a2 <= 1 )
  {
    memset(v35, 0, sizeof(v35));
    if ( (unsigned int)MiCreateUltraThreadContext((__int64)v35, 0, 2 - (unsigned int)(a2 == 0)) )
    {
      UltraMapping = MiGetUltraMapping(&v35[4 * v6], a2, *v8, 0);
      v22 = ((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( !a2 )
      {
        v23 = 1LL;
        do
        {
          v22 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v23;
        }
        while ( v23 );
      }
      ValidPte = MiMakeValidPte(v22, v7, ProtectionPfnCompatible | 0xA4000000, v20);
      v25 = 0;
      v27 = MiPteInShadowRange(v22);
      if ( v27 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v25 = 1;
          if ( HIBYTE(word_140C4DE08) )
            goto LABEL_27;
          v28 = (ValidPte & 1) == 0;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_27;
          v28 = (ValidPte & 1) == 0;
        }
        if ( !v28 )
          ValidPte |= 0x8000000000000000uLL;
      }
LABEL_27:
      *(_QWORD *)v22 = ValidPte;
      if ( v25 )
        MiWritePteShadow(v22, ValidPte, v26);
      KeZeroPages(UltraMapping, v9 << 12, v26);
      v29 = ZeroPte;
      v30 = 0LL;
      if ( !v27 )
        goto LABEL_37;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v30 = 1LL;
        if ( !HIBYTE(word_140C4DE08) )
        {
          v31 = (v29 & 1) == 0;
          goto LABEL_35;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v31 = (v29 & 1) == 0;
LABEL_35:
        if ( !v31 )
          v29 |= 0x8000000000000000uLL;
      }
LABEL_37:
      *(_QWORD *)v22 = v29;
      if ( (_DWORD)v30 )
        MiWritePteShadow(v22, v29, v30);
      LOBYTE(v12) = MiDeleteUltraThreadContext((__int64)v35);
      return v12;
    }
  }
  v12 = MiReservePtes((__int64)&qword_140C4ED40, v9, a3, v5);
  v34 = (_QWORD *)v12;
  v14 = v12;
  if ( !v12 )
  {
    if ( v9 )
    {
      do
        LOBYTE(v12) = MiZeroPhysicalPage(v7 + v11++, 0, v3, v13);
      while ( v11 < v9 );
    }
    return v12;
  }
  v15 = MiMakeValidPte(v12, v7, ProtectionPfnCompatible | 0xA0000000, v13);
  if ( !v9 )
    goto LABEL_12;
  v16 = (unsigned __int64 *)v14;
  v17 = v7 << 12;
  v18 = v9;
  do
  {
    v15 ^= (v15 ^ v17) & 0xFFFFFFFFF000LL;
    v19 = v15;
    if ( !MiPteInShadowRange((unsigned __int64)v16) )
      goto LABEL_9;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v15 & 1) != 0 )
      {
        v19 = v15 | 0x8000000000000000uLL;
      }
LABEL_9:
      *v16 = v19;
      goto LABEL_10;
    }
    if ( !HIBYTE(word_140C4DE08) && (v15 & 1) != 0 )
      v19 = v15 | 0x8000000000000000uLL;
    *v16 = v19;
    MiWritePteShadow((__int64)v16, v19, v32);
LABEL_10:
    v17 += 4096LL;
    ++v16;
    --v18;
  }
  while ( v18 );
  v14 = (ULONG_PTR)v34;
LABEL_12:
  KeZeroPages((__int64)(v14 << 25) >> 16, v9 << 12, 0xFFFFF68000000000uLL);
  LOBYTE(v12) = MiReleasePtes((__int64)&qword_140C4ED40, (_QWORD *)v14, v9);
  return v12;
}
