/*
 * XREFs of DxgkUpdateOverlay @ 0x1C032BB70
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C002B57C (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C002C7CC (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C0056770 (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C00567A4 (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00567EC (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1C0329C80 (-UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkUpdateOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_UPDATEOVERLAY *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // r14
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // sf
  struct ADAPTER_RENDER **v12; // rdi
  __int64 hDevice; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // edx
  struct DXGOVERLAY *v17; // rbx
  int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int updated; // ebx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGDEVICE *v25; // [rsp+50h] [rbp-118h] BYREF
  int v26; // [rsp+58h] [rbp-110h] BYREF
  __int64 v27; // [rsp+60h] [rbp-108h]
  char v28; // [rsp+68h] [rbp-100h]
  DXGDEVICE *v29; // [rsp+70h] [rbp-F8h] BYREF
  _QWORD v30[2]; // [rsp+78h] [rbp-F0h] BYREF
  _BYTE v31[24]; // [rsp+88h] [rbp-E0h] BYREF
  _D3DKMT_UPDATEOVERLAY v32; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE v33[32]; // [rsp+E0h] [rbp-88h] BYREF
  _BYTE v34[80]; // [rsp+100h] [rbp-68h] BYREF

  v3 = (_D3DKMT_UPDATEOVERLAY *)a1;
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2023;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2023);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 2023);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( !v28 )
      return 3221225485LL;
    v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_35:
    if ( v11 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v26);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_D3DKMT_UPDATEOVERLAY *)MmUserProbeAddress;
  v32 = *v3;
  v29 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v25, v32.hDevice, (struct _KTHREAD **)Current, &v29);
  v12 = (struct ADAPTER_RENDER **)v29;
  if ( !v29 )
  {
    hDevice = v32.hDevice;
    WdLogSingleEntry2(2LL, v32.hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_13:
    if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30, v29);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v33, Current);
  v14 = (v32.hOverlay >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 >= *((_DWORD *)Current + 74) )
    goto LABEL_22;
  v15 = *((_QWORD *)Current + 35);
  v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
  if ( ((v32.hOverlay >> 25) & 0x60) != (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60)
    || (v16 & 0x2000) != 0
    || (v16 & 0x1F) == 0 )
  {
    goto LABEL_22;
  }
  if ( (v16 & 0x1F) != 6 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_22:
    v17 = 0LL;
    goto LABEL_23;
  }
  v17 = *(struct DXGOVERLAY **)(v15 + 16LL * (unsigned int)v14);
LABEL_23:
  if ( !v17 )
  {
    WdLogSingleEntry2(3LL, v32.hOverlay, -1073741811LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
    if ( v30[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    goto LABEL_13;
  }
  if ( v12 != *((struct ADAPTER_RENDER ***)v17 + 2) )
  {
    WdLogSingleEntry3(3LL, v32.hOverlay, v32.hDevice, -1073741811LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
    if ( v30[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( !v28 )
      return 3221225485LL;
    LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_35;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v34, v17);
  v19 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)v34);
  if ( v19 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v12) )
    {
      WdLogSingleEntry1(1LL, 773LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice->IsSupportOverlay()", 773LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v31, v12[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
    updated = DXGOVERLAY::UpdateOverlay((struct _EX_RUNDOWN_REF *)v17, &v32);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v34);
    if ( v30[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v26);
    return updated;
  }
  else
  {
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v34);
    if ( v30[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v26);
    return (unsigned int)v19;
  }
}
