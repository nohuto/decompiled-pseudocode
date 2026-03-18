/*
 * XREFs of ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C00E0D60
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006CEC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00198DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00E1270 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddUnlock(struct _D3DKMT_UNLOCK *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **v7; // rsi
  __int64 hDevice; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGDEVICE *v11; // rbx
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rbx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  struct DXGDEVICE *v24; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h]
  char v28; // [rsp+50h] [rbp-B0h]
  _BYTE v29[24]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v30[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v31[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v32[88]; // [rsp+B8h] [rbp-48h] BYREF

  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 3007;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3007);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 3007LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( Current )
  {
    hDevice = a1->hDevice;
    v24 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v25, hDevice, Current, &v24);
    v11 = v24;
    if ( v24 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v29, v24);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v11, 2, v12, 0);
      if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30, 0LL) < 0 )
      {
        LODWORD(v16) = 0;
      }
      else
      {
        v13 = DXGDEVICE::Unlock(v11, a1, 0);
        v16 = v13;
        if ( v13 < 0 )
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
          v23[3] = v16;
          v23[4] = v11;
          v23[5] = v7;
          WdLogEvent5_WdError(v23);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v32);
      COREACCESS::~COREACCESS((COREACCESS *)v31);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v29);
    }
    else
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
      LODWORD(v16) = -1073741811;
      v22[3] = -1073741811LL;
      v22[4] = a1->hDevice;
      v22[5] = v7;
      WdLogEvent5_WdError(v22);
    }
    if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
  }
  else
  {
    LODWORD(v16) = -1073741811;
    v21 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    *(_QWORD *)(v21 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v21);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26, v17);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v26);
  return (unsigned int)v16;
}
