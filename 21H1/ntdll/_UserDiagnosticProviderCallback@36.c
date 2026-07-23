/*
 * XREFs of _UserDiagnosticProviderCallback@36 @ 0x4B3630C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall UserDiagnosticProviderCallback(
        LPCGUID a1,
        ULONG a2,
        UCHAR a3,
        ULONGLONG a4,
        ULONGLONG a5,
        PEVENT_FILTER_DESCRIPTOR a6,
        PVOID a7)
{
  if ( a2 == 1 )
    g_isErrorOriginProviderEnabled = 1;
  else
    g_isErrorOriginProviderEnabled = a2 == 0 ? 0 : g_isErrorOriginProviderEnabled;
}
