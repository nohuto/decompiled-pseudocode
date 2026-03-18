/*
 * XREFs of ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C02DCD00
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
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00137F4 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001E30C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C019F668 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfoFromNtHandle(
        struct _D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD **Current; // rax
  int Resource; // ebx
  D3DKMT_HANDLE hDevice; // edx
  __int64 v11; // r9
  HANDLE hNtHandle; // rcx
  NTSTATUS v13; // eax
  __int64 v14; // r8
  PVOID v15; // r14
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGDEVICE *v20; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGDEVICE *v21; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v23[2]; // [rsp+70h] [rbp-98h] BYREF
  char v24; // [rsp+80h] [rbp-88h]
  _BYTE v25[16]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v26[8]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v27[64]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v28[88]; // [rsp+E0h] [rbp-28h] BYREF

  LODWORD(v23[0]) = -1;
  v23[1] = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v24 = 1;
    LODWORD(v23[0]) = 3056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3056);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v23, 3056);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
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
    goto LABEL_24;
  }
  hDevice = a1->hDevice;
  v21 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v20, hDevice, Current, &v21);
  if ( !v21 )
  {
    Resource = -1073741811;
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
    if ( !v20 )
      goto LABEL_24;
    goto LABEL_9;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v25, v21);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, (__int64)v21, 0, v11, 0);
  Resource = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v26, 0LL);
  if ( Resource < 0 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v28);
    COREACCESS::~COREACCESS((COREACCESS *)v27);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v25);
    if ( !v20 )
      goto LABEL_24;
LABEL_9:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v20);
    goto LABEL_24;
  }
  hNtHandle = a1->hNtHandle;
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(hNtHandle, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v15 = Object;
  v16 = -1073741788LL;
  Resource = v13;
  if ( v13 != -1073741788 )
  {
    if ( v13 >= 0 )
    {
      Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
                   (__int64)v21,
                   a1,
                   v14,
                   (__int64)Object);
      COREACCESS::~COREACCESS((COREACCESS *)v28);
      COREACCESS::~COREACCESS((COREACCESS *)v27);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v25);
      if ( v20 )
        goto LABEL_20;
      goto LABEL_22;
    }
    v16 = v13;
  }
  WdLogSingleEntry3(3LL, v21, a1->hNtHandle, v16);
  COREACCESS::~COREACCESS((COREACCESS *)v28);
  COREACCESS::~COREACCESS((COREACCESS *)v27);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v25);
  if ( v20 )
  {
LABEL_20:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v20);
  }
LABEL_22:
  if ( v15 )
    ObfDereferenceObject(v15);
LABEL_24:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v23);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v23[0]);
  return (unsigned int)Resource;
}
