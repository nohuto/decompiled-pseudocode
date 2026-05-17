/*
 * XREFs of _UserDiagnosticProviderCallback@36 @ 0x4B3630C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall UserDiagnosticProviderCallback(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  char result; // al

  if ( a2 == 1 )
  {
    g_isErrorOriginProviderEnabled = 1;
  }
  else
  {
    result = (a2 == 0) - 1;
    g_isErrorOriginProviderEnabled &= result;
  }
  return result;
}
