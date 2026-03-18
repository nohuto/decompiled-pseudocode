/*
 * XREFs of MiZeroLargePage @ 0x140319D50
 * Callers:
 *     MiGetLargePage @ 0x14034D8FC (MiGetLargePage.c)
 *     MiZeroAndConvertPage @ 0x140351374 (MiZeroAndConvertPage.c)
 *     MiAllocateLargeZeroPages @ 0x14055BF8C (MiAllocateLargeZeroPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DD1B8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x1402C2F20 (MiGetUltraMapping.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402CA1DC (MiMakeProtectionPfnCompatible.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiZeroPhysicalPage @ 0x1403332D4 (MiZeroPhysicalPage.c)
 *     MiDeleteUltraThreadContext @ 0x1403338B8 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x140333FE4 (MiCreateUltraThreadContext.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeZeroPages @ 0x140400950 (KeZeroPages.c)
 *     memset @ 0x140411300 (memset.c)
 */

char __fastcall MiZeroLargePage(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // r14
  __int64 *v5; // r13
  unsigned __int64 v6; // rbp
  int ProtectionPfnCompatible; // ebx
  unsigned __int64 v8; // rsi
  ULONG_PTR v9; // rax
  __int64 v10; // r9
  ULONG_PTR v11; // r13
  unsigned __int64 v12; // rdi
  unsigned __int64 *v13; // r15
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rbx
  __int64 v17; // r9
  unsigned __int64 UltraMapping; // r13
  unsigned __int64 v19; // rdi
  __int64 v20; // rdx
  unsigned __int64 ValidPte; // rbx
  int v22; // r14d
  __int64 v23; // r8
  BOOL v24; // r15d
  bool v25; // zf
  __int64 v26; // rdx
  __int64 v27; // r8
  bool v28; // zf
  __int64 v29; // r8
  _QWORD *v31; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v32[16]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = a2;
  v4 = (a1 + 0x58000000000LL) / 48;
  v5 = &MiLargePageSizes[a2];
  v6 = *v5;
  if ( v4 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * v4 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a1);
  else
    ProtectionPfnCompatible = 4;
  v8 = 0LL;
  if ( a2 <= 1 )
  {
    memset(v32, 0, sizeof(v32));
    if ( (unsigned int)MiCreateUltraThreadContext(v32, 0LL, 2 - (unsigned int)(a2 == 0)) )
    {
      UltraMapping = MiGetUltraMapping(&v32[4 * v3], a2, *v5, 0);
      v19 = ((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( !a2 )
      {
        v20 = 1LL;
        do
        {
          v19 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v20;
        }
        while ( v20 );
      }
      ValidPte = MiMakeValidPte(v19, v4, ProtectionPfnCompatible | 0xA4000000, v17);
      v22 = 0;
      v24 = MiPteInShadowRange(v19);
      if ( v24 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v22 = 1;
          if ( HIBYTE(word_140C4DE88) )
            goto LABEL_27;
          v25 = (ValidPte & 1) == 0;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_27;
          v25 = (ValidPte & 1) == 0;
        }
        if ( !v25 )
          ValidPte |= 0x8000000000000000uLL;
      }
LABEL_27:
      *(_QWORD *)v19 = ValidPte;
      if ( v22 )
        MiWritePteShadow(v19, ValidPte, v23);
      KeZeroPages(UltraMapping, v6 << 12);
      v26 = ZeroPte;
      v27 = 0LL;
      if ( !v24 )
        goto LABEL_37;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v27 = 1LL;
        if ( !HIBYTE(word_140C4DE88) )
        {
          v28 = (v26 & 1) == 0;
          goto LABEL_35;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v28 = (v26 & 1) == 0;
LABEL_35:
        if ( !v28 )
          v26 |= 0x8000000000000000uLL;
      }
LABEL_37:
      *(_QWORD *)v19 = v26;
      if ( (_DWORD)v27 )
        MiWritePteShadow(v19, v26, v27);
      LOBYTE(v9) = MiDeleteUltraThreadContext(v32);
      return v9;
    }
  }
  v9 = MiReservePtes((__int64)&qword_140C4EDC0, v6);
  v31 = (_QWORD *)v9;
  v11 = v9;
  if ( !v9 )
  {
    if ( v6 )
    {
      do
        LOBYTE(v9) = MiZeroPhysicalPage(v4 + v8++);
      while ( v8 < v6 );
    }
    return v9;
  }
  v12 = MiMakeValidPte(v9, v4, ProtectionPfnCompatible | 0xA0000000, v10);
  if ( !v6 )
    goto LABEL_12;
  v13 = (unsigned __int64 *)v11;
  v14 = v4 << 12;
  v15 = v6;
  do
  {
    v12 ^= (v12 ^ v14) & 0xFFFFFFFFF000LL;
    v16 = v12;
    if ( !MiPteInShadowRange((unsigned __int64)v13) )
      goto LABEL_9;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v12 & 1) != 0 )
      {
        v16 = v12 | 0x8000000000000000uLL;
      }
LABEL_9:
      *v13 = v16;
      goto LABEL_10;
    }
    if ( !HIBYTE(word_140C4DE88) && (v12 & 1) != 0 )
      v16 = v12 | 0x8000000000000000uLL;
    *v13 = v16;
    MiWritePteShadow((__int64)v13, v16, v29);
LABEL_10:
    v14 += 4096LL;
    ++v13;
    --v15;
  }
  while ( v15 );
  v11 = (ULONG_PTR)v31;
LABEL_12:
  KeZeroPages((__int64)(v11 << 25) >> 16, v6 << 12);
  LOBYTE(v9) = MiReleasePtes((__int64)&qword_140C4EDC0, (_QWORD *)v11, v6);
  return v9;
}
