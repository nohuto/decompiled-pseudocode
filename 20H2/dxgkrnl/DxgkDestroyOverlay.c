/*
 * XREFs of DxgkDestroyOverlay @ 0x1C027A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0007050 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0024654 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C0046760 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C0253154 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
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
  struct DXGDEVICE *v37; // [rsp+20h] [rbp-D8h] BYREF
  DXGDEVICE *v38; // [rsp+28h] [rbp-D0h] BYREF
  int v39; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+38h] [rbp-C0h]
  char v41; // [rsp+40h] [rbp-B8h]
  __int64 v42; // [rsp+48h] [rbp-B0h]
  _QWORD v43[2]; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v44[16]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v45[32]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v46[64]; // [rsp+90h] [rbp-68h] BYREF

  v3 = (__int64 *)a1;
  v39 = -1;
  v40 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2025);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 2025LL);
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
  v42 = v11;
  v38 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v37, (unsigned int)v11, (struct _KTHREAD **)Current, &v38);
  v14 = v38;
  if ( !v38 )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = (unsigned int)v11;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    if ( !v37 )
      goto LABEL_43;
    goto LABEL_12;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43, v38);
  COREACCESS::COREACCESS((COREACCESS *)v46, *(struct DXGADAPTER *const *)(*((_QWORD *)v14 + 2) + 16LL));
  COREACCESS::AcquireShared((COREACCESS *)v46, 0LL);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 200LL) == 4 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v46);
    if ( v43[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43);
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    goto LABEL_20;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v45,
    (struct _KTHREAD **)Current);
  v23 = (HIDWORD(v42) >> 6) & 0xFFFFFF;
  if ( v23 < *((_DWORD *)Current + 64) )
  {
    v22 = *((_QWORD *)Current + 30);
    v20 = *(unsigned int *)(v22 + 16LL * v23 + 8);
    v21 = (HIDWORD(v42) >> 25) & 0x60;
    if ( ((HIDWORD(v42) >> 25) & 0x60) == (*(_BYTE *)(v22 + 16LL * v23 + 8) & 0x60)
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
    *(_QWORD *)(v26 + 24) = HIDWORD(v42);
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v45);
    COREACCESS::~COREACCESS((COREACCESS *)v46);
    if ( v43[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43);
    if ( !v37 )
      goto LABEL_43;
LABEL_12:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_43;
    goto LABEL_42;
  }
  v27 = v38;
  if ( v38 != *(DXGDEVICE **)(v25 + 16) )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v28[3] = HIDWORD(v42);
    v28[4] = (unsigned int)v42;
    v28[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v28);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v45);
    COREACCESS::~COREACCESS((COREACCESS *)v46);
    if ( v43[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43);
    if ( !v37 || _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_43;
LABEL_42:
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
LABEL_43:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v10);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v39);
    }
    return 3221225485LL;
  }
  if ( !DXGDEVICE::IsSupportOverlay(v38) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v32, v31);
    *(_QWORD *)(v33 + 24) = 984LL;
    WdLogEvent5_WdAssertion(v33);
  }
  if ( v23 < *((_DWORD *)Current + 64) )
  {
    v34 = *((_QWORD *)Current + 30);
    v35 = *(_DWORD *)(v34 + 16LL * v23 + 8);
    if ( ((HIDWORD(v42) >> 25) & 0x60) == (*(_BYTE *)(v34 + 16LL * v23 + 8) & 0x60)
      && (v35 & 0x2000) == 0
      && (v35 & 0x1F) != 0 )
    {
      *(_DWORD *)(v34 + 16LL * ((HIDWORD(v42) >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v45);
  DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v44, *((struct ADAPTER_RENDER **)v14 + 2));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
  DXGDEVICE::DestroyOverlay(v27, (struct DXGOVERLAY ***)v25);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44, v36);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v44);
  COREACCESS::~COREACCESS((COREACCESS *)v46);
  if ( v43[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43);
  if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v16);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v39);
  return 0LL;
}
