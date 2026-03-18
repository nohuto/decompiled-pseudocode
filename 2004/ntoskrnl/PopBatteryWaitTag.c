/*
 * XREFs of PopBatteryWaitTag @ 0x1408EA5E4
 * Callers:
 *     PopBatteryWorker @ 0x14076D000 (PopBatteryWorker.c)
 *     PopBatteryAdd @ 0x1408E99E0 (PopBatteryAdd.c)
 * Callees:
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
 *     PopPrepareIoctl @ 0x1407AE364 (PopPrepareIoctl.c)
 */

NTSTATUS __fastcall PopBatteryWaitTag(__int64 a1)
{
  __int64 v2; // rcx

  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 168) = -1;
  PopPrepareIoctl(*(IRP **)(a1 + 56), 0x294040u, 0, (struct _IRP *)(a1 + 168), 4u, 4u);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 184LL);
  *(_QWORD *)(v2 - 16) = PopBatteryIrpComplete;
  *(_QWORD *)(v2 - 8) = a1;
  *(_BYTE *)(v2 - 69) = -32;
  return IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 48), *(PIRP *)(a1 + 56));
}
