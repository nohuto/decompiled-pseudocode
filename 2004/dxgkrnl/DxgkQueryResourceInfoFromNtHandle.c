/*
 * XREFs of DxgkQueryResourceInfoFromNtHandle @ 0x1C011A070
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007000 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C011B1A0 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 */

__int64 __fastcall DxgkQueryResourceInfoFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  _OWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGDEVICE *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r14
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  HANDLE v29; // r15
  NTSTATUS v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int Resource; // esi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  struct DXGDEVICE *v45; // [rsp+30h] [rbp-138h] BYREF
  int v46; // [rsp+38h] [rbp-130h] BYREF
  __int64 v47; // [rsp+40h] [rbp-128h]
  char v48; // [rsp+48h] [rbp-120h]
  struct DXGDEVICE *v49; // [rsp+50h] [rbp-118h] BYREF
  __int64 v50; // [rsp+58h] [rbp-110h] BYREF
  char v51; // [rsp+60h] [rbp-108h]
  PVOID Object; // [rsp+68h] [rbp-100h] BYREF
  HANDLE Handle[2]; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v54; // [rsp+80h] [rbp-E8h]
  __int64 v55; // [rsp+90h] [rbp-D8h]
  _BYTE v56[160]; // [rsp+A0h] [rbp-C8h] BYREF

  v46 = -1;
  v47 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v48 = 1;
    v46 = 2073;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2073);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v46, 2073LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_13:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v10);
    if ( v48 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v46);
    }
    return 3221225485LL;
  }
  v55 = 0LL;
  v11 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v11;
  v54 = v11[1];
  v49 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v45, LODWORD(Handle[0]), Current, &v49);
  v14 = v49;
  if ( !v49 )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = LODWORD(Handle[0]);
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
    goto LABEL_13;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v50, v49);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v56, (__int64)v14, 0, v19, 0);
  v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v56, 0LL);
  v24 = v20;
  if ( v20 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    v25[4] = v24;
    goto LABEL_19;
  }
  Object = 0LL;
  v29 = Handle[1];
  v30 = ObReferenceObjectByHandle(Handle[1], 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v24 = v30;
  if ( v30 == -1073741788 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
    v34[3] = v14;
    v34[4] = v29;
    v34[5] = -1073741788LL;
    WdLogEvent5_WdWarning(v34);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
    if ( v50 && v51 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v50 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v35);
    if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v46);
    return 3221225508LL;
  }
  else
  {
    if ( v30 < 0 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
      v25[4] = v29;
      v25[5] = v24;
LABEL_19:
      v25[3] = v14;
      WdLogEvent5_WdWarning(v25);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
      if ( v50 && v51 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v50 + 136));
        KeLeaveCriticalRegion();
      }
      if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v26);
      if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v46);
      return (unsigned int)v24;
    }
    Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(v14, Handle, v33, Object);
    ObfDereferenceObject(Object);
    if ( Resource >= 0 )
    {
      if ( a1 + 40 > MmUserProbeAddress || a1 + 40 <= a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a1 = *(_OWORD *)Handle;
      *(_OWORD *)(a1 + 16) = v54;
      *(_QWORD *)(a1 + 32) = v55;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
      if ( v50 && v51 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v50 + 136));
        KeLeaveCriticalRegion();
      }
      if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v42);
      if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v46);
      return 0LL;
    }
    else
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
      if ( v50 && v51 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v50 + 136));
        KeLeaveCriticalRegion();
      }
      if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v39);
      if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v46);
      return (unsigned int)Resource;
    }
  }
}
