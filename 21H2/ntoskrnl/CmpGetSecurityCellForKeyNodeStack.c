/*
 * XREFs of CmpGetSecurityCellForKeyNodeStack @ 0x14072A1AC
 * Callers:
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140729950 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpCheckKeyNodeStackAccess @ 0x140729D84 (CmpCheckKeyNodeStackAccess.c)
 * Callees:
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1405F8E58 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14072A3C0 (CmpGetEffectiveKeyNodeSemantics.c)
 */

__int64 __fastcall CmpGetSecurityCellForKeyNodeStack(__int16 *a1, _QWORD *a2, _DWORD *a3)
{
  __int16 v3; // r9
  __int64 v6; // r11
  _QWORD *i; // r10
  _QWORD *EntryAtLayerHeight; // rax
  __int16 v9; // r9
  int EffectiveKeyNodeSemantics; // eax
  _QWORD *v11; // r8
  __int64 result; // rax

  v3 = *a1;
  v6 = (__int64)a1;
  for ( i = 0LL; v3 >= 0; v3 = v9 - 1 )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(v6, v3);
    if ( EntryAtLayerHeight[2] )
    {
      EffectiveKeyNodeSemantics = CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight);
      if ( EffectiveKeyNodeSemantics == 1 )
        break;
      i = v11;
      if ( EffectiveKeyNodeSemantics )
        break;
    }
  }
  *a2 = *i;
  result = i[2];
  *a3 = *(_DWORD *)(result + 44);
  return result;
}
