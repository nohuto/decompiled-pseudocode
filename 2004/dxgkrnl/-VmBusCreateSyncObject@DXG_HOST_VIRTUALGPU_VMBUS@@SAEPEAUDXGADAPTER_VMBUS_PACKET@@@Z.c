/*
 * XREFs of ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023EF70
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJECT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F8B4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJEC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C010C750 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // r14
  char v6; // di
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r12
  void *v14; // rsi
  _OWORD *PoolWithTag; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  int SynchronizationObjectImpl; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r12
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  char v32[8]; // [rsp+20h] [rbp-40h] BYREF
  DXGPUSHLOCK *v33; // [rsp+28h] [rbp-38h]
  int v34; // [rsp+30h] [rbp-30h]
  _DWORD v35[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v36; // [rsp+40h] [rbp-20h]
  __int64 v37; // [rsp+48h] [rbp-18h]
  __int64 v38; // [rsp+50h] [rbp-10h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v33);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v6 = 0;
  v34 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v7 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v7 + 24) = 3271LL;
LABEL_17:
    v12 = v7;
    goto LABEL_18;
  }
  v8 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATESYNCOBJECT>((__int64)a1);
  v10 = v8;
  if ( !v8 )
  {
LABEL_19:
    v5 = 0;
LABEL_20:
    v6 = v5;
    goto LABEL_21;
  }
  v11 = *(unsigned int *)(v8 + 32);
  if ( (_DWORD)v11 == 6 )
  {
    v7 = WdLogNewEntry5_WdError(v11, v9);
    *(_QWORD *)(v7 + 24) = 3276LL;
    goto LABEL_17;
  }
  if ( (int)v11 >= 7 )
  {
    v12 = WdLogNewEntry5_WdError(v11, v9);
    *(_QWORD *)(v12 + 24) = *(int *)(v10 + 32);
LABEL_18:
    WdLogEvent5_WdError(v12);
    goto LABEL_19;
  }
  v13 = 0LL;
  if ( !*(_DWORD *)(v8 + 24) )
  {
    if ( (_DWORD)v11 == 5 )
    {
      v7 = WdLogNewEntry5_WdError(v11, v9);
      *(_QWORD *)(v7 + 24) = 3291LL;
      goto LABEL_17;
    }
    if ( (*(_DWORD *)(v8 + 36) & 1) == 0 )
    {
      v7 = WdLogNewEntry5_WdError(v11, v9);
      *(_QWORD *)(v7 + 24) = 3296LL;
      goto LABEL_17;
    }
    v13 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  }
  v14 = 0LL;
  if ( (_DWORD)v11 == 4 )
  {
    if ( !*(_QWORD *)(v8 + 40) )
    {
      v7 = WdLogNewEntry5_WdError(v11, v9);
      *(_QWORD *)(v7 + 24) = 3306LL;
      goto LABEL_17;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v21 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
      *(_QWORD *)(v21 + 24) = 3313LL;
      WdLogEvent5_WdLowResource(v21);
      goto LABEL_19;
    }
    *PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *(_QWORD *)PoolWithTag = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 104LL) + 128LL);
    *((_BYTE *)PoolWithTag + 17) = 1;
    *((_QWORD *)PoolWithTag + 1) = *(_QWORD *)(v10 + 40);
    *(_QWORD *)(v10 + 40) = PoolWithTag;
  }
  SynchronizationObjectImpl = DxgkCreateSynchronizationObjectImpl(
                                v10 + 24,
                                *(_DWORD *)(v10 + 120) | 0x80000000,
                                0LL,
                                v13);
  v25 = SynchronizationObjectImpl;
  if ( SynchronizationObjectImpl >= 0 )
  {
    v35[0] = *(_DWORD *)(v10 + 112);
    v26 = *(_DWORD *)(v10 + 32);
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    if ( v26 == 5 )
    {
      LODWORD(v38) = *(_DWORD *)(v10 + 48);
      v37 = *(_QWORD *)(v10 + 48);
      v27 = *(_QWORD *)(v10 + 56);
    }
    else
    {
      if ( v26 != 6 )
        goto LABEL_31;
      LODWORD(v38) = *(_DWORD *)(v10 + 56);
      v37 = *(_QWORD *)(v10 + 48);
      v27 = *(_QWORD *)(v10 + 64);
    }
    v36 = v27;
LABEL_31:
    v28 = *(_DWORD *)(v10 + 36);
    v29 = *(unsigned int *)(v10 + 104);
    v35[1] = *(_DWORD *)(v10 + 104);
    if ( (v28 & 1) != 0 && !(_DWORD)v29 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v24, v29);
      *(_QWORD *)(v30 + 24) = 3351LL;
      WdLogEvent5_WdAssertion(v30);
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v35, 0x20u);
    goto LABEL_20;
  }
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  v31 = WdLogNewEntry5_WdError(v24, v23);
  *(_QWORD *)(v31 + 24) = v25;
  WdLogEvent5_WdError(v31);
LABEL_21:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
  return v6;
}
