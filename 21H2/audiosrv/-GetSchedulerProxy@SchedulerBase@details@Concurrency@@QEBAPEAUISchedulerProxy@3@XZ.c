/*
 * XREFs of ?GetSchedulerProxy@SchedulerBase@details@Concurrency@@QEBAPEAUISchedulerProxy@3@XZ @ 0x18004CD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Concurrency::ISchedulerProxy *__fastcall Concurrency::details::SchedulerBase::GetSchedulerProxy(
        Concurrency::details::SchedulerBase *this)
{
  return (struct Concurrency::ISchedulerProxy *)*((_QWORD *)this + 82);
}
