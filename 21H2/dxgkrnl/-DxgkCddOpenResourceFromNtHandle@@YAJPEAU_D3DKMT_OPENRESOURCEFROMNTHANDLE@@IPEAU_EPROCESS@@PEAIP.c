/*
 * XREFs of ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C02DBF00
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
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019EA90 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C019F7B4 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C02DD700 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkCddOpenResourceFromNtHandle(
        struct _D3DKMT_OPENRESOURCEFROMNTHANDLE *a1,
        unsigned int a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGPROCESS *Current; // r15
  int v12; // ebx
  HANDLE hNtHandle; // rcx
  NTSTATUS v14; // eax
  PVOID v15; // r12
  __int64 v16; // r8
  D3DKMT_HANDLE hDevice; // edx
  char v18; // r14
  ADAPTER_RENDER **v19; // rsi
  ADAPTER_RENDER *v20; // rax
  __int64 v21; // r9
  D3DKMT_HANDLE hAllocation; // r14d
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // rdi
  struct ADAPTER_RENDER *v27; // r11
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DXGDEVICE *v31; // [rsp+50h] [rbp-B0h] BYREF
  struct _EPROCESS *v32; // [rsp+58h] [rbp-A8h]
  _BYTE v33[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h]
  char v35; // [rsp+70h] [rbp-90h]
  unsigned int v36; // [rsp+78h] [rbp-88h]
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-78h] BYREF
  struct DXGDEVICE *v39; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v40[16]; // [rsp+98h] [rbp-68h] BYREF
  int v41; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-50h]
  char v43; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v44; // [rsp+C0h] [rbp-40h]
  unsigned int *v45; // [rsp+C8h] [rbp-38h]
  PVOID v46; // [rsp+D0h] [rbp-30h]
  _BYTE v47[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v48[64]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v49[88]; // [rsp+128h] [rbp+28h] BYREF

  v41 = -1;
  v45 = a4;
  v32 = a3;
  v36 = a2;
  v44 = a6;
  v42 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v43 = 1;
    v41 = 3034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 3034);
  HandleInformation = 0LL;
  Current = DXGPROCESS::GetCurrent(v8, v7, v9, v10);
  if ( !Current )
  {
    v12 = -1073741811;
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
    goto LABEL_45;
  }
  hNtHandle = a1->hNtHandle;
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(
          hNtHandle,
          0x20000u,
          g_pDxgkSharedAllocationObjectType,
          1,
          &Object,
          &HandleInformation);
  v15 = Object;
  v16 = -1073741788LL;
  v46 = Object;
  v12 = v14;
  if ( v14 == -1073741788 )
    goto LABEL_8;
  if ( v14 < 0 )
  {
    v16 = v14;
LABEL_8:
    WdLogSingleEntry2(3LL, a1->hNtHandle, v16);
    goto LABEL_43;
  }
  hDevice = a1->hDevice;
  v39 = 0LL;
  v18 = (HandleInformation.GrantedAccess & 1) == 0;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v31, hDevice, (struct _KTHREAD **)Current, &v39);
  v19 = (ADAPTER_RENDER **)v39;
  if ( !v39 )
  {
    v12 = -1073741811;
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
    goto LABEL_13;
  }
  if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
  {
    v12 = -1073741811;
    WdLogSingleEntry2(3LL, v39, -1073741811LL);
    goto LABEL_13;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v40, v39);
  v20 = v19[2];
  v35 = 0;
  v34 = *((_QWORD *)v20 + 2);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, (__int64)v19, 0, v21, 0);
  v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v47, 0LL);
  if ( v12 >= 0 )
  {
    v12 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
            (DXGDEVICE *)v19,
            (__int64)a1,
            0,
            (__int64)v15,
            v36,
            (struct COREDEVICEACCESS *)v47,
            v18,
            v32,
            v45,
            v44);
    if ( v12 >= 0 )
    {
      hAllocation = a1->pOpenAllocationInfo2->hAllocation;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
      v23 = (hAllocation >> 6) & 0xFFFFFF;
      if ( (unsigned int)v23 < *((_DWORD *)Current + 74) )
      {
        v24 = *((_QWORD *)Current + 35);
        v25 = *(_DWORD *)(v24 + 16 * v23 + 8);
        if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60)
          && (v25 & 0x2000) == 0
          && (v25 & 0x1F) != 0 )
        {
          if ( (v25 & 0x1F) == 5 )
          {
            v26 = *(_QWORD *)(v24 + 16LL * (unsigned int)v23);
            goto LABEL_31;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v26 = 0LL;
LABEL_31:
      ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( v26 )
      {
        if ( !ADAPTER_RENDER::GdiNodeSupportsGpuVa(v19[2])
          || (v12 = MapGpuVirtualAddressToAllocation(v27, (struct DXGALLOCATION *)v26), v12 >= 0) )
        {
          if ( a5 )
            *a5 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v19[2] + 81) + 8LL) + 696LL))(
                            *((_QWORD *)v19[2] + 82),
                            *(_QWORD *)(v26 + 24));
          COREACCESS::~COREACCESS((COREACCESS *)v49);
          COREACCESS::~COREACCESS((COREACCESS *)v48);
          if ( v35 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v40);
          if ( !v31 )
            goto LABEL_43;
          goto LABEL_41;
        }
        DXGDEVICE::DestroyAllocationInternal(
          (DXGDEVICE *)v19,
          0LL,
          0LL,
          *(struct DXGRESOURCE **)(v26 + 40),
          0LL,
          DXGDEVICE::DestroyFlagsDefault);
      }
      else
      {
        v12 = -1073741811;
      }
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v49);
  COREACCESS::~COREACCESS((COREACCESS *)v48);
  if ( v35 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v40);
LABEL_13:
  if ( v31 )
  {
LABEL_41:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
  }
LABEL_43:
  if ( v46 )
    ObfDereferenceObject(v46);
LABEL_45:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v41);
  return (unsigned int)v12;
}
