/*
 * XREFs of ??1?$CAutoPtr@VCallHoldWorkItem@@@ATL@@QEAA@XZ @ 0x18013DF50
 * Callers:
 *     _AudioDeviceMgr::WorkItemThreadProc_::_1_::dtor$0 @ 0x18007D45D (_AudioDeviceMgr--WorkItemThreadProc_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::AddWorkItemToQueue_::_1_::dtor$1 @ 0x18013E21B (_AudioDeviceMgr--AddWorkItemToQueue_--_1_--dtor$1.c)
 *     _PhoneTopology::AddWorkItemToQueue_::_1_::dtor$1 @ 0x18013FBD0 (_PhoneTopology--AddWorkItemToQueue_--_1_--dtor$1.c)
 *     _PhoneTopology::GetCellularEnable_::_1_::dtor$2 @ 0x1801405C1 (_PhoneTopology--GetCellularEnable_--_1_--dtor$2.c)
 *     _PhoneTopology::GetCellularRxMute_::_1_::dtor$2 @ 0x180140844 (_PhoneTopology--GetCellularRxMute_--_1_--dtor$2.c)
 *     _PhoneTopology::GetCellularTxMute_::_1_::dtor$2 @ 0x180140B34 (_PhoneTopology--GetCellularTxMute_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAutoPtr<CallHoldWorkItem>::~CAutoPtr<CallHoldWorkItem>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1LL);
  *a1 = 0LL;
  return result;
}
