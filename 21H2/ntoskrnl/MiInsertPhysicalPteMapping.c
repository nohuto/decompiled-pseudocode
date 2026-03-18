/*
 * XREFs of MiInsertPhysicalPteMapping @ 0x140213558
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140213398 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403D5614 (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     MiLookupIoPageNode @ 0x1402137E4 (MiLookupIoPageNode.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     MiIncreaseUsedPtesCount @ 0x14028FB74 (MiIncreaseUsedPtesCount.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiGetUsedPtesHandle @ 0x1402D03D0 (MiGetUsedPtesHandle.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiProtectionToCacheAttribute @ 0x14033D7D0 (MiProtectionToCacheAttribute.c)
 *     MiAssignInitialPageAttribute @ 0x1403D240C (MiAssignInitialPageAttribute.c)
 *     MiShowBadMapper @ 0x140593B18 (MiShowBadMapper.c)
 */

__int64 __fastcall MiInsertPhysicalPteMapping(__int64 *a1, ULONG_PTR a2, unsigned int a3)
{
  unsigned int ProtectionPfnCompatible; // ebx
  unsigned __int64 v6; // rdx
  unsigned int v7; // r15d
  __int64 v8; // rbp
  unsigned __int8 v9; // cl
  __int64 ValidPte; // rbx
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UsedPtesHandle; // rax
  volatile signed __int32 *v15; // rbx
  __int64 result; // rax
  int v17; // eax
  bool v18; // zf
  int v19; // [rsp+50h] [rbp+18h] BYREF

  ProtectionPfnCompatible = a3;
  v7 = MiProtectionToCacheAttribute(a3);
  if ( v6 <= qword_140C50840 && ((*(_QWORD *)(48 * v6 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    v8 = 48 * v6 - 0x220000000000LL;
    if ( !*(_WORD *)(v8 + 32) )
      MiShowBadMapper(a2, 3uLL);
    v9 = *(_BYTE *)(v8 + 34);
    if ( (v9 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(v8, v7);
      v9 = *(_BYTE *)(v8 + 34);
    }
    if ( v9 >> 6 != v7 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v8);
  }
  else
  {
    ProtectionPfnCompatible &= 7u;
    v17 = MiLookupIoPageNode(a2);
    if ( v17 )
    {
      if ( v17 == 2 )
        ProtectionPfnCompatible |= 0x18u;
    }
    else
    {
      ProtectionPfnCompatible |= 8u;
    }
  }
  ValidPte = MiMakeValidPte(a1, a2, ProtectionPfnCompatible | 0x80000000);
  v11 = 0;
  if ( (unsigned int)MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow(v13, v12) )
    {
      v11 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_10;
      v18 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_10;
      v18 = (ValidPte & 1) == 0;
    }
    if ( !v18 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_10:
  *a1 = ValidPte;
  if ( v11 )
    MiWritePteShadow(a1, ValidPte);
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)((_QWORD)a1 << 25) >> 16);
  MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
  v19 = 0;
  v15 = (volatile signed __int32 *)(48
                                  * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(
                                                          (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL)
                                                        - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                                  - 0x21FFFFFFFFE8LL);
  while ( _interlockedbittestandset64(v15, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v19);
    while ( *(__int64 *)v15 < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)v15 ^= (*(_QWORD *)v15 ^ (*(_QWORD *)v15 + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v15, 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
