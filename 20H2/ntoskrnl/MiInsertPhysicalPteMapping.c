/*
 * XREFs of MiInsertPhysicalPteMapping @ 0x14025F5F8
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14025F3B4 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C63D8 (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLookupIoPageNode @ 0x14025F87C (MiLookupIoPageNode.c)
 *     MiProtectionToCacheAttribute @ 0x14028E480 (MiProtectionToCacheAttribute.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402CA1DC (MiMakeProtectionPfnCompatible.c)
 *     MiGetUsedPtesHandle @ 0x1402CC840 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402CEA34 (MiIncreaseUsedPtesCount.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiAssignInitialPageAttribute @ 0x1403C61D0 (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x14052B6EC (MiShowBadMapper.c)
 */

__int64 __fastcall MiInsertPhysicalPteMapping(unsigned __int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned int ProtectionPfnCompatible; // ebx
  unsigned __int64 v6; // rdx
  unsigned int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  __int64 ValidPte; // rbx
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 UsedPtesHandle; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rbx
  volatile signed __int32 *v20; // rbx
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rbp
  unsigned __int8 v26; // cl
  bool v27; // zf
  int v28; // [rsp+78h] [rbp+20h] BYREF

  ProtectionPfnCompatible = a3;
  v7 = MiProtectionToCacheAttribute((unsigned int)a3, a2, a3);
  if ( v6 <= 0xFFFFFFFFFLL && (v8 = 6 * v6, ((*(_QWORD *)(8 * v8 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0) )
  {
    v25 = 8 * v8 - 0x58000000000LL;
    if ( !*(_WORD *)(v25 + 32) )
      MiShowBadMapper(a2);
    v26 = *(_BYTE *)(v25 + 34);
    if ( (v26 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(v25, v7);
      v26 = *(_BYTE *)(v25 + 34);
    }
    if ( v26 >> 6 != v7 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v25);
  }
  else
  {
    v9 = MiLookupIoPageNode(a2);
    if ( !v9 )
      KeBugCheckEx(0x1Au, 0x61949uLL, a2, 1uLL, 0LL);
    ProtectionPfnCompatible &= 7u;
    v10 = *(unsigned __int16 *)(*(_QWORD *)(v9 + 48) + 2 * ((a2 & 0xFFFFFFFFFLL) - *(_QWORD *)(v9 + 40))) >> 14;
    if ( v10 )
    {
      if ( v10 == 2 )
        ProtectionPfnCompatible |= 0x18u;
    }
    else
    {
      ProtectionPfnCompatible |= 8u;
    }
  }
  ValidPte = MiMakeValidPte(a1, a2, ProtectionPfnCompatible | 0x80000000);
  v12 = 0;
  if ( MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow(v14, v13, v15, v16) )
    {
      v12 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_8;
      v27 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_8;
      v27 = (ValidPte & 1) == 0;
    }
    if ( !v27 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_8:
  *(_QWORD *)a1 = ValidPte;
  if ( v12 )
    MiWritePteShadow(a1, ValidPte);
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a1 << 25) >> 16, v13);
  MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
  v18 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = *(_QWORD *)v18;
  if ( MiPteInShadowRange(v18)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v19 & 1) != 0
    && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v23 = v19 | 0x20;
      v24 = *((_QWORD *)&Flink->Flink + ((v18 >> 3) & 0x1FF));
      if ( (v24 & 0x20) == 0 )
        v23 = v19;
      v19 = v23;
      if ( (v24 & 0x42) != 0 )
        v19 = v23 | 0x42;
    }
  }
  v28 = 0;
  v20 = (volatile signed __int32 *)(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL);
  while ( _interlockedbittestandset64(v20, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v28);
    while ( *(__int64 *)v20 < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)v20 ^= (*(_QWORD *)v20 ^ (*(_QWORD *)v20 + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v20, 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
