/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@std@@@std@@QEAA@XZ @ 0x1800B8574
 * Callers:
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$1 @ 0x1800768C0 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$1.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$2 @ 0x180076A70 (_CPlaybackNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CSerialWorkQueue::TimerCallback_::_1_::dtor$0 @ 0x18007BF30 (_CSerialWorkQueue--TimerCallback_--_1_--dtor$0.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$2 @ 0x1800F01AD (_CCaptureNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CCaptureNotifier::ReleaseReference_::_1_::dtor$0 @ 0x1800F0323 (_CCaptureNotifier--ReleaseReference_--_1_--dtor$0.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$1 @ 0x180109461 (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>(_Mtx_t *a1)
{
  int v1; // eax

  v1 = _Mtx_unlock(*a1);
  if ( v1 )
    std::_Throw_C_error(v1);
}
