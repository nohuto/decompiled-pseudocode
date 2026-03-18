/*
 * XREFs of ?VmBusOfferAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0242970
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F6C4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkOfferAllocations @ 0x1C014BB30 (DxgkOfferAllocations.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOfferAllocations(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-40h] BYREF
  DXGPUSHLOCK *v14; // [rsp+28h] [rbp-38h]
  int v15; // [rsp+30h] [rbp-30h]
  _D3DKMT_OFFERALLOCATIONS v16; // [rsp+38h] [rbp-28h] BYREF
  int v17; // [rsp+70h] [rbp+10h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v14);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v15 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    if ( v7 )
    {
      v17 = -1073741811;
      v10 = *(unsigned int *)(v7 + 28);
      *((_DWORD *)&v16.Flags + 1) = 0;
      memset(&v16.hDevice + 1, 0, 20);
      if ( (_DWORD)v10
        && (v8 = ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) % v10,
            ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) / v10 >= 4) )
      {
        v16.hDevice = *(_DWORD *)(v7 + 24);
        v16.Flags.Value = *(_DWORD *)(v7 + 36);
        v16.Priority = *(_DWORD *)(v7 + 32);
        v16.NumAllocations = v10;
        if ( *(_BYTE *)(v7 + 40) )
          v16.pResources = (D3DKMT_HANDLE *)(v7 + 44);
        else
          v16.HandleList = (const D3DKMT_HANDLE *)(v7 + 44);
        v17 = DxgkOfferAllocations(&v16, v8, v7);
      }
      else
      {
        v11 = WdLogNewEntry5_WdError(v9, v8);
        *(_QWORD *)(v11 + 24) = 1247LL;
        WdLogEvent5_WdError(v11);
      }
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v17, 4u);
      v5 = 1;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 1237LL;
    WdLogEvent5_WdError(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v5;
}
