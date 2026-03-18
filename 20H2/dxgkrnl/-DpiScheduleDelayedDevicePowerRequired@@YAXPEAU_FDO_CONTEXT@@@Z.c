/*
 * XREFs of ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0050390
 * Callers:
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C00044F0 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     DpiRequestDevicePowerState @ 0x1C00508E4 (DpiRequestDevicePowerState.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00393B4 (McTemplateK0pq_EtwWriteTransfer.c)
 */

void __fastcall DpiScheduleDelayedDevicePowerRequired(struct _FDO_CONTEXT *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // [rsp+20h] [rbp-18h]

  v2 = WdLogNewEntry5_WdPower();
  *(_QWORD *)(v2 + 24) = a1;
  *(_OWORD *)(v2 + 32) = 0LL;
  WdLogEvent5_WdPower(v2);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    v5 = 1;
    McTemplateK0pq_EtwWriteTransfer(v3, &Dxgk_DevicePowerRequiredTimer, v4, *((_QWORD *)a1 + 487), v5);
  }
  if ( !*((_DWORD *)a1 + 1020) )
    KeSetTimer((PKTIMER)((char *)a1 + 4152), DueTime, (PKDPC)((char *)a1 + 4216));
}
