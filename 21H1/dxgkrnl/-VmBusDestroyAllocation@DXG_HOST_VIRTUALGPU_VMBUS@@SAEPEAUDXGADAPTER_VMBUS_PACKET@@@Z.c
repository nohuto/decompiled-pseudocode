/*
 * XREFs of ?VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023BBE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003E8A4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003F9E8 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkDestroyAllocation2 @ 0x1C010EA00 (DxgkDestroyAllocation2.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDestroyAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rax
  _DWORD *v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r9
  int v11; // eax
  struct VMBPACKETCOMPLETION__ *v12; // rcx
  _DWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  _DWORD *v14; // [rsp+28h] [rbp-28h]
  int v15; // [rsp+30h] [rbp-20h]
  int v16; // [rsp+34h] [rbp-1Ch]
  _BYTE v17[8]; // [rsp+38h] [rbp-18h] BYREF
  DXGPUSHLOCK *v18; // [rsp+40h] [rbp-10h]
  int v19; // [rsp+48h] [rbp-8h]
  int v20; // [rsp+60h] [rbp+10h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v18);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v19 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v8 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    if ( !v8 )
      goto LABEL_4;
    v10 = (unsigned int)v8[8];
    if ( !(_DWORD)v10 || ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) / v10 >= 4 )
    {
      v13[0] = v8[6];
      v13[1] = v8[7];
      v14 = v8 + 10;
      v16 = v8[9];
      v15 = v10;
      v11 = DxgkDestroyAllocation2((ULONG64)v13);
      v12 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      v20 = v11;
      VmBusCompletePacket(v12, &v20, 4u);
      goto LABEL_5;
    }
    v6 = WdLogNewEntry5_WdError(v9, ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) % v10);
    *(_QWORD *)(v6 + 24) = 1199LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 1192LL;
  }
  WdLogEvent5_WdError(v6);
LABEL_4:
  v5 = 0;
LABEL_5:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v5;
}
