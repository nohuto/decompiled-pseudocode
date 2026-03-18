/*
 * XREFs of ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0024300
 * Callers:
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C000BBF0 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     DpiRequestDevicePowerState @ 0x1C0023FC0 (DpiRequestDevicePowerState.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 */

void __fastcall DpiScheduleDelayedDevicePowerRequired(struct _FDO_CONTEXT *a1)
{
  __int64 v2; // r8

  WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(
      &DxgkControlGuid_Context,
      &Dxgk_DevicePowerRequiredTimer,
      v2,
      *((_QWORD *)a1 + 487),
      1);
  if ( !*((_DWORD *)a1 + 1022) )
    KeSetTimer((PKTIMER)a1 + 65, DueTime, (PKDPC)a1 + 66);
}
