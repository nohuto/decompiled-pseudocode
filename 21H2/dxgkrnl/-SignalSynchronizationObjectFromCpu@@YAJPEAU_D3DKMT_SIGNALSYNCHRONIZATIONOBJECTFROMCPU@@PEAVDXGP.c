/*
 * XREFs of ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C034166C
 * Callers:
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0343870 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0381650 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IEE@Z @ 0x1C002C578 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C002C640 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1C0054230 (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C016A93C (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C02DB630 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C037CE14 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 */

__int64 __fastcall SignalSynchronizationObjectFromCpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  UINT ObjectCount; // edx
  const void *Elements; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r15
  UINT v13; // r8d
  __int64 v14; // rbx
  DXGPUSHLOCK *v15; // rcx
  D3DKMT_HANDLE v16; // r15d
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // ecx
  __int64 v20; // r15
  struct DXGDEVICE *v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rcx
  unsigned int v24; // r9d
  __int64 v25; // rbx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v27; // r9d
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  struct _D3DDDICB_SIGNALFLAGS v33[2]; // [rsp+28h] [rbp-E0h]
  _QWORD v34[2]; // [rsp+78h] [rbp-90h] BYREF
  char v35; // [rsp+88h] [rbp-80h]
  PVOID P; // [rsp+90h] [rbp-78h] BYREF
  char v37; // [rsp+98h] [rbp-70h] BYREF
  int v38; // [rsp+B8h] [rbp-50h]
  PVOID v39; // [rsp+C0h] [rbp-48h] BYREF
  char v40; // [rsp+C8h] [rbp-40h] BYREF
  int v41; // [rsp+E8h] [rbp-20h]
  _QWORD v42[4]; // [rsp+F0h] [rbp-18h] BYREF
  char v43; // [rsp+110h] [rbp+8h]
  __int64 v44; // [rsp+148h] [rbp+40h]

  LODWORD(v34[0]) = -1;
  v34[1] = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v35 = 1;
    LODWORD(v34[0]) = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2044);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v34, 2044);
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 5256LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice != NULL", 5256LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a1->ObjectCount )
  {
    WdLogSingleEntry1(1LL, 5257LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pSignalSyncObject->ObjectCount > 0",
      5257LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
    WdLogSingleEntry1(1LL, 5258LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore() != NULL",
      5258LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ObjectCount = a1->ObjectCount;
  v39 = 0LL;
  v41 = 0;
  P = 0LL;
  v38 = 0;
  Elements = (const void *)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(
                             (__int64 *)&v39,
                             ObjectCount,
                             v6,
                             v7);
  if ( !Elements
    || (v44 = PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements((__int64 *)&P, a1->ObjectCount, v10, v11),
        (v12 = v44) == 0) )
  {
    LODWORD(v22) = -1073741801;
    goto LABEL_52;
  }
  v13 = a1->ObjectCount;
  v14 = 0LL;
  if ( !v13 )
  {
LABEL_30:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v42,
      Elements,
      v13);
    if ( v43 )
    {
      if ( v42[0] )
      {
        WdLogSingleEntry1(2LL, 5345LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The same sync object handle is passed twice",
          5345LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_48:
        LODWORD(v22) = -1073741811;
        goto LABEL_50;
      }
      LODWORD(v22) = -1073741801;
    }
    else
    {
      if ( (*((_BYTE *)a3 + 1869) & 1) == 0 )
      {
        v23 = a1->ObjectCount;
        v24 = 0;
        if ( !(_DWORD)v23 )
        {
LABEL_43:
          v28 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, const UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 624LL)
                                                                                                + 8LL)
                                                                                    + 656LL))(
                  v23,
                  v12,
                  a1->Flags.Value,
                  a1->FenceValueArray);
          v22 = v28;
          if ( v28 < 0 )
          {
            WdLogSingleEntry1(2LL, v28);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"VidSchSignalSyncObjectsFromCpu failed with return code 0x%I64x.",
              v22,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            v33[0] = (struct _D3DDDICB_SIGNALFLAGS)a1->ObjectCount;
            McTemplateK0pqPR1XR1_EtwWriteTransfer(
              v33[0].Value,
              &EventSignalSynchronizationObjectFromCpu,
              v29,
              a3,
              *(_QWORD *)&v33[0].0,
              v12,
              a1->FenceValueArray);
          }
          goto LABEL_50;
        }
        while ( 1 )
        {
          v25 = v24;
          VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                               *((DXGSYNCOBJECT **)Elements + v24),
                               *((struct ADAPTER_RENDER **)a3 + 2));
          *(_QWORD *)(v12 + 8 * v25) = VidSchSyncObject;
          if ( !VidSchSyncObject )
            break;
          v23 = a1->ObjectCount;
          v24 = v27 + 1;
          if ( v24 >= (unsigned int)v23 )
            goto LABEL_43;
        }
        WdLogSingleEntry1(2LL, a1->ObjectHandleArray[v25]);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%x object adapter state has been destroyed, and it cannot be signaled.",
          a1->ObjectHandleArray[v25],
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_48;
      }
      LODWORD(v22) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 4344LL),
                       a2,
                       a1->ObjectCount,
                       a1->ObjectHandleArray,
                       a1->Flags,
                       0,
                       0LL,
                       a1->FenceValueArray,
                       0LL,
                       0LL,
                       0,
                       1,
                       a3);
    }
