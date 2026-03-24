/*
 * XREFs of ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C0169A20
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006F9C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A29C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FF580 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0102A50 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **v9; // rbx
  __int64 hDevice; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGDEVICE *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // r12
  unsigned int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  D3DKMT_HANDLE hAllocation; // r15d
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // r9d
  __int64 v36; // rax
  struct _KTHREAD *v37; // r8
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rax
  struct _EX_RUNDOWN_REF *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rdx
  struct _EX_RUNDOWN_REF *v46; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v47; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGDEVICE *v48; // [rsp+40h] [rbp-C0h] BYREF
  int v49; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+50h] [rbp-B0h]
  char v51; // [rsp+58h] [rbp-A8h]
  char v52[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+68h] [rbp-98h]
  char v54; // [rsp+70h] [rbp-90h]
  _BYTE v55[24]; // [rsp+78h] [rbp-88h] BYREF
  char v56[8]; // [rsp+90h] [rbp-70h] BYREF
  char v57[64]; // [rsp+98h] [rbp-68h] BYREF
  char v58[88]; // [rsp+D8h] [rbp-28h] BYREF

  v49 = -1;
  v50 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v51 = 1;
    v49 = 3006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3006);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v49, 3006LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  v9 = Current;
  if ( !Current )
  {
    v22 = -1073741811;
    v27 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    *(_QWORD *)(v27 + 32) = PsGetCurrentProcess(v29, v28);
    WdLogEvent5_WdError(v27);
    goto LABEL_14;
  }
  hDevice = a1->hDevice;
  v47 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v48, hDevice, Current, &v47);
  v13 = v47;
  if ( v47 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v55, v47);
    v14 = *((_QWORD *)v13 + 2);
    v54 = 0;
    v53 = *(_QWORD *)(v14 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v56, (__int64)v13, 2, v15, 0);
    v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v56, 0LL);
    v19 = v16;
    if ( v16 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdEvent(v18, v17);
      v31[3] = v19;
      v31[4] = v13;
      v31[5] = v9;
      WdLogEvent5_WdEvent(v31);
      v22 = v19;
      goto LABEL_8;
    }
    v20 = DXGDEVICE::Lock(v13, a1, (struct COREDEVICEACCESS *)v56);
    v21 = v20;
    if ( v20 >= 0 )
    {
LABEL_7:
      v22 = v21;
LABEL_8:
      COREACCESS::~COREACCESS((COREACCESS *)v58);
      COREACCESS::~COREACCESS((COREACCESS *)v57);
      if ( v54 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v55);
      goto LABEL_11;
    }
    hAllocation = a1->hAllocation;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v9 + 26, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v35 = *((_DWORD *)v9 + 58);
        if ( v35 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v33, &EventBlockThread, v34, v35);
      }
      ExAcquirePushLockSharedEx(v9 + 26, 0LL);
    }
    v36 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v36 < *((_DWORD *)v9 + 64) )
    {
      v37 = v9[30];
      v38 = *((_DWORD *)v37 + 4 * v36 + 2);
      if ( ((hAllocation >> 25) & 0x60) == (*((_BYTE *)v37 + 16 * v36 + 8) & 0x60)
        && (v38 & 0x2000) == 0
        && (v38 & 0x1F) != 0 )
      {
        v39 = v38 & 0x1F;
        if ( (_BYTE)v39 == 5 )
        {
          v41 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v37 + 2 * (unsigned int)v36);
          goto LABEL_34;
        }
        v40 = WdLogNewEntry5_WdError(v39, 2LL * (unsigned int)v36);
        *(_QWORD *)(v40 + 24) = 316LL;
        WdLogEvent5_WdError(v40);
      }
    }
    v41 = 0LL;
LABEL_34:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v46, v41);
    ExReleasePushLockSharedEx(v9 + 26, 0LL);
    KeLeaveCriticalRegion();
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42);
    v44[3] = v21;
    v44[4] = v13;
    v44[5] = v9;
    v44[6] = a1->hAllocation;
    v44[7] = v46;
    WdLogEvent5_WdError(v44);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v46, v45);
    goto LABEL_7;
  }
  v30 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
  v22 = -1073741811;
  v30[3] = -1073741811LL;
  v30[4] = a1->hDevice;
  v30[5] = v9;
  WdLogEvent5_WdError(v30);
LABEL_11:
  if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v23);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v49);
  return v22;
}
