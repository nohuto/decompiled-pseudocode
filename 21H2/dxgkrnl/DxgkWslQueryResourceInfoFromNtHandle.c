/*
 * XREFs of DxgkWslQueryResourceInfoFromNtHandle @ 0x1C02DA760
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0009824 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009864 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C002A224 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C019F668 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 */

__int64 __fastcall DxgkWslQueryResourceInfoFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  unsigned int v9; // esi
  struct _KTHREAD **Current; // rax
  __int64 v11; // r9
  int v12; // eax
  int Resource; // esi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // r15
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned int v21; // edx
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGDEVICE *v27; // [rsp+50h] [rbp-138h] BYREF
  struct DXGDEVICE *v28; // [rsp+58h] [rbp-130h] BYREF
  int v29; // [rsp+60h] [rbp-128h] BYREF
  __int64 v30; // [rsp+68h] [rbp-120h]
  char v31; // [rsp+70h] [rbp-118h]
  __int64 v32; // [rsp+78h] [rbp-110h] BYREF
  char v33; // [rsp+80h] [rbp-108h]
  _BYTE v34[16]; // [rsp+88h] [rbp-100h] BYREF
  _BYTE v35[40]; // [rsp+98h] [rbp-F0h] BYREF
  _BYTE v36[160]; // [rsp+C0h] [rbp-C8h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2073;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2073);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2073);
  memset(&v35[8], 0, 32);
  v8 = (_QWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)v35 = *v8;
  v9 = *(_DWORD *)v35;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, v5, v6, v7);
  v28 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v27, v9, Current, &v28);
  if ( !v28 )
  {
    WdLogSingleEntry1(3LL, v9);
    if ( !v27 )
    {
LABEL_45:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
      if ( v31 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v29);
      }
      return 3221225485LL;
    }
LABEL_43:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
    goto LABEL_45;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v34, v28);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, (__int64)v28, 0, v11, 0);
  v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36, 0LL);
  Resource = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(3LL, v28, v12);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v34);
    if ( v27 )
      goto LABEL_12;
    goto LABEL_14;
  }
  v17 = *((_QWORD *)DXGGLOBAL_GetGlobal() + 4);
  Global = DXGGLOBAL_GetGlobal();
  DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
    (DXGAUTOPUSHLOCKFASTSHARED *)&v32,
    (struct DXGGLOBAL *)((char *)Global + 40));
  v19 = ((unsigned int)a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v19 >= *(_DWORD *)(v17 + 16) )
    goto LABEL_40;
  v20 = *(_QWORD *)v17;
  v21 = *(_DWORD *)(*(_QWORD *)v17 + 16 * v19 + 8);
  if ( (unsigned int)a2 >> 30 != ((v21 >> 5) & 3) || (v21 & 0x2000) != 0 || (v21 & 0x1F) == 0 )
    goto LABEL_40;
  if ( (v21 & 0x1F) != 4 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_40;
  }
  v22 = *(_QWORD *)(v20 + 16LL * (unsigned int)v19);
  if ( !v22 )
  {
LABEL_40:
    WdLogSingleEntry1(3LL, a2);
    if ( v33 )
    {
      ExReleasePushLockSharedEx(v32, 0LL);
      KeLeaveCriticalRegion();
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v34);
    if ( !v27 )
      goto LABEL_45;
    goto LABEL_43;
  }
  if ( v33 )
  {
    ExReleasePushLockSharedEx(v32, 0LL);
    KeLeaveCriticalRegion();
    v33 = 0;
  }
  Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>((__int64)v28, v35, v20, v22);
  if ( Resource < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v34);
    if ( v27 )
    {
LABEL_12:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
    }
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v29);
    return (unsigned int)Resource;
  }
  if ( a1 + 40 > MmUserProbeAddress || a1 + 40 <= a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)a1 = *(_OWORD *)v35;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&v35[16];
  *(_QWORD *)(a1 + 32) = *(_QWORD *)&v35[32];
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v34);
  if ( v27 && _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v29);
  return 0LL;
}
