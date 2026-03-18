/*
 * XREFs of CmpPopulateKeyNodeStackFromKcbStack @ 0x14069EEC0
 * Callers:
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14069EDC0 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x14091D1FC (CmpSubtreeEnumeratorBeginForKcbStack.c)
 * Callees:
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     CmpGetEffectiveKcbSemantics @ 0x140721CA0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

_UNKNOWN **__fastcall CmpPopulateKeyNodeStackFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int16 i; // bx
  __int64 EntryAtLayerHeight; // rdi
  __int64 v9; // rdx
  _UNKNOWN **v10; // rbp
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = *(_WORD *)(a2 + 2); i >= 0; --i )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1);
    result = (_UNKNOWN **)CmpGetKcbAtLayerHeight(a2, v9);
    v10 = result;
    v11 = *((unsigned int *)result + 10);
    if ( (_DWORD)v11 != -1 )
    {
      v12 = (ULONG_PTR)result[4];
      *(_QWORD *)EntryAtLayerHeight = v12;
      *(_DWORD *)(EntryAtLayerHeight + 8) = v11;
      if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
        result = (_UNKNOWN **)HvpGetCellFlat(v12, v11);
      else
        result = (_UNKNOWN **)HvpGetCellPaged(v12);
      *(_QWORD *)(EntryAtLayerHeight + 16) = result;
    }
    if ( a3 )
    {
      result = (_UNKNOWN **)CmpGetEffectiveKcbSemantics(v10, a3);
      if ( (_DWORD)result )
        break;
    }
  }
  return result;
}
