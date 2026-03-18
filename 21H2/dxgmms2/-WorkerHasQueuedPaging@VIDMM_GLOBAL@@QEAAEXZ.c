/*
 * XREFs of ?WorkerHasQueuedPaging@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C00DD314
 * Callers:
 *     VidMmWorkerHasQueuedPaging @ 0x1C002D6F0 (VidMmWorkerHasQueuedPaging.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::WorkerHasQueuedPaging(VIDMM_GLOBAL *this)
{
  return *(_DWORD *)(*(_QWORD *)this + 168LL) != 0;
}
