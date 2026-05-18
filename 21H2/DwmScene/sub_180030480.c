/*
 * XREFs of sub_180030480 @ 0x180030480
 * Callers:
 *     <none>
 * Callees:
 *     ?ContextPriority@SchedulerProxy@details@Concurrency@@QEBAHXZ @ 0x18006BB9C (-ContextPriority@SchedulerProxy@details@Concurrency@@QEBAHXZ.c)
 *     sub_18006C6A8 @ 0x18006C6A8 (sub_18006C6A8.c)
 *     sub_18006C710 @ 0x18006C710 (sub_18006C710.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180030480(Concurrency::details::SchedulerProxy *this, float a2, float a3)
{
  int v5; // eax

  if ( a2 == (*(float (__fastcall **)(Concurrency::details::SchedulerProxy *))(*(_QWORD *)this + 128LL))(this)
    && a3 == (*(float (__fastcall **)(Concurrency::details::SchedulerProxy *))(*(_QWORD *)this + 136LL))(this)
    && !(unsigned int)Concurrency::details::SchedulerProxy::ContextPriority(this) )
  {
    return 1;
  }
  v5 = Concurrency::details::SchedulerProxy::ContextPriority(this);
  if ( v5 > 0 )
    sub_18006C6A8(this, (unsigned int)(v5 - 1));
  if ( (unsigned __int8)sub_18006C710(this) )
  {
    (*(void (__fastcall **)(Concurrency::details::SchedulerProxy *))(*(_QWORD *)this + 416LL))(this);
    return 1;
  }
  return 0;
}
