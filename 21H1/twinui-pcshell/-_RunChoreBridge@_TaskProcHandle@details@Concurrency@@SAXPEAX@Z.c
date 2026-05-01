/*
 * XREFs of ?_RunChoreBridge@_TaskProcHandle@details@Concurrency@@SAXPEAX@Z @ 0x1803064D0
 * Callers:
 *     ?_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningMode@23@@Z @ 0x1803069D4 (-_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_TaskProcHandle::_RunChoreBridge(void *a1)
{
  (*(void (__fastcall **)(void *))(*(_QWORD *)a1 + 8LL))(a1);
  (**(void (__fastcall ***)(void *, __int64))a1)(a1, 1LL);
}
