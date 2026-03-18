/*
 * XREFs of ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C0229850
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000EAC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00196CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0124270 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfoFromNtHandle(
        struct _D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  int Resource; // ebx
  __int64 v11; // rdx
  __int64 hDevice; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGDEVICE *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r9
  HANDLE hNtHandle; // rcx
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  PVOID v23; // r14
  __int64 v24; // r15
  _QWORD *v25; // rax
  HANDLE v26; // rcx
  bool v27; // zf
  signed __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGDEVICE *v32; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v33; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  int v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h]
  char v37; // [rsp+58h] [rbp-A8h]
  _BYTE v38[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v39[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v40[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v41[88]; // [rsp+B8h] [rbp-48h] BYREF

  v36 = 0LL;
  v35 = -1;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 3056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3056);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 3056LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v8, v7);
    Resource = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    goto LABEL_26;
  }
  hDevice = a1->hDevice;
  v33 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v32, hDevice, Current, &v33);
  v15 = v33;
  if ( !v33 )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    Resource = -1073741811;
    *(_QWORD *)(v16 + 24) = a1->hDevice;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    if ( !v32 )
      goto LABEL_26;
    goto LABEL_9;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v38, v33);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, (__int64)v15, 0, v17, 0);
  Resource = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v39, 0LL);
  if ( Resource < 0 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v41);
    COREACCESS::~COREACCESS((COREACCESS *)v40);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v38);
    if ( !v32 )
      goto LABEL_26;
LABEL_9:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    goto LABEL_26;
  }
  hNtHandle = a1->hNtHandle;
  Object = 0LL;
  v19 = ObReferenceObjectByHandle(hNtHandle, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v23 = Object;
  v24 = v19;
  Resource = v19;
  if ( v19 == -1073741788 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v25[3] = v15;
    v26 = a1->hNtHandle;
    v25[5] = -1073741788LL;
    goto LABEL_16;
  }
  if ( v19 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v25[3] = v15;
    v26 = a1->hNtHandle;
    v25[5] = v24;
LABEL_16:
    v25[4] = v26;
    WdLogEvent5_WdWarning(v25);
    COREACCESS::~COREACCESS((COREACCESS *)v41);
    COREACCESS::~COREACCESS((COREACCESS *)v40);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v38);
    if ( v32 )
    {
      v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
      goto LABEL_22;
    }
    goto LABEL_24;
  }
  Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>((__int64)v15, a1, v22, (__int64)Object);
  COREACCESS::~COREACCESS((COREACCESS *)v41);
  COREACCESS::~COREACCESS((COREACCESS *)v40);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v38);
  if ( v32 )
  {
    v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v27 = v28 == 1;
    v11 = v28 - 1;
LABEL_22:
    if ( v27 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
  }
LABEL_24:
  if ( v23 )
    ObfDereferenceObject(v23);
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v11);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v35);
  return (unsigned int)Resource;
}
