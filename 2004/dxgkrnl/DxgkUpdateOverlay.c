/*
 * XREFs of DxgkUpdateOverlay @ 0x1C027C0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C00245F4 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C0026A2C (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C00467A4 (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C00467D8 (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C0046820 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1C027A664 (-UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkUpdateOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_UPDATEOVERLAY *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct ADAPTER_RENDER **v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  struct DXGOVERLAY *v20; // rdi
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int updated; // edi
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  struct DXGDEVICE *v37; // [rsp+20h] [rbp-118h] BYREF
  int v38; // [rsp+28h] [rbp-110h] BYREF
  __int64 v39; // [rsp+30h] [rbp-108h]
  char v40; // [rsp+38h] [rbp-100h]
  DXGDEVICE *v41; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD v42[2]; // [rsp+48h] [rbp-F0h] BYREF
  _BYTE v43[24]; // [rsp+58h] [rbp-E0h] BYREF
  _D3DKMT_UPDATEOVERLAY v44; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v45[32]; // [rsp+B0h] [rbp-88h] BYREF
  _BYTE v46[80]; // [rsp+D0h] [rbp-68h] BYREF

  v3 = (_D3DKMT_UPDATEOVERLAY *)a1;
  v38 = -1;
  v39 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2023;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2023);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 2023LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_28:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v10);
    if ( v40 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v38);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_D3DKMT_UPDATEOVERLAY *)MmUserProbeAddress;
  v44 = *v3;
  v41 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v37, v44.hDevice, (struct _KTHREAD **)Current, &v41);
  v13 = (struct ADAPTER_RENDER **)v41;
  if ( !v41 )
  {
    v14 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v14 + 24) = v44.hDevice;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
LABEL_25:
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    goto LABEL_28;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42, v41);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v45, (struct _KTHREAD **)Current);
  v18 = (v44.hOverlay >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 >= *((_DWORD *)Current + 64) )
    goto LABEL_17;
  v17 = *((_QWORD *)Current + 30);
  v15 = *(unsigned int *)(v17 + 16 * v18 + 8);
  v16 = (v44.hOverlay >> 25) & 0x60;
  if ( ((v44.hOverlay >> 25) & 0x60) != (*(_BYTE *)(v17 + 16 * v18 + 8) & 0x60)
    || (v15 & 0x2000) != 0
    || (v15 & 0x1F) == 0 )
  {
    goto LABEL_17;
  }
  v15 &= 0x1Fu;
  if ( (_BYTE)v15 != 6 )
  {
    v19 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v19 + 24) = 267LL;
    WdLogEvent5_WdError(v19);
LABEL_17:
    v20 = 0LL;
    goto LABEL_18;
  }
  v20 = *(struct DXGOVERLAY **)(v17 + 16LL * (unsigned int)v18);
LABEL_18:
  if ( !v20 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
    v21[3] = v44.hOverlay;
    v21[4] = -1073741811LL;
    goto LABEL_23;
  }
  if ( v13 != *((struct ADAPTER_RENDER ***)v20 + 2) )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
    v21[3] = v44.hOverlay;
    v21[4] = v44.hDevice;
    v21[5] = -1073741811LL;
LABEL_23:
    WdLogEvent5_WdWarning(v21);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v45);
    if ( v42[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
    goto LABEL_25;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v45);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v46, v20);
  v25 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)v46);
  if ( v25 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v13) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v30, v29);
      *(_QWORD *)(v31 + 24) = 773LL;
      WdLogEvent5_WdAssertion(v31);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v43, v13[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
    updated = DXGOVERLAY::UpdateOverlay((struct _EX_RUNDOWN_REF *)v20, &v44);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43, v33);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v46);
    if ( v42[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v34);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v38);
    return updated;
  }
  else
  {
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v46);
    if ( v42[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v26);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v38);
    return (unsigned int)v25;
  }
}
