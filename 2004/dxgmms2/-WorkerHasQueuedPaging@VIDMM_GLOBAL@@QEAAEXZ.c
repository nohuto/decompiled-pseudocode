/*
 * XREFs of ?WorkerHasQueuedPaging@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C00B8DFC
 * Callers:
 *     VidMmWorkerHasQueuedPaging @ 0x1C0022ED0 (VidMmWorkerHasQueuedPaging.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::WorkerHasQueuedPaging(VIDMM_GLOBAL *this)
{
  return *(_DWORD *)(*(_QWORD *)this + 168LL) != 0;
}
