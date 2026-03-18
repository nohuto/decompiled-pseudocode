/*
 * XREFs of DxgkDestroyOverlay @ 0x1C032A840
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BD4C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C002B57C (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00567EC (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C02E4564 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkDestroyOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // sf
  __int64 v12; // rbx
  DXGDEVICE *v13; // r13
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // r15
  unsigned int v18; // ebx
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // r14
  DXGDEVICE *v22; // r12
  __int64 v23; // r8
  int v24; // edx
  struct DXGDEVICE *v25; // [rsp+50h] [rbp-D8h] BYREF
  int v26; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-C8h]
  char v28; // [rsp+68h] [rbp-C0h]
  __int64 v29; // [rsp+70h] [rbp-B8h]
  _QWORD v30[2]; // [rsp+78h] [rbp-B0h] BYREF
  DXGDEVICE *v31; // [rsp+88h] [rbp-A0h] BYREF
  _BYTE v32[16]; // [rsp+90h] [rbp-98h] BYREF
  _BYTE v33[32]; // [rsp+A0h] [rbp-88h] BYREF
  _BYTE v34[64]; // [rsp+C0h] [rbp-68h] BYREF

  v3 = (__int64 *)a1;
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2025);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 2025);
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
LABEL_46:
    if ( v11 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v26);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v12 = *v3;
  v29 = v12;
  v31 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v25, v12, (struct _KTHREAD **)Current, &v31);
  v13 = v31;
  if ( !v31 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v12, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      (unsigned int)v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( !v25 )
      goto LABEL_7;
LABEL_13:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30, v31);
  COREACCESS::COREACCESS((COREACCESS *)v34, *(struct DXGADAPTER *const *)(*((_QWORD *)v13 + 2) + 16LL));
  COREACCESS::AcquireShared((COREACCESS *)v34, 0LL);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 200LL) == 4 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v34);
    if ( v30[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
    goto LABEL_21;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v33, Current);
  v17 = HIDWORD(v29);
  v18 = (HIDWORD(v29) >> 6) & 0xFFFFFF;
  if ( v18 < *((_DWORD *)Current + 74) )
  {
    v19 = *((_QWORD *)Current + 35);
    v20 = *(_DWORD *)(v19 + 16LL * v18 + 8);
    if ( ((HIDWORD(v29) >> 25) & 0x60) == (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x60)
      && (v20 & 0x2000) == 0
      && (v20 & 0x1F) != 0 )
    {
      if ( (v20 & 0x1F) == 6 )
      {
        v21 = *(_QWORD *)(v19 + 16LL * v18);
        goto LABEL_32;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v21 = 0LL;
LABEL_32:
  if ( !v21 )
  {
    WdLogSingleEntry2(3LL, v17, -1073741811LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
    COREACCESS::~COREACCESS((COREACCESS *)v34);
    if ( v30[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    if ( !v25 )
      goto LABEL_7;
    goto LABEL_13;
  }
  v22 = v31;
  if ( v31 != *(DXGDEVICE **)(v21 + 16) )
  {
    WdLogSingleEntry3(3LL, v17, (unsigned int)v29, -1073741811LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
    COREACCESS::~COREACCESS((COREACCESS *)v34);
    if ( v30[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( !v28 )
      return 3221225485LL;
    LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_46;
  }
  if ( !DXGDEVICE::IsSupportOverlay(v31) )
  {
    WdLogSingleEntry1(1LL, 984LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice->IsSupportOverlay()", 984LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v18 < *((_DWORD *)Current + 74) )
  {
    v23 = *((_QWORD *)Current + 35);
    v24 = *(_DWORD *)(v23 + 16LL * v18 + 8);
    if ( (((unsigned int)v17 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16LL * v18 + 8) & 0x60)
      && (v24 & 0x2000) == 0
      && (v24 & 0x1F) != 0 )
    {
      *(_DWORD *)(v23 + 16LL * (((unsigned int)v17 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
  DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v32, *((struct ADAPTER_RENDER **)v13 + 2));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
  DXGDEVICE::DestroyOverlay(v22, (struct DXGOVERLAY ***)v21);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v32);
  COREACCESS::~COREACCESS((COREACCESS *)v34);
  if ( v30[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
  if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v26);
  return 0LL;
}
