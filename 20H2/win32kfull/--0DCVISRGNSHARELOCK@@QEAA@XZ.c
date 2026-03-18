/*
 * XREFs of ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012CEF8
 * Callers:
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00A1070 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C00A10C0 (UntrapAppContainerRenderingWrap.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A16C0 (GreSetDIBitsToDeviceInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00A37B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00B4DE0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     NtGdiExtFloodFill @ 0x1C02B8910 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

DCVISRGNSHARELOCK *__fastcall DCVISRGNSHARELOCK::DCVISRGNSHARELOCK(DCVISRGNSHARELOCK *this)
{
  GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  return this;
}
