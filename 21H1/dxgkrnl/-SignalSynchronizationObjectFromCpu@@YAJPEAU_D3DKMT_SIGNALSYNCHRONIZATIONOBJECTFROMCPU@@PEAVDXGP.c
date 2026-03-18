/*
 * XREFs of ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C028D8F8
 * Callers:
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024B1A0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C028F6E0 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C000EBC8 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C0025B0C (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1C00452DC (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C011BAB0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0121918 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C02283B8 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C0247ACC (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 */

__int64 __fastcall SignalSynchronizationObjectFromCpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3)
{
  struct DXGPROCESS *v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  UINT ObjectCount; // edx
  __int64 v12; // rdx
  PVOID v13; // r12
  _QWORD *v14; // r13
  UINT v15; // r8d
  UINT v16; // r14d
  DXGPUSHLOCK *v17; // rcx
  D3DKMT_HANDLE v18; // esi
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // ebx
  _QWORD *v33; // rax
  __int64 v34; // rax
  const D3DKMT_HANDLE *ObjectHandleArray; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned int v38; // r9d
  __int64 v39; // rsi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // r9d
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  int v52; // [rsp+70h] [rbp-90h] BYREF
  __int64 v53; // [rsp+78h] [rbp-88h]
  char v54; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  char v56; // [rsp+90h] [rbp-70h] BYREF
  int v57; // [rsp+B0h] [rbp-50h]
  PVOID v58; // [rsp+B8h] [rbp-48h] BYREF
  char v59; // [rsp+C0h] [rbp-40h] BYREF
  int v60; // [rsp+E0h] [rbp-20h]
  _QWORD v61[4]; // [rsp+E8h] [rbp-18h] BYREF
  char v62; // [rsp+108h] [rbp+8h]
  DXGPUSHLOCK *v63; // [rsp+150h] [rbp+50h]

  v52 = -1;
  v4 = a2;
  v53 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v54 = 1;
    v52 = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2044);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v52, 2044LL);
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 5050LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a1->ObjectCount )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v9 + 24) = 5051LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v10 + 24) = 5052LL;
    WdLogEvent5_WdAssertion(v10);
  }
  ObjectCount = a1->ObjectCount;
  v58 = 0LL;
  v60 = 0;
  P = 0LL;
  v57 = 0;
  v13 = PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&v58, ObjectCount);
  if ( !v13 || (v14 = PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(&P, a1->ObjectCount)) == 0LL )
  {
    v32 = -1073741801;
    goto LABEL_53;
  }
  v15 = a1->ObjectCount;
  v16 = 0;
  if ( !v15 )
  {
LABEL_29:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v61,
      v13,
      v15);
    if ( v62 )
    {
      if ( !v61[0] )
      {
        v32 = -1073741801;
LABEL_51:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
          (__int64)v61,
          v30);
        goto LABEL_53;
      }
      v36 = WdLogNewEntry5_WdError(v31, v30);
      *(_QWORD *)(v36 + 24) = 5139LL;
    }
    else
    {
      if ( (*((_BYTE *)a3 + 1869) & 1) != 0 )
      {
        v32 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 4208LL),
                v4,
                a1->ObjectCount,
                a1->ObjectHandleArray,
                a1->Flags,
                0,
                0LL,
                (unsigned __int64 *)a1->FenceValueArray,
                0LL,
                0LL,
                0,
                1,
                a3);
        goto LABEL_51;
      }
      v37 = a1->ObjectCount;
      v38 = 0;
      if ( !(_DWORD)v37 )
      {
LABEL_43:
        v44 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, const UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 616LL)
                                                                                               + 8LL)
                                                                                   + 656LL))(
                v37,
                v14,
                a1->Flags.Value,
                a1->FenceValueArray);
        v47 = v44;
        if ( v44 < 0 )
        {
          v48 = WdLogNewEntry5_WdError(v45, v30);
          *(_QWORD *)(v48 + 24) = v47;
          WdLogEvent5_WdError(v48);
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0pqPR1XR1_EtwWriteTransfer(
            a1->ObjectCount,
            &EventSignalSynchronizationObjectFromCpu,
            v46,
            a3,
            a1->ObjectCount,
            v14,
            a1->FenceValueArray);
        }
        v32 = v47;
        goto LABEL_51;
      }
      while ( 1 )
      {
        v39 = v38;
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *((DXGSYNCOBJECT **)v13 + v38),
                             *((struct ADAPTER_RENDER **)a3 + 2));
        v14[v39] = VidSchSyncObject;
        if ( !VidSchSyncObject )
          break;
        v37 = a1->ObjectCount;
        v38 = v43 + 1;
        if ( v38 >= (unsigned int)v37 )
          goto LABEL_43;
      }
      v36 = WdLogNewEntry5_WdError(v42, v41);
      *(_QWORD *)(v36 + 24) = a1->ObjectHandleArray[v39];
    }
    WdLogEvent5_WdError(v36);
    v32 = -1073741811;
    goto LABEL_51;
  }
  v17 = (struct DXGPROCESS *)((char *)v4 + 208);
  v63 = (struct DXGPROCESS *)((char *)v4 + 208);
  while ( 1 )
  {
    v18 = a1->ObjectHandleArray[v16];
    DXGPUSHLOCK::AcquireShared(v17);
    v19 = (v18 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v19 >= *((_DWORD *)a2 + 64) )
      goto LABEL_21;
    v20 = *((_QWORD *)a2 + 30);
    v21 = *(_DWORD *)(v20 + 16 * v19 + 8);
    if ( ((v18 >> 25) & 0x60) != (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60) || (v21 & 0x2000) != 0 || (v21 & 0x1F) == 0 )
      goto LABEL_21;
    v22 = v21 & 0x1F;
    if ( (_BYTE)v22 != 11 )
    {
      v23 = WdLogNewEntry5_WdError(v22, 2LL * (unsigned int)v19);
      *(_QWORD *)(v23 + 24) = 267LL;
      WdLogEvent5_WdError(v23);
LABEL_21:
      v24 = 0LL;
      goto LABEL_22;
    }
    v24 = *(_QWORD *)(v20 + 16LL * (unsigned int)v19);
LABEL_22:
    ExReleasePushLockSharedEx(v63, 0LL);
    KeLeaveCriticalRegion();
    if ( !v24 )
      break;
    if ( (*(_DWORD *)(v24 + 72) & 0x10) != 0 )
    {
      v34 = WdLogNewEntry5_WdError(v26, v25);
      *(_QWORD *)(v34 + 24) = a1->ObjectHandleArray[v16];
      WdLogEvent5_WdError(v34);
      v32 = -1073741790;
      goto LABEL_53;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) + 16LL)) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v28, v27);
      *(_QWORD *)(v29 + 24) = 5102LL;
      WdLogEvent5_WdAssertion(v29);
    }
    *((_QWORD *)v13 + v16) = *(_QWORD *)(v24 + 32);
    if ( *(struct DXGDEVICE **)(v24 + 16) != a3 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
      v32 = -1073741811;
      v33[3] = *(_QWORD *)(v24 + 16);
      v33[4] = v24;
      v33[6] = a3;
      v33[7] = -1073741811LL;
      goto LABEL_36;
    }
    v15 = a1->ObjectCount;
    ++v16;
    v17 = v63;
    if ( v16 >= v15 )
    {
      v4 = a2;
      goto LABEL_29;
    }
  }
  v33 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
  v33[3] = a2;
  ObjectHandleArray = a1->ObjectHandleArray;
  v32 = -1073741811;
  v33[4] = ObjectHandleArray[v16];
  v33[6] = -1073741811LL;
LABEL_36:
  v33[5] = v16;
  WdLogEvent5_WdError(v33);
LABEL_53:
  if ( P != &v56 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v57 = 0;
  if ( v58 != &v59 && v58 )
    ExFreePoolWithTag(v58, 0);
  v58 = 0LL;
  v60 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52, v12);
  if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v49, &EventProfilerExit, v50, v52);
  return v32;
}
