/*
 * XREFs of _DxgkEngQueryWin32InfoPlatform@4 @ 0xADA3E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall DxgkEngQueryWin32InfoPlatform(_DWORD *a1)
{
  _DWORD *v1; // esi
  int result; // eax
  int v3; // eax

  if ( *a1 != 1 )
    return -1073741822;
  v1 = (_DWORD *)a1[2];
  if ( a1[1] != 20 )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v3);
  }
  *v1 = 800;
  result = 0;
  v1[1] = 600;
  v1[2] = 12;
  v1[3] = &DesktopScaleFactorsArray;
  v1[4] = &DesktopScaleFactorCutoffs;
  return result;
}
