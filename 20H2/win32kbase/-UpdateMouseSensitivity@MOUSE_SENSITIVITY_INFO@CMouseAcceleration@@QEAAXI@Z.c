/*
 * XREFs of ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x1C008C194
 * Callers:
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x1C008B404 (--0CMouseAcceleration@@IEAA@I@Z.c)
 *     UpdateMouseSensitivity @ 0x1C008C160 (UpdateMouseSensitivity.c)
 *     UnpackMouseSettings @ 0x1C01AA460 (UnpackMouseSettings.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
        CMouseAcceleration::MOUSE_SENSITIVITY_INFO *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // eax
  unsigned int v7; // ebx

  v4 = a2;
  if ( (unsigned int)(a2 - 1) > 0x13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  *(_DWORD *)this = v4;
  if ( v4 <= 2 )
  {
    v7 = (8 * v4) & 0x7FFFFFF;
  }
  else
  {
    v6 = v4 << 8;
    if ( v4 > 0xA )
      v7 = (v6 - 1536) >> 2;
    else
      v7 = (v6 - 512) >> 3;
  }
  *((_DWORD *)this + 1) = v7;
}
