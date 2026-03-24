/*
 * XREFs of ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C022C790
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
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A29C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C003FB5C (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0117FD8 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0119AC8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C022DE08 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkCddOpenResource(
        struct _D3DKMT_OPENRESOURCE *a1,
        unsigned int a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD **v15; // rdi
  __int64 v16; // rax
  int v17; // ebx
  __int64 v18; // rdx
  __int64 hDevice; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  ADAPTER_RENDER **v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  ADAPTER_RENDER *v27; // rax
  __int64 v28; // r9
  int v29; // eax
  struct _KTHREAD **v30; // r14
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v32; // rax
  struct _KTHREAD *v33; // rdi
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdi
  struct ADAPTER_RENDER *v38; // r11
  __int64 v39; // rcx
  __int64 v40; // r8
  struct DXGDEVICE *v42; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v43; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 *v44; // [rsp+60h] [rbp-A0h]
  int v45; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h]
  char v47; // [rsp+78h] [rbp-88h]
  char v48[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+88h] [rbp-78h]
  char v50; // [rsp+90h] [rbp-70h]
  _BYTE v51[24]; // [rsp+98h] [rbp-68h] BYREF
  char v52[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v53[64]; // [rsp+B8h] [rbp-48h] BYREF
  char v54[88]; // [rsp+F8h] [rbp-8h] BYREF

  v45 = -1;
  v44 = a6;
  v46 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v47 = 1;
    v45 = 3034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v45, 3034LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v11, v10);
  v15 = Current;
  if ( !Current )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    v17 = -1073741811;
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    goto LABEL_37;
  }
  hDevice = a1->hDevice;
  v42 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v43, hDevice, Current, &v42);
  v23 = (ADAPTER_RENDER **)v42;
  if ( v42 )
  {
    if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
    {
      v26 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      v17 = -1073741811;
      *(_QWORD *)(v26 + 24) = v23;
      *(_QWORD *)(v26 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v26);
      goto LABEL_34;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v51, v42);
    v27 = v23[2];
    v50 = 0;
    v49 = *((_QWORD *)v27 + 2);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v52, (__int64)v23, 0, v28, 0);
    v29 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v52, 0LL);
    if ( v29 < 0
      || (v29 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                  (DXGDEVICE *)v23,
                  (__int64)a1,
                  a1->hGlobalShare,
                  0LL,
                  a2,
                  (struct COREDEVICEACCESS *)v52,
                  0,
                  a3,
                  a4,
                  v44),
          v29 < 0) )
    {
      v17 = v29;
LABEL_31:
      COREACCESS::~COREACCESS((COREACCESS *)v54);
      COREACCESS::~COREACCESS((COREACCESS *)v53);
      if ( v50 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v51);
      goto LABEL_34;
    }
    v30 = v15 + 26;
    hAllocation = a1->pOpenAllocationInfo->hAllocation;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 26));
    v32 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v32 < *((_DWORD *)v15 + 64) )
    {
      v33 = v15[30];
      v34 = *((_DWORD *)v33 + 4 * v32 + 2);
      if ( ((hAllocation >> 25) & 0x60) == (*((_BYTE *)v33 + 16 * v32 + 8) & 0x60)
        && (v34 & 0x2000) == 0
        && (v34 & 0x1F) != 0 )
      {
        v35 = v34 & 0x1F;
        if ( (_BYTE)v35 == 5 )
        {
          v37 = *((_QWORD *)v33 + 2 * (unsigned int)v32);
LABEL_21:
          ExReleasePushLockSharedEx(v30, 0LL);
          KeLeaveCriticalRegion();
          if ( v37 )
          {
            if ( ADAPTER_RENDER::GdiNodeSupportsGpuVa(v23[2])
              && (v17 = MapGpuVirtualAddressToAllocation(v38, (struct DXGALLOCATION *)v37), v17 < 0) )
            {
              DXGDEVICE::DestroyAllocationInternal(
                (DXGDEVICE *)v23,
                0,
                0LL,
                *(struct DXGRESOURCE **)(v37 + 40),
                0LL,
                DXGDEVICE::DestroyFlagsDefault);
            }
            else
            {
              if ( a5 )
                *a5 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v23[2] + 80) + 8LL)
                                                                        + 688LL))(
                                *((_QWORD *)v23[2] + 81),
                                *(_QWORD *)(v37 + 24));
              v17 = 0;
            }
          }
          else
          {
            v17 = -1073741811;
          }
          goto LABEL_31;
        }
        v36 = WdLogNewEntry5_WdError(v35, 2LL * (unsigned int)v32);
        *(_QWORD *)(v36 + 24) = 316LL;
        WdLogEvent5_WdError(v36);
      }
    }
    v37 = 0LL;
    goto LABEL_21;
  }
  v24 = WdLogNewEntry5_WdError(v21, v20);
  v25 = a1->hDevice;
  v17 = -1073741811;
  *(_QWORD *)(v24 + 24) = v25;
  *(_QWORD *)(v24 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v24);
LABEL_34:
  if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
LABEL_37:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v18);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v45);
  return (unsigned int)v17;
}
