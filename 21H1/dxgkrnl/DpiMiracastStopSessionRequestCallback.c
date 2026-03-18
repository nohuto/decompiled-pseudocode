/*
 * XREFs of DpiMiracastStopSessionRequestCallback @ 0x1C02CA870
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C00521F0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0052EF8 (DpiMiracastTearDownAssociation.c)
 */

void __fastcall DpiMiracastStopSessionRequestCallback(PVOID P, int *a2)
{
  if ( *a2 < 0 )
    DpiMiracastTearDownAssociation((char *)P, *((_DWORD *)P + 110), -2147483647, 0x83u, 0);
  DpiMiracastReleaseMiracastDeviceContext((int *)P, (__int64)DpiMiracastStopSessionRequestCallback);
}
