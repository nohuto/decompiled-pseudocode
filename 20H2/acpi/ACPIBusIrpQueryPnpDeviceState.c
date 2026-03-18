/*
 * XREFs of ACPIBusIrpQueryPnpDeviceState @ 0x1C00A1680
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIrpInvokeDispatchRoutine @ 0x1C00A16D4 (ACPIIrpInvokeDispatchRoutine.c)
 */

__int64 __fastcall ACPIBusIrpQueryPnpDeviceState(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // [rsp+20h] [rbp-18h]

  v4 = 1;
  return ACPIIrpInvokeDispatchRoutine(a1, a2, a3, ACPIBusAndFilterIrpQueryPnpDeviceState, v4);
}
