/*
 * XREFs of ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012D26C
 * Callers:
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00A1070 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C00A10C0 (UntrapAppContainerRenderingWrap.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00B4DE0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     NtGdiExtFloodFill @ 0x1C02B8910 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

void __fastcall DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(DCVISRGNSHARELOCK *this)
{
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
}
