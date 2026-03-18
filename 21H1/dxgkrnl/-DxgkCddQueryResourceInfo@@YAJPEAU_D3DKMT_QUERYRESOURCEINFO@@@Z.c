/*
 * XREFs of ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C0229670
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
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C011E92C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfo(struct _D3DKMT_QUERYRESOURCEINFO *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 hDevice; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r9
  int Resource; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGDEVICE *v22; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h]
  char v26; // [rsp+50h] [rbp-B0h]
  _BYTE v27[24]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v28[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v30[88]; // [rsp+B8h] [rbp-48h] BYREF

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 3035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3035);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 3035LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    hDevice = a1->hDevice;
    v22 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v23, hDevice, Current, &v22);
    if ( v22 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v27, v22);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, (__int64)v22, 0, v17, 0);
      Resource = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v28, 0LL);
      if ( Resource >= 0 )
        Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>((__int64)v22, a1, a1->hGlobalShare);
      v10 = Resource;
      COREACCESS::~COREACCESS((COREACCESS *)v30);
      COREACCESS::~COREACCESS((COREACCESS *)v29);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v27);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v14, v13);
      v16 = a1->hDevice;
      v10 = -1073741811;
      *(_QWORD *)(v15 + 24) = v16;
      *(_QWORD *)(v15 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v15);
    }
    if ( v23 && _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v8, v7);
    v10 = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24, v11);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v24);
  return v10;
}
