/*
 * XREFs of ?_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z @ 0x1C018151C
 * Callers:
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C01812B0 (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 * Callees:
 *     ?_BufferPenPacket@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x1C018140C (-_BufferPenPacket@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z.c)
 *     ?_DiscardOldTouchPackets@PalmTelemetry@@AEAAXK@Z @ 0x1C018147C (-_DiscardOldTouchPackets@PalmTelemetry@@AEAAXK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PalmTelemetry::_ProcessPenPacket(
        PalmTelemetry *this,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct tagHPD_CONTACT *a3,
        __int64 a4)
{
  unsigned int v4; // edi
  int v7; // esi
  unsigned int v8; // eax
  int v9; // ecx

  v4 = a4;
  if ( *(_DWORD *)this == 2 && *((_DWORD *)this + 5) + 250 < (unsigned int)a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v7 = 0;
  if ( (*((_DWORD *)a3 + 605) & 2) != 0 )
  {
    v8 = *(_DWORD *)this;
    if ( *(_DWORD *)this == 1 )
    {
      v7 = 1;
    }
    else
    {
      v9 = *(_DWORD *)this;
      if ( v8 && v8 != 2 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, a2, a3, a4);
        v9 = *(_DWORD *)this;
      }
      if ( !v9 )
      {
        PalmTelemetry::_DiscardOldTouchPackets(this, v4, (__int64)a3, a4);
        if ( *((_DWORD *)this + 3) )
          *((_DWORD *)this + 519) = v4 - *((_DWORD *)this + 6 * *((unsigned int *)this + 6) + 525);
        else
          *((_DWORD *)this + 519) = 0;
      }
      *((_DWORD *)this + 5) = 0;
      *(_DWORD *)this = 1;
    }
  }
  else
  {
    *((_DWORD *)this + 5) = v4;
    *(_DWORD *)this = 2;
  }
  if ( !*((_DWORD *)this + 1) )
  {
    PalmTelemetry::_BufferPenPacket(this, (__int64)a3);
    *((_DWORD *)this + 2) = v7;
  }
}
