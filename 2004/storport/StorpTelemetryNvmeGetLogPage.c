/*
 * XREFs of StorpTelemetryNvmeGetLogPage @ 0x1C0055D70
 * Callers:
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00564FC (StorpTelemetrySendUnitNvmeHealthInfo.c)
 * Callees:
 *     memset @ 0x1C001DA00 (memset.c)
 */

NTSTATUS __fastcall StorpTelemetryNvmeGetLogPage(__int64 a1, int a2, _DWORD *a3)
{
  PIRP v6; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  memset(a3 + 3, 0, 0x224uLL);
  a3[1] = 0;
  *a3 = 50;
  a3[5] = 0;
  a3[2] = 3;
  a3[3] = 2;
  a3[4] = a2;
  a3[6] = 40;
  a3[7] = 512;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v6 = IoBuildDeviceIoControlRequest(
         0x2D1400u,
         *(PDEVICE_OBJECT *)(a1 + 8),
         a3,
         0x230u,
         a3,
         0x230u,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v6 )
    return -1073741670;
  v6->IoStatus.Status = -1073741637;
  result = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v6);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    result = IoStatusBlock.Status;
  }
  if ( result >= 0 && (*a3 != 48 || a3[1] != 48 || a3[6] < 0x28u || a3[7] < 0x200u) )
    return -1073741637;
  return result;
}
