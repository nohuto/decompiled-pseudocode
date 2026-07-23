/*
 * XREFs of UserDiagnosticProviderCallback @ 0x1800FD010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UserDiagnosticProviderCallback(LPCGUID a1, int a2)
{
  if ( a2 == 1 )
    g_isErrorOriginProviderEnabled = 1;
  else
    g_isErrorOriginProviderEnabled = a2 != 0 ? g_isErrorOriginProviderEnabled : 0;
}
