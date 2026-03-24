/*
 * XREFs of CmpValueEnumStackStartFromKeyNodeStack @ 0x14036BD58
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1404ECE88 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1407292B0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14087BBAC (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpValueEnumStackEntryInitialize @ 0x1402D3894 (CmpValueEnumStackEntryInitialize.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140699C98 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140729F10 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140729F90 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKeyNodeStack(__int64 a1, __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  PVOID PoolWithTag; // rax
  __int64 v7; // rsi
  __int16 v8; // di
  __int64 EntryAtLayerHeight; // r15
  __int64 *v10; // rax
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9

  v2 = 0;
  if ( *a2 >= 2 )
  {
    LOWORD(v5) = *a2 - 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * (__int16)v5, 0x30374D43u);
    *(_QWORD *)(a1 + 80) = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    if ( (__int16)v5 > 0 )
    {
      v7 = 0LL;
      v5 = (unsigned __int16)v5;
      do
      {
        CmpValueEnumStackEntryInitialize((_OWORD *)(v7 + *(_QWORD *)(a1 + 80)));
        v7 += 32LL;
        --v5;
      }
      while ( v5 );
    }
  }
  v8 = *a2;
  for ( *(_WORD *)(a1 + 12) = *a2; v8 >= 0; --v8 )
  {
    EntryAtLayerHeight = CmpValueEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)v8);
    v10 = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(a2);
    v11 = v10;
    if ( v10[2] )
    {
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v10) == 1 )
        break;
      v14 = v13;
      if ( (*(_BYTE *)(v12 + 2) & 0x40) == 0 && *(_DWORD *)(v12 + 36) )
      {
        *(_QWORD *)EntryAtLayerHeight = v13;
        *(_DWORD *)(EntryAtLayerHeight + 24) = *(_DWORD *)(v12 + 36);
        *(_QWORD *)(EntryAtLayerHeight + 8) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v13 + 8))(
                                                v13,
                                                *(unsigned int *)(v12 + 40),
                                                EntryAtLayerHeight + 16,
                                                v13);
        v14 = *v11;
      }
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v14) )
        break;
    }
  }
  return v2;
}
