/*
 * XREFs of ?VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0243F90
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F7EC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040074 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkpAcquireKeyedMutexFromHandle @ 0x1C0238BE4 (DxgkpAcquireKeyedMutexFromHandle.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C0290D08 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpenKeyedMutex(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int *v5; // rdi
  unsigned int v6; // esi
  __int64 v7; // rax
  DXGKEYEDMUTEX *v9; // rax
  DXGKEYEDMUTEX *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v5 = (unsigned int *)v2;
  if ( !v2 )
    return 0;
  v6 = *(_DWORD *)(v2 + 28) + 32;
  if ( *(_DWORD *)(v2 + 28) >= 0xFFFFFFE0 )
    return 0;
  if ( *((_DWORD *)a1 + 22) < v6 )
  {
    v7 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v7 + 24) = *((unsigned int *)a1 + 22);
    *(_QWORD *)(v7 + 32) = v6;
    WdLogEvent5_WdError(v7);
    return 0;
  }
  v14 = 0LL;
  v9 = (DXGKEYEDMUTEX *)DxgkpAcquireKeyedMutexFromHandle(*((struct _KTHREAD ***)a1 + 7), *(_DWORD *)(v2 + 24));
  v10 = v9;
  if ( v9 )
  {
    HIDWORD(v14) = DXGKEYEDMUTEX::Open(v9, (unsigned int *)&v14, v5 + 8, v5[7], 0);
    if ( v14 < 0 )
    {
      v13 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v13 + 24) = v5[6];
      *(_QWORD *)(v13 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v13);
    }
    DXGKEYEDMUTEX::ReleaseReference(v10, v11);
  }
  else
  {
    HIDWORD(v14) = -1073741811;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v14, 8u);
  return 1;
}
