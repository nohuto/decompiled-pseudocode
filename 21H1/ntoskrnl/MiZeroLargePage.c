/*
 * XREFs of MiZeroLargePage @ 0x14030B58C
 * Callers:
 *     MiGetLargePage @ 0x1403490A0 (MiGetLargePage.c)
 *     MiZeroAndConvertPage @ 0x140349894 (MiZeroAndConvertPage.c)
 *     MiAllocateLargeZeroPages @ 0x140557F6C (MiAllocateLargeZeroPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408D6028 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402827DC (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x1402968A0 (MiGetUltraMapping.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiDeleteUltraThreadContext @ 0x1403265F0 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x140326F88 (MiCreateUltraThreadContext.c)
 *     MiZeroPhysicalPage @ 0x1403510C0 (MiZeroPhysicalPage.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeZeroPages @ 0x1403F9D70 (KeZeroPages.c)
 *     memset @ 0x140408F80 (memset.c)
 */

ULONG_PTR __fastcall MiZeroLargePage(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // r14
  __int64 *v5; // r13
  unsigned __int64 v6; // rbp
  int ProtectionPfnCompatible; // ebx
  unsigned __int64 v8; // rsi
  ULONG_PTR result; // rax
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
  BOOL v23; // r15d
  bool v24; // zf
  __int64 v25; // rdx
  int v26; // r8d
  bool v27; // zf
  _QWORD *v28; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v29[16]; // [rsp+30h] [rbp-C8h] BYREF

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
    memset(v29, 0, sizeof(v29));
    if ( (unsigned int)MiCreateUltraThreadContext(v29, 0LL, 2 - (unsigned int)(a2 == 0)) )
    {
      UltraMapping = MiGetUltraMapping(&v29[4 * v3], a2, *v5, 0);
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
      v23 = MiPteInShadowRange(v19);
      if ( v23 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v22 = 1;
          if ( HIBYTE(word_140C4DF48) )
            goto LABEL_27;
          v24 = (ValidPte & 1) == 0;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_27;
          v24 = (ValidPte & 1) == 0;
        }
        if ( !v24 )
          ValidPte |= 0x8000000000000000uLL;
      }
LABEL_27:
      *(_QWORD *)v19 = ValidPte;
      if ( v22 )
        MiWritePteShadow(v19, ValidPte);
      KeZeroPages(UltraMapping, v6 << 12);
      v25 = ZeroPte;
      v26 = 0;
      if ( !v23 )
        goto LABEL_37;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v26 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v27 = (v25 & 1) == 0;
          goto LABEL_35;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v27 = (v25 & 1) == 0;
LABEL_35:
        if ( !v27 )
          v25 |= 0x8000000000000000uLL;
      }
LABEL_37:
      *(_QWORD *)v19 = v25;
      if ( v26 )
        MiWritePteShadow(v19, v25);
      return MiDeleteUltraThreadContext(v29);
    }
  }
  result = MiReservePtes((__int64)&qword_140C4EE80, (unsigned int)v6);
  v28 = (_QWORD *)result;
  v11 = result;
  if ( !result )
  {
    if ( v6 )
    {
      do
        result = MiZeroPhysicalPage(v4 + v8++);
      while ( v8 < v6 );
    }
    return result;
  }
  v12 = MiMakeValidPte(result, v4, ProtectionPfnCompatible | 0xA0000000, v10);
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
    if ( !HIBYTE(word_140C4DF48) && (v12 & 1) != 0 )
      v16 = v12 | 0x8000000000000000uLL;
    *v13 = v16;
    MiWritePteShadow((__int64)v13, v16);
LABEL_10:
    v14 += 4096LL;
    ++v13;
    --v15;
  }
  while ( v15 );
  v11 = (ULONG_PTR)v28;
LABEL_12:
  KeZeroPages((__int64)(v11 << 25) >> 16, v6 << 12);
  return MiReleasePtes((__int64)&qword_140C4EE80, (_QWORD *)v11, v6);
}
