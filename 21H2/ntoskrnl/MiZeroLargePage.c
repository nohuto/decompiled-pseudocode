/*
 * XREFs of MiZeroLargePage @ 0x1402B71F8
 * Callers:
 *     MiZeroAndConvertPage @ 0x1402B70D0 (MiZeroAndConvertPage.c)
 *     MiGetLargePage @ 0x140303A34 (MiGetLargePage.c)
 *     MiAllocateLargeZeroPages @ 0x14055DA5C (MiAllocateLargeZeroPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DA978 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140234700 (MiGetUltraMapping.c)
 *     MiMakeProtectionPfnCompatible @ 0x14023B9BC (MiMakeProtectionPfnCompatible.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiCreateUltraThreadContext @ 0x1402E30FC (MiCreateUltraThreadContext.c)
 *     MiZeroPhysicalPage @ 0x1402E6380 (MiZeroPhysicalPage.c)
 *     MiDeleteUltraThreadContext @ 0x1402E65FC (MiDeleteUltraThreadContext.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeZeroPages @ 0x140402DB0 (KeZeroPages.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiReserveLowPrioritySystemPtes @ 0x14052A904 (MiReserveLowPrioritySystemPtes.c)
 */

unsigned __int64 __fastcall MiZeroLargePage(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // r14
  __int64 *v5; // r13
  unsigned __int64 v6; // rbp
  int ProtectionPfnCompatible; // ebx
  unsigned __int64 v8; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rdi
  unsigned __int64 *v13; // r15
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rbx
  unsigned __int64 UltraMapping; // r13
  unsigned __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 ValidPte; // rbx
  int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // r15d
  bool v25; // zf
  __int64 v26; // rdx
  __int64 v27; // r8
  bool v28; // zf
  __int64 v29; // r8
  _QWORD *v30; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v31[16]; // [rsp+30h] [rbp-C8h] BYREF

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
    memset(v31, 0, sizeof(v31));
    if ( (unsigned int)MiCreateUltraThreadContext(v31, 0LL, 2 - (unsigned int)(a2 == 0)) )
    {
      UltraMapping = MiGetUltraMapping(&v31[4 * v3], a2, *v5, 0);
      v18 = ((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( !a2 )
      {
        v19 = 1LL;
        do
        {
          v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v19;
        }
        while ( v19 );
      }
      ValidPte = MiMakeValidPte(v18, v4, ProtectionPfnCompatible | 0xA4000000);
      v21 = 0;
      v24 = MiPteInShadowRange(v18, v22);
      if ( v24 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v21 = 1;
          if ( HIBYTE(word_140C4E008) )
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
      *(_QWORD *)v18 = ValidPte;
      if ( v21 )
        MiWritePteShadow(v18, ValidPte, v23);
      KeZeroPages(UltraMapping, v6 << 12, v23);
      v26 = ZeroPte;
      v27 = 0LL;
      if ( !v24 )
        goto LABEL_37;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v27 = 1LL;
        if ( !HIBYTE(word_140C4E008) )
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
      *(_QWORD *)v18 = v26;
      if ( (_DWORD)v27 )
        MiWritePteShadow(v18, v26, v27);
      return MiDeleteUltraThreadContext(v31);
    }
  }
  result = MiReserveLowPrioritySystemPtes((unsigned int)v6);
  v30 = (_QWORD *)result;
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
  v12 = MiMakeValidPte(result, v4, ProtectionPfnCompatible | 0xA0000000);
  if ( !v6 )
    goto LABEL_12;
  v13 = (unsigned __int64 *)v10;
  v14 = v4 << 12;
  v15 = v6;
  do
  {
    v12 ^= (v12 ^ v14) & 0xFFFFFFFFF000LL;
    v16 = v12;
    if ( !(unsigned int)MiPteInShadowRange(v13, v11) )
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
    if ( !HIBYTE(word_140C4E008) && (v12 & 1) != 0 )
      v16 = v12 | 0x8000000000000000uLL;
    *v13 = v16;
    MiWritePteShadow((__int64)v13, v16, v29);
LABEL_10:
    v14 += 4096LL;
    ++v13;
    --v15;
  }
  while ( v15 );
  v10 = (unsigned __int64)v30;
LABEL_12:
  KeZeroPages((__int64)(v10 << 25) >> 16, v6 << 12, 0xFFFFF68000000000uLL);
  return MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v10, v6);
}
