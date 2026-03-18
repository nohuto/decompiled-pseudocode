/*
 * XREFs of ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0111A1C
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C010B5D0 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     DxgkDestroySynchronizationObject @ 0x1C0110120 (DxgkDestroySynchronizationObject.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C014FB68 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C0150600 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     ?VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023F560 (-VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C02783D0 (DxgkOpenSyncObjectFromNtHandle.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006954 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0111F08 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C0112DF8 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObjectImpl(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r14
  unsigned int hSyncObject; // edi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  struct DXGSYNCOBJECT *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // r9d
  DXGDEVICESYNCOBJECT *v32; // r15
  __int64 v33; // r8
  int v34; // edx
  __int64 v35; // r8
  int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
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
  if ( (qword_1C00AF9B0 & 2) != 0 )
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
    v37 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v37 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v37);
LABEL_65:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v38);
    if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v47);
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
  v9 = 0LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v53, (struct _KTHREAD **)Current);
  v12 = (hSyncObject >> 6) & 0xFFFFFF;
  if ( v12 < *((_DWORD *)Current + 64)
    && (v11 = v12,
        v26 = *((_QWORD *)Current + 30),
        v10 = *(unsigned int *)(v26 + 16LL * v12 + 8),
        ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v26 + 16LL * v12 + 8) & 0x60))
    && (v10 & 0x2000) == 0
    && (v10 & 0x1F) != 0
    && (v11 = 2LL * v12, v10 &= 0x1Fu, (_BYTE)v10 == 11) )
  {
    v13 = *(_QWORD *)(v26 + 16LL * v12);
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
LABEL_11:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v53);
    if ( v9 )
    {
      v51 = v9;
      v52 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v51);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v56, v9, 2, v27, 0);
      if ( v58[72] )
        COREACCESS::AcquireShared((COREACCESS *)v58, 0LL);
      COREACCESS::AcquireShared((COREACCESS *)v57, 0LL);
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
        (DXGHANDLETABLELOCKEXCLUSIVE *)v55,
        (struct _KTHREAD **)Current);
      v31 = *((_DWORD *)Current + 64);
      if ( v12 < v31
        && (v30 = *((_QWORD *)Current + 30),
            v28 = *(unsigned int *)(v30 + 16LL * v12 + 8),
            v29 = (hSyncObject >> 25) & 0x60,
            ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v30 + 16LL * v12 + 8) & 0x60))
        && (v28 & 0x2000) == 0
        && (v28 & 0x1F) != 0
        && (v28 &= 0x1Fu, (_BYTE)v28 == 11) )
      {
        v32 = *(DXGDEVICESYNCOBJECT **)(v30 + 16LL * v12);
      }
      else
      {
        v32 = 0LL;
      }
      if ( v32 )
      {
        if ( v12 < v31 )
        {
          v33 = *((_QWORD *)Current + 30);
          v34 = *(_DWORD *)(v33 + 16LL * v12 + 8);
          if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v33 + 16LL * v12 + 8) & 0x60)
            && (v34 & 0x2000) == 0
            && (v34 & 0x1F) != 0 )
          {
            *(_DWORD *)(v33 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          }
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v55);
        DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(v32);
        ExFreePoolWithTag(v32, 0);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
        if ( v51 && v52 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v51 + 136));
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        v46 = WdLogNewEntry5_WdWarning(v29, v28, v30);
        *(_QWORD *)(v46 + 24) = hSyncObject;
        WdLogEvent5_WdWarning(v46);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v55);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
        if ( v51 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v51);
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v9 + 16), (struct DXGDEVICE *)v9);
      goto LABEL_22;
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v54,
      (struct _KTHREAD **)Current);
    if ( v12 < *((_DWORD *)Current + 64) )
    {
      v16 = *((_QWORD *)Current + 30);
      v14 = *(unsigned int *)(v16 + 16LL * v12 + 8);
      v15 = (hSyncObject >> 25) & 0x60;
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v16 + 16LL * v12 + 8) & 0x60)
        && (v14 & 0x2000) == 0
        && (v14 & 0x1F) != 0 )
      {
        v14 &= 0x1Fu;
        if ( (_BYTE)v14 == 8 )
        {
          v18 = *(struct DXGSYNCOBJECT **)(v16 + 16LL * v12);
          goto LABEL_19;
        }
        v17 = WdLogNewEntry5_WdError(v15, v14);
        *(_QWORD *)(v17 + 24) = 267LL;
        WdLogEvent5_WdError(v17);
      }
    }
    v18 = 0LL;
LABEL_19:
    if ( v18 )
    {
      if ( v12 < *((_DWORD *)Current + 64) )
      {
        v35 = *((_QWORD *)Current + 30);
        v36 = *(_DWORD *)(v35 + 16LL * v12 + 8);
        if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v35 + 16LL * v12 + 8) & 0x60)
          && (v36 & 0x2000) == 0
          && (v36 & 0x1F) != 0 )
        {
          *(_DWORD *)(v35 + 16 * (((unsigned __int64)hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        }
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54);
      Global = DXGGLOBAL::GetGlobal(v20, v19);
      DXGGLOBAL::DestroySyncObject(Global, v18, hSyncObject);
LABEL_22:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v22);
      if ( v49 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v47);
      }
      return 0LL;
    }
    v43 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v43 + 24) = hSyncObject;
    *(_QWORD *)(v43 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v43);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54);
    goto LABEL_65;
  }
  if ( (*(_BYTE *)(v13 + 92) & 2) != 0 )
  {
    v9 = *(_QWORD *)(v13 + 16);
    _InterlockedIncrement64((volatile signed __int64 *)(v9 + 64));
    hSyncObject = v50;
    goto LABEL_11;
  }
  v39 = WdLogNewEntry5_WdWarning(v13, v10, v11);
  *(_QWORD *)(v39 + 24) = hSyncObject;
  WdLogEvent5_WdWarning(v39);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v53);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v40);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v47);
  return 3221225506LL;
}
