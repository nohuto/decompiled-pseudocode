/*
 * XREFs of MiInsertPhysicalPteMapping @ 0x1402FB198
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402FAF54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C2DA8 (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x140225830 (MiProtectionToCacheAttribute.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402827DC (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x14029EEF0 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402AF310 (MiIncreaseUsedPtesCount.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLookupIoPageNode @ 0x1402FB41C (MiLookupIoPageNode.c)
 *     MiAssignInitialPageAttribute @ 0x1403C2BA0 (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x1405276CC (MiShowBadMapper.c)
 */

__int64 __fastcall MiInsertPhysicalPteMapping(unsigned __int64 a1, ULONG_PTR a2, unsigned int a3)
{
  int ProtectionPfnCompatible; // ebx
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  unsigned __int64 ValidPte; // rbx
  int v13; // esi
  __int64 UsedPtesHandle; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  volatile signed __int32 *v22; // rbx
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  unsigned __int8 v27; // cl
  bool v28; // zf
  int v29; // [rsp+78h] [rbp+20h] BYREF

  ProtectionPfnCompatible = a3;
  v8 = MiProtectionToCacheAttribute(a3);
  if ( v6 <= 0xFFFFFFFFFLL && (v9 = 6 * v6, ((*(_QWORD *)(8 * v9 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0) )
  {
    v26 = 8 * v9 - 0x58000000000LL;
    if ( !*(_WORD *)(v26 + 32) )
      MiShowBadMapper(a2);
    v27 = *(_BYTE *)(v26 + 34);
    if ( (v27 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(v26, v8);
      v27 = *(_BYTE *)(v26 + 34);
    }
    if ( v27 >> 6 != v8 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v26);
  }
  else
  {
    v10 = MiLookupIoPageNode(a2);
    if ( !v10 )
      KeBugCheckEx(0x1Au, 0x61949uLL, a2, 1uLL, 0LL);
    ProtectionPfnCompatible &= 7u;
    v11 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 48) + 2 * ((a2 & 0xFFFFFFFFFLL) - *(_QWORD *)(v10 + 40))) >> 14;
    if ( v11 )
    {
      if ( v11 == 2 )
        ProtectionPfnCompatible |= 0x18u;
    }
    else
    {
      ProtectionPfnCompatible |= 8u;
    }
  }
  ValidPte = MiMakeValidPte(a1, a2, ProtectionPfnCompatible | 0x80000000, v7);
  v13 = 0;
  if ( MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_8;
      v28 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_8;
      v28 = (ValidPte & 1) == 0;
    }
    if ( !v28 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_8:
  *(_QWORD *)a1 = ValidPte;
  if ( v13 )
    MiWritePteShadow(a1, ValidPte);
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a1 << 25) >> 16);
  MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL, v15, v16);
  v17 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = *(_QWORD *)v17;
  if ( MiPteInShadowRange(v17)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v18 & 1) != 0
    && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v19 = v18 | 0x20;
      v25 = *((_QWORD *)&Flink->Flink + ((v17 >> 3) & 0x1FF));
      if ( (v25 & 0x20) == 0 )
        v19 = v18;
      v18 = v19;
      if ( (v25 & 0x42) != 0 )
        v18 = v19 | 0x42;
    }
  }
  v29 = 0;
  v22 = (volatile signed __int32 *)(48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL);
  while ( _interlockedbittestandset64(v22, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v29, v19, v20, v21);
    while ( *(__int64 *)v22 < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)v22 ^= (*(_QWORD *)v22 ^ (*(_QWORD *)v22 + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v22, 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
