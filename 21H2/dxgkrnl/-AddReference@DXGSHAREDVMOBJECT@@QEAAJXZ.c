/*
 * XREFs of ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0361198
 * Callers:
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C033C738 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0371540 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03811D0 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGSHAREDVMOBJECT::AddReference(DXGSHAREDVMOBJECT *this)
{
  if ( *((int *)this + 6) < 0 )
  {
    WdLogSingleEntry1(1LL, 15856LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Reference >= 0", 15856LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