LABEL_50:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v42);
    goto LABEL_52;
  }
  v15 = (struct DXGPROCESS *)((char *)a2 + 248);
  while ( 1 )
  {
    v16 = a1->ObjectHandleArray[v14];
    DXGPUSHLOCK::AcquireShared(v15);
    v17 = (v16 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v17 < *((_DWORD *)a2 + 74)
      && (v18 = *((_QWORD *)a2 + 35),
          v19 = *(_DWORD *)(v18 + 16 * v17 + 8),
          ((v16 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60))
      && (v19 & 0x2000) == 0
      && (v19 & 0x1F) != 0 )
    {
      if ( (v19 & 0x1F) == 0xB )
      {
        v20 = *(_QWORD *)(v18 + 16LL * (unsigned int)v17);
      }
      else
      {
        WdLogSingleEntry1(2LL, 267LL);
        v20 = 0LL;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v20 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)a2 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v20 )
      break;
    if ( (*(_DWORD *)(v20 + 72) & 0x10) != 0 )
    {
      WdLogSingleEntry1(2LL, a1->ObjectHandleArray[v14]);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x object is opened as wait only and thus cannot be signaled.",
        a1->ObjectHandleArray[v14],
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v22) = -1073741790;
      goto LABEL_52;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 16LL)) )
    {
      WdLogSingleEntry1(1LL, 5308LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSyncObject->GetDevice()->GetRenderAdapter()->IsCoreResourceSharedOwner()",
        5308LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *((_QWORD *)Elements + v14) = *(_QWORD *)(v20 + 32);
    v21 = *(struct DXGDEVICE **)(v20 + 16);
    if ( v21 != a3 )
    {
      LODWORD(v22) = -1073741811;
      WdLogSingleEntry5(2LL, v21, v20, v14, a3, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGDEVICE 0x%I64x for DXGDEVICESYNCOBJECT 0x%I64x at index 0x%I64d does not match expected DXGDEVICE 0x"
                  "%I64x, returning 0x%I64x.",
        *(_QWORD *)(v20 + 16),
        v20,
        v14,
        (__int64)a3,
        -1073741811LL);
      goto LABEL_52;
    }
    v13 = a1->ObjectCount;
    v15 = (struct DXGPROCESS *)((char *)a2 + 248);
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= v13 )
    {
      v12 = v44;
      goto LABEL_30;
    }
  }
  LODWORD(v22) = -1073741811;
  WdLogSingleEntry4(2LL, a2, a1->ObjectHandleArray[v14], v14, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x failed to signal with invalid hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
    (__int64)a2,
    a1->ObjectHandleArray[v14],
    v14,
    -1073741811LL,
    0LL);
LABEL_52:
  if ( P != &v37 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v38 = 0;
  if ( v39 != &v40 && v39 )
    ExFreePoolWithTag(v39, 0);
  v39 = 0LL;
  v41 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v34);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v34[0]);
  return (unsigned int)v22;
}
