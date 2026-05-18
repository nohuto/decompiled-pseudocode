/*
 * XREFs of ?SetQueueLength@SchedulerProxy@details@Concurrency@@QEAAXI@Z @ 0x1800B1E10
 * Callers:
 *     sub_1800C6C30 @ 0x1800C6C30 (sub_1800C6C30.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::SchedulerProxy::SetQueueLength(
        Concurrency::details::SchedulerProxy *this,
        int a2)
{
  *((_DWORD *)this + 42) = a2;
}
