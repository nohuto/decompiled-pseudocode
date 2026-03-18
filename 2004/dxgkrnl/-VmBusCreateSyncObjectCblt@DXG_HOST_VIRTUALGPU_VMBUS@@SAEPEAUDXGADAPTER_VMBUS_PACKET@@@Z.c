/*
 * XREFs of ?VmBusCreateSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D7E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0039D88 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJECT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F8B4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJEC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z @ 0x1C00D6EA0 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z @ 0x1C00D7070 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C010C750 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateSyncObjectCblt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r12
  char v13; // r15
  struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *v14; // r14
  __int64 Pool2; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 SynchronizationObjectImpl; // r12
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  _BYTE v32[24]; // [rsp+20h] [rbp-40h] BYREF
  _DWORD v33[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v34; // [rsp+40h] [rbp-20h]
  __int64 v35; // [rsp+48h] [rbp-18h]
  __int64 v36; // [rsp+50h] [rbp-10h]

  v1 = ((unsigned __int64)a1 - 40) & -(__int64)(a1 != 0LL);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v32,
    (struct _KTHREAD **)(*(_QWORD *)(v1 + 0x50) + 232LL));
  v4 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(v1 + 80) + 165LL) )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = 960LL;
LABEL_19:
    v11 = v5;
    goto LABEL_20;
  }
  v6 = v1 + 40;
  if ( !v1 )
    v6 = 0LL;
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATESYNCOBJECT>(v6);
  v9 = v7;
  if ( !v7 )
    goto LABEL_21;
  v10 = *(unsigned int *)(v7 + 32);
  if ( (_DWORD)v10 == 6 )
  {
    v5 = WdLogNewEntry5_WdError(v10, v8);
    *(_QWORD *)(v5 + 24) = 965LL;
    goto LABEL_19;
  }
  if ( (int)v10 < 7 )
  {
    v12 = 0LL;
    v13 = 1;
    if ( !*(_DWORD *)(v7 + 24) )
    {
      if ( (_DWORD)v10 == 5 )
      {
        v5 = WdLogNewEntry5_WdError(v10, v8);
        *(_QWORD *)(v5 + 24) = 980LL;
        goto LABEL_19;
      }
      if ( (*(_DWORD *)(v7 + 36) & 1) == 0 )
      {
        v5 = WdLogNewEntry5_WdError(v10, v8);
        *(_QWORD *)(v5 + 24) = 985LL;
        goto LABEL_19;
      }
      v12 = *(_QWORD *)(*(_QWORD *)(v1 + 80) + 16LL);
    }
    v14 = 0LL;
    if ( (_DWORD)v10 == 4 )
    {
      if ( !*(_QWORD *)(v7 + 40) )
      {
        v5 = WdLogNewEntry5_WdError(v10, v8);
        *(_QWORD *)(v5 + 24) = 995LL;
        goto LABEL_19;
      }
      Pool2 = ExAllocatePool2(64LL, 56LL, 1265072196LL);
      v14 = (struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *)Pool2;
      if ( !Pool2 )
      {
        v21 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
        *(_QWORD *)(v21 + 24) = 1002LL;
        WdLogEvent5_WdLowResource(v21);
        goto LABEL_21;
      }
      v22 = *(_QWORD *)(*(_QWORD *)(v1 + 80) + 104LL) + 128LL;
      *(_WORD *)(Pool2 + 16) = 256;
      *(_QWORD *)(Pool2 + 24) = v22;
      *(_BYTE *)(Pool2 + 19) = 1;
      *(_QWORD *)(Pool2 + 8) = *(_QWORD *)(v9 + 40);
      *(_QWORD *)(v9 + 40) = Pool2;
      DXG_SIGNAL_GUEST_CPU_EVENT_CBLT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *)Pool2);
    }
    SynchronizationObjectImpl = (int)DxgkCreateSynchronizationObjectImpl(
                                       v9 + 24,
                                       *(_DWORD *)(v9 + 120) | 0x80000000,
                                       0LL,
                                       v12);
    if ( v14 )
      DXG_SIGNAL_GUEST_CPU_EVENT_CBLT::ReleaseReference(v14);
    if ( (int)SynchronizationObjectImpl < 0 )
    {
      v31 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v31 + 24) = SynchronizationObjectImpl;
      WdLogEvent5_WdError(v31);
      goto LABEL_23;
    }
    v33[0] = *(_DWORD *)(v9 + 112);
    v26 = *(_DWORD *)(v9 + 32);
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    if ( v26 == 5 )
    {
      LODWORD(v36) = *(_DWORD *)(v9 + 48);
      v35 = *(_QWORD *)(v9 + 48);
      v27 = *(_QWORD *)(v9 + 56);
    }
    else
    {
      if ( v26 != 6 )
        goto LABEL_35;
      LODWORD(v36) = *(_DWORD *)(v9 + 56);
      v35 = *(_QWORD *)(v9 + 48);
      v27 = *(_QWORD *)(v9 + 64);
    }
    v34 = v27;
LABEL_35:
    v28 = *(_DWORD *)(v9 + 36);
    v29 = *(unsigned int *)(v9 + 104);
    v33[1] = *(_DWORD *)(v9 + 104);
    if ( (v28 & 1) != 0 && !(_DWORD)v29 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v29, v23);
      *(_QWORD *)(v30 + 24) = 1048LL;
      WdLogEvent5_WdAssertion(v30);
    }
    VmBusCompletePacket(*(struct VMBPACKETCOMPLETION__ **)(v1 + 112), v33, 0x20u);
    goto LABEL_22;
  }
  v11 = WdLogNewEntry5_WdError(v10, v8);
  *(_QWORD *)(v11 + 24) = *(int *)(v9 + 32);
LABEL_20:
  WdLogEvent5_WdError(v11);
LABEL_21:
  v13 = 0;
LABEL_22:
  v4 = v13;
LABEL_23:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
  return v4;
}
