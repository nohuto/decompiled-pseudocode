/*
 * XREFs of ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C0186FB0
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C018341C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     ?_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z @ 0x1C018721C (-_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z.c)
 *     ?_ProcessTouchPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@Z @ 0x1C0187300 (-_ProcessTouchPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C0187384 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C01875F8 (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall PalmTelemetry::Update(
        PalmTelemetry *this,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct tagHPD_CONTACT *a3,
        int a4)
{
  int v4; // eax
  unsigned __int64 v9; // rdi
  int v10; // ecx

  v4 = *((_DWORD *)a2 + 78);
  if ( (v4 & 8) == 0 && (v4 & 0x2000) == 0 )
  {
    v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( *(_DWORD *)this == 2 && (unsigned int)(v9 - *((_DWORD *)this + 5)) > 0xFA )
    {
      if ( !*((_DWORD *)this + 1) )
        PalmTelemetry::_Report(this, v9);
      PalmTelemetry::_ResetTelemetryData(this);
      *(_DWORD *)this = 0;
      *((_DWORD *)this + 1) = 0;
    }
    v10 = *((_DWORD *)a2 + 6);
    if ( (unsigned int)(v10 - 5) > 1 )
    {
      if ( (unsigned int)(v10 - 1) <= 3 )
        PalmTelemetry::_ProcessTouchPacket(this, a2, a3, v9, a4);
    }
    else
    {
      PalmTelemetry::_ProcessPenPacket(this, a2, a3, v9);
    }
  }
}
