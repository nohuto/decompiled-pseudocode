/*
 * XREFs of ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C022CB50
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
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0119AC8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C011D460 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C022DE08 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkCddOpenResourceFromNtHandle(
        struct _D3DKMT_OPENRESOURCEFROMNTHANDLE *a1,
        int a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rdx
  HANDLE hNtHandle; // rcx
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  PVOID v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rax
  HANDLE v23; // rcx
  __int64 hDevice; // rdx
  char v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  ADAPTER_RENDER **v29; // rsi
  __int64 v30; // rax
  bool v31; // zf
  __int64 v32; // rax
  ADAPTER_RENDER *v33; // rax
  __int64 v34; // r9
  D3DKMT_HANDLE hAllocation; // edi
  __int64 v36; // rax
  __int64 v37; // r8
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdi
  struct ADAPTER_RENDER *v42; // r11
  __int64 v43; // rcx
  __int64 v44; // r8
  struct DXGDEVICE *v46; // [rsp+50h] [rbp-B0h] BYREF
  struct _EPROCESS *v47; // [rsp+58h] [rbp-A8h]
  _BYTE v48[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+68h] [rbp-98h]
  char v50; // [rsp+70h] [rbp-90h]
  struct COREDEVICEACCESS *v51; // [rsp+78h] [rbp-88h]
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-78h] BYREF
  struct DXGDEVICE *v54; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v55[16]; // [rsp+98h] [rbp-68h] BYREF
  int v56; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-50h]
  char v58; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v59; // [rsp+C0h] [rbp-40h]
  unsigned int *v60; // [rsp+C8h] [rbp-38h]
  _BYTE v61[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v62[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v63[88]; // [rsp+118h] [rbp+18h] BYREF

  v56 = -1;
  v60 = a4;
  v47 = a3;
  LODWORD(v51) = a2;
  v59 = a6;
  v57 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v58 = 1;
    v56 = 3034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v56, 3034LL);
  HandleInformation = 0LL;
  Current = DXGPROCESS::GetCurrent(v8, v7);
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    v13 = -1073741811;
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    goto LABEL_47;
  }
  hNtHandle = a1->hNtHandle;
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(
          hNtHandle,
          0x20000u,
          g_pDxgkSharedAllocationObjectType,
          1,
          &Object,
          &HandleInformation);
  v20 = Object;
  v21 = v16;
  v13 = v16;
  if ( v16 == -1073741788 )
  {
    v22 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    v23 = a1->hNtHandle;
    *(_QWORD *)(v22 + 32) = -1073741788LL;
LABEL_9:
    *(_QWORD *)(v22 + 24) = v23;
    WdLogEvent5_WdWarning(v22);
    goto LABEL_45;
  }
  if ( v16 < 0 )
  {
    v22 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    v23 = a1->hNtHandle;
    *(_QWORD *)(v22 + 32) = v21;
    goto LABEL_9;
  }
  hDevice = a1->hDevice;
  v54 = 0LL;
  v25 = (HandleInformation.GrantedAccess & 1) == 0;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v46, hDevice, (struct _KTHREAD **)Current, &v54);
  v29 = (ADAPTER_RENDER **)v54;
  if ( !v54 )
  {
    v30 = WdLogNewEntry5_WdError(v27, v26);
    v13 = -1073741811;
    *(_QWORD *)(v30 + 24) = a1->hDevice;
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    goto LABEL_14;
  }
  if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
  {
    v32 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    v13 = -1073741811;
    *(_QWORD *)(v32 + 24) = v29;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v32);
    goto LABEL_14;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v55, v54);
  v33 = v29[2];
  v50 = 0;
  v49 = *((_QWORD *)v33 + 2);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, (__int64)v29, 0, v34, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v61, 0LL);
  if ( v13 >= 0 )
  {
    v13 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
            (DXGDEVICE *)v29,
            (__int64)a1,
            0,
            (__int64)v20,
            (unsigned int)v51,
            (struct COREDEVICEACCESS *)v61,
            v25,
            v47,
            v60,
            v59);
    if ( v13 >= 0 )
    {
      hAllocation = a1->pOpenAllocationInfo2->hAllocation;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
      v36 = (hAllocation >> 6) & 0xFFFFFF;
      if ( (unsigned int)v36 < *((_DWORD *)Current + 64) )
      {
        v37 = *((_QWORD *)Current + 30);
        v38 = *(_DWORD *)(v37 + 16 * v36 + 8);
        if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v37 + 16 * v36 + 8) & 0x60)
          && (v38 & 0x2000) == 0
          && (v38 & 0x1F) != 0 )
        {
          v39 = v38 & 0x1F;
          if ( (_BYTE)v39 == 5 )
          {
            v41 = *(_QWORD *)(v37 + 16LL * (unsigned int)v36);
LABEL_31:
            ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
            KeLeaveCriticalRegion();
            if ( v41 )
            {
              if ( !ADAPTER_RENDER::GdiNodeSupportsGpuVa(v29[2])
                || (v13 = MapGpuVirtualAddressToAllocation(v42, (struct DXGALLOCATION *)v41), v13 >= 0) )
              {
                if ( a5 )
                  *a5 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v29[2] + 80) + 8LL)
                                                                          + 688LL))(
                                  *((_QWORD *)v29[2] + 81),
                                  *(_QWORD *)(v41 + 24));
                COREACCESS::~COREACCESS((COREACCESS *)v63);
                COREACCESS::~COREACCESS((COREACCESS *)v62);
                if ( v50 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
                DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v55);
                if ( !v46 )
                  goto LABEL_45;
                v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL);
                v31 = v14 == 1;
                goto LABEL_43;
              }
              DXGDEVICE::DestroyAllocationInternal(
                (DXGDEVICE *)v29,
                0,
                0LL,
                *(struct DXGRESOURCE **)(v41 + 40),
                0LL,
                DXGDEVICE::DestroyFlagsDefault);
            }
            else
            {
              v13 = -1073741811;
            }
            goto LABEL_20;
          }
          v40 = WdLogNewEntry5_WdError(v39, 2LL * (unsigned int)v36);
          *(_QWORD *)(v40 + 24) = 316LL;
          WdLogEvent5_WdError(v40);
        }
      }
      v41 = 0LL;
      goto LABEL_31;
    }
  }
LABEL_20:
  COREACCESS::~COREACCESS((COREACCESS *)v63);
  COREACCESS::~COREACCESS((COREACCESS *)v62);
  if ( v50 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v55);
LABEL_14:
  if ( v46 )
  {
    v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_43:
    if ( v31 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
  }
LABEL_45:
  if ( v20 )
    ObfDereferenceObject(v20);
LABEL_47:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v14);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v56);
  return (unsigned int)v13;
}
