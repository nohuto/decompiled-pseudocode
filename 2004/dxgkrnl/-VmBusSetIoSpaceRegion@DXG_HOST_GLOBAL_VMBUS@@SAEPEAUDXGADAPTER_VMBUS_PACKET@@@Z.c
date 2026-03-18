/*
 * XREFs of ?VmBusSetIoSpaceRegion@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024EAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F814 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAXI@Z @ 0x1C0285DE0 (-SetSharedPage@DXGVIRTUALMACHINE@@QEAAXI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSetIoSpaceRegion(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
  v5 = v2;
  if ( v2 )
  {
    Global = DXGGLOBAL::GetGlobal(v4, v3);
    v8 = *(_QWORD *)(v5 + 32);
    if ( v8 == *((_QWORD *)Global + 203) )
    {
      v10 = *(_QWORD *)(*((_QWORD *)a1 + 7) + 496LL);
      if ( !*(_QWORD *)(v10 + 216) )
      {
        *(_QWORD *)(v10 + 216) = *(_QWORD *)(v5 + 24);
        *(_QWORD *)(v10 + 224) = v8;
      }
      if ( g_VgpuEnableGuestDebug )
        DXGVIRTUALMACHINE::SetSharedPage(*(DXGVIRTUALMACHINE **)(*((_QWORD *)a1 + 7) + 496LL), *(_DWORD *)(v5 + 40));
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v7, v8);
      *(_QWORD *)(v9 + 24) = *(_QWORD *)(v5 + 32);
      WdLogEvent5_WdError(v9);
      v12 = -1073741811;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v12, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}
