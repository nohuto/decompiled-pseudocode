/*
 * XREFs of MiInsertPhysicalPteMapping @ 0x1403381C8
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140337F84 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C3C68 (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14022978C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x140245EC0 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402562E0 (MiIncreaseUsedPtesCount.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiProtectionToCacheAttribute @ 0x1402B84B0 (MiProtectionToCacheAttribute.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiLookupIoPageNode @ 0x14033844C (MiLookupIoPageNode.c)
 *     MiAssignInitialPageAttribute @ 0x1403C3A60 (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x140527D1C (MiShowBadMapper.c)
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
  __int64 v14; // r8
  __int64 UsedPtesHandle; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  volatile signed __int32 *v21; // rbx
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v24; // rax
  __int64 v25; // rbp
  unsigned __int8 v26; // cl
  bool v27; // zf
  int v28; // [rsp+78h] [rbp+20h] BYREF

  ProtectionPfnCompatible = a3;
  v8 = MiProtectionToCacheAttribute(a3);
  if ( v6 <= 0xFFFFFFFFFLL && (v9 = 6 * v6, ((*(_QWORD *)(8 * v9 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0) )
  {
    v25 = 8 * v9 - 0x58000000000LL;
    if ( !*(_WORD *)(v25 + 32) )
      MiShowBadMapper(a2);
    v26 = *(_BYTE *)(v25 + 34);
    if ( (v26 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(v25, v8);
      v26 = *(_BYTE *)(v25 + 34);
    }
    if ( v26 >> 6 != v8 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v25);
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
      if ( HIBYTE(word_140C4DE08) )
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
  if ( v13 )
    MiWritePteShadow(a1, ValidPte, v14);
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a1 << 25) >> 16);
  MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
  v16 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = *(_QWORD *)v16;
  if ( MiPteInShadowRange(v16)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v17 & 1) != 0
    && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v18 = v17 | 0x20;
      v24 = *((_QWORD *)&Flink->Flink + ((v16 >> 3) & 0x1FF));
      if ( (v24 & 0x20) == 0 )
        v18 = v17;
      v17 = v18;
      if ( (v24 & 0x42) != 0 )
        v17 = v18 | 0x42;
    }
  }
  v28 = 0;
  v21 = (volatile signed __int32 *)(48 * ((v17 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL);
  while ( _interlockedbittestandset64(v21, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v28, v18, v19, v20);
    while ( *(__int64 *)v21 < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)v21 ^= (*(_QWORD *)v21 ^ (*(_QWORD *)v21 + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v21, 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
