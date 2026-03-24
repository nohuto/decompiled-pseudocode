/*
 * XREFs of ?SetSurfaceManagerEvents@CPartitionVerticalBlankScheduler@@UEAAXPEAX0@Z @ 0x1800E1C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::SetSurfaceManagerEvents(
        CPartitionVerticalBlankScheduler *this,
        void *a2,
        void *a3)
{
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 5) = a3;
}
