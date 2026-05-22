/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x18007A0F8
 * Callers:
 *     _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$3 @ 0x18009C02A (_DockDeviceCollection--OnDeviceAttach_--_1_--dtor$3.c)
 *     _Win32kInterop::DeliverInputToAllTargets_::_1_::dtor$6 @ 0x1800AFE39 (_Win32kInterop--DeliverInputToAllTargets_--_1_--dtor$6.c)
 *     _Win32kInterop::DeliverInputToTarget_::_1_::dtor$1 @ 0x1800B012E (_Win32kInterop--DeliverInputToTarget_--_1_--dtor$1.c)
 *     _Win32kInterop::MakeRoutingDecisionsForAllFrames_::_1_::dtor$0 @ 0x1800B1077 (_Win32kInterop--MakeRoutingDecisionsForAllFrames_--_1_--dtor$0.c)
 *     _Win32kInterop::UpdateGestureTargetingDecisions_::_1_::dtor$0 @ 0x1800B2F67 (_Win32kInterop--UpdateGestureTargetingDecisions_--_1_--dtor$0.c)
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
