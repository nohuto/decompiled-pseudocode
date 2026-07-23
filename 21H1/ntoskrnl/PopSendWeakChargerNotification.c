/*
 * XREFs of PopSendWeakChargerNotification @ 0x1408E977C
 * Callers:
 *     PopBatteryWorker @ 0x14076A860 (PopBatteryWorker.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PopSendWeakChargerNotification(char a1)
{
  char Buffer; // [rsp+50h] [rbp+8h] BYREF

  Buffer = a1;
  return ZwUpdateWnfStateData(&WNF_PO_RECONCILED_WEAK_CHARGER, &Buffer, 1u, 0LL, 0LL, 0, 0);
}
