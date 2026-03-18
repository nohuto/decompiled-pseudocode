/*
 * XREFs of ?_ProcessTouchPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@Z @ 0x1C017F1D0
 * Callers:
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C017EE80 (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 * Callees:
 *     ?_TryBuffer@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x1C017F520 (-_TryBuffer@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PalmTelemetry::_ProcessTouchPacket(
        PalmTelemetry *this,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct tagHPD_CONTACT *a3,
        __int64 a4,
        int a5)
{
  int v7; // ecx
  int v8; // eax
  int v9; // edx

  if ( *(_DWORD *)this == 2 && *((_DWORD *)this + 5) + 250 < (unsigned int)a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( !*((_DWORD *)this + 1) )
  {
    v7 = 0;
    v8 = *((_DWORD *)a3 + 605) & 4;
    v9 = 0;
    if ( a5 )
    {
      LOBYTE(v7) = v8 != 0;
    }
    else
    {
      if ( v8 )
        return;
      v9 = 1;
    }
    if ( v7 || v9 )
      PalmTelemetry::_TryBuffer(this, a3);
  }
}
