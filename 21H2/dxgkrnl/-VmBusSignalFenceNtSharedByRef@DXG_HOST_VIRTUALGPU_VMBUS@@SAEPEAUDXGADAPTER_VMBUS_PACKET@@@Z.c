/*
 * XREFs of ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024EFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C004064C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00E9230 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0237938 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C023AA1C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalFenceNtSharedByRef(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int **v15; // rdi
  __int64 v16; // rdx
  _BYTE v17[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v18; // [rsp+28h] [rbp-30h]
  int v19; // [rsp+30h] [rbp-28h]
  _BYTE v20[32]; // [rsp+38h] [rbp-20h] BYREF
  int v21; // [rsp+60h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v18);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v19 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( !v7 )
      goto LABEL_12;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v20, *((struct _KTHREAD ***)a1 + 7));
    v8 = *(unsigned int *)(v7 + 24);
    v9 = *((_QWORD *)a1 + 7);
    v10 = (*(_DWORD *)(v7 + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v10 < *(_DWORD *)(v9 + 256) )
    {
      v11 = *(_QWORD *)(v9 + 240);
      v8 = ((unsigned int)v8 >> 25) & 0x60;
      v9 = *(unsigned int *)(v11 + 16 * v10 + 8);
      if ( (_BYTE)v8 == (*(_BYTE *)(v11 + 16 * v10 + 8) & 0x60) && (v9 & 0x2000) == 0 && (v9 & 0x1F) != 0 )
      {
        v9 &= 0x1Fu;
        if ( (_BYTE)v9 == 13 )
        {
          v15 = *(unsigned int ***)(v11 + 16LL * (unsigned int)v10);
          if ( v15 && (*(_DWORD *)v15 == 11 || *(_DWORD *)v15 == 8) )
          {
            DXGSHAREDVMOBJECT::AddReference((DXGSHAREDVMOBJECT *)v15, v8);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
            v21 = DxgkSignalSynchronizationObjectFromGpuByReference(v15[1], *(_QWORD *)(v7 + 32), *(_DWORD *)(v7 + 28));
            DXGSHAREDVMOBJECT::ReleaseReference((DXGSHAREDVMOBJECT *)v15, v16);
            goto LABEL_11;
          }
        }
        else
        {
          v12 = WdLogNewEntry5_WdError(v9, v8);
          *(_QWORD *)(v12 + 24) = 316LL;
          WdLogEvent5_WdError(v12);
        }
      }
    }
    v13 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v13 + 24) = *(unsigned int *)(v7 + 24);
    WdLogEvent5_WdError(v13);
    v21 = -1073741811;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
LABEL_11:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v21, 4u);
    v5 = 1;
    goto LABEL_12;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 3635LL;
  WdLogEvent5_WdError(v6);
LABEL_12:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v5;
}
