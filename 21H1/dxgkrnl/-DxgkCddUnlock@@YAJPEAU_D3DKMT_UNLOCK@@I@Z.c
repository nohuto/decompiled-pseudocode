/*
 * XREFs of ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C01417D0
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
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0141CE0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall DxgkCddUnlock(struct _D3DKMT_UNLOCK *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **v9; // rsi
  __int64 hDevice; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGDEVICE *v13; // rbx
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  struct DXGDEVICE *v28; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v29; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h]
  char v32; // [rsp+50h] [rbp-B0h]
  _BYTE v33[24]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v34[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v35[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v36[88]; // [rsp+B8h] [rbp-48h] BYREF

  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 3007;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3007);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 3007LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  v9 = Current;
  if ( Current )
  {
    hDevice = a1->hDevice;
    v28 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v29, hDevice, Current, &v28);
    v13 = v28;
    if ( v28 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v33, v28);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, (__int64)v13, 2, v14, 0);
      if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v34, 0LL) < 0 )
      {
        LODWORD(v18) = 0;
      }
      else
      {
        v15 = DXGDEVICE::Unlock(v13, a1, 0);
        v18 = v15;
        if ( v15 < 0 )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
          v27[3] = v18;
          v27[4] = v13;
          v27[5] = v9;
          WdLogEvent5_WdError(v27);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v36);
      COREACCESS::~COREACCESS((COREACCESS *)v35);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v33);
    }
    else
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
      LODWORD(v18) = -1073741811;
      v26[3] = -1073741811LL;
      v26[4] = a1->hDevice;
      v26[5] = v9;
      WdLogEvent5_WdError(v26);
    }
    if ( v29 && _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
  }
  else
  {
    LODWORD(v18) = -1073741811;
    v23 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    *(_QWORD *)(v23 + 32) = PsGetCurrentProcess(v25, v24);
    WdLogEvent5_WdError(v23);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v19);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v30);
  return (unsigned int)v18;
}
