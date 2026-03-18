/*
 * XREFs of DxgkGetOverlayState @ 0x1C027AB10
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007000 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0024654 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C0026A1C (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C00466E4 (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C0046718 (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C0046760 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z @ 0x1C0279158 (-GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z.c)
 */

__int64 __fastcall DxgkGetOverlayState(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  _D3DKMT_GETOVERLAYSTATE *v11; // rax
  __int64 hDevice; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct ADAPTER_RENDER **v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rax
  struct DXGOVERLAY *v23; // rdi
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v28; // r14d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  int OverlayState; // edi
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  _BYTE *v40; // rdx
  struct DXGDEVICE *v41; // [rsp+20h] [rbp-E8h] BYREF
  DXGDEVICE *v42; // [rsp+28h] [rbp-E0h] BYREF
  int v43; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+38h] [rbp-D0h]
  char v45; // [rsp+40h] [rbp-C8h]
  __int64 v46; // [rsp+48h] [rbp-C0h] BYREF
  char v47; // [rsp+50h] [rbp-B8h]
  _D3DKMT_GETOVERLAYSTATE v48; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v49[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v50[24]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v51[80]; // [rsp+90h] [rbp-78h] BYREF

  v43 = -1;
  v44 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2057;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2057);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 2057LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_29:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v10);
    if ( v45 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v43);
    }
    return 3221225485LL;
  }
  v11 = (_D3DKMT_GETOVERLAYSTATE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (_D3DKMT_GETOVERLAYSTATE *)MmUserProbeAddress;
  v48 = *v11;
  v42 = 0LL;
  hDevice = v48.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v41, v48.hDevice, (struct _KTHREAD **)Current, &v42);
  v15 = (struct ADAPTER_RENDER **)v42;
  if ( !v42 )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = hDevice;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
LABEL_26:
    if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
    goto LABEL_29;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v46, v42);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v50, (struct _KTHREAD **)Current);
  v19 = (v48.hOverlay >> 6) & 0xFFFFFF;
  v20 = v48.hOverlay >> 30;
  if ( (unsigned int)v19 >= *((_DWORD *)Current + 64) )
    goto LABEL_17;
  v17 = (unsigned int)v19;
  v21 = *((_QWORD *)Current + 30);
  v18 = *(unsigned int *)(v21 + 16 * v19 + 8);
  if ( (_DWORD)v20 != ((*(_DWORD *)(v21 + 16 * v19 + 8) >> 5) & 3) || (v18 & 0x2000) != 0 || (v18 & 0x1F) == 0 )
    goto LABEL_17;
  v17 = 2LL * (unsigned int)v19;
  v18 &= 0x1Fu;
  if ( (_BYTE)v18 != 6 )
  {
    v22 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v22 + 24) = 267LL;
    WdLogEvent5_WdError(v22);
LABEL_17:
    v23 = 0LL;
    goto LABEL_18;
  }
  v23 = *(struct DXGOVERLAY **)(v21 + 16LL * (unsigned int)v19);
LABEL_18:
  if ( !v23 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v20);
    v24[4] = -1073741811LL;
LABEL_23:
    v24[3] = v48.hOverlay;
    WdLogEvent5_WdWarning(v24);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
    if ( v46 && v47 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v46 + 136));
      KeLeaveCriticalRegion();
    }
    goto LABEL_26;
  }
  if ( v15 != *((struct ADAPTER_RENDER ***)v23 + 2) )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v20);
    v24[4] = hDevice;
    v24[5] = -1073741811LL;
    goto LABEL_23;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v51, v23);
  v28 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)v51);
  if ( v28 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v15) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v33, v32);
      *(_QWORD *)(v34 + 24) = 1092LL;
      WdLogEvent5_WdAssertion(v34);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v49, v15[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v49);
    OverlayState = DXGOVERLAY::GetOverlayState(v23, &v48);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v49, v36);
    if ( OverlayState >= 0 )
    {
      v40 = (_BYTE *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v40 = (_BYTE *)MmUserProbeAddress;
      *v40 = v48.OverlayEnabled;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v49);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v51);
    if ( v46 && v47 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v46 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v37);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v43);
    return (unsigned int)OverlayState;
  }
  else
  {
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v51);
    if ( v46 && v47 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v46 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v29);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v43);
    return (unsigned int)v28;
  }
}
