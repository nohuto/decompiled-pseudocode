/*
 * XREFs of rimSetupPalmTelemetry @ 0x1C0164430
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0164C98 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0168B18 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C01875F8 (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimSetupPalmTelemetry(__int64 a1)
{
  PalmTelemetry *v2; // rax
  int v3; // edx
  PalmTelemetry *v4; // rbx

  if ( !*(_QWORD *)(a1 + 856) )
  {
    v2 = (PalmTelemetry *)Win32AllocPoolZInit(0x3010uLL, 0x76656B52u);
    v4 = v2;
    if ( v2 )
    {
      PalmTelemetry::_ResetTelemetryData(v2);
      *((_DWORD *)v4 + 4) = 0;
      *(_DWORD *)v4 = 0;
      *((_DWORD *)v4 + 1) = 0;
      *(_QWORD *)(a1 + 856) = v4;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v3, 1, 11, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
    }
  }
}
