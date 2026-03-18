/*
 * XREFs of NtDxgkUnpinResources @ 0x1C016D230
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C016D568 (-UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall NtDxgkUnpinResources(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGDEVICE *v12; // r14
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdi
  unsigned int v19; // esi
  unsigned int v20; // r13d
  unsigned int *v21; // rdx
  __int64 v22; // r15
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  bool v41; // [rsp+30h] [rbp-128h]
  struct DXGDEVICE *v42; // [rsp+38h] [rbp-120h] BYREF
  int v43; // [rsp+40h] [rbp-118h] BYREF
  __int64 v44; // [rsp+48h] [rbp-110h]
  char v45; // [rsp+50h] [rbp-108h]
  struct DXGDEVICE *v46; // [rsp+58h] [rbp-100h] BYREF
  _QWORD v47[2]; // [rsp+60h] [rbp-F8h] BYREF
  unsigned int v48[4]; // [rsp+70h] [rbp-E8h]
  __int64 v49; // [rsp+80h] [rbp-D8h]
  unsigned int v50; // [rsp+88h] [rbp-D0h]
  _BYTE v51[160]; // [rsp+90h] [rbp-C8h] BYREF

  v3 = a1;
  v43 = -1;
  v44 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2080;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2080);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 2080LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v31 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v31 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    goto LABEL_51;
  }
  v41 = *((_BYTE *)Current + 346) == 0;
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v48 = *(_OWORD *)v3;
  v49 = *(_QWORD *)(v3 + 16);
  v9 = *(_QWORD *)&v48[2];
  if ( !*(_QWORD *)&v48[2] || !v48[1] )
  {
    v38 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v7, Current);
    *(_QWORD *)(v38 + 24) = v48[0];
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v38);
LABEL_51:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v32);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v43);
    return 3221225485LL;
  }
  v46 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, v48[0], (struct _KTHREAD **)Current, &v46);
  v12 = v46;
  if ( !v46 )
  {
    v33 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v33 + 24) = v48[0];
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    goto LABEL_51;
  }
  if ( (*((_BYTE *)v46 + 1869) & 1) == 0 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47, v46);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, (__int64)v12, 2, v13, 0);
    v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v51, 0LL);
    v18 = v14;
    if ( v14 < 0 )
    {
      v36 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v36 + 24) = v12;
      *(_QWORD *)(v36 + 32) = v18;
      WdLogEvent5_WdWarning(v36);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
      if ( v47[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
      if ( !v42 )
        goto LABEL_23;
    }
    else
    {
      v19 = 0;
      v20 = v48[1];
      while ( v19 < v20 )
      {
        v21 = (unsigned int *)(v9 + 4LL * v19);
        if ( v21 + 1 < v21 || (unsigned __int64)(v21 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v50 = *v21;
        v22 = v50;
        v23 = DXGDEVICE::UnpinResource(v12, v50, v41, (struct COREDEVICEACCESS *)v51);
        v18 = v23;
        if ( v23 < 0 )
        {
          v37 = WdLogNewEntry5_WdWarning(v25, v24, v26);
          *(_QWORD *)(v37 + 24) = v22;
          *(_QWORD *)(v37 + 32) = v18;
          WdLogEvent5_WdWarning(v37);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
          if ( v47[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
          if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
          goto LABEL_23;
        }
        ++v19;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
      if ( v47[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
      if ( !v42 )
        goto LABEL_23;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
LABEL_23:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v27);
    if ( v45 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v43);
    }
    return (unsigned int)v18;
  }
  if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v10);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v43);
  return 0LL;
}
