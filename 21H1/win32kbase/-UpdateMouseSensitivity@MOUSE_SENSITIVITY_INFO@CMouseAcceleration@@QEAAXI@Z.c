/*
 * XREFs of ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x1C0011C94
 * Callers:
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x1C0010864 (--0CMouseAcceleration@@IEAA@I@Z.c)
 *     UpdateMouseSensitivity @ 0x1C0011C60 (UpdateMouseSensitivity.c)
 *     UnpackMouseSettings @ 0x1C01B2540 (UnpackMouseSettings.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
        CMouseAcceleration::MOUSE_SENSITIVITY_INFO *this,
        unsigned int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( a2 - 1 > 0x13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  *(_DWORD *)this = a2;
  if ( a2 <= 2 )
  {
    v5 = (8 * a2) & 0x7FFFFFF;
  }
  else
  {
    v4 = a2 << 8;
    if ( a2 > 0xA )
      v5 = (v4 - 1536) >> 2;
    else
      v5 = (v4 - 512) >> 3;
  }
  *((_DWORD *)this + 1) = v5;
}
