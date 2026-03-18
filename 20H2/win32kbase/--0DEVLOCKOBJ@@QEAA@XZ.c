/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C005E6A8
 * Callers:
 *     GreGetNearestColor @ 0x1C001BF60 (GreGetNearestColor.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2190 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C0149CCC (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C014A160 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C014A330 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C005E6D8 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  *((_WORD *)this + 24) = 256;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  DEVLOCKOBJ::vInit(this);
  return this;
}
