/*
 * XREFs of ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C0181140
 * Callers:
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C016FCC8 (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01703B4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C0181A1C (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 */

void __fastcall DeadzonePalmTelemetry::ClearSession(DeadzonePalmTelemetry *this)
{
  DeadzonePalmTelemetry::_UploadTelemetryData(this, 1);
  *((_DWORD *)this + 1) = 0;
  memset((char *)this + 2060, 0, 0x2800uLL);
  memset((char *)this + 13, 0, 0x7FFuLL);
  *(_DWORD *)this = 0;
  *((_BYTE *)this + 12) = 0;
}
