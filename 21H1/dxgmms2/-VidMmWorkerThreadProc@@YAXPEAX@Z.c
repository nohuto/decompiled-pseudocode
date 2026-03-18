/*
 * XREFs of ?VidMmWorkerThreadProc@@YAXPEAX@Z @ 0x1C0096750
 * Callers:
 *     <none>
 * Callees:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008B710 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 */

void __fastcall VidMmWorkerThreadProc(VIDMM_WORKER_THREAD *StartContext)
{
  VIDMM_WORKER_THREAD::Run(StartContext);
}
