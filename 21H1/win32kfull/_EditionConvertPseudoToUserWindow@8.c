/*
 * XREFs of _EditionConvertPseudoToUserWindow@8 @ 0xEFAF2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall EditionConvertPseudoToUserWindow(int a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // eax

  v2 = -1073741811;
  *a2 = 0;
  v3 = ValidateHwnd(a1);
  if ( v3 && *(_DWORD *)(v3 + 8) == _gptiCurrent )
  {
    *a2 = a1;
    return 0;
  }
  return v2;
}
