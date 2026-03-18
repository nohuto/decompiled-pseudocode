/*
 * XREFs of ?VmBusSendWnfNotification@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_SENDWNFNOTIFICATION@@I@Z @ 0x1C024E29C
 * Callers:
 *     ?SendWnfNotificationToVmProcessWorkItem@DXGGLOBAL@@SAXPEAX@Z @ 0x1C026B4D0 (-SendWnfNotificationToVmProcessWorkItem@DXGGLOBAL@@SAXPEAX@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0040A9C (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendWnfNotification(
        struct VMBCHANNEL__ **this,
        struct DXGKVMB_COMMAND_SENDWNFNOTIFICATION *a2,
        unsigned int a3)
{
  __int64 v6; // rbx
  struct _MDL *v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax

  LODWORD(v6) = 0;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(this + 1));
  if ( *((_BYTE *)this + 56) )
  {
    v8 = VmBusSendAsyncMessage(*this, a2, a3, v7);
    v6 = v8;
    if ( v8 < 0 )
    {
      v11 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v11 + 24) = v6;
      WdLogEvent5_WdError(v11);
    }
  }
  ExReleasePushLockSharedEx(this + 1, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
