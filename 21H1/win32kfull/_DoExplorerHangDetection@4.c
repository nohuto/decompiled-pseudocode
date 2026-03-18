/*
 * XREFs of _DoExplorerHangDetection@4 @ 0x11B94
 * Callers:
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 *     ?_OnEnterActive@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z @ 0x16EC4E (-_OnEnterActive@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z.c)
 * Callees:
 *     ?IsValidForHangTest@@YGHPBUtagTHREADINFO@@@Z @ 0x11BFE (-IsValidForHangTest@@YGHPBUtagTHREADINFO@@@Z.c)
 *     _IsThreadHung@8 @ 0x175E4 (_IsThreadHung@8.c)
 */

int __cdecl DoExplorerHangDetection(struct tagDESKTOP *a1, const struct tagTHREADINFO *a2)
{
  int v2; // ecx
  int v3; // esi
  int v4; // edi
  int v5; // edi
  int result; // eax
  const struct tagTHREADINFO *v7; // [esp+0h] [ebp-Ch]
  const struct tagTHREADINFO *v8; // [esp+0h] [ebp-Ch]

  v3 = *(_DWORD *)(v2 + 176);
  v4 = *(_DWORD *)(*(_DWORD *)(v2 + 4) + 96);
  if ( v4 )
    v5 = *(_DWORD *)(v4 + 8);
  else
    v5 = 0;
  result = IsValidForHangTest(v7);
  if ( result )
  {
    result = IsValidForHangTest(v8);
    if ( result )
    {
      result = IsThreadHung(v3, _gdwHungAppTimeout);
      if ( !result )
      {
        result = IsThreadHung(v5, _gdwHungAppTimeout);
        if ( !result )
          return result;
        v3 = v5;
      }
      if ( v3 )
        return ReportHungExplorerToWer(a1, a2);
    }
  }
  return result;
}
