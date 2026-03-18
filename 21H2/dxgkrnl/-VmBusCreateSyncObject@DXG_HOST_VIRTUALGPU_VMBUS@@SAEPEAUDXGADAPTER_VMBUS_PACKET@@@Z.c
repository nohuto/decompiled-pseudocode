/*
 * XREFs of ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036A950
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C004B9B0 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C004BA80 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJECT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C754 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJEC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1C0199960 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // si
  char v4; // di
  __int64 v5; // rbx
  const wchar_t *v6; // r9
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rbx
  int v10; // ecx
  struct DXGADAPTER *v11; // r12
  __int64 Pool2; // r14
  __int64 v14; // rax
  int v15; // ecx
  __int64 SynchronizationObjectImpl; // r12
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  int v20; // ecx
  __int64 v21; // [rsp+28h] [rbp-39h]
  char v22[8]; // [rsp+58h] [rbp-9h] BYREF
  DXGPUSHLOCK *v23; // [rsp+60h] [rbp-1h]
  int v24; // [rsp+68h] [rbp+7h]
  _DWORD v25[2]; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+78h] [rbp+17h]
  __int64 v27; // [rsp+80h] [rbp+1Fh]
  __int64 v28; // [rsp+88h] [rbp+27h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v23);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v4 = 0;
  v24 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    v5 = 3690LL;
    WdLogSingleEntry1(2LL, 3690LL);
    v6 = L"The adapter is already closed by the guest";
LABEL_17:
    v21 = v5;
    goto LABEL_18;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATESYNCOBJECT>((__int64)a1);
  v9 = v7;
  if ( v7 )
  {
    v10 = *(_DWORD *)(v7 + 32);
    if ( v10 == 6 )
    {
      v5 = 3695LL;
      WdLogSingleEntry1(2LL, 3695LL);
      v6 = L"D3DDDI_PERIODIC_MONITORED_FENCE is not supported";
      goto LABEL_17;
    }
    if ( v10 >= 7 )
    {
      WdLogSingleEntry1(2LL, *(int *)(v7 + 32));
      v6 = L"Improper synchronzation type detected: %lu";
      v21 = *(int *)(v9 + 32);
LABEL_18:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v6, v21, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_19;
    }
    v11 = 0LL;
    if ( !*(_DWORD *)(v7 + 24) )
    {
      if ( v10 == 5 )
      {
        v5 = 3710LL;
        WdLogSingleEntry1(2LL, 3710LL);
        v6 = L"Device handle is zero for device sync objects";
        goto LABEL_17;
      }
      if ( (*(_DWORD *)(v7 + 36) & 1) == 0 )
      {
        v5 = 3715LL;
        WdLogSingleEntry1(2LL, 3715LL);
        v6 = L"Device handle is zero when a non-shared sync object is created";
        goto LABEL_17;
      }
      v11 = *(struct DXGADAPTER **)(*((_QWORD *)a1 + 10) + 16LL);
    }
    Pool2 = 0LL;
    if ( v10 == 4 )
    {
      if ( !*(_QWORD *)(v7 + 40) )
      {
        v5 = 3725LL;
        WdLogSingleEntry1(2LL, 3725LL);
        v6 = L"Invalid CPU event pointer";
        goto LABEL_17;
      }
      Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL, v8);
      if ( !Pool2 )
      {
        WdLogSingleEntry1(6LL, 3732LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
          3732LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_19;
      }
      v14 = *((_QWORD *)a1 + 11);
      *(_QWORD *)Pool2 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 160LL;
      *(_WORD *)(Pool2 + 16) = 256;
      v15 = *(_DWORD *)(v14 + 424);
      *(_QWORD *)(Pool2 + 8) = *(_QWORD *)(v9 + 40);
      *(_BYTE *)(Pool2 + 19) = (v15 & 0x10) != 0;
      *(_QWORD *)(v9 + 40) = Pool2;
      DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
    }
    SynchronizationObjectImpl = (int)DxgkCreateSynchronizationObjectImpl(
                                       (struct DXGADAPTER *)(v9 + 24),
                                       *(_DWORD *)(v9 + 120) | 0x80000000,
                                       0LL,
                                       v11,
                                       0LL);
    if ( Pool2 )
      DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
    if ( (int)SynchronizationObjectImpl < 0 )
    {
      WdLogSingleEntry1(2LL, SynchronizationObjectImpl);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkCreateSynchronizationObjectInternal failed: 0x%I64x",
        SynchronizationObjectImpl,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_21;
    }
    v25[0] = *(_DWORD *)(v9 + 112);
    v17 = *(_DWORD *)(v9 + 32);
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    if ( v17 == 5 )
    {
      LODWORD(v28) = *(_DWORD *)(v9 + 48);
      v27 = *(_QWORD *)(v9 + 48);
      v18 = *(_QWORD *)(v9 + 56);
    }
    else
    {
      if ( v17 != 6 )
        goto LABEL_33;
      LODWORD(v28) = *(_DWORD *)(v9 + 56);
      v27 = *(_QWORD *)(v9 + 48);
      v18 = *(_QWORD *)(v9 + 64);
    }
    v26 = v18;
LABEL_33:
    v19 = *(_DWORD *)(v9 + 36);
    v20 = *(_DWORD *)(v9 + 104);
    v25[1] = v20;
    if ( (v19 & 1) != 0 && !v20 )
    {
      WdLogSingleEntry1(1LL, 3778LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Output.hGlobalSyncObject", 3778LL, 0LL, 0LL, 0LL, 0LL);
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v25, 0x20u);
    goto LABEL_20;
  }
LABEL_19:
  v3 = 0;
LABEL_20:
  v4 = v3;
LABEL_21:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  return v4;
}
