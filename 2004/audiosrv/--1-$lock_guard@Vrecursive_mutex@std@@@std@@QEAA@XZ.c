/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@std@@@std@@QEAA@XZ @ 0x1800B8614
 * Callers:
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$1 @ 0x1800769C0 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$1.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$2 @ 0x180076B70 (_CPlaybackNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CSerialWorkQueue::TimerCallback_::_1_::dtor$0 @ 0x18007C030 (_CSerialWorkQueue--TimerCallback_--_1_--dtor$0.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$2 @ 0x1800F026D (_CCaptureNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CCaptureNotifier::ReleaseReference_::_1_::dtor$0 @ 0x1800F03E3 (_CCaptureNotifier--ReleaseReference_--_1_--dtor$0.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$1 @ 0x180109521 (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$1.c)
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
