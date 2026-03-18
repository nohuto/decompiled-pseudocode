/*
 * XREFs of ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C011BB28
 * Callers:
 *     ?VmBusWaitForSyncObjectFromGpuCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DAB80 (-VmBusWaitForSyncObjectFromGpuCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C011B710 (DxgkShareObjectsInternal.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023E670 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0244410 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C0277694 (DxgkCreateBundleObjectInternal.c)
 *     ?SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z @ 0x1C028B348 (-SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z.c)
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C02B2174 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C02B2F1C (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02B5910 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMGRTABLE::GetEntryType(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 16) )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v5 + 24) = 217LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return *(_DWORD *)(*(_QWORD *)a1 + 16 * v3 + 8) & 0x1F;
}
