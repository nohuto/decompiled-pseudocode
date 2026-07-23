/*
 * XREFs of MiZeroLargePage @ 0x1402353D8
 * Callers:
 *     MiZeroAndConvertPage @ 0x1402352B0 (MiZeroAndConvertPage.c)
 *     MiGetLargePage @ 0x14030E784 (MiGetLargePage.c)
 *     MiAllocateLargeZeroPages @ 0x14055DC9C (MiAllocateLargeZeroPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DAAD8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiCreateUltraThreadContext @ 0x14029444C (MiCreateUltraThreadContext.c)
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 *     MiDeleteUltraThreadContext @ 0x14029794C (MiDeleteUltraThreadContext.c)
 *     MiGetUltraMapping @ 0x1402D8F50 (MiGetUltraMapping.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402E020C (MiMakeProtectionPfnCompatible.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeZeroPages @ 0x140402F90 (KeZeroPages.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiReserveLowPrioritySystemPtes @ 0x14052AB44 (MiReserveLowPrioritySystemPtes.c)
 */

__int64 __fastcall MiZeroLargePage(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // r14
  __int64 *v5; // r13
  unsigned __int64 v6; // rbp
  int ProtectionPfnCompatible; // ebx
  unsigned __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // r13
  __int64 v11; // rdi
  unsigned __int64 *v12; // r15
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rbx
  unsigned __int64 UltraMapping; // r13
  unsigned __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 ValidPte; // rbx
  int v20; // r14d
  int v21; // r15d
  bool v22; // zf
  __int64 v23; // rdx
  int v24; // r8d
  bool v25; // zf
  __int64 v26; // [rsp+20h] [rbp-D8h]
  _OWORD v27[8]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = a2;
  v4 = (a1 + 0x58000000000LL) / 48;
  v5 = &MiLargePageSizes[a2];
  v6 = *v5;
  if ( v4 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * v4 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, a1);
  else
    ProtectionPfnCompatible = 4;
  v8 = 0LL;
  if ( a2 <= 1 )
  {
    memset(v27, 0, sizeof(v27));
    if ( (unsigned int)MiCreateUltraThreadContext(v27, 0LL, 2 - (unsigned int)(a2 == 0)) )
    {
      UltraMapping = MiGetUltraMapping(&v27[2 * v3], a2, *v5, 0LL);
      v17 = ((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( !a2 )
      {
        v18 = 1LL;
        do
        {
          v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v18;
        }
        while ( v18 );
      }
      ValidPte = MiMakeValidPte(v17, v4, ProtectionPfnCompatible | 0xA4000000);
      v20 = 0;
      v21 = MiPteInShadowRange(v17);
      if ( v21 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v20 = 1;
          if ( HIBYTE(word_140C4E048) )
            goto LABEL_27;
          v22 = (ValidPte & 1) == 0;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_27;
          v22 = (ValidPte & 1) == 0;
        }
        if ( !v22 )
          ValidPte |= 0x8000000000000000uLL;
      }
LABEL_27:
      *(_QWORD *)v17 = ValidPte;
      if ( v20 )
        MiWritePteShadow(v17, ValidPte);
      KeZeroPages(UltraMapping, v6 << 12);
      v23 = ZeroPte;
      v24 = 0;
      if ( !v21 )
        goto LABEL_37;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v24 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v25 = (v23 & 1) == 0;
          goto LABEL_35;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v25 = (v23 & 1) == 0;
LABEL_35:
        if ( !v25 )
          v23 |= 0x8000000000000000uLL;
      }
LABEL_37:
      *(_QWORD *)v17 = v23;
      if ( v24 )
        MiWritePteShadow(v17, v23);
      return MiDeleteUltraThreadContext(v27);
    }
  }
  result = MiReserveLowPrioritySystemPtes((unsigned int)v6);
  v26 = result;
  v10 = result;
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
  v11 = MiMakeValidPte(result, v4, ProtectionPfnCompatible | 0xA0000000);
  if ( !v6 )
    goto LABEL_12;
  v12 = (unsigned __int64 *)v10;
  v13 = v4 << 12;
  v14 = v6;
  do
  {
    v11 ^= (v11 ^ v13) & 0xFFFFFFFFF000LL;
    v15 = v11;
    if ( !(unsigned int)MiPteInShadowRange(v12) )
      goto LABEL_9;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v11 & 1) != 0 )
      {
        v15 = v11 | 0x8000000000000000uLL;
      }
LABEL_9:
      *v12 = v15;
      goto LABEL_10;
    }
    if ( !HIBYTE(word_140C4E048) && (v11 & 1) != 0 )
      v15 = v11 | 0x8000000000000000uLL;
    *v12 = v15;
    MiWritePteShadow((__int64)v12, v15);
LABEL_10:
    v13 += 4096LL;
    ++v12;
    --v14;
  }
  while ( v14 );
  v10 = v26;
LABEL_12:
  KeZeroPages(v10 << 25 >> 16, v6 << 12);
  return MiReleasePtes(&qword_140C4EF80, v10, (unsigned int)v6);
}
