/*
 * XREFs of ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C018DB90
 * Callers:
 *     DxgkCreateAllocation @ 0x1C018D7C0 (DxgkCreateAllocation.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0368980 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C016D658 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1C0187240 (_lambda_a196522e28cbefec8f1ebe5a826d98cf_--_lambda_invoker_cdecl_.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0191710 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019EA90 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C02D65FC (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
 *     ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1C02D7664 (-ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDAL.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C031F70C (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkCreateAllocationInternal(struct _D3DKMT_CREATEALLOCATION *a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGDEVICE *v10; // rdi
  struct DXGDEVICE *v11; // r12
  bool v12; // di
  _D3DKMT_CREATEALLOCATION *v13; // rcx
  struct DXGDEVICE *v14; // r14
  char Flags; // al
  UINT NumAllocations; // edx
  __int64 v17; // rcx
  int v18; // edi
  struct _KEVENT *v19; // r15
  volatile signed __int64 *v20; // rdi
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  struct DXGDEVICE *v26; // r15
  __int64 v27; // rdi
  __int64 v28; // rax
  OUTPUTDUPL_MGR *v29; // rcx
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *v31; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  enum _D3DKMDT_STANDARDALLOCATION_TYPE v34; // edx
  __int64 v35; // rax
  OUTPUTDUPL_MGR *v36; // rcx
  void *v37; // rdi
  unsigned int v38; // eax
  unsigned int v39; // r14d
  _DWORD *p_hResource; // rcx
  _DWORD *p_hGlobalShare; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS *p_Flags; // rcx
  struct DXGADAPTER *v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v47; // rcx
  __int64 v48; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  int StandardAllocationDriverData; // edi
  __int64 v53; // rcx
  __int64 v54; // r8
  struct _KEVENT *v55; // rcx
  __int64 v56; // r8
  struct DXGDEVICE *v57; // rdi
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // r8
  unsigned __int8 v61; // [rsp+80h] [rbp-218h]
  struct DXGDEVICE *v62; // [rsp+88h] [rbp-210h] BYREF
  void *v63; // [rsp+90h] [rbp-208h] BYREF
  int v64; // [rsp+98h] [rbp-200h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-1F8h]
  char v66; // [rsp+A8h] [rbp-1F0h]
  void *v67; // [rsp+B0h] [rbp-1E8h]
  struct DXGDEVICE *v68[2]; // [rsp+B8h] [rbp-1E0h] BYREF
  unsigned __int64 *v69; // [rsp+D0h] [rbp-1C8h]
  unsigned int v70; // [rsp+D8h] [rbp-1C0h] BYREF
  _D3DKMT_CREATEALLOCATION v71; // [rsp+E0h] [rbp-1B8h] BYREF
  struct DXGDEVICE *v72; // [rsp+130h] [rbp-168h] BYREF
  int v73; // [rsp+138h] [rbp-160h]
  __int64 v74; // [rsp+140h] [rbp-158h] BYREF
  struct DXGADAPTER *v75; // [rsp+148h] [rbp-150h]
  char v76; // [rsp+150h] [rbp-148h]
  _QWORD v77[3]; // [rsp+158h] [rbp-140h] BYREF
  int Size; // [rsp+188h] [rbp-110h] BYREF
  __int64 v79; // [rsp+18Ch] [rbp-10Ch]
  int v80; // [rsp+194h] [rbp-104h]
  __int64 v81; // [rsp+198h] [rbp-100h]
  struct _D3DKMT_CREATESTANDARDALLOCATION v82; // [rsp+1A0h] [rbp-F8h] BYREF
  char v83[8]; // [rsp+1C0h] [rbp-D8h] BYREF
  _BYTE v84[16]; // [rsp+1C8h] [rbp-D0h] BYREF
  DXGADAPTER *v85; // [rsp+1D8h] [rbp-C0h]
  char v86; // [rsp+1E0h] [rbp-B8h]
  __int64 v87; // [rsp+1E8h] [rbp-B0h]
  _BYTE v88[16]; // [rsp+208h] [rbp-90h] BYREF
  __int64 v89; // [rsp+218h] [rbp-80h]
  __int64 v90; // [rsp+248h] [rbp-50h]
  char v91; // [rsp+250h] [rbp-48h]

  v69 = a2;
  v64 = -1;
  v65 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v66 = 1;
    v64 = 2003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2003);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v64, 2003);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGDEVICE *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v11 = (struct DXGDEVICE *)*((_QWORD *)Current + 3)) == 0LL )
  {
    v11 = v10;
  }
  v68[1] = v11;
  v12 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v61 = v12;
  if ( !v11 )
  {
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_193;
  }
  memset(&v82, 0, sizeof(v82));
  if ( v12 )
  {
    v13 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v13 = (_D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
    v71 = *v13;
  }
  else
  {
    v71 = *a1;
  }
  v68[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v62, v71.hDevice, (struct _KTHREAD **)v11, v68);
  v14 = v68[0];
  if ( !v68[0] )
  {
    WdLogSingleEntry2(2LL, v71.hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v71.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_193:
    McTemplateK0q_EtwWriteTransfer(v50, &EventProfilerExit, v51, v64);
    return 3221225485LL;
  }
  Flags = (char)v71.Flags;
  if ( (*(_DWORD *)&v71.Flags & 0x100000) == 0 )
    goto LABEL_13;
  if ( (*(_DWORD *)&v71.Flags & 0x10000) != 0 )
  {
    WdLogSingleEntry1(2LL, 8920LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"NoKmdAccess cannot be used with StandardAllocation",
      8920LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_193;
  }
  if ( !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry1(2LL, 8925LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"NoKmdAccess can be used only with testsigning",
      8925LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_193;
  }
LABEL_13:
  NumAllocations = v71.NumAllocations;
  if ( v71.NumAllocations > 0x682AA )
  {
    WdLogSingleEntry3(3LL, v68[0], v71.NumAllocations, -1073741811LL);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_193;
  }
  if ( (*((_DWORD *)v11 + 106) & 0x100) == 0
    && ((*(_BYTE *)&v71.Flags & 8) != 0
     || (*(_WORD *)&v71.Flags & 0x100) != 0
     || (*(_WORD *)&v71.Flags & 0x1000) != 0
     || (*(_WORD *)&v71.Flags & 0x200) != 0) )
  {
    WdLogSingleEntry2(3LL, v68[0], -1073741811LL);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_193;
  }
  if ( (*(_BYTE *)&v71.Flags & 0x20) != 0
    && (*(_DWORD *)&v71.Flags & 0x10000) == 0
    && (*((_DWORD *)v11 + 106) & 0x100) == 0 )
  {
    WdLogSingleEntry2(3LL, v68[0], -1073741811LL);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_193;
  }
  if ( (*(_DWORD *)&v71.Flags & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)&v71.Flags & 0x10000) == 0 )
      goto LABEL_22;
    goto LABEL_138;
  }
  if ( (*(_DWORD *)&v71.Flags & 0x10000) == 0 )
  {
    WdLogSingleEntry2(3LL, v68[0], -1073741811LL);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_193;
  }
LABEL_138:
  StandardAllocationDriverData = ValidateStandardAllocationParams(&v71, &v82, v12);
  if ( StandardAllocationDriverData < 0 )
  {
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v64);
    return (unsigned int)StandardAllocationDriverData;
  }
  Flags = (char)v71.Flags;
  NumAllocations = v71.NumAllocations;
LABEL_22:
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
  {
    WdLogSingleEntry2(3LL, v14, -1073741811LL);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_193;
  }
  if ( !v71.hResource && !NumAllocations )
  {
    WdLogSingleEntry2(3LL, v14, -1073741811LL);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_193;
  }
  v72 = v14;
  v17 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
  if ( *(int *)(v17 + 2424) >= 0x2000 || *(_BYTE *)(v17 + 2724) )
  {
    v18 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 347);
    v73 = v18;
  }
  else
  {
    v18 = 0;
    v73 = 0;
  }
  v19 = (struct _KEVENT *)*((_QWORD *)v14 + 2);
  if ( *((_DWORD *)v14 + 108) == 2 )
  {
    if ( KeReadStateEvent(v19 + 5) )
      goto LABEL_29;
    v55 = v19 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v19 + 4) )
      goto LABEL_29;
    v55 = v19 + 4;
  }
  KeWaitForSingleObject(v55, Executive, 0, 0, 0LL);
LABEL_29:
  KeEnterCriticalRegion();
  if ( v18 )
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v14 + 144, 0LL) )
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v14 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v14 + 17), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v47, (const EVENT_DESCRIPTOR *)"g", v48, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v14 + 17), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL));
  }
  v20 = *(volatile signed __int64 **)(*((_QWORD *)v14 + 2) + 16LL);
  v75 = (struct DXGADAPTER *)v20;
  _InterlockedIncrement64(v20 + 3);
  v74 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v20 + 17, 0LL);
  v76 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v83, (__int64)v68[0], 2, v21, 0);
  if ( v91 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v88, 0LL);
    if ( *(_DWORD *)(v89 + 200) != 1 )
    {
LABEL_170:
      COREACCESS::Release((COREACCESS *)v88);
LABEL_171:
      WdLogSingleEntry2(3LL, v68[0], -1073741130LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v74);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v72);
      if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
      if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v56, v64);
      return 3221226166LL;
    }
  }
  if ( v86 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v84, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v85 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v85 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, (const EVENT_DESCRIPTOR *)"g", v24, 72);
      KeWaitForSingleObject((char *)v85 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v85, 0LL);
  }
  v87 = 0LL;
  v86 = 1;
  if ( *(_DWORD *)(v90 + 576) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v84);
    if ( !v91 )
      goto LABEL_171;
    goto LABEL_170;
  }
  v25 = 8LL * v71.NumAllocations;
  if ( !is_mul_ok(v71.NumAllocations, 8uLL) )
    v25 = -1LL;
  v67 = (void *)operator new[](v25, 0x4B677844u, 256LL, v22);
  if ( v67 )
  {
    v26 = v68[0];
    v27 = *((_QWORD *)v68[0] + 231);
    if ( !v27 )
    {
      v27 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
      if ( !v27 )
      {
        WdLogSingleEntry1(1LL, 11066LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter", 11066LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v28 = *(_QWORD *)(v27 + 2792);
    if ( !v28
      || (v29 = *(OUTPUTDUPL_MGR **)(v28 + 120)) == 0LL
      || (int)lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_(v29, v26) >= 0 )
    {
      v77[0] = *(_QWORD *)(v27 + 404);
      v77[1] = lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_;
      v77[2] = v26;
      Global = DXGGLOBAL_GetGlobal();
      DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
        Global,
        lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_,
        v77);
    }
    v31 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
    if ( v31
      && (CurrentProcessSessionId = PsGetCurrentProcessSessionId(),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                              v31,
                                              CurrentProcessSessionId)) != 0LL) )
    {
      v35 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
      if ( v35 )
      {
        v36 = *(OUTPUTDUPL_MGR **)(v35 + 120);
        if ( v36 )
          OUTPUTDUPL_MGR::CleanUpPendingList(v36, v26);
      }
      else
      {
        WdLogSingleEntry1(2LL, 3904LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"OUTPUTDUPL_SESSION_MGR is NULL",
          3904LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, 3897LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"DXGSESSIONDATA is NULL", 3897LL, 0LL, 0LL, 0LL, 0LL);
    }
    v71.hGlobalShare = 0;
    v71.hDevice = 0;
    v37 = 0LL;
    v63 = 0LL;
    v38 = 0;
    v70 = 0;
    if ( (*(_DWORD *)&v71.Flags & 0x10000) == 0 )
      goto LABEL_53;
    if ( *(int *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 2692LL) < 2000 )
    {
      WdLogSingleEntry2(2LL, v26, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Creating StandardAllocation only supported on WDDM2.0+, returning 0x%I64x",
        (__int64)v26,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v74);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v72);
      if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
      if ( !v66 )
        return 3221225485LL;
      v50 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_193;
    }
    v81 = 0LL;
    Size = v82.ExistingHeapData.Size;
    v79 = 1LL;
    v80 = 7;
    StandardAllocationDriverData = DXGDEVICE::GetStandardAllocationDriverData(v26, v34, &Size, &v70, &v63);
    if ( StandardAllocationDriverData >= 0 )
    {
      v37 = v63;
      v38 = v70;
LABEL_53:
      v39 = DXGDEVICE::CreateAllocation(
              v26,
              &v71,
              v61,
              0,
              0LL,
              0LL,
              (struct COREDEVICEACCESS *)v83,
              0,
              0LL,
              0LL,
              0LL,
              v69,
              &v82,
              v37,
              v38);
      if ( v61 )
      {
        p_hResource = &a1->hResource;
        if ( (unsigned __int64)&a1->hResource >= MmUserProbeAddress )
          p_hResource = (_DWORD *)MmUserProbeAddress;
        *p_hResource = v71.hResource;
        p_hGlobalShare = &a1->hGlobalShare;
        if ( (unsigned __int64)&a1->hGlobalShare >= MmUserProbeAddress )
          p_hGlobalShare = (_DWORD *)MmUserProbeAddress;
        *p_hGlobalShare = v71.hGlobalShare;
        p_Flags = &a1->Flags;
        if ( (unsigned __int64)&a1->Flags >= MmUserProbeAddress )
          p_Flags = (D3DKMT_CREATEALLOCATIONFLAGS *)MmUserProbeAddress;
        *p_Flags = v71.Flags;
      }
      else
      {
        a1->hResource = v71.hResource;
        a1->hGlobalShare = v71.hGlobalShare;
        a1->Flags = v71.Flags;
      }
      operator delete[](v67);
      operator delete[](v37);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
      v43 = v75;
      ExReleasePushLockSharedEx((char *)v75 + 136, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v75 + 2), v75);
      if ( v73 )
        ExReleasePushLockSharedEx((char *)v68[0] + 144, 0LL);
      else
        ExReleaseResourceLite(*((PERESOURCE *)v68[0] + 17));
      KeLeaveCriticalRegion();
      if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
      if ( v66 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v64);
      }
      return v39;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v74);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v72);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      McTemplateK0q_EtwWriteTransfer(v59, &EventProfilerExit, v60, v64);
      return (unsigned int)StandardAllocationDriverData;
    }
    return (unsigned int)StandardAllocationDriverData;
  }
  v57 = v68[0];
  WdLogSingleEntry3(6LL, v68[0], v71.NumAllocations, -1073741801LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Device 0x%I64x: Out of memory allocating destroy handle table with 0x%I64x elements, returning 0x%I64x",
    (__int64)v57,
    v71.NumAllocations,
    -1073741801LL,
    0LL,
    0LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v74);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v72);
  if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
  if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v58, v64);
  return 3221225495LL;
}
