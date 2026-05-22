/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x180079C48
 * Callers:
 *     _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$3 @ 0x18009BB6A (_DockDeviceCollection--OnDeviceAttach_--_1_--dtor$3.c)
 *     _Win32kInterop::DeliverInputToAllTargets_::_1_::dtor$6 @ 0x1800AF979 (_Win32kInterop--DeliverInputToAllTargets_--_1_--dtor$6.c)
 *     _Win32kInterop::DeliverInputToTarget_::_1_::dtor$1 @ 0x1800AFC6E (_Win32kInterop--DeliverInputToTarget_--_1_--dtor$1.c)
 *     _Win32kInterop::MakeRoutingDecisionsForAllFrames_::_1_::dtor$0 @ 0x1800B0BB7 (_Win32kInterop--MakeRoutingDecisionsForAllFrames_--_1_--dtor$0.c)
 *     _Win32kInterop::UpdateGestureTargetingDecisions_::_1_::dtor$0 @ 0x1800B2AA7 (_Win32kInterop--UpdateGestureTargetingDecisions_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::lock_guard<std::mutex>::~lock_guard<std::mutex>(_Mtx_t *a1)
{
  int v1; // eax

  v1 = _Mtx_unlock(*a1);
  if ( v1 )
    std::_Throw_C_error(v1);
}
