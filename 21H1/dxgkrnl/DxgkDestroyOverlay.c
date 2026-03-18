/*
 * XREFs of DxgkDestroyOverlay @ 0x1C0276C30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A30C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000EE64 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C00246F8 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C0045800 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C024FE34 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkDestroyOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGDEVICE *v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  DXGDEVICE *v27; // r12
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // edx
  __int64 v36; // rdx
  __int64 v37; // rdx
  struct DXGDEVICE *v38; // [rsp+20h] [rbp-D8h] BYREF
  DXGDEVICE *v39; // [rsp+28h] [rbp-D0h] BYREF
  int v40; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+38h] [rbp-C0h]
  char v42; // [rsp+40h] [rbp-B8h]
  __int64 v43; // [rsp+48h] [rbp-B0h]
  _QWORD v44[2]; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v45[16]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v46[32]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v47[64]; // [rsp+90h] [rbp-68h] BYREF

  v3 = (__int64 *)a1;
  v40 = -1;
  v41 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 2025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2025);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2025LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    goto LABEL_43;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v11 = *v3;
  v43 = v11;
  v39 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v38, (unsigned int)v11, (struct _KTHREAD **)Current, &v39);
  v14 = v39;
  if ( !v39 )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = (unsigned int)v11;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    if ( !v38 )
      goto LABEL_43;
    goto LABEL_12;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44, v39);
  COREACCESS::COREACCESS((COREACCESS *)v47, *(struct DXGADAPTER *const *)(*((_QWORD *)v14 + 2) + 16LL));
  COREACCESS::AcquireShared((COREACCESS *)v47, 0LL);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 200LL) == 4 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v47);
    if ( v44[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
    if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
    goto LABEL_20;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v46,
    (struct _KTHREAD **)Current);
  v23 = (HIDWORD(v43) >> 6) & 0xFFFFFF;
  if ( v23 < *((_DWORD *)Current + 64) )
  {
    v22 = *((_QWORD *)Current + 30);
    v20 = *(unsigned int *)(v22 + 16LL * v23 + 8);
    v21 = (HIDWORD(v43) >> 25) & 0x60;
    if ( ((HIDWORD(v43) >> 25) & 0x60) == (*(_BYTE *)(v22 + 16LL * v23 + 8) & 0x60)
      && (v20 & 0x2000) == 0
      && (v20 & 0x1F) != 0 )
    {
      v20 &= 0x1Fu;
      if ( (_BYTE)v20 == 6 )
      {
        v25 = *(_QWORD *)(v22 + 16LL * v23);
        goto LABEL_31;
      }
      v24 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v24 + 24) = 267LL;
      WdLogEvent5_WdError(v24);
    }
  }
  v25 = 0LL;
LABEL_31:
  if ( !v25 )
  {
    v26 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v26 + 24) = HIDWORD(v43);
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46);
    COREACCESS::~COREACCESS((COREACCESS *)v47);
    if ( v44[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
    if ( !v38 )
      goto LABEL_43;
LABEL_12:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_43;
    goto LABEL_42;
  }
  v27 = v39;
  if ( v39 != *(DXGDEVICE **)(v25 + 16) )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v28[3] = HIDWORD(v43);
    v28[4] = (unsigned int)v43;
    v28[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v28);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46);
    COREACCESS::~COREACCESS((COREACCESS *)v47);
    if ( v44[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
    if ( !v38 || _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_43;
LABEL_42:
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
LABEL_43:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v10);
    if ( v42 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v40);
    }
    return 3221225485LL;
  }
  if ( !DXGDEVICE::IsSupportOverlay(v39) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v32, v31);
    *(_QWORD *)(v33 + 24) = 984LL;
    WdLogEvent5_WdAssertion(v33);
  }
  if ( v23 < *((_DWORD *)Current + 64) )
  {
    v34 = *((_QWORD *)Current + 30);
    v35 = *(_DWORD *)(v34 + 16LL * v23 + 8);
    if ( ((HIDWORD(v43) >> 25) & 0x60) == (*(_BYTE *)(v34 + 16LL * v23 + 8) & 0x60)
      && (v35 & 0x2000) == 0
      && (v35 & 0x1F) != 0 )
    {
      *(_DWORD *)(v34 + 16LL * ((HIDWORD(v43) >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46);
  DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v45, *((struct ADAPTER_RENDER **)v14 + 2));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
  DXGDEVICE::DestroyOverlay(v27, (struct DXGOVERLAY ***)v25);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45, v36);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v45, v37);
  COREACCESS::~COREACCESS((COREACCESS *)v47);
  if ( v44[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
  if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v16);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v40);
  return 0LL;
}
