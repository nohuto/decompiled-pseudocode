/*
 * XREFs of MiInsertPhysicalPteMapping @ 0x140218D98
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140218B54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C6F68 (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     MiLookupIoPageNode @ 0x14021901C (MiLookupIoPageNode.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402E020C (MiMakeProtectionPfnCompatible.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiIncreaseUsedPtesCount @ 0x140314524 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x1403177B0 (MiGetUsedPtesHandle.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiAssignInitialPageAttribute @ 0x1403C6D60 (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x14052D42C (MiShowBadMapper.c)
 */

__int64 __fastcall MiInsertPhysicalPteMapping(__int64 *a1, ULONG_PTR a2, unsigned int a3)
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
  __int64 UsedPtesHandle; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbx
  volatile signed __int32 *v18; // rbx
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbp
  unsigned __int8 v24; // cl
  bool v25; // zf
  int v26; // [rsp+78h] [rbp+20h] BYREF

  ProtectionPfnCompatible = a3;
  v7 = MiProtectionToCacheAttribute(a3);
  if ( v6 <= 0xFFFFFFFFFLL && (v8 = 6 * v6, ((*(_QWORD *)(8 * v8 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0) )
  {
    v23 = 8 * v8 - 0x58000000000LL;
    if ( !*(_WORD *)(v23 + 32) )
      MiShowBadMapper(a2);
    v24 = *(_BYTE *)(v23 + 34);
    if ( (v24 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(v23, v7);
      v24 = *(_BYTE *)(v23 + 34);
    }
    if ( v24 >> 6 != v7 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v23);
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
  if ( (unsigned int)MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow(v14, v13) )
    {
      v12 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_8;
      v25 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_8;
      v25 = (ValidPte & 1) == 0;
    }
    if ( !v25 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_8:
  *a1 = ValidPte;
  if ( v12 )
    MiWritePteShadow(a1);
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)((_QWORD)a1 << 25) >> 16);
  MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
  v16 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = *(_QWORD *)v16;
  if ( (unsigned int)MiPteInShadowRange(v16)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v17 & 1) != 0
    && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v21 = v17 | 0x20;
      v22 = *((_QWORD *)&Flink->Flink + ((v16 >> 3) & 0x1FF));
      if ( (v22 & 0x20) == 0 )
        v21 = v17;
      v17 = v21;
      if ( (v22 & 0x42) != 0 )
        v17 = v21 | 0x42;
    }
  }
  v26 = 0;
  v18 = (volatile signed __int32 *)(48 * ((v17 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL);
  while ( _interlockedbittestandset64(v18, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v26);
    while ( *(__int64 *)v18 < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)v18 ^= (*(_QWORD *)v18 ^ (*(_QWORD *)v18 + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v18, 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
