/*
 * XREFs of _EditionConvertProcessPseudoToUserWindow@12 @ 0xEFAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall EditionConvertProcessPseudoToUserWindow(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // eax

  v3 = -1073741811;
  *a3 = 0;
  v4 = ValidateHwnd(a1);
  if ( v4 && *(_DWORD *)(*(_DWORD *)(v4 + 8) + 232) == a2 )
  {
    *a3 = a1;
    return 0;
  }
  return v3;
}
