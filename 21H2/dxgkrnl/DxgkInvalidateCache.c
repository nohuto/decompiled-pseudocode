/*
 * XREFs of DxgkInvalidateCache @ 0x1C02DAD20
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BED0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkInvalidateCache(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD **Current; // rsi
  struct DXGDEVICE *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // r9
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // r14
  ULONG_PTR Count; // rdx
  ULONG_PTR v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGDEVICE *v24; // [rsp+50h] [rbp-128h] BYREF
  int v25; // [rsp+58h] [rbp-120h] BYREF
  __int64 v26; // [rsp+60h] [rbp-118h]
  char v27; // [rsp+68h] [rbp-110h]
  struct DXGDEVICE *v28; // [rsp+70h] [rbp-108h] BYREF
  struct _EX_RUNDOWN_REF *v29; // [rsp+78h] [rbp-100h] BYREF
  _BYTE v30[16]; // [rsp+80h] [rbp-F8h] BYREF
  unsigned int v31[4]; // [rsp+90h] [rbp-E8h]
  __int64 v32; // [rsp+A0h] [rbp-D8h]
  _BYTE v33[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v3 = a1;
  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2122;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2122);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 2122);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 34LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 34LL, 0LL, 0LL, 0LL, 0LL);
LABEL_29:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v25);
    }
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v31 = *(_OWORD *)v3;
  v32 = *(_QWORD *)(v3 + 16);
  v28 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v24, v31[0], Current, &v28);
  v9 = v28;
  if ( !v28 )
  {
    v10 = v31[0];
    WdLogSingleEntry1(2LL, v31[0]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_26:
    if ( v24 && _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
    goto LABEL_29;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30,
    v28);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)v9, 0, v11, 0);
  v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v33, 0LL);
  if ( v12 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30);
    if ( v24 && _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v25);
    return (unsigned int)v12;
  }
  v16 = v31[1];
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v29, v31[1]);
  if ( !v29 )
  {
    WdLogSingleEntry2(3LL, v9, (unsigned int)v16);
LABEL_25:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30);
    goto LABEL_26;
  }
  Count = v29[1].Count;
  if ( (struct DXGDEVICE *)Count != v9 )
  {
    WdLogSingleEntry2(2LL, Count, v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Mismatch between allocation device 0x%p and paging queue device 0x%p",
      v29[1].Count,
      (__int64)v9,
      0LL,
      0LL,
      0LL);
    goto LABEL_25;
  }
  v18 = v29[3].Count;
  if ( !v18 )
  {
    WdLogSingleEntry3(3LL, v9, v16, v29);
    goto LABEL_25;
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, ULONG_PTR, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 648LL)
                                                                                                  + 8LL)
                                                                                      + 1072LL))(
          *(_QWORD *)(*((_QWORD *)v9 + 2) + 656LL),
          0LL,
          0LL,
          v18,
          *(_QWORD *)&v31[2],
          v32);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30);
  if ( v24 && _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v25);
  return v21;
}
