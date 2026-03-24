/*
 * XREFs of ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C016AE00
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005898 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007464 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E5B54 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkShutdownBootGraphics @ 0x1C0144E70 (DxgkShutdownBootGraphics.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C026CF34 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C029FF78 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkCddDestroy(__int64 a1, unsigned int a2, __int64 a3, char *a4, char a5)
{
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // rdx
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // r8
  int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // r9
  char *v48; // rdx
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // r15
  struct DXGDEVICE *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // r9
  char *v55; // rdx
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // r9
  char *v59; // rdx
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // r9
  char *v63; // rdx
  int v64; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v65; // [rsp+40h] [rbp-C0h]
  char v66; // [rsp+48h] [rbp-B8h]
  _BYTE v67[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v68; // [rsp+58h] [rbp-A8h]
  char v69; // [rsp+60h] [rbp-A0h]
  _BYTE v70[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v71; // [rsp+70h] [rbp-90h]
  char v72; // [rsp+78h] [rbp-88h]
  _BYTE v73[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v74; // [rsp+88h] [rbp-78h]
  char v75; // [rsp+90h] [rbp-70h]
  _BYTE v76[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-60h]
  char v78; // [rsp+A8h] [rbp-58h]
  _QWORD v79[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v80[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v81[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v82[2]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v83[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v84[64]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v85[88]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v86[8]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v87[64]; // [rsp+198h] [rbp+98h] BYREF
  _BYTE v88[88]; // [rsp+1D8h] [rbp+D8h] BYREF
  _BYTE v89[8]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v90[64]; // [rsp+238h] [rbp+138h] BYREF
  _BYTE v91[88]; // [rsp+278h] [rbp+178h] BYREF
  _BYTE v92[8]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v93[64]; // [rsp+2D8h] [rbp+1D8h] BYREF
  _BYTE v94[88]; // [rsp+318h] [rbp+218h] BYREF

  v64 = -1;
  v65 = 0LL;
  v6 = (unsigned int)a3;
  v7 = a2;
  v8 = (unsigned int)a1;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v66 = 1;
    v64 = 3001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3001);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v64, 3001LL);
  if ( !a4 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
LABEL_37:
    v28 = -1073741811;
    v34[3] = -1073741811LL;
    WdLogEvent5_WdError(v34);
    goto LABEL_27;
  }
  Current = DXGPROCESS::GetCurrent(v10, v9);
  if ( !Current )
  {
    v35 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v35 + 24) = 341LL;
    WdLogEvent5_WdAssertion(v35);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v14 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 >= *((_DWORD *)Current + 64) )
    goto LABEL_11;
  v15 = *((_QWORD *)Current + 30);
  v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
  if ( (((unsigned int)v8 >> 25) & 0x60) != (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60)
    || (v16 & 0x2000) != 0
    || (v16 & 0x1F) == 0 )
  {
    goto LABEL_11;
  }
  v32 = v16 & 0x1F;
  if ( (_BYTE)v32 != 3 )
  {
    v17 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v32);
    *(_QWORD *)(v17 + 24) = 316LL;
    WdLogEvent5_WdError(v17);
LABEL_11:
    v18 = 0LL;
    goto LABEL_12;
  }
  v18 = *(_QWORD *)(v15 + 16LL * (unsigned int)v14);
LABEL_12:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v18 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
    v34[4] = v8;
    v34[5] = Current;
    goto LABEL_37;
  }
  DxgkShutdownBootGraphics((struct DXGDEVICE *)v18, 0LL);
  if ( a5 )
    DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(a4 + 316), (struct DXGDEVICE *)v18);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v21 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v21 >= *((_DWORD *)Current + 64) )
    goto LABEL_20;
  v22 = *((_QWORD *)Current + 30);
  v23 = *(_DWORD *)(v22 + 16 * v21 + 8);
  if ( (((unsigned int)v7 >> 25) & 0x60) != (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60)
    || (v23 & 0x2000) != 0
    || (v23 & 0x1F) == 0 )
  {
    goto LABEL_20;
  }
  v33 = v23 & 0x1F;
  if ( (_BYTE)v33 != 7 )
  {
    v24 = WdLogNewEntry5_WdError(((unsigned int)v7 >> 25) & 0x60, v33);
    *(_QWORD *)(v24 + 24) = 316LL;
    WdLogEvent5_WdError(v24);
LABEL_20:
    v25 = 0LL;
    goto LABEL_21;
  }
  v25 = *(_QWORD *)(v22 + 16LL * (unsigned int)v21);
LABEL_21:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v25 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
    v28 = -1073741811;
    v36[3] = -1073741811LL;
    v36[4] = v7;
    v36[5] = Current;
    WdLogEvent5_WdError(v36);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_27;
    goto LABEL_63;
  }
  if ( !(_DWORD)v6 )
  {
LABEL_23:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v60 = *(_QWORD *)(v25 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v82,
        (struct DXGDEVICE *)v60);
      v61 = *(_QWORD *)(v25 + 16);
      v78 = 0;
      v77 = *(_QWORD *)(*(_QWORD *)(v61 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v92, v60, 2, v62, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v92, v63);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v60 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v60, (struct DXGCONTEXT *)v25, (struct COREDEVICEACCESS *)v92);
      COREACCESS::~COREACCESS((COREACCESS *)v94);
      COREACCESS::~COREACCESS((COREACCESS *)v93);
      if ( v78 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
      if ( v82[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v82);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v60 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v60 + 16), (struct DXGDEVICE *)v60);
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v18 + 16), (struct DXGDEVICE *)v18);
    v28 = 0;
    goto LABEL_27;
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v37 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v37 >= *((_DWORD *)Current + 64) )
    goto LABEL_51;
  v38 = *((_QWORD *)Current + 30);
  v39 = *(_DWORD *)(v38 + 16 * v37 + 8);
  if ( (((unsigned int)v6 >> 25) & 0x60) != (*(_BYTE *)(v38 + 16 * v37 + 8) & 0x60)
    || (v39 & 0x2000) != 0
    || (v39 & 0x1F) == 0 )
  {
    goto LABEL_51;
  }
  v40 = v39 & 0x1F;
  if ( (_BYTE)v40 != 15 )
  {
    v41 = WdLogNewEntry5_WdError(((unsigned int)v6 >> 25) & 0x60, v40);
    *(_QWORD *)(v41 + 24) = 316LL;
    WdLogEvent5_WdError(v41);
LABEL_51:
    v42 = 0LL;
    goto LABEL_52;
  }
  v42 = *(_QWORD *)(v38 + 16LL * (unsigned int)v37);
LABEL_52:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v42 )
  {
    v49 = _InterlockedDecrement64((volatile signed __int64 *)(v42 + 88));
    if ( v49 < 0 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v43, v26);
      *(_QWORD *)(v50 + 24) = 111LL;
      WdLogEvent5_WdAssertion(v50);
    }
    if ( !v49 )
    {
      v51 = *(_QWORD *)(v42 + 16);
      v52 = *(struct DXGDEVICE **)(v51 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v80, v52);
      v53 = *((_QWORD *)v52 + 2);
      v72 = 0;
      v71 = *(_QWORD *)(v53 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v86, (__int64)v52, 2, v54, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v86, v55);
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v52 + 2) + 16LL) + 200LL) != 4 )
        DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v51, (PVOID)v42, (struct COREDEVICEACCESS *)v86);
      COREACCESS::~COREACCESS((COREACCESS *)v88);
      COREACCESS::~COREACCESS((COREACCESS *)v87);
      if ( v72 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
      if ( v80[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v80);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v56 = *(_QWORD *)(v51 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v81,
          (struct DXGDEVICE *)v56);
        v57 = *(_QWORD *)(v51 + 16);
        v75 = 0;
        v74 = *(_QWORD *)(*(_QWORD *)(v57 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v89, v56, 2, v58, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v89, v59);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v56 + 16) + 16LL) + 200LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v56, (struct DXGCONTEXT *)v51, (struct COREDEVICEACCESS *)v89);
        COREACCESS::~COREACCESS((COREACCESS *)v91);
        COREACCESS::~COREACCESS((COREACCESS *)v90);
        if ( v75 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
        if ( v81[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v81);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v56 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v56 + 16), (struct DXGDEVICE *)v56);
      }
    }
    goto LABEL_23;
  }
  v44 = (_QWORD *)WdLogNewEntry5_WdError(v43, v26);
  v28 = -1073741811;
  v44[3] = -1073741811LL;
  v44[4] = v6;
  v44[5] = Current;
  WdLogEvent5_WdError(v44);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v45 = *(_QWORD *)(v25 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v79,
      (struct DXGDEVICE *)v45);
    v46 = *(_QWORD *)(v25 + 16);
    v69 = 0;
    v68 = *(_QWORD *)(*(_QWORD *)(v46 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v67);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v83, v45, 2, v47, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v83, v48);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v45, (struct DXGCONTEXT *)v25, (struct COREDEVICEACCESS *)v83);
    COREACCESS::~COREACCESS((COREACCESS *)v85);
    COREACCESS::~COREACCESS((COREACCESS *)v84);
    if ( v69 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v67);
    if ( v79[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v79);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v45 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v45 + 16), (struct DXGDEVICE *)v45);
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
LABEL_63:
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v18 + 16), (struct DXGDEVICE *)v18);
LABEL_27:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64, v26);
  if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v64);
  return v28;
}
