/*
 * XREFs of ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C01C24F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00137F4 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001E30C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016C650 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD **Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  D3DKMT_HANDLE hDevice; // edx
  struct DXGDEVICE *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  __int64 v21; // r12
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 CurrentProcess; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // r8
  int v37; // ecx
  struct _EX_RUNDOWN_REF *v38; // rdx
  struct _EX_RUNDOWN_REF *v39; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v40; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v41; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+68h] [rbp-98h] BYREF
  __int64 v43; // [rsp+70h] [rbp-90h]
  char v44; // [rsp+78h] [rbp-88h]
  _BYTE v45[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v46; // [rsp+88h] [rbp-78h]
  char v47; // [rsp+90h] [rbp-70h]
  _BYTE v48[24]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v49[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v50[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v51[88]; // [rsp+F8h] [rbp-8h] BYREF

  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v44 = 1;
    v42 = 3006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3006);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 3006);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v13 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
    v19 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v30 = PsGetCurrentProcess(v27, v26, v28, v29);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v30,
      0LL,
      0LL,
      0LL);
    goto LABEL_14;
  }
  hDevice = a1->hDevice;
  v40 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v41, hDevice, Current, &v40);
  v15 = v40;
  if ( v40 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v48, v40);
    v16 = *((_QWORD *)v15 + 2);
    v47 = 0;
    v46 = *(_QWORD *)(v16 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, (__int64)v15, 2, v17, 0);
    v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v49, 0LL);
    v19 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry3(4LL, v18, v15, v13);
      goto LABEL_8;
    }
    v20 = DXGDEVICE::Lock(v15, a1, (struct COREDEVICEACCESS *)v49);
    v21 = v20;
    if ( v20 >= 0 )
    {
LABEL_7:
      v19 = v21;
LABEL_8:
      COREACCESS::~COREACCESS((COREACCESS *)v51);
      COREACCESS::~COREACCESS((COREACCESS *)v50);
      if ( v47 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v48);
      goto LABEL_11;
    }
    hAllocation = a1->hAllocation;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13 + 248, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v34 = *(_DWORD *)(v13 + 272);
        if ( v34 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v32, (const EVENT_DESCRIPTOR *)"g", v33, v34);
      }
      ExAcquirePushLockSharedEx(v13 + 248, 0LL);
    }
    v35 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v35 < *(_DWORD *)(v13 + 296) )
    {
      v36 = *(_QWORD *)(v13 + 280);
      v37 = *(_DWORD *)(v36 + 16 * v35 + 8);
      if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v36 + 16 * v35 + 8) & 0x60)
        && (v37 & 0x2000) == 0
        && (v37 & 0x1F) != 0 )
      {
        if ( (v37 & 0x1F) == 5 )
        {
          v38 = *(struct _EX_RUNDOWN_REF **)(v36 + 16LL * (unsigned int)v35);
          goto LABEL_34;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v38 = 0LL;
LABEL_34:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v39, v38);
    ExReleasePushLockSharedEx(v13 + 248, 0LL);
    KeLeaveCriticalRegion();
    WdLogSingleEntry5(2LL, v21, v15, v13, a1->hAllocation, v39);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Lock failed 0x%I64x 0x%I64x 0x%I64x 0x%I64x",
      v21,
      (__int64)v15,
      v13,
      a1->hAllocation,
      (__int64)v39);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
    goto LABEL_7;
  }
  v19 = -1073741811;
  WdLogSingleEntry3(2LL, -1073741811LL, a1->hDevice, v13);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
    -1073741811LL,
    a1->hDevice,
    v13,
    0LL,
    0LL);
LABEL_11:
  if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 )
  {
    LOBYTE(v22) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v42);
  }
  return v19;
}
