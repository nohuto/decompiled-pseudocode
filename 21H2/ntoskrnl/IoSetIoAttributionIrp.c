/*
 * XREFs of IoSetIoAttributionIrp @ 0x140506260
 * Callers:
 *     <none>
 * Callees:
 *     IopSetDiskIoAttributionFromProcess @ 0x140242668 (IopSetDiskIoAttributionFromProcess.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140326D30 (IoSetDiskIoAttributionFromThread.c)
 */

__int64 __fastcall IoSetIoAttributionIrp(__int64 a1, struct _KTHREAD *a2, int a3)
{
  if ( a3 && (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( (a3 & 1) == 0 )
      return IopSetDiskIoAttributionFromProcess(a1, (__int64)a2);
    if ( (a3 & 2) == 0 )
      return IoSetDiskIoAttributionFromThread(a1, a2);
  }
  return 3221225485LL;
}
