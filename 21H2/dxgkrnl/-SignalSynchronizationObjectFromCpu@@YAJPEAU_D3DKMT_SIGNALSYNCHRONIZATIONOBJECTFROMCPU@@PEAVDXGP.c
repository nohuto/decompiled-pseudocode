/*
 * XREFs of ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C0292300
 * Callers:
 *     ?VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DB040 (-VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024F300 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C02940A0 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0007054 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C001C5F8 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C0027A60 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1C004718C (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01165B0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C011ABE8 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C02102E8 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C022C358 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C024BC24 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 */

__int64 __fastcall SignalSynchronizationObjectFromCpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3)
{
  struct DXGPROCESS *v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  PERESOURCE *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  UINT ObjectCount; // edx
  PVOID Elements; // r12
  _QWORD *v17; // r13
  UINT v18; // r8d
  UINT v19; // r14d
  DXGPUSHLOCK *v20; // rcx
  D3DKMT_HANDLE v21; // esi
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // ebx
  _QWORD *v36; // rax
  __int64 v37; // rax
  const D3DKMT_HANDLE *ObjectHandleArray; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // r9d
  __int64 v42; // rsi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // r9d
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  int v56; // [rsp+70h] [rbp-90h] BYREF
  __int64 v57; // [rsp+78h] [rbp-88h]
  char v58; // [rsp+80h] [rbp-80h]
  _QWORD v59[4]; // [rsp+88h] [rbp-78h] BYREF
  char v60; // [rsp+A8h] [rbp-58h]
  _QWORD v61[5]; // [rsp+B0h] [rbp-50h] BYREF
  int v62; // [rsp+D8h] [rbp-28h]
  _QWORD v63[5]; // [rsp+E0h] [rbp-20h] BYREF
  int v64; // [rsp+108h] [rbp+8h]
  DXGPUSHLOCK *v65; // [rsp+150h] [rbp+50h]

  v56 = -1;
  v4 = a2;
  v57 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v58 = 1;
    v56 = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2044);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v56, 2044LL);
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v7, v6);
  if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(Global) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v11 + 24) = 5231LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v12 + 24) = 5236LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a1->ObjectCount )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v13 + 24) = 5237LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v14 + 24) = 5238LL;
    WdLogEvent5_WdAssertion(v14);
  }
  ObjectCount = a1->ObjectCount;
  v63[0] = 0LL;
  v64 = 0;
  v61[0] = 0LL;
  v62 = 0;
  Elements = PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(v63, ObjectCount);
  if ( !Elements || (v17 = PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(v61, a1->ObjectCount)) == 0LL )
  {
    v35 = -1073741801;
    goto LABEL_55;
  }
  v18 = a1->ObjectCount;
  v19 = 0;
  if ( !v18 )
  {
LABEL_31:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v59,
      Elements,
      v18);
    if ( v60 )
    {
      if ( !v59[0] )
      {
        v35 = -1073741801;
LABEL_53:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
          (__int64)v59,
          v33);
        goto LABEL_55;
      }
      v39 = WdLogNewEntry5_WdError(v34, v33);
      *(_QWORD *)(v39 + 24) = 5325LL;
    }
    else
    {
      if ( (*((_BYTE *)a3 + 1869) & 1) != 0 )
      {
        v35 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 4240LL),
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
        goto LABEL_53;
      }
      v40 = a1->ObjectCount;
      v41 = 0;
      if ( !(_DWORD)v40 )
      {
LABEL_45:
        v47 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, const UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 616LL)
                                                                                               + 8LL)
                                                                                   + 656LL))(
                v40,
                v17,
                a1->Flags.Value,
                a1->FenceValueArray);
        v50 = v47;
        if ( v47 < 0 )
        {
          v51 = WdLogNewEntry5_WdError(v48, v33);
          *(_QWORD *)(v51 + 24) = v50;
          WdLogEvent5_WdError(v51);
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0pqPR1XR1_EtwWriteTransfer(
            a1->ObjectCount,
            &EventSignalSynchronizationObjectFromCpu,
            v49,
            a3,
            a1->ObjectCount,
            v17,
            a1->FenceValueArray);
        }
        v35 = v50;
        goto LABEL_53;
      }
      while ( 1 )
      {
        v42 = v41;
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *((DXGSYNCOBJECT **)Elements + v41),
                             *((struct ADAPTER_RENDER **)a3 + 2));
        v17[v42] = VidSchSyncObject;
        if ( !VidSchSyncObject )
          break;
        v40 = a1->ObjectCount;
        v41 = v46 + 1;
        if ( v41 >= (unsigned int)v40 )
          goto LABEL_45;
      }
      v39 = WdLogNewEntry5_WdError(v45, v44);
      *(_QWORD *)(v39 + 24) = a1->ObjectHandleArray[v42];
    }
    WdLogEvent5_WdError(v39);
    v35 = -1073741811;
    goto LABEL_53;
  }
  v20 = (struct DXGPROCESS *)((char *)v4 + 208);
  v65 = (struct DXGPROCESS *)((char *)v4 + 208);
  while ( 1 )
  {
    v21 = a1->ObjectHandleArray[v19];
    DXGPUSHLOCK::AcquireShared(v20);
    v22 = (v21 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v22 >= *((_DWORD *)a2 + 64) )
      goto LABEL_23;
    v23 = *((_QWORD *)a2 + 30);
    v24 = *(_DWORD *)(v23 + 16 * v22 + 8);
    if ( ((v21 >> 25) & 0x60) != (*(_BYTE *)(v23 + 16 * v22 + 8) & 0x60) || (v24 & 0x2000) != 0 || (v24 & 0x1F) == 0 )
      goto LABEL_23;
    v25 = v24 & 0x1F;
    if ( (_BYTE)v25 != 11 )
    {
      v26 = WdLogNewEntry5_WdError(v25, 2LL * (unsigned int)v22);
      *(_QWORD *)(v26 + 24) = 316LL;
      WdLogEvent5_WdError(v26);
LABEL_23:
      v27 = 0LL;
      goto LABEL_24;
    }
    v27 = *(_QWORD *)(v23 + 16LL * (unsigned int)v22);
LABEL_24:
    ExReleasePushLockSharedEx(v65, 0LL);
    KeLeaveCriticalRegion();
    if ( !v27 )
      break;
    if ( (*(_DWORD *)(v27 + 72) & 0x10) != 0 )
    {
      v37 = WdLogNewEntry5_WdError(v29, v28);
      *(_QWORD *)(v37 + 24) = a1->ObjectHandleArray[v19];
      WdLogEvent5_WdError(v37);
      v35 = -1073741790;
      goto LABEL_55;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 16LL)) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v31, v30);
      *(_QWORD *)(v32 + 24) = 5288LL;
      WdLogEvent5_WdAssertion(v32);
    }
    *((_QWORD *)Elements + v19) = *(_QWORD *)(v27 + 32);
    if ( *(struct DXGDEVICE **)(v27 + 16) != a3 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v35 = -1073741811;
      v36[3] = *(_QWORD *)(v27 + 16);
      v36[4] = v27;
      v36[6] = a3;
      v36[7] = -1073741811LL;
      goto LABEL_38;
    }
    v18 = a1->ObjectCount;
    ++v19;
    v20 = v65;
    if ( v19 >= v18 )
    {
      v4 = a2;
      goto LABEL_31;
    }
  }
  v36 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
  v36[3] = a2;
  ObjectHandleArray = a1->ObjectHandleArray;
  v35 = -1073741811;
  v36[4] = ObjectHandleArray[v19];
  v36[6] = -1073741811LL;
LABEL_38:
  v36[5] = v19;
  WdLogEvent5_WdError(v36);
LABEL_55:
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)v61);
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)v63);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v52);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v56);
  return v35;
}
