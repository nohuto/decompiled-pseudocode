/*
 * XREFs of _CmDevicePropertyRead @ 0x140267A0C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14063DB50 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x14066B8FC (_CmGetDeviceRegPropWorker.c)
 *     _CmSetDeviceRegPropWorker @ 0x1407330D8 (_CmSetDeviceRegPropWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmDevicePropertyRead(__int64 a1, int a2)
{
  if ( a2 > 7 )
    return a2 <= 24 || a2 > 25 && a2 <= 37;
  return a2 < 6 && a2 > 0 && (a2 <= 3 || a2 == 5);
}
