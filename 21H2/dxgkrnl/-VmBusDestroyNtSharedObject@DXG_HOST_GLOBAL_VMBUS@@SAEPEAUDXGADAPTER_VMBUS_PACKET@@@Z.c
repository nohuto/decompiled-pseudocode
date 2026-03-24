/*
 * XREFs of ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0240120
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002630 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00405FC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C010B190 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C023AA1C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyNtSharedObject(struct _KTHREAD ***a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // r9d
  struct _KTHREAD **v6; // r10
  __int64 v7; // rax
  struct _KTHREAD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  DXGSHAREDVMOBJECT *v12; // rsi
  struct _KTHREAD **v13; // rcx
  __int64 v14; // rdx
  struct VMBPACKETCOMPLETION__ *v15; // rcx
  int v16; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v17[24]; // [rsp+28h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-48h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( !v2 )
    return 0;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v17, a1[7]);
  v5 = *(_DWORD *)(v2 + 24);
  v6 = a1[7];
  v7 = (v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 >= *((_DWORD *)v6 + 64)
    || (v8 = v6[30],
        v4 = (v5 >> 25) & 0x60,
        v3 = *((unsigned int *)v8 + 4 * v7 + 2),
        ((v5 >> 25) & 0x60) != (*((_BYTE *)v8 + 16 * v7 + 8) & 0x60))
    || (v3 & 0x2000) != 0
    || (v3 & 0x1F) == 0 )
  {
LABEL_8:
    v10 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v10 + 24) = *(unsigned int *)(v2 + 24);
    WdLogEvent5_WdError(v10);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    return 0;
  }
  v3 &= 0x1Fu;
  if ( (_BYTE)v3 != 13 )
  {
    v9 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v9 + 24) = 316LL;
    WdLogEvent5_WdError(v9);
    goto LABEL_8;
  }
  v12 = (DXGSHAREDVMOBJECT *)*((_QWORD *)v8 + 2 * (unsigned int)v7);
  if ( !v12 )
    goto LABEL_8;
  HMGRTABLE::FreeHandle((HMGRTABLE *)(v6 + 30), v5);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  v13 = a1[7];
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v13[7], &ApcState);
  DXGSHAREDVMOBJECT::ReleaseReference(v12, v14);
  KeUnstackDetachProcess(&ApcState);
  v15 = (struct VMBPACKETCOMPLETION__ *)a1[9];
  v16 = 0;
  VmBusCompletePacket(v15, &v16, 4u);
  return 1;
}
