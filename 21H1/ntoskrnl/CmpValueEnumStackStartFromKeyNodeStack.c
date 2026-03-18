/*
 * XREFs of CmpValueEnumStackStartFromKeyNodeStack @ 0x140369108
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1404E76D8 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1407154D0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x1408773CC (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpValueEnumStackEntryInitialize @ 0x140322D04 (CmpValueEnumStackEntryInitialize.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406C8D88 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1407160A0 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140716120 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKeyNodeStack(__int64 a1, __int16 *a2)
{
  unsigned int v2; // ebx
  __int16 v5; // di
  __int64 EntryAtLayerHeight; // r15
  __int64 *v7; // rax
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rdi
  PVOID PoolWithTag; // rax
  __int64 v14; // rsi

  v2 = 0;
  if ( *a2 >= 2 )
  {
    LOWORD(v12) = *a2 - 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * (__int16)v12, 0x30374D43u);
    *(_QWORD *)(a1 + 80) = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    if ( (__int16)v12 > 0 )
    {
      v14 = 0LL;
      v12 = (unsigned __int16)v12;
      do
      {
        CmpValueEnumStackEntryInitialize((_OWORD *)(v14 + *(_QWORD *)(a1 + 80)));
        v14 += 32LL;
        --v12;
      }
      while ( v12 );
    }
  }
  v5 = *a2;
  for ( *(_WORD *)(a1 + 12) = *a2; v5 >= 0; --v5 )
  {
    EntryAtLayerHeight = CmpValueEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)v5);
    v7 = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(a2);
    v8 = v7;
    if ( v7[2] )
    {
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v7) == 1 )
        break;
      if ( *(_DWORD *)(v9 + 36) )
      {
        *(_QWORD *)EntryAtLayerHeight = v10;
        *(_DWORD *)(EntryAtLayerHeight + 24) = *(_DWORD *)(v9 + 36);
        *(_QWORD *)(EntryAtLayerHeight + 8) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v10 + 8))(
                                                v10,
                                                *(unsigned int *)(v9 + 40),
                                                EntryAtLayerHeight + 16);
        v10 = *v8;
      }
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v10) )
        break;
    }
  }
  return v2;
}
