/*
 * XREFs of ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0244FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00405FC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0126EB0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  char v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  PVOID v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  struct _D3DKMT_QUERYADAPTERINFO v20; // [rsp+20h] [rbp-30h] BYREF
  char v21[8]; // [rsp+38h] [rbp-18h] BYREF
  DXGPUSHLOCK *v22; // [rsp+40h] [rbp-10h]
  int v23; // [rsp+48h] [rbp-8h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v22);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v23 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 4218LL;
    WdLogEvent5_WdError(v6);
    goto LABEL_17;
  }
  v7 = 0;
  v9 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( !v9 )
    goto LABEL_17;
  memset(&v20, 0, sizeof(v20));
  v20.Type = *(_DWORD *)(v9 + 24);
  v10 = *(unsigned int *)(v9 + 28);
  if ( (_DWORD)v10 )
  {
    v11 = *((unsigned int *)a1 + 22) - 32LL;
    if ( v11 >= v10 && (unsigned int)v10 <= 0x20000 )
    {
      v20.PrivateDriverDataSize = *(_DWORD *)(v9 + 28);
      v12 = operator new[](*(unsigned int *)(v9 + 28), 0x4B677844u, (POOL_TYPE)512);
      v20.pPrivateDriverData = v12;
      if ( v12 )
      {
        memmove(v12, (const void *)(v9 + 32), *(unsigned int *)(v9 + 28));
        if ( (int)DxgkQueryAdapterInfoInternal(&v20, 0, *(struct DXGADAPTER **)(*((_QWORD *)a1 + 5) + 16LL)) >= 0 )
        {
          VmBusCompletePacket(
            *((struct VMBPACKETCOMPLETION__ **)a1 + 9),
            v20.pPrivateDriverData,
            v20.PrivateDriverDataSize);
          v7 = 1;
        }
      }
      else
      {
        v17 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
        *(_QWORD *)(v17 + 24) = 4239LL;
        WdLogEvent5_WdLowResource(v17);
      }
      goto LABEL_14;
    }
    v18 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v18 + 24) = *(unsigned int *)(v9 + 28);
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v8, v10);
    *(_QWORD *)(v18 + 24) = 4250LL;
  }
  WdLogEvent5_WdError(v18);
LABEL_14:
  if ( v20.pPrivateDriverData )
    operator delete[](v20.pPrivateDriverData);
  v5 = v7;
LABEL_17:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
  return v5;
}
