/*
 * XREFs of CmpGetSecurityCellForKeyNodeStack @ 0x14065C2F0
 * Callers:
 *     CmpCheckKeyNodeStackAccess @ 0x14065BF3C (CmpCheckKeyNodeStackAccess.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14065C008 (CmpCopyMergeOfLayeredKeyNode.c)
 * Callees:
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14069F45C (CmpGetEffectiveKeyNodeSemantics.c)
 */

__int64 __fastcall CmpGetSecurityCellForKeyNodeStack(__int16 *a1, _QWORD *a2, _DWORD *a3)
{
  _QWORD *v6; // r10
  _QWORD *EntryAtLayerHeight; // rax
  __int16 v8; // r9
  int EffectiveKeyNodeSemantics; // eax
  _QWORD *v10; // r11
  __int64 result; // rax

  v6 = 0LL;
  if ( *a1 >= 0 )
  {
    do
    {
      EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1);
      if ( EntryAtLayerHeight[2] )
      {
        EffectiveKeyNodeSemantics = CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight);
        if ( EffectiveKeyNodeSemantics == 1 )
          break;
        v6 = v10;
        if ( EffectiveKeyNodeSemantics )
          break;
      }
    }
    while ( (__int16)(v8 - 1) >= 0 );
  }
  *a2 = *v6;
  result = v6[2];
  *a3 = *(_DWORD *)(result + 44);
  return result;
}
