/*
 * XREFs of ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0365438
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1C031BB74 (-DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOB.c)
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1C031BDD4 (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 *     ?CleanupChannelObject@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C033C140 (-CleanupChannelObject@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C033C1B0 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 *     ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1C033C434 (-DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C033C738 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0369D60 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036C030 (-VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0371540 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03811D0 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??1DXGSHAREDVMOBJECT@@AEAA@XZ @ 0x1C005CBD4 (--1DXGSHAREDVMOBJECT@@AEAA@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C019A7B8 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

__int64 __fastcall DXGSHAREDVMOBJECT::ReleaseReference(DXGSHAREDVMOBJECT *this)
{
  unsigned __int32 v2; // edi
  int v3; // eax
  PERESOURCE *Global; // rax

  if ( *((int *)this + 6) <= 0 )
  {
    WdLogSingleEntry1(1LL, 15864LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Reference > 0", 15864LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
  {
    v3 = *(_DWORD *)this;
    if ( *(_DWORD *)this == 4 )
    {
      *((_QWORD *)this + 1) = 0LL;
    }
    else
    {
      if ( v3 == 8 || v3 == 11 )
      {
        Global = (PERESOURCE *)DXGGLOBAL_GetGlobal();
        DXGGLOBAL::DestroySyncObject(Global, *((struct DXGSYNCOBJECT **)this + 1), 0);
        *((_QWORD *)this + 1) = 0LL;
        goto LABEL_12;
      }
      if ( v3 != 16 )
      {
        WdLogSingleEntry1(2LL, *(int *)this);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid DXGSHAREDVMOBJECT type: 0x%I64x",
          *(int *)this,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_12:
        DXGSHAREDVMOBJECT::~DXGSHAREDVMOBJECT(this);
        operator delete(this);
        return v2;
      }
    }
    ObCloseHandle(*((HANDLE *)this + 2), 0);
    *((_QWORD *)this + 2) = 0LL;
    goto LABEL_12;
  }
  return v2;
}
