/*
 * XREFs of MiInsertPhysicalPteMapping @ 0x140298318
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402980D4 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C6DC8 (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14023B9BC (MiMakeProtectionPfnCompatible.c)
 *     MiProtectionToCacheAttribute @ 0x140241E40 (MiProtectionToCacheAttribute.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiLookupIoPageNode @ 0x14029859C (MiLookupIoPageNode.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiIncreaseUsedPtesCount @ 0x1403097D4 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14030CA60 (MiGetUsedPtesHandle.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiAssignInitialPageAttribute @ 0x1403C6BC0 (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x14052D1EC (MiShowBadMapper.c)
 */

__int64 __fastcall MiInsertPhysicalPteMapping(__int64 *a1, ULONG_PTR a2, unsigned int a3)
{
  int ProtectionPfnCompatible; // ebx
  unsigned __int64 v6; // rdx
  unsigned int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  __int64 ValidPte; // rbx
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 UsedPtesHandle; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  volatile signed __int32 *v25; // rbx
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v28; // rax
  __int64 v29; // rbp
  unsigned __int8 v30; // cl
  bool v31; // zf
  int v32; // [rsp+78h] [rbp+20h] BYREF

  ProtectionPfnCompatible = a3;
  v7 = MiProtectionToCacheAttribute(a3);
  if ( v6 <= 0xFFFFFFFFFLL && (v8 = 6 * v6, ((*(_QWORD *)(8 * v8 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0) )
  {
    v29 = 8 * v8 - 0x58000000000LL;
    if ( !*(_WORD *)(v29 + 32) )
      MiShowBadMapper(a2);
    v30 = *(_BYTE *)(v29 + 34);
    if ( (v30 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(v29, v7);
      v30 = *(_BYTE *)(v29 + 34);
    }
    if ( v30 >> 6 != v7 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v29);
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
  if ( (unsigned int)MiPteInShadowRange(a1, v13) )
  {
    if ( (unsigned int)MiPteHasShadow(v15, v14, v16, v17) )
    {
      v12 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_8;
      v31 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_8;
      v31 = (ValidPte & 1) == 0;
    }
    if ( !v31 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_8:
  *a1 = ValidPte;
  if ( v12 )
    MiWritePteShadow(a1, ValidPte);
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)((_QWORD)a1 << 25) >> 16);
  MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
  v19 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v20 = *(_QWORD *)v19;
  if ( (unsigned int)MiPteInShadowRange(v19, v21)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v20 & 1) != 0
    && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v22 = v20 | 0x20;
      v28 = *((_QWORD *)&Flink->Flink + ((v19 >> 3) & 0x1FF));
      if ( (v28 & 0x20) == 0 )
        v22 = v20;
      v20 = v22;
      if ( (v28 & 0x42) != 0 )
        v20 = v22 | 0x42;
    }
  }
  v32 = 0;
  v25 = (volatile signed __int32 *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL);
  while ( _interlockedbittestandset64(v25, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v32, v22, v23, v24);
    while ( *(__int64 *)v25 < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)v25 ^= (*(_QWORD *)v25 ^ (*(_QWORD *)v25 + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v25, 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
