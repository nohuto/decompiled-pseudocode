/*
 * XREFs of ?_BufferPenPacket@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x1C018140C
 * Callers:
 *     ?_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z @ 0x1C018151C (-_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z.c)
 * Callees:
 *     ?_TryBuffer@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x1C0181950 (-_TryBuffer@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z.c)
 */

__int64 __fastcall PalmTelemetry::_BufferPenPacket(_DWORD *a1, __int64 a2)
{
  int v2; // r11d

  if ( a1[2] == 1 )
  {
    v2 = a1[3];
    if ( v2 )
    {
      if ( (unsigned int)(a1[6 * ((v2 + a1[6] - 1) % 0x1AAu) + 520] - 5) <= 1 )
        a1[3] = v2 - 1;
    }
  }
  return PalmTelemetry::_TryBuffer(a1, a2);
}
