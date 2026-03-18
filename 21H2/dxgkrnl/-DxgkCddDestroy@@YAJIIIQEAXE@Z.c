/*
 * XREFs of ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C01E5A60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016CBAC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkShutdownBootGraphics @ 0x1C01C2340 (DxgkShutdownBootGraphics.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C030E37C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C03493B4 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkCddDestroy(__int64 a1, unsigned int a2, __int64 a3, char *a4, char a5)
{
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGPROCESS *Current; // r15
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // edx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // r14
  unsigned int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // r8
  const wchar_t *v25; // r9
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // edx
  __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r9
  char *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r15
  struct DXGDEVICE *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // r9
  char *v40; // rdx
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r9
  char *v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // r9
  char *v48; // rdx
  unsigned int v49; // [rsp+50h] [rbp-B0h]
  int v50; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A0h]
  char v52; // [rsp+68h] [rbp-98h]
  _BYTE v53[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v54; // [rsp+78h] [rbp-88h]
  char v55; // [rsp+80h] [rbp-80h]
  _BYTE v56[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v57; // [rsp+90h] [rbp-70h]
  char v58; // [rsp+98h] [rbp-68h]
  _BYTE v59[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-58h]
  char v61; // [rsp+B0h] [rbp-50h]
  _BYTE v62[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-40h]
  char v64; // [rsp+C8h] [rbp-38h]
  _QWORD v65[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v66[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v67[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v68[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v69[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v70[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v71[88]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v72[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v73[64]; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v74[88]; // [rsp+1F8h] [rbp+F8h] BYREF
  _BYTE v75[8]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v76[64]; // [rsp+258h] [rbp+158h] BYREF
  _BYTE v77[88]; // [rsp+298h] [rbp+198h] BYREF
  _BYTE v78[8]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE v79[64]; // [rsp+2F8h] [rbp+1F8h] BYREF
  _BYTE v80[88]; // [rsp+338h] [rbp+238h] BYREF

  v50 = -1;
  v49 = a3;
  v6 = a2;
  v7 = (unsigned int)a1;
  v51 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v52 = 1;
    v50 = 3001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3001);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v50, 3001);
  if ( !a4 )
  {
    v21 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v25 = L"No pAdapter specified, returning 0x%I64x";
    v7 = 0LL;
    Current = 0LL;
LABEL_38:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v25, -1073741811LL, v7, (__int64)Current, 0LL, 0LL);
    goto LABEL_25;
  }
  Current = DXGPROCESS::GetCurrent(v9, v8, v10, v11);
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 341LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != pProcess", 341LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v13 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 >= *((_DWORD *)Current + 74) )
    goto LABEL_10;
  v14 = *((_QWORD *)Current + 35);
  v15 = *(_DWORD *)(v14 + 16 * v13 + 8);
  if ( (((unsigned int)v7 >> 25) & 0x60) != (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x60)
    || (v15 & 0x2000) != 0
    || (v15 & 0x1F) == 0 )
  {
    goto LABEL_10;
  }
  if ( (v15 & 0x1F) != 3 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_10:
    v16 = 0LL;
    goto LABEL_11;
  }
  v16 = *(_QWORD *)(v14 + 16LL * (unsigned int)v13);
LABEL_11:
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v16 )
  {
    v21 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v7, Current);
    v25 = L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x";
    goto LABEL_38;
  }
  DxgkShutdownBootGraphics((struct DXGDEVICE *)v16, 0);
  if ( a5 )
    DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(a4 + 404), (struct DXGDEVICE *)v16);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v17 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 >= *((_DWORD *)Current + 74) )
    goto LABEL_18;
  v18 = *((_QWORD *)Current + 35);
  v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
  if ( (((unsigned int)v6 >> 25) & 0x60) != (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
    || (v19 & 0x2000) != 0
    || (v19 & 0x1F) == 0 )
  {
    goto LABEL_18;
  }
  if ( (v19 & 0x1F) != 7 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_18:
    v20 = 0LL;
    goto LABEL_19;
  }
  v20 = *(_QWORD *)(v18 + 16LL * (unsigned int)v17);
LABEL_19:
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v20 )
  {
    v21 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v6, Current);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Invalid hContext=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v6,
      (__int64)Current,
      0LL,
      0LL);
    v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_61;
  }
  if ( !v49 )
  {
LABEL_21:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v45 = *(_QWORD *)(v20 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v68,
        (struct DXGDEVICE *)v45);
      v46 = *(_QWORD *)(v20 + 16);
      v64 = 0;
      v63 = *(_QWORD *)(*(_QWORD *)(v46 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v78, v45, 2, v47, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v78, v48);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v45, (struct DXGCONTEXT *)v20, (struct COREDEVICEACCESS *)v78);
      COREACCESS::~COREACCESS((COREACCESS *)v80);
      COREACCESS::~COREACCESS((COREACCESS *)v79);
      if ( v64 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
      if ( v68[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v68);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v45 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v45 + 16), (struct DXGDEVICE *)v45);
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v16 + 16), (struct DXGDEVICE *)v16);
    v21 = 0;
    goto LABEL_25;
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v27 = (v49 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v27 < *((_DWORD *)Current + 74) )
  {
    v28 = *((_QWORD *)Current + 35);
    v29 = *(_DWORD *)(v28 + 16 * v27 + 8);
    if ( ((v49 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60) && (v29 & 0x2000) == 0 && (v29 & 0x1F) != 0 )
    {
      if ( (v29 & 0x1F) == 0xF )
      {
        v30 = *(_QWORD *)(v28 + 16LL * (unsigned int)v27);
        goto LABEL_50;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v30 = 0LL;
LABEL_50:
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( v30 )
  {
    v35 = _InterlockedDecrement64((volatile signed __int64 *)(v30 + 104));
    if ( v35 >= 0 )
    {
      if ( !v35 )
      {
        v36 = *(_QWORD *)(v30 + 16);
        v37 = *(struct DXGDEVICE **)(v36 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v66, v37);
        v38 = *((_QWORD *)v37 + 2);
        v58 = 0;
        v57 = *(_QWORD *)(v38 + 16);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v72, (__int64)v37, 2, v39, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v72, v40);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v37 + 2) + 16LL) + 200LL) != 4 )
          DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v36, (PVOID)v30, (struct COREDEVICEACCESS *)v72);
        COREACCESS::~COREACCESS((COREACCESS *)v74);
        COREACCESS::~COREACCESS((COREACCESS *)v73);
        if ( v58 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
        if ( v66[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v66);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v41 = *(_QWORD *)(v36 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v67,
            (struct DXGDEVICE *)v41);
          v42 = *(_QWORD *)(v36 + 16);
          v61 = 0;
          v60 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v75, v41, 2, v43, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v75, v44);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL) + 200LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v41, (struct DXGCONTEXT *)v36, (struct COREDEVICEACCESS *)v75);
          COREACCESS::~COREACCESS((COREACCESS *)v77);
          COREACCESS::~COREACCESS((COREACCESS *)v76);
          if ( v61 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
          if ( v67[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v67);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v41 + 16), (struct DXGDEVICE *)v41);
        }
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, 128LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NewReferenceCount >= 0", 128LL, 0LL, 0LL, 0LL, 0LL);
    }
    goto LABEL_21;
  }
  v21 = -1073741811;
  WdLogSingleEntry3(2LL, -1073741811LL, v49, Current);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x Invalid hHwQueue=0x%I64x specified DXGPROCESS=0x%I64x",
    -1073741811LL,
    v49,
    (__int64)Current,
    0LL,
    0LL);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v31 = *(_QWORD *)(v20 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v65,
      (struct DXGDEVICE *)v31);
    v32 = *(_QWORD *)(v20 + 16);
    v55 = 0;
    v54 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v53);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v69, v31, 2, v33, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v69, v34);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v31, (struct DXGCONTEXT *)v20, (struct COREDEVICEACCESS *)v69);
    COREACCESS::~COREACCESS((COREACCESS *)v71);
    COREACCESS::~COREACCESS((COREACCESS *)v70);
    if ( v55 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v53);
    if ( v65[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v65);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v31 + 16), (struct DXGDEVICE *)v31);
  }
  v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_61:
  if ( v26 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v16 + 16), (struct DXGDEVICE *)v16);
LABEL_25:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
  if ( v52 )
  {
    LOBYTE(v22) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v50);
  }
  return v21;
}
