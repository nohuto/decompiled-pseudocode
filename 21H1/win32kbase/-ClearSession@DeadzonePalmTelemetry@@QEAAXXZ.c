/*
 * XREFs of ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C0186E40
 * Callers:
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C0175FF8 (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01766E4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C018771C (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
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
