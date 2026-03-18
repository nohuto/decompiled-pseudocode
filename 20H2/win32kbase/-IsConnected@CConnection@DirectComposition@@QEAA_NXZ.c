/*
 * XREFs of ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0067630
 * Callers:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C005D178 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C005D8F8 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0061650 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C0067578 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0080880 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0081638 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C0082FA0 (-UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ.c)
 *     ?IsSystemResourceOfType@CConnection@DirectComposition@@QEAA_NVResourceHandle@@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C009BE0C (-IsSystemResourceOfType@CConnection@DirectComposition@@QEAA_NVResourceHandle@@W4MIL_RESOURCE_TYP.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00CB170 (-ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C01CD350 (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C01CD6F0 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ @ 0x1C01CF6C0 (-UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CConnection::IsConnected(DirectComposition::CConnection *this)
{
  struct _ERESOURCE *v1; // rbx

  v1 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v1, 1u);
  LOBYTE(v1) = *((_DWORD *)this + 37) != 0;
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return (char)v1;
}
