/*
 * XREFs of ?_Callback@_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@CAXPEAX@Z @ 0x180326760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore::_Callback(
        Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore *this)
{
  struct Concurrency::details::_Threadpool_chore *v2; // rdx

  (*((void (__fastcall **)(_QWORD))this + 3))(*((_QWORD *)this + 4));
  Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore::`scalar deleting destructor'(this, v2);
}
