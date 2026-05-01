/*
 * XREFs of ?IsPPIFullFrameUI@@YA_NXZ @ 0x1801516C4
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180043860 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@SurfaceHubPositioner@@QEAAJXZ @ 0x1803B78FC (-RuntimeClassInitialize@SurfaceHubPositioner@@QEAAJXZ.c)
 *     ?TabletModeChanged@SurfaceHubPositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x1803B7BF0 (-TabletModeChanged@SurfaceHubPositioner@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180050190 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

bool IsPPIFullFrameUI(void)
{
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  return SHRegGetDWORD(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\PPI\\DeviceCapabilities", L"FullFrameUI", &v1) < 0
      || v1 == 1;
}
