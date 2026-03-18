/*
 * XREFs of ?VmBusSignalFenceNtSharedByRefCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D8DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0039C38 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F6EC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C00D5F34 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00E7990 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0236A18 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0239AFC (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalFenceNtSharedByRefCblt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // di
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  DXGSHAREDVMOBJECT *v14; // rsi
  _BYTE v15[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v16[32]; // [rsp+38h] [rbp-20h] BYREF
  int v17; // [rsp+60h] [rbp+8h] BYREF

  v1 = ((unsigned __int64)a1 - 40) & -(__int64)(a1 != 0LL);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v16,
    (struct _KTHREAD **)(*(_QWORD *)(v1 + 0x50) + 232LL));
  v4 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(v1 + 80) + 165LL) )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = 1254LL;
    WdLogEvent5_WdError(v5);
    goto LABEL_14;
  }
  v6 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((v1 + 40) & -(__int64)(v1 != 0));
  if ( !v6 )
    goto LABEL_14;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v15, *(struct _KTHREAD ***)(v1 + 96));
  v7 = *(unsigned int *)(v6 + 24);
  v8 = *(_QWORD *)(v1 + 96);
  v9 = (*(_DWORD *)(v6 + 24) >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 < *(_DWORD *)(v8 + 256) )
  {
    v10 = *(_QWORD *)(v8 + 240);
    v7 = ((unsigned int)v7 >> 25) & 0x60;
    v8 = *(unsigned int *)(v10 + 16 * v9 + 8);
    if ( (_BYTE)v7 == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60) && (v8 & 0x2000) == 0 && (v8 & 0x1F) != 0 )
    {
      v8 &= 0x1Fu;
      if ( (_BYTE)v8 == 13 )
      {
        v14 = *(DXGSHAREDVMOBJECT **)(v10 + 16LL * (unsigned int)v9);
        if ( v14 && (*(_DWORD *)v14 == 11 || *(_DWORD *)v14 == 8) )
        {
          DXGSHAREDVMOBJECT::AddReference(v14);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
          v17 = DxgkSignalSynchronizationObjectFromGpuByReference(
                  *((_QWORD *)v14 + 1),
                  *(_QWORD *)(v6 + 32),
                  *(unsigned int *)(v6 + 28));
          DXGSHAREDVMOBJECT::ReleaseReference(v14);
          goto LABEL_11;
        }
      }
      else
      {
        v11 = WdLogNewEntry5_WdError(v8, v7);
        *(_QWORD *)(v11 + 24) = 267LL;
        WdLogEvent5_WdError(v11);
      }
    }
  }
  v12 = WdLogNewEntry5_WdError(v8, v7);
  *(_QWORD *)(v12 + 24) = *(unsigned int *)(v6 + 24);
  WdLogEvent5_WdError(v12);
  v17 = -1073741811;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
LABEL_11:
  if ( v17 < 0 )
    HandleAsyncCommandError((_QWORD *)v1, (unsigned int)v17, *(_DWORD *)(v6 + 28), 1);
  VmBusCompletePacket(*(struct VMBPACKETCOMPLETION__ **)(v1 + 112), &v17, 4u);
  v4 = 1;
LABEL_14:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v4;
}
