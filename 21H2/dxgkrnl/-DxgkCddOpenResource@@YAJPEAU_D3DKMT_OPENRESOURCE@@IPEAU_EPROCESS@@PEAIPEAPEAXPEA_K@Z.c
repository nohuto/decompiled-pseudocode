/*
 * XREFs of ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C02DBAC0
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
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00137F4 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001E30C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C004B09C (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0185854 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019EA90 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C02DD700 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD **Current; // rax
  struct _KTHREAD **v15; // rbx
  int v16; // ebx
  D3DKMT_HANDLE hDevice; // edx
  ADAPTER_RENDER **v18; // rsi
  ADAPTER_RENDER *v19; // rax
  __int64 v20; // r9
  int v21; // eax
  D3DKMT_HANDLE hAllocation; // r14d
  __int64 v23; // rax
  struct _KTHREAD *v24; // rdx
  int v25; // ecx
  __int64 v26; // rdi
  struct ADAPTER_RENDER *v27; // r11
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DXGDEVICE *v31; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v32; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 *v33; // [rsp+60h] [rbp-A0h]
  int v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h]
  char v36; // [rsp+78h] [rbp-88h]
  char v37[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+88h] [rbp-78h]
  char v39; // [rsp+90h] [rbp-70h]
  _BYTE v40[24]; // [rsp+98h] [rbp-68h] BYREF
  char v41[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v42[64]; // [rsp+B8h] [rbp-48h] BYREF
  char v43[88]; // [rsp+F8h] [rbp-8h] BYREF

  v34 = -1;
  v33 = a6;
  v35 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v36 = 1;
    v34 = 3034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 3034);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v11, v10, v12, v13);
  v15 = Current;
  if ( !Current )
  {
    v16 = -1073741811;
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
    goto LABEL_37;
  }
  hDevice = a1->hDevice;
  v31 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v32, hDevice, Current, &v31);
  v18 = (ADAPTER_RENDER **)v31;
  if ( v31 )
  {
    if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
    {
      v16 = -1073741811;
      WdLogSingleEntry2(3LL, v31, -1073741811LL);
      goto LABEL_34;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v40, v31);
    v19 = v18[2];
    v39 = 0;
    v38 = *((_QWORD *)v19 + 2);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v18, 0, v20, 0);
    v21 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v41, 0LL);
    if ( v21 < 0
      || (v21 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                  (DXGDEVICE *)v18,
                  (__int64)a1,
                  a1->hGlobalShare,
                  0LL,
                  a2,
                  (struct COREDEVICEACCESS *)v41,
                  0,
                  a3,
                  a4,
                  v33),
          v21 < 0) )
    {
      v16 = v21;
LABEL_31:
      COREACCESS::~COREACCESS((COREACCESS *)v43);
      COREACCESS::~COREACCESS((COREACCESS *)v42);
      if ( v39 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v40);
      goto LABEL_34;
    }
    hAllocation = a1->pOpenAllocationInfo->hAllocation;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 31));
    v23 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v23 < *((_DWORD *)v15 + 74) )
    {
      v24 = v15[35];
      v25 = *((_DWORD *)v24 + 4 * v23 + 2);
      if ( ((hAllocation >> 25) & 0x60) == (*((_BYTE *)v24 + 16 * v23 + 8) & 0x60)
        && (v25 & 0x2000) == 0
        && (v25 & 0x1F) != 0 )
      {
        if ( (v25 & 0x1F) == 5 )
        {
          v26 = *((_QWORD *)v24 + 2 * (unsigned int)v23);
LABEL_21:
          ExReleasePushLockSharedEx(v15 + 31, 0LL);
          KeLeaveCriticalRegion();
          if ( v26 )
          {
            if ( ADAPTER_RENDER::GdiNodeSupportsGpuVa(v18[2])
              && (v16 = MapGpuVirtualAddressToAllocation(v27, (struct DXGALLOCATION *)v26), v16 < 0) )
            {
              DXGDEVICE::DestroyAllocationInternal(
                (DXGDEVICE *)v18,
                0LL,
                0LL,
                *(struct DXGRESOURCE **)(v26 + 40),
                0LL,
                DXGDEVICE::DestroyFlagsDefault);
            }
            else
            {
              if ( a5 )
                *a5 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v18[2] + 81) + 8LL)
                                                                        + 696LL))(
                                *((_QWORD *)v18[2] + 82),
                                *(_QWORD *)(v26 + 24));
              v16 = 0;
            }
          }
          else
          {
            v16 = -1073741811;
          }
          goto LABEL_31;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v26 = 0LL;
    goto LABEL_21;
  }
  v16 = -1073741811;
  WdLogSingleEntry2(2LL, a1->hDevice, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
    a1->hDevice,
    -1073741811LL,
    0LL,
    0LL,
    0LL);
LABEL_34:
  if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
LABEL_37:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 )
  {
    LOBYTE(v28) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v34);
  }
  return (unsigned int)v16;
}
