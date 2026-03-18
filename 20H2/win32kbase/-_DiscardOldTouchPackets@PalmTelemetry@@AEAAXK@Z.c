/*
 * XREFs of ?_DiscardOldTouchPackets@PalmTelemetry@@AEAAXK@Z @ 0x1C017F04C
 * Callers:
 *     ?_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z @ 0x1C017F0EC (-_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PalmTelemetry::_DiscardOldTouchPackets(PalmTelemetry *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // esi
  unsigned int v7; // r8d
  __int64 v8; // r9

  v4 = 0;
  v5 = a2;
  if ( *(_DWORD *)this )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v7 = *((_DWORD *)this + 3);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = (*((_DWORD *)this + 6) - v4 + v7 - 1) % 0x1AA;
      if ( (unsigned int)(v5 - *((_DWORD *)this + 6 * v8 + 525)) > 0x1F4 )
        break;
      if ( ++v4 >= v7 )
        return;
    }
    *((_DWORD *)this + 3) = v4;
    *((_DWORD *)this + 6) = ((int)v8 + 1) % 0x1AAu;
  }
}
