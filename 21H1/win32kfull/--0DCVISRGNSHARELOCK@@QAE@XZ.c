/*
 * XREFs of ??0DCVISRGNSHARELOCK@@QAE@XZ @ 0xAB032
 * Callers:
 *     ?TrapAppContainerRenderingWorker@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z @ 0x5A290 (-TrapAppContainerRenderingWorker@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z.c)
 *     ?UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z @ 0x5DF78 (-UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QAEXXZ @ 0xAAFAA (-vClearRenderState@DEVLOCKOBJ@@QAEXXZ.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     <none>
 */

DCVISRGNSHARELOCK *__thiscall DCVISRGNSHARELOCK::DCVISRGNSHARELOCK(DCVISRGNSHARELOCK *this)
{
  GreAcquireSemaphoreSharedInternal(_ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", _ghsemDCVisRgn);
  return this;
}
