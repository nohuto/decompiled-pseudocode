/*
 * XREFs of DxgkQueryResourceInfoFromNtHandle @ 0x1C016A1A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0009824 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009864 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C019F668 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 */

__int64 __fastcall DxgkQueryResourceInfoFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // r8
  _OWORD *v5; // rax
  struct DXGDEVICE *v6; // rsi
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // r14
  HANDLE v10; // r15
  __int64 v11; // r8
  PVOID v12; // r12
  unsigned int Resource; // esi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  bool v19; // sf
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGDEVICE *v25; // [rsp+50h] [rbp-138h] BYREF
  int v26; // [rsp+58h] [rbp-130h] BYREF
  __int64 v27; // [rsp+60h] [rbp-128h]
  char v28; // [rsp+68h] [rbp-120h]
  PVOID Object; // [rsp+70h] [rbp-118h] BYREF
  _BYTE v30[16]; // [rsp+78h] [rbp-110h] BYREF
  struct DXGDEVICE *v31; // [rsp+88h] [rbp-100h] BYREF
  HANDLE Handle[2]; // [rsp+90h] [rbp-F8h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-E8h]
  __int64 v34; // [rsp+B0h] [rbp-D8h]
  _BYTE v35[160]; // [rsp+C0h] [rbp-C8h] BYREF

  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2073;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2073);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 2073);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    Resource = -1073741811;
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
LABEL_22:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( !v28 )
      return Resource;
    v19 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_29:
    if ( v19 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v26);
    return Resource;
  }
  v34 = 0LL;
  v5 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v5;
  v33 = v5[1];
  v31 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v25, (unsigned int)Handle[0], Current, &v31);
  v6 = v31;
  if ( !v31 )
  {
    v20 = LODWORD(Handle[0]);
    Resource = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Handle[0]), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v20,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( !v28 )
      return Resource;
    LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v19 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_29;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v30, v31);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v35, (__int64)v6, 0, v7, 0);
  v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v35, 0LL);
  LODWORD(v9) = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(3LL, v6, v8);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v30);
    if ( !v25 )
    {
LABEL_35:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v26);
      return (unsigned int)v9;
    }
LABEL_33:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
    goto LABEL_35;
  }
  Object = 0LL;
  v10 = Handle[1];
  v9 = ObReferenceObjectByHandle(Handle[1], 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v12 = Object;
  if ( (_DWORD)v9 != -1073741788 )
  {
    if ( (int)v9 >= 0 )
    {
      Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(v6, Handle, v11, Object);
      ObfDereferenceObject(v12);
      if ( (Resource & 0x80000000) == 0 )
      {
        if ( a1 + 40 > MmUserProbeAddress || a1 + 40 <= a1 )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)a1 = *(_OWORD *)Handle;
        *(_OWORD *)(a1 + 16) = v33;
        *(_QWORD *)(a1 + 32) = v34;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v30);
        if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
        if ( v28 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v26);
        }
        return 0LL;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v30);
      if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
      goto LABEL_22;
    }
    WdLogSingleEntry3(3LL, v6, v10, v9);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v30);
    if ( !v25 )
      goto LABEL_35;
    goto LABEL_33;
  }
  WdLogSingleEntry3(3LL, v6, v10, -1073741788LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v30);
  if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 )
  {
    LOBYTE(v23) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v26);
  }
  return 3221225508LL;
}
