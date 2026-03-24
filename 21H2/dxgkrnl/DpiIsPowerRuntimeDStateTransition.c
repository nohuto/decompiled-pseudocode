/*
 * XREFs of DpiIsPowerRuntimeDStateTransition @ 0x1C0121ADC
 * Callers:
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01219AC (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C0176470 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleDevicePower @ 0x1C01771F0 (DpiFdoHandleDevicePower.c)
 *     DpiPowerArbiterThread @ 0x1C019D6B0 (DpiPowerArbiterThread.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C02D7EAC (DpiLdaPowerDownAllAdaptersInChain.c)
 * Callees:
 *     <none>
 */

char __fastcall DpiIsPowerRuntimeDStateTransition(__int64 a1)
{
  __int64 v1; // rax
  char result; // al
  __int64 v3; // rax

  v1 = a1;
  if ( a1 && *(_DWORD *)(a1 + 16) == 1953656900 && *(_DWORD *)(a1 + 20) == 3 )
  {
    v3 = *(_QWORD *)(a1 + 2728);
    if ( !v3 )
      return 0;
    v1 = *(_QWORD *)(v3 + 64);
  }
  if ( !*(_BYTE *)(v1 + 482) )
    return 0;
  result = 1;
  if ( *(_DWORD *)(a1 + 280) > 1u || *(_BYTE *)(a1 + 483) )
    return 0;
  return result;
}
