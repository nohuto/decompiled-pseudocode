/*
 * XREFs of NtDxgkDestroyTrackedWorkload @ 0x1C03462F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C005A228 (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C03446AC (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C0344A1C (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall NtDxgkDestroyTrackedWorkload(DXGTRACKEDWORKLOAD *a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  unsigned int v4; // esi
  unsigned int *v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGPROCESS *Current; // r14
  __int64 v15; // rdi
  __int64 v16; // r9
  char *v17; // rdx
  unsigned int v18; // r9d
  unsigned int v19; // r11d
  __int64 v20; // r10
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r8
  int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // r8
  DXGTRACKEDWORKLOAD *v29; // [rsp+50h] [rbp-128h] BYREF
  int v30; // [rsp+58h] [rbp-120h] BYREF
  __int64 v31; // [rsp+60h] [rbp-118h]
  char v32; // [rsp+68h] [rbp-110h]
  struct DXGDEVICE *v33; // [rsp+70h] [rbp-108h] BYREF
  unsigned int v34[2]; // [rsp+78h] [rbp-100h] BYREF
  _QWORD v35[2]; // [rsp+80h] [rbp-F8h] BYREF
  DXGTRACKEDWORKLOAD *v36[2]; // [rsp+90h] [rbp-E8h] BYREF
  _BYTE v37[32]; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v38[160]; // [rsp+C0h] [rbp-B8h] BYREF

  v3 = (unsigned int *)a1;
  v29 = a1;
  v4 = 0;
  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2207;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2207);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 2207);
  *(_QWORD *)v34 = 0LL;
  v5 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v5 = (unsigned int *)MmUserProbeAddress;
  v6 = *v5;
  if ( *v5 < 8 )
  {
    WdLogSingleEntry1(3LL, 375LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v30);
    }
    return 3221225485LL;
  }
  if ( v6 > 8 )
    v6 = 8;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  memmove(v34, v3, v6);
  v33 = 0LL;
  v29 = 0LL;
  Current = DXGPROCESS::GetCurrent(v11, v10, v12, v13);
  v15 = v34[1];
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE((DXGTRACKEDWORKLOADBYHANDLE *)v36, v34[1], Current, &v29, &v33);
  if ( !v29 )
  {
    v4 = -1073741811;
    WdLogSingleEntry2(3LL, (unsigned int)v15, 404LL);
LABEL_18:
    DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      LOBYTE(v27) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v30);
    }
    return v4;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v35, v33);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, (__int64)v33, 2, v16, 0);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v38, v17);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v37, Current);
  v18 = ((unsigned int)v15 >> 6) & 0xFFFFFF;
  v19 = *((_DWORD *)Current + 74);
  if ( v18 < v19
    && (v20 = *((_QWORD *)Current + 35),
        v21 = *(_DWORD *)(v20 + 16LL * v18 + 8),
        (((unsigned int)v15 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16LL * v18 + 8) & 0x60))
    && (v21 & 0x2000) == 0
    && (v21 & 0x1F) == 0x13 )
  {
    v22 = *(_QWORD *)(v20 + 16LL * v18);
  }
  else
  {
    v22 = 0LL;
  }
  if ( v22 )
  {
    if ( v18 < v19 )
    {
      v25 = *((_QWORD *)Current + 35);
      v26 = *(_DWORD *)(v25 + 16LL * v18 + 8);
      if ( (((unsigned int)v15 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16LL * v18 + 8) & 0x60)
        && (v26 & 0x2000) == 0
        && (v26 & 0x1F) != 0 )
      {
        *(_DWORD *)(v25 + 16LL * (((unsigned int)v15 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
    if ( DXGTRACKEDWORKLOAD::Release(v29) != 1 )
    {
      WdLogSingleEntry1(1LL, 436LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ref == 1", 436LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
    if ( v35[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v35);
    goto LABEL_18;
  }
  WdLogSingleEntry1(3LL, v15);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
  if ( v35[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v35);
  DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v36);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v30);
  return 0LL;
}
