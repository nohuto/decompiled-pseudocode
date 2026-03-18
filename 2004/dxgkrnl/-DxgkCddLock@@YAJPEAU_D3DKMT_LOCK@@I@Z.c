/*
 * XREFs of ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C00E15A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006CEC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00198DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD140 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FE8C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0101D90 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **v7; // rbx
  __int64 hDevice; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGDEVICE *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // r12
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rbx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  D3DKMT_HANDLE hAllocation; // r15d
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r9d
  __int64 v30; // rax
  struct _KTHREAD *v31; // r8
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rax
  struct DXGALLOCATION *v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v40; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGDEVICE *v41; // [rsp+40h] [rbp-C0h] BYREF
  int v42; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B0h]
  char v44; // [rsp+58h] [rbp-A8h]
  char v45[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h]
  char v47; // [rsp+70h] [rbp-90h]
  _BYTE v48[24]; // [rsp+78h] [rbp-88h] BYREF
  char v49[8]; // [rsp+90h] [rbp-70h] BYREF
  char v50[64]; // [rsp+98h] [rbp-68h] BYREF
  char v51[88]; // [rsp+D8h] [rbp-28h] BYREF

  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 3006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3006);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 3006LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( !Current )
  {
    v18 = -1073741811;
    v23 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    *(_QWORD *)(v23 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v23);
    goto LABEL_14;
  }
  hDevice = a1->hDevice;
  v40 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v41, hDevice, Current, &v40);
  v11 = v40;
  if ( v40 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v48, v40);
    v12 = *((_QWORD *)v11 + 2);
    v47 = 0;
    v46 = *(_QWORD *)(v12 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, (__int64)v11, 2, v13, 0);
    v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v49, 0LL);
    v15 = v14;
    if ( v14 < 0 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v25[3] = v15;
      v25[4] = v11;
      v25[5] = v7;
      WdLogEvent5_WdEvent(v25);
      v18 = v15;
      goto LABEL_8;
    }
    v16 = DXGDEVICE::Lock(v11, a1, (struct COREDEVICEACCESS *)v49);
    v17 = v16;
    if ( v16 >= 0 )
    {
LABEL_7:
      v18 = v17;
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
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v7 + 26, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v29 = *((_DWORD *)v7 + 58);
        if ( v29 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v27, &EventBlockThread, v28, v29);
      }
      ExAcquirePushLockSharedEx(v7 + 26, 0LL);
    }
    v30 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v30 < *((_DWORD *)v7 + 64) )
    {
      v31 = v7[30];
      v32 = *((_DWORD *)v31 + 4 * v30 + 2);
      if ( ((hAllocation >> 25) & 0x60) == (*((_BYTE *)v31 + 16 * v30 + 8) & 0x60)
        && (v32 & 0x2000) == 0
        && (v32 & 0x1F) != 0 )
      {
        v33 = v32 & 0x1F;
        if ( (_BYTE)v33 == 5 )
        {
          v35 = (struct DXGALLOCATION *)*((_QWORD *)v31 + 2 * (unsigned int)v30);
          goto LABEL_34;
        }
        v34 = WdLogNewEntry5_WdError(v33, 2LL * (unsigned int)v30);
        *(_QWORD *)(v34 + 24) = 267LL;
        WdLogEvent5_WdError(v34);
      }
    }
    v35 = 0LL;
LABEL_34:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v39, v35);
    ExReleasePushLockSharedEx(v7 + 26, 0LL);
    KeLeaveCriticalRegion();
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
    v38[3] = v17;
    v38[4] = v11;
    v38[5] = v7;
    v38[6] = a1->hAllocation;
    v38[7] = v39;
    WdLogEvent5_WdError(v38);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v39);
    goto LABEL_7;
  }
  v24 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
  v18 = -1073741811;
  v24[3] = -1073741811LL;
  v24[4] = a1->hDevice;
  v24[5] = v7;
  WdLogEvent5_WdError(v24);
LABEL_11:
  if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v19);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v42);
  return v18;
}
