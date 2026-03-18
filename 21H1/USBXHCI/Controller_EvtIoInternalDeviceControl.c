/*
 * XREFs of Controller_EvtIoInternalDeviceControl @ 0x1C0030F00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 */

__int64 __fastcall Controller_EvtIoInternalDeviceControl(__int64 a1, IRP *a2)
{
  unsigned int LowPart; // ebx
  int v5; // edx
  __int64 v6; // rsi
  unsigned int v7; // ebx

  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v6 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00603D8)
                 + 8);
  if ( LowPart == 2232247 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v6 + 72), v5, 4, 206, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
    }
    v7 = 0;
    Controller_ReportFatalError(v6, 2, 4159, 0, 0LL, 0LL, 0LL);
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *))(WdfFunctions_01023 + 272))(
             WdfDriverGlobals,
             a1,
             a2);
  }
  return v7;
}
