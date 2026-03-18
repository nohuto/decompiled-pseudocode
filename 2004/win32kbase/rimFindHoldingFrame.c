/*
 * XREFs of rimFindHoldingFrame @ 0x1C005DC40
 * Callers:
 *     RIMRemoveHoldingFrame @ 0x1C005DBE8 (RIMRemoveHoldingFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C01730A0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0173880 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C0173A80 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C0173BFC (rimFindAndReclaimHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C0173CBC (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C0174410 (rimStorePointersInHoldingFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall rimFindHoldingFrame(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // r9
  _QWORD *v7; // rbx

  v2 = (_QWORD *)(a1 + 536);
  v3 = *(_QWORD **)(a1 + 536);
  if ( v3 == v2 )
    return 0LL;
  v5 = *(_QWORD *)(a2 + 16);
  do
  {
    v6 = v3[3];
    v7 = v3;
    if ( v6 == v5 )
      break;
    v3 = (_QWORD *)*v3;
  }
  while ( v3 != v2 );
  if ( v3 == v2 )
    return 0LL;
  if ( v6 != v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v5, v2, v6);
  return v7;
}
