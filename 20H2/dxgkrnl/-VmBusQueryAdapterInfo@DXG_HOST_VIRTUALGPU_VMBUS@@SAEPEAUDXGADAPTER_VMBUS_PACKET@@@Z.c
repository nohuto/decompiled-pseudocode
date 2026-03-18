/*
 * XREFs of ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02440D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F69C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0123720 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  char v7; // r14
  __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  PVOID v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v18; // rax
  struct _D3DKMT_QUERYADAPTERINFO v19; // [rsp+20h] [rbp-30h] BYREF
  char v20[8]; // [rsp+38h] [rbp-18h] BYREF
  DXGPUSHLOCK *v21; // [rsp+40h] [rbp-10h]
  int v22; // [rsp+48h] [rbp-8h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v21);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v22 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 4195LL;
    WdLogEvent5_WdError(v6);
    goto LABEL_15;
  }
  v7 = 0;
  v8 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( !v8 )
    goto LABEL_15;
  memset(&v19, 0, sizeof(v19));
  v19.Type = *(_DWORD *)(v8 + 24);
  v9 = *(unsigned int *)(v8 + 28);
  if ( !(_DWORD)v9 )
    goto LABEL_10;
  v10 = *((unsigned int *)a1 + 22) - 32LL;
  if ( v10 < v9 || (unsigned int)v9 > 0x20000 )
  {
    v18 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v18 + 24) = *(unsigned int *)(v8 + 28);
    WdLogEvent5_WdError(v18);
    goto LABEL_12;
  }
  v19.PrivateDriverDataSize = *(_DWORD *)(v8 + 28);
  v11 = operator new[](*(unsigned int *)(v8 + 28), 0x4B677844u, (POOL_TYPE)512);
  v19.pPrivateDriverData = v11;
  if ( v11 )
  {
    memmove(v11, (const void *)(v8 + 32), *(unsigned int *)(v8 + 28));
LABEL_10:
    if ( (int)DxgkQueryAdapterInfoInternal(&v19, 0, *(struct DXGADAPTER **)(*((_QWORD *)a1 + 5) + 16LL)) >= 0 )
    {
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v19.pPrivateDriverData, v19.PrivateDriverDataSize);
      v7 = 1;
    }
    goto LABEL_12;
  }
  v16 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
  *(_QWORD *)(v16 + 24) = 4216LL;
  WdLogEvent5_WdLowResource(v16);
LABEL_12:
  if ( v19.pPrivateDriverData )
    operator delete[](v19.pPrivateDriverData);
  v5 = v7;
LABEL_15:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return v5;
}
