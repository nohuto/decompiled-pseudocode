/*
 * XREFs of ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x1C01B9F9C
 * Callers:
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C01A9F74 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ @ 0x1C0008748 (-ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1C01BA3CC (-UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z.c)
 */

void __fastcall DelayZoneTelemetry::ClearSession(DelayZoneTelemetry *this)
{
  DelayZoneTelemetry::UploadTelemetryData(this, 1);
  *((_DWORD *)this + 2) = 0;
  memset((char *)this + 2064, 0, 0x27F0uLL);
  memset((char *)this + 17, 0, 0x7FFuLL);
  *((_BYTE *)this + 16) = 0;
  DelayZoneTelemetry::ClearInputPanelRects(this);
  *((_DWORD *)this + 3) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
}
