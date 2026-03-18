/*
 * XREFs of ?GetWaitableVSyncEvent@BLTQUEUE_HW_VSYNC_SOURCE@@UEAAPEAXXZ @ 0x1C015B7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall BLTQUEUE_HW_VSYNC_SOURCE::GetWaitableVSyncEvent(BLTQUEUE_HW_VSYNC_SOURCE *this)
{
  return (void *)*((_QWORD *)this + 10);
}
