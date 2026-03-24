/*
 * XREFs of ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C011422C
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C010DA40 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     DxgkDestroySynchronizationObject @ 0x1C0112930 (DxgkDestroySynchronizationObject.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C01545B8 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C0168990 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     ?VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0240560 (-VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C0279660 (DxgkOpenSyncObjectFromNtHandle.c)
 * Callees:
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000200C (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002630 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00058C8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C00DCB58 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C011631C (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObjectImpl(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int hSyncObject; // edi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // esi
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  struct DXGSYNCOBJECT *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r8
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rcx
  PERESOURCE *Global; // rax
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // r9d
  DXGDEVICESYNCOBJECT *v41; // r14
  __int64 v42; // r8
  int v43; // edx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // [rsp+30h] [rbp-148h] BYREF
  __int64 v48; // [rsp+38h] [rbp-140h]
  char v49; // [rsp+40h] [rbp-138h]
  D3DKMT_HANDLE v50; // [rsp+48h] [rbp-130h]
  __int64 v51; // [rsp+50h] [rbp-128h] BYREF
  int v52; // [rsp+58h] [rbp-120h]
  _BYTE v53[24]; // [rsp+60h] [rbp-118h] BYREF
  _BYTE v54[24]; // [rsp+78h] [rbp-100h] BYREF
  _BYTE v55[32]; // [rsp+90h] [rbp-E8h] BYREF
  _BYTE v56[8]; // [rsp+B0h] [rbp-C8h] BYREF
  _BYTE v57[64]; // [rsp+B8h] [rbp-C0h] BYREF
  _BYTE v58[88]; // [rsp+F8h] [rbp-80h] BYREF

  v4 = a1;
  v47 = -1;
  v48 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v49 = 1;
    v47 = 2042;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2042);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v47, 2042LL);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_36:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v9);
    if ( v49 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v47);
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
    hSyncObject = v4->hSyncObject;
    v50 = v4->hSyncObject;
  }
  else
  {
    hSyncObject = v4->hSyncObject;
    v50 = v4->hSyncObject;
  }
  v11 = 0LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v53, (struct _KTHREAD **)Current);
  v14 = (hSyncObject >> 6) & 0xFFFFFF;
  if ( v14 < *((_DWORD *)Current + 64)
    && (v13 = v14,
        v15 = *((_QWORD *)Current + 30),
        v12 = *(unsigned int *)(v15 + 16LL * v14 + 8),
        ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x60))
    && (v12 & 0x2000) == 0
    && (v12 & 0x1F) != 0
    && (v13 = 2LL * v14, v12 &= 0x1Fu, (_BYTE)v12 == 11) )
  {
    v16 = *(_QWORD *)(v15 + 16LL * v14);
  }
  else
  {
    v16 = 0LL;
  }
  if ( v16 )
  {
    if ( (*(_BYTE *)(v16 + 92) & 2) == 0 )
    {
      v17 = WdLogNewEntry5_WdWarning(v16, v12, v13);
      *(_QWORD *)(v17 + 24) = hSyncObject;
      WdLogEvent5_WdWarning(v17);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v53);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v18);
      if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v47);
      return 3221225506LL;
    }
    v11 = *(_QWORD *)(v16 + 16);
    _InterlockedIncrement64((volatile signed __int64 *)(v11 + 64));
    hSyncObject = v50;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v53);
  if ( !v11 )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v54,
      (struct _KTHREAD **)Current);
    if ( v14 < *((_DWORD *)Current + 64) )
    {
      v24 = *((_QWORD *)Current + 30);
      v22 = *(unsigned int *)(v24 + 16LL * v14 + 8);
      v23 = (hSyncObject >> 25) & 0x60;
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v24 + 16LL * v14 + 8) & 0x60)
        && (v22 & 0x2000) == 0
        && (v22 & 0x1F) != 0 )
      {
        v22 &= 0x1Fu;
        if ( (_BYTE)v22 == 8 )
        {
          v26 = *(struct DXGSYNCOBJECT **)(v24 + 16LL * v14);
          goto LABEL_34;
        }
        v25 = WdLogNewEntry5_WdError(v23, v22);
        *(_QWORD *)(v25 + 24) = 316LL;
        WdLogEvent5_WdError(v25);
      }
    }
    v26 = 0LL;
LABEL_34:
    if ( !v26 )
    {
      v27 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      *(_QWORD *)(v27 + 24) = hSyncObject;
      *(_QWORD *)(v27 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54);
      goto LABEL_36;
    }
    if ( v14 < *((_DWORD *)Current + 64) )
    {
      v30 = *((_QWORD *)Current + 30);
      v31 = *(_DWORD *)(v30 + 16LL * v14 + 8);
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v30 + 16LL * v14 + 8) & 0x60)
        && (v31 & 0x2000) == 0
        && (v31 & 0x1F) != 0 )
      {
        *(_DWORD *)(v30 + 16 * (((unsigned __int64)hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54);
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v33, v32);
    DXGGLOBAL::DestroySyncObject(Global, v26, hSyncObject, 0);
    goto LABEL_70;
  }
  v51 = v11;
  v52 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v51);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v56, v11, 2, v36, 0);
  if ( v58[72] )
    COREACCESS::AcquireShared((COREACCESS *)v58, 0LL);
  COREACCESS::AcquireShared((COREACCESS *)v57, 0LL);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v55,
    (struct _KTHREAD **)Current);
  v40 = *((_DWORD *)Current + 64);
  if ( v14 < v40
    && (v39 = *((_QWORD *)Current + 30),
        v37 = *(unsigned int *)(v39 + 16LL * v14 + 8),
        v38 = (hSyncObject >> 25) & 0x60,
        ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v39 + 16LL * v14 + 8) & 0x60))
    && (v37 & 0x2000) == 0
    && (v37 & 0x1F) != 0
    && (v37 &= 0x1Fu, (_BYTE)v37 == 11) )
  {
    v41 = *(DXGDEVICESYNCOBJECT **)(v39 + 16LL * v14);
  }
  else
  {
    v41 = 0LL;
  }
  if ( v41 && *((_QWORD *)v41 + 2) == v11 )
  {
    if ( v14 < v40 )
    {
      v42 = *((_QWORD *)Current + 30);
      v43 = *(_DWORD *)(v42 + 16LL * v14 + 8);
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v42 + 16LL * v14 + 8) & 0x60)
        && (v43 & 0x2000) == 0
        && (v43 & 0x1F) != 0 )
      {
        *(_DWORD *)(v42 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v55);
    DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(v41);
    ExFreePoolWithTag(v41, 0);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
    if ( v51 && v52 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v51 + 136));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v44 = WdLogNewEntry5_WdWarning(v38, v37, v39);
    *(_QWORD *)(v44 + 24) = hSyncObject;
    WdLogEvent5_WdWarning(v44);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v55);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
    if ( v51 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v51);
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
LABEL_70:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v35);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v47);
  return 0LL;
}
