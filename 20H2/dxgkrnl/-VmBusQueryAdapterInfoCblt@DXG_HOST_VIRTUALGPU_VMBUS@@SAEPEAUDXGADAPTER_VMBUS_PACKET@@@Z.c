/*
 * XREFs of ?VmBusQueryAdapterInfoCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D8870
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00269D8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0039C38 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F69C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0123720 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAdapterInfoCblt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rsi
  _DWORD *v8; // r14
  unsigned __int64 v9; // rdx
  unsigned int v10; // ebp
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  struct _D3DKMT_QUERYADAPTERINFO v19; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v20[32]; // [rsp+38h] [rbp-20h] BYREF

  v1 = ((unsigned __int64)a1 - 40) & -(__int64)(a1 != 0LL);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v20,
    (struct _KTHREAD **)(*(_QWORD *)(v1 + 0x50) + 232LL));
  v4 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(v1 + 80) + 165LL) )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = 1483LL;
LABEL_15:
    WdLogEvent5_WdError(v5);
    goto LABEL_13;
  }
  v6 = v1 + 40;
  if ( !v1 )
    v6 = 0LL;
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>(v6);
  if ( v7 )
  {
    memset(&v19, 0, sizeof(v19));
    v8 = 0LL;
    v19.Type = *(_DWORD *)(v7 + 24);
    v9 = *(unsigned int *)(v7 + 28);
    v10 = v9 + 4;
    if ( (_DWORD)v9 )
    {
      v11 = *(unsigned int *)(v1 + 128) - 32LL;
      if ( v11 < v9 || (unsigned int)v9 > 0x20000 )
      {
        v5 = WdLogNewEntry5_WdError(v11, v9);
        *(_QWORD *)(v5 + 24) = *(unsigned int *)(v7 + 28);
        goto LABEL_15;
      }
      v19.PrivateDriverDataSize = *(_DWORD *)(v7 + 28);
      v12 = operator new[](v10, v9, 64LL);
      v8 = (_DWORD *)v12;
      if ( !v12 )
      {
        v17 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
        *(_QWORD *)(v17 + 24) = 1507LL;
        WdLogEvent5_WdLowResource(v17);
        goto LABEL_13;
      }
      v19.pPrivateDriverData = (void *)(v12 + 4);
      memmove((void *)(v12 + 4), (const void *)(v7 + 32), *(unsigned int *)(v7 + 28));
    }
    *v8 = DxgkQueryAdapterInfoInternal(&v19, 0, *(struct DXGADAPTER **)(*(_QWORD *)(v1 + 80) + 16LL));
    VmBusCompletePacket(*(struct VMBPACKETCOMPLETION__ **)(v1 + 112), v8, v10);
    v4 = 1;
    operator delete[](v8);
  }
LABEL_13:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return v4;
}
