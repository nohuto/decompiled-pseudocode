/*
 * XREFs of DxgkSubmitPresentToHwQueue @ 0x1C0313260
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001960 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C00019F8 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001AE8 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0001B60 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001C4C (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001DB4 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C002B450 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C002C614 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C002C6C0 (--1CWin32kLocks@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C002EDD6 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C002EF98 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x1C005439C (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x1C0054474 (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01752C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01CE214 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C02DB630 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C032FFB4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C0331BE8 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 */

__int64 __fastcall DxgkSubmitPresentToHwQueue(ULONG64 a1)
{
  struct DXGGLOBAL *Global; // rax
  char *v2; // rbx
  PSLIST_ENTRY v3; // r15
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  const void *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  const void **v27; // rax
  const void *v28; // rdx
  PVOID v29; // rcx
  ULONG64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r8
  unsigned int v34; // ecx
  signed __int64 v35; // rax
  signed __int64 v36; // rtt
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  struct DXGGLOBAL *v40; // rax
  union _SLIST_HEADER *v41; // rbx
  __int64 v42; // r9
  _QWORD *Pool2; // rcx
  unsigned int v44; // r11d
  unsigned int v45; // r8d
  unsigned int *v46; // rdx
  unsigned int v47; // edx
  unsigned int v48; // ecx
  unsigned int v49; // edx
  __int64 v50; // r9
  __int64 v51; // r10
  unsigned int v52; // ecx
  __int64 v53; // r9
  __int64 v54; // rcx
  _QWORD *v55; // r9
  char *v56; // rax
  _QWORD *v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // r9
  __int64 v60; // r9
  __int64 v61; // rdi
  unsigned int *v62; // rcx
  unsigned int *v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  struct DXGGLOBAL *v66; // rax
  union _SLIST_HEADER *v67; // rbx
  int v68; // edx
  struct DXGADAPTER *v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // r8
  struct DXGGLOBAL *v72; // rax
  union _SLIST_HEADER *v73; // rbx
  void (__fastcall *v74)(PSLIST_ENTRY, union _SLIST_HEADER *); // rax
  __int64 v75; // r9
  unsigned int v76; // edi
  __int64 v77; // rcx
  __int64 v78; // r8
  struct DXGGLOBAL *v79; // rax
  union _SLIST_HEADER *v80; // rbx
  struct VIDSCH_SUBMIT_DATA_BASE *v81; // rcx
  DXGCONTEXT *v82; // rdi
  _BYTE *v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  struct DXGGLOBAL *v86; // rax
  union _SLIST_HEADER *v87; // rbx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  struct DXGPROCESS *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // r8
  struct DXGGLOBAL *v95; // rax
  union _SLIST_HEADER *v96; // rbx
  void (__fastcall *Region)(PSLIST_ENTRY, union _SLIST_HEADER *); // rax
  __int64 v98; // rcx
  __int64 v99; // r8
  struct DXGGLOBAL *v100; // rax
  union _SLIST_HEADER *v101; // rbx
  __int64 v102; // rbx
  __int64 v103; // rcx
  __int64 v104; // r8
  struct DXGGLOBAL *v105; // rax
  union _SLIST_HEADER *v106; // rbx
  int v107; // [rsp+60h] [rbp-2C8h] BYREF
  __int64 v108; // [rsp+68h] [rbp-2C0h]
  unsigned __int64 v109; // [rsp+70h] [rbp-2B8h]
  int *v110; // [rsp+78h] [rbp-2B0h]
  char v111; // [rsp+80h] [rbp-2A8h]
  DXGCONTEXT *v112; // [rsp+88h] [rbp-2A0h] BYREF
  int AllocationInfo; // [rsp+90h] [rbp-298h] BYREF
  PVOID P; // [rsp+98h] [rbp-290h] BYREF
  _BYTE v115[32]; // [rsp+A0h] [rbp-288h] BYREF
  unsigned int v116; // [rsp+C0h] [rbp-268h]
  _QWORD v117[2]; // [rsp+C8h] [rbp-260h] BYREF
  PVOID v118; // [rsp+D8h] [rbp-250h]
  _BYTE v119[32]; // [rsp+E0h] [rbp-248h] BYREF
  unsigned int v120; // [rsp+100h] [rbp-228h]
  struct DXGDEVICE *v121; // [rsp+108h] [rbp-220h] BYREF
  struct DXGPROCESS *v122; // [rsp+110h] [rbp-218h]
  struct DXGADAPTER *v123; // [rsp+118h] [rbp-210h]
  unsigned int v124; // [rsp+120h] [rbp-208h]
  _BYTE v125[16]; // [rsp+128h] [rbp-200h] BYREF
  __int64 v126; // [rsp+138h] [rbp-1F0h]
  PSLIST_ENTRY ListEntry; // [rsp+140h] [rbp-1E8h]
  char v128[8]; // [rsp+148h] [rbp-1E0h] BYREF
  __int64 v129; // [rsp+150h] [rbp-1D8h]
  char v130; // [rsp+158h] [rbp-1D0h]
  ULONG64 v131; // [rsp+160h] [rbp-1C8h]
  struct VIDSCH_SUBMIT_DATA_BASE *v132[2]; // [rsp+168h] [rbp-1C0h] BYREF
  __int64 v133; // [rsp+178h] [rbp-1B0h]
  PVOID v134; // [rsp+180h] [rbp-1A8h]
  _QWORD v135[6]; // [rsp+188h] [rbp-1A0h] BYREF
  char v136; // [rsp+1B8h] [rbp-170h]
  _BYTE v137[24]; // [rsp+1C0h] [rbp-168h] BYREF
  _BYTE v138[24]; // [rsp+1D8h] [rbp-150h] BYREF
  _BYTE v139[64]; // [rsp+1F0h] [rbp-138h] BYREF
  PVOID v140; // [rsp+230h] [rbp-F8h] BYREF
  _BYTE v141[16]; // [rsp+238h] [rbp-F0h] BYREF
  unsigned int v142; // [rsp+248h] [rbp-E0h]
  struct _SLIST_ENTRY v143; // [rsp+250h] [rbp-D8h] BYREF
  DXGADAPTER *v144; // [rsp+268h] [rbp-C0h]

  v131 = a1;
  AllocationInfo = -1073741811;
  Global = DXGGLOBAL_GetGlobal();
  v2 = (char *)Global + 1168;
  ++*((_DWORD *)Global + 297);
  v3 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 73);
  ListEntry = v3;
  if ( !v3 )
  {
    ++*((_DWORD *)v2 + 6);
    v3 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))v2 + 6))(
                         *((unsigned int *)v2 + 9),
                         *((unsigned int *)v2 + 11),
                         *((unsigned int *)v2 + 10),
                         v2);
    ListEntry = v3;
  }
  if ( !v3 )
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for present parameters. Returing 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  memset(v3, 0, 0x5F8uLL);
  v117[0] = v3;
  v108 = 0LL;
  v107 = 2020;
  v110 = &AllocationInfo;
  v111 = 0;
  v109 = (unsigned __int64)v3 & -(__int64)(bTracingEnabled != 0);
  if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(
      (unsigned __int64)v3 & -(__int64)(bTracingEnabled != 0),
      &EventProfilerEnter,
      v5,
      2020);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v107, 2020);
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  v122 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v11, v10, v13, v14);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v20 = PsGetCurrentProcess(v17, v16, v18, v19);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x, returning 0x%I64x",
      v20,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_175;
  }
  v140 = 0LL;
  v142 = 0;
  P = 0LL;
  v116 = 0;
  v21 = (const void *)(v131 + 8);
  if ( v131 + 8 >= MmUserProbeAddress )
    v21 = (const void *)MmUserProbeAddress;
  memmove(v3, v21, 0x5D8uLL);
  v24 = (unsigned int)(*((_DWORD *)&v3[5].Next + 3) + 1);
  v124 = v24;
  if ( (unsigned int)(v24 - 1) > 0x40 )
  {
    v102 = v124;
    WdLogSingleEntry1(2LL, v124);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SubmitPresentToHwQueue passed a wrong number of broadcast contexts 0x%d",
      v102,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v115 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v116 = 0;
    if ( v140 != v141 && v140 )
      ExFreePoolWithTag(v140, 0);
    v140 = 0LL;
    v142 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
    if ( v111 )
    {
      if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          *(_QWORD *)(v109 + 88),
          *(_QWORD *)(v109 + 80),
          *(_DWORD *)v109,
          *(_DWORD *)(v109 + 56),
          *(_QWORD *)(v109 + 80),
          *(_QWORD *)(v109 + 88),
          *(_DWORD *)(v109 + 1096),
          *v110);
    }
    else if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v109,
        v104,
        *(_DWORD *)v109,
        *(_QWORD *)(v109 + 8),
        *(_DWORD *)(v109 + 16),
        *(_DWORD *)(v109 + 84),
        *(_DWORD *)(v109 + 88),
        *v110,
        *(_DWORD *)(v109 + 20),
        *(_DWORD *)(v109 + 24));
    }
    if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v103, &EventProfilerExit, v104, v107);
    v105 = DXGGLOBAL_GetGlobal();
    v106 = (union _SLIST_HEADER *)((char *)v105 + 1168);
    ++*((_DWORD *)v105 + 299);
    if ( ExQueryDepthSList((PSLIST_HEADER)v105 + 73) < *((_WORD *)v105 + 592) )
    {
      ExpInterlockedPushEntrySList(v106, v3);
    }
    else
    {
      ++LODWORD(v106[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v106[3].Region)(v3, v106);
    }
    return 3221225485LL;
  }
  if ( !PagedPoolZeroedArray<unsigned int,4>::AllocateElements((__int64 *)&v140, v24, v22, v23)
    || !PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements((__int64 *)&P, v24, v25, v26) )
  {
    if ( P != v115 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v116 = 0;
    if ( v140 != v141 && v140 )
      ExFreePoolWithTag(v140, 0);
    v140 = 0LL;
    v142 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
    if ( v111 )
    {
      if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          *(_QWORD *)(v109 + 88),
          *(_QWORD *)(v109 + 80),
          *(_DWORD *)v109,
          *(_DWORD *)(v109 + 56),
          *(_QWORD *)(v109 + 80),
          *(_QWORD *)(v109 + 88),
          *(_DWORD *)(v109 + 1096),
          *v110);
    }
    else if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v109,
        v99,
        *(_DWORD *)v109,
        *(_QWORD *)(v109 + 8),
        *(_DWORD *)(v109 + 16),
        *(_DWORD *)(v109 + 84),
        *(_DWORD *)(v109 + 88),
        *v110,
        *(_DWORD *)(v109 + 20),
        *(_DWORD *)(v109 + 24));
    }
    if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v98, &EventProfilerExit, v99, v107);
    v100 = DXGGLOBAL_GetGlobal();
    v101 = (union _SLIST_HEADER *)((char *)v100 + 1168);
    ++*((_DWORD *)v100 + 299);
    if ( ExQueryDepthSList((PSLIST_HEADER)v100 + 73) < *((_WORD *)v100 + 592) )
    {
      ExpInterlockedPushEntrySList(v101, v3);
    }
    else
    {
      ++LODWORD(v101[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v101[3].Region)(v3, v101);
    }
    return 3221225495LL;
  }
  v126 = 0LL;
  v27 = (const void **)v131;
  if ( v131 >= MmUserProbeAddress )
    v27 = (const void **)MmUserProbeAddress;
  v28 = *v27;
  v126 = (__int64)v28;
  v29 = v140;
  v134 = v140;
  v123 = (struct DXGADAPTER *)(unsigned int)v24;
  v30 = (ULONG64)v28 + 4 * v24;
  if ( v30 < (unsigned __int64)v28 || v30 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v29, v28, 4 * v24);
  v31 = 0LL;
  v133 = 0LL;
  if ( (*(_DWORD *)(&v3[5].Next + 1) & 0x10000000) != 0 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v138, Current);
    v32 = (*((_DWORD *)&v3[90].Next + 2) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v32 < *((_DWORD *)Current + 74) )
    {
      v33 = *((_QWORD *)Current + 35);
      v34 = *(_DWORD *)(v33 + 16 * v32 + 8);
      if ( *((_DWORD *)&v3[90].Next + 2) >> 30 == ((v34 >> 5) & 3) && (v34 & 0x2000) == 0 && (v34 & 0x1F) != 0 )
      {
        if ( (v34 & 0x1F) == 7 )
        {
          v31 = *(_QWORD *)(v33 + 16LL * (unsigned int)v32);
LABEL_30:
          v133 = v31;
          if ( !v31 )
          {
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v138);
            goto LABEL_168;
          }
          _m_prefetchw((const void *)(v31 + 32));
          v35 = *(_QWORD *)(v31 + 32);
          do
          {
            if ( !v35 )
              break;
            v36 = v35;
            v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 32), v35 + 1, v35);
          }
          while ( v36 != v35 );
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v138);
          v121 = 0LL;
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
            (DXGDEVICEBYHANDLE *)&v112,
            (unsigned int)v3->Next,
            (struct _KTHREAD **)v122,
            &v121);
          if ( !v121 )
          {
            if ( v112 && _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
            goto LABEL_167;
          }
          AllocationInfo = PreIndirectPresentReadAllocationInfo(
                             v122,
                             v121,
                             HIDWORD(v3[1].Next),
                             (struct INDIRECT_RESOURCE_INFO *)((char *)&v3[94].Next + 12));
          if ( AllocationInfo < 0 )
            WdLogSingleEntry1(3LL, HIDWORD(v3[1].Next));
          if ( v112 && _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
          goto LABEL_44;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v31 = 0LL;
    goto LABEL_30;
  }
LABEL_44:
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v125, *(_DWORD *)v140, v122, (struct DXGHWQUEUE **)P, 0);
  if ( !*(_QWORD *)P )
  {
    WdLogSingleEntry3(2LL, v122, *(unsigned int *)v140, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)v122,
      *(unsigned int *)v140,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_166;
  }
  v3[94].Next = (struct _SLIST_ENTRY *)P;
  if ( (*(_DWORD *)(&v3[5].Next + 1) & 0x10000000) != 0 )
    v37 = v31;
  else
    v37 = *(_QWORD *)(*(_QWORD *)P + 16LL);
  v112 = (DXGCONTEXT *)v37;
  if ( *(_BYTE *)(v37 + 441) && *((_DWORD *)&v3[5].Next + 3) )
  {
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v125);
    if ( v31 )
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v31);
    if ( P != v115 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v116 = 0;
    if ( v140 != v141 && v140 )
      ExFreePoolWithTag(v140, 0);
    v140 = 0LL;
    v142 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
    if ( v111 )
    {
      if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v109,
          v39,
          *(_DWORD *)v109,
          *(_DWORD *)(v109 + 56),
          *(_QWORD *)(v109 + 80),
          *(_QWORD *)(v109 + 88),
          *(_DWORD *)(v109 + 1096),
          *v110);
    }
    else if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v109,
        v39,
        *(_DWORD *)v109,
        *(_QWORD *)(v109 + 8),
        *(_DWORD *)(v109 + 16),
        *(_DWORD *)(v109 + 84),
        *(_DWORD *)(v109 + 88),
        *v110,
        *(_DWORD *)(v109 + 20),
        *(_DWORD *)(v109 + 24));
    }
    if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v107);
    v40 = DXGGLOBAL_GetGlobal();
    v41 = (union _SLIST_HEADER *)((char *)v40 + 1168);
    ++*((_DWORD *)v40 + 299);
    if ( ExQueryDepthSList((PSLIST_HEADER)v40 + 73) < *((_WORD *)v40 + 592) )
    {
      ExpInterlockedPushEntrySList(v41, v3);
    }
    else
    {
      ++LODWORD(v41[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v41[3].Region)(v3, v41);
    }
    return 3221225474LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL) + 16LL) + 2664LL) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, v37);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present is not supported on MCDM adapter context 0x%I64x",
      (__int64)v112,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_166;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v117,
    *(struct DXGDEVICE **)(v37 + 16));
  Pool2 = 0LL;
  v118 = 0LL;
  v120 = 0;
  if ( v124 <= 4 )
  {
    Pool2 = v119;
    v118 = v119;
    if ( v124 )
    {
      memset(v119, 0, 8LL * (_QWORD)v123);
      Pool2 = v118;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned __int64)v123 < 8 )
      goto LABEL_81;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * (_QWORD)v123, 1265072196LL, v42);
    v118 = Pool2;
  }
  v120 = v124;
LABEL_81:
  if ( !Pool2 )
  {
    WdLogSingleEntry1(3LL, 2242LL);
    goto LABEL_269;
  }
  *Pool2 = v112;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v137, v122);
  v126 = (__int64)v118;
  v44 = 0;
  LODWORD(v123) = 0;
  if ( !*((_DWORD *)&v3[5].Next + 3) )
  {
LABEL_108:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v137);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v135,
      v118,
      v120,
      v59,
      1);
    if ( v136 )
    {
      if ( v135[0] )
      {
        WdLogSingleEntry1(3LL, 2319LL);
LABEL_160:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v135);
        goto LABEL_161;
      }
      WdLogSingleEntry1(3LL, 2314LL);
LABEL_268:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v135);
LABEL_269:
      if ( v118 != v119 && v118 )
        ExFreePoolWithTag(v118, 0);
      v118 = 0LL;
      v120 = 0;
      if ( v117[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v117);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v125);
      if ( v31 )
        DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v31);
      if ( P != v115 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v116 = 0;
      if ( v140 != v141 && v140 )
        ExFreePoolWithTag(v140, 0);
      v140 = 0LL;
      v142 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
      if ( v111 )
      {
        if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v109,
            v94,
            *(_DWORD *)v109,
            *(_DWORD *)(v109 + 56),
            *(_QWORD *)(v109 + 80),
            *(_QWORD *)(v109 + 88),
            *(_DWORD *)(v109 + 1096),
            *v110);
      }
      else if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
      {
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v109,
          v94,
          *(_DWORD *)v109,
          *(_QWORD *)(v109 + 8),
          *(_DWORD *)(v109 + 16),
          *(_DWORD *)(v109 + 84),
          *(_DWORD *)(v109 + 88),
          *v110,
          *(_DWORD *)(v109 + 20),
          *(_DWORD *)(v109 + 24));
      }
      if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v93, &EventProfilerExit, v94, v107);
      v95 = DXGGLOBAL_GetGlobal();
      v96 = (union _SLIST_HEADER *)((char *)v95 + 1168);
      ++*((_DWORD *)v95 + 299);
      if ( ExQueryDepthSList((PSLIST_HEADER)v95 + 73) < *((_WORD *)v95 + 592) )
      {
        ExpInterlockedPushEntrySList(v96, v3);
      }
      else
      {
        Region = (void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v96[3].Region;
        ++LODWORD(v96[2].Alignment);
        Region(v3, v96);
      }
      return 3221225495LL;
    }
    *((_QWORD *)&v3[93].Next + 1) = v118;
    *((_BYTE *)&v3[94].Next + 8) = 1;
    v123 = *(struct DXGADAPTER **)(*((_QWORD *)v112 + 2) + 1848LL);
    LODWORD(v121) = DXGCONTEXT::CopyPresentArgs(v112, (struct _D3DKMT_PRESENT *)v3, v122, v60);
    AllocationInfo = (int)v121;
    if ( (int)v121 < 0 )
    {
LABEL_124:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v135);
      if ( v118 != v119 && v118 )
        ExFreePoolWithTag(v118, 0);
      v118 = 0LL;
      v120 = 0;
      if ( v117[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v117);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v125);
      if ( v31 )
        DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v31);
      if ( P != v115 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v116 = 0;
      if ( v140 != v141 && v140 )
        ExFreePoolWithTag(v140, 0);
      v140 = 0LL;
      v142 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
      if ( v111 )
      {
        if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v109,
            v65,
            *(_DWORD *)v109,
            *(_DWORD *)(v109 + 56),
            *(_QWORD *)(v109 + 80),
            *(_QWORD *)(v109 + 88),
            *(_DWORD *)(v109 + 1096),
            *v110);
      }
      else if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
      {
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v109,
          v65,
          *(_DWORD *)v109,
          *(_QWORD *)(v109 + 8),
          *(_DWORD *)(v109 + 16),
          *(_DWORD *)(v109 + 84),
          *(_DWORD *)(v109 + 88),
          *v110,
          *(_DWORD *)(v109 + 20),
          *(_DWORD *)(v109 + 24));
      }
      if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v64, &EventProfilerExit, v65, v107);
      v66 = DXGGLOBAL_GetGlobal();
      v67 = (union _SLIST_HEADER *)((char *)v66 + 1168);
      ++*((_DWORD *)v66 + 299);
      if ( ExQueryDepthSList((PSLIST_HEADER)v66 + 73) < *((_WORD *)v66 + 592) )
      {
        ExpInterlockedPushEntrySList(v67, v3);
      }
      else
      {
        ++LODWORD(v67[2].Alignment);
        ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v67[3].Region)(v3, v67);
      }
      return (unsigned int)v121;
    }
    v68 = *((_DWORD *)&v3[5].Next + 2);
    if ( (v68 & 0x10000000) != 0 )
    {
      if ( !v123 )
      {
        WdLogSingleEntry1(2LL, 2340LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Indirect Display present has to be on a context associated with Dod",
          2340LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_160;
      }
      if ( (*((_DWORD *)v123 + 109) & 0x100) == 0 )
      {
        WdLogSingleEntry1(2LL, 2346LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Indirect Display present can only be used with a indirect display Dod driver",
          2346LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_160;
      }
      v69 = v123;
    }
    else
    {
      v69 = v123;
      if ( !v123 )
      {
LABEL_191:
        v69 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v112 + 2) + 16LL) + 16LL);
LABEL_192:
        CWin32kLocks::CWin32kLocks(
          (CWin32kLocks *)v139,
          *((const struct _DXGKWIN32KENG_INTERFACE *const *)v122 + 11),
          v69);
        v129 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v112 + 2) + 16LL) + 16LL);
        v130 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v128);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v143, *((_QWORD *)v112 + 2), 2, v75, 0);
        LODWORD(v121) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v143, 0LL);
        AllocationInfo = (int)v121;
        if ( (int)v121 < 0 )
        {
LABEL_193:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v143);
          if ( v130 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v128);
          CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v139);
          goto LABEL_124;
        }
        if ( (*(_DWORD *)(&v3[5].Next + 1) & 0x200000) != 0 )
        {
          v76 = SubmitPresentHistoryToken(
                  (struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v3[22].Next + 1),
                  &v143,
                  (struct DXGADAPTERSTOPRESETLOCKSHARED *)v128,
                  (struct CWin32kLocks *)v139,
                  0,
                  0LL,
                  (struct DXGK_PRESENT_PARAMS *)v3,
                  0LL,
                  v112,
                  0LL,
                  0LL);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v143);
          if ( v130 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v128);
          CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v139);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v135);
          if ( v118 != v119 && v118 )
            ExFreePoolWithTag(v118, 0);
          v118 = 0LL;
          v120 = 0;
          if ( v117[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v117);
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v125);
          if ( v31 )
            DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v31);
          if ( P != v115 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v116 = 0;
          if ( v140 != v141 && v140 )
            ExFreePoolWithTag(v140, 0);
          v140 = 0LL;
          v142 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
          if ( v111 )
          {
            if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0qqxxqq_EtwWriteTransfer(
                (REGHANDLE *)&DxgkControlGuid_Context,
                v109,
                v78,
                *(_DWORD *)v109,
                *(_DWORD *)(v109 + 56),
                *(_QWORD *)(v109 + 80),
                *(_QWORD *)(v109 + 88),
                *(_DWORD *)(v109 + 1096),
                *v110);
          }
          else if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
          {
            McTemplateK0qpqqqqpp_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v109,
              v78,
              *(_DWORD *)v109,
              *(_QWORD *)(v109 + 8),
              *(_DWORD *)(v109 + 16),
              *(_DWORD *)(v109 + 84),
              *(_DWORD *)(v109 + 88),
              *v110,
              *(_DWORD *)(v109 + 20),
              *(_DWORD *)(v109 + 24));
          }
          if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v77, &EventProfilerExit, v78, v107);
          v79 = DXGGLOBAL_GetGlobal();
          v80 = (union _SLIST_HEADER *)((char *)v79 + 1168);
          ++*((_DWORD *)v79 + 299);
          if ( ExQueryDepthSList((PSLIST_HEADER)v79 + 73) < *((_WORD *)v79 + 592) )
          {
            ExpInterlockedPushEntrySList(v80, v3);
          }
          else
          {
            ++LODWORD(v80[2].Alignment);
            ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v80[3].Region)(v3, v80);
          }
          return v76;
        }
        v81 = *(struct VIDSCH_SUBMIT_DATA_BASE **)(*((_QWORD *)v112 + 2) + 16LL);
        v132[0] = 0LL;
        v132[1] = v81;
        CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v132);
        if ( !v132[0] )
        {
          WdLogSingleEntry1(6LL, 2398LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate VidSchSubmitData",
            2398LL,
            0LL,
            0LL,
            0LL,
            0LL);
          CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v132);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v143);
          if ( v130 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v128);
          CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v139);
          goto LABEL_268;
        }
        v82 = v112;
        AllocationInfo = DXGCONTEXT::Present(
                           v112,
                           (struct _D3DKMT_PRESENT *)v3,
                           (struct COREDEVICEACCESS *)&v143,
                           (struct DXGADAPTERSTOPRESETLOCKSHARED *)v128,
                           (struct CWin32kLocks *)v139,
                           (struct DXGCONTEXT **)v118,
                           v132[0]);
        if ( AllocationInfo == -1071775482 )
        {
          if ( !DXGADAPTER::IsCoreResourceSharedOwner(v144) )
          {
            LODWORD(v121) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v143, 0LL);
            if ( (int)v121 < 0 )
            {
              CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v132);
              goto LABEL_193;
            }
          }
          DXGDEVICE::CloseInternalCddPrimaryHandle(*((DXGDEVICE **)v82 + 2), (struct COREDEVICEACCESS *)&v143);
        }
        CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v132);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v143);
        if ( v130 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v128);
        if ( AllocationInfo >= 0 )
        {
          v83 = (_BYTE *)(v131 + 1496);
          if ( v131 + 1496 >= MmUserProbeAddress )
            v83 = (_BYTE *)MmUserProbeAddress;
          *v83 = *((_BYTE *)&v3[94].Next + 8);
        }
        CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v139);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v135);
        if ( v118 != v119 && v118 )
          ExFreePoolWithTag(v118, 0);
        v118 = 0LL;
        v120 = 0;
        if ( v117[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v117);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v125);
        if ( v31 )
          DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v31);
        if ( P != v115 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v116 = 0;
        if ( v140 != v141 && v140 )
          ExFreePoolWithTag(v140, 0);
        v140 = 0LL;
        v142 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
        if ( v111 )
        {
          if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0qqxxqq_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v109,
              v85,
              *(_DWORD *)v109,
              *(_DWORD *)(v109 + 56),
              *(_QWORD *)(v109 + 80),
              *(_QWORD *)(v109 + 88),
              *(_DWORD *)(v109 + 1096),
              *v110);
        }
        else if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
        {
          McTemplateK0qpqqqqpp_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v109,
            v85,
            *(_DWORD *)v109,
            *(_QWORD *)(v109 + 8),
            *(_DWORD *)(v109 + 16),
            *(_DWORD *)(v109 + 84),
            *(_DWORD *)(v109 + 88),
            *v110,
            *(_DWORD *)(v109 + 20),
            *(_DWORD *)(v109 + 24));
        }
        if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v84, &EventProfilerExit, v85, v107);
        v86 = DXGGLOBAL_GetGlobal();
        v87 = (union _SLIST_HEADER *)((char *)v86 + 1168);
        ++*((_DWORD *)v86 + 299);
        if ( ExQueryDepthSList((PSLIST_HEADER)v86 + 73) < *((_WORD *)v86 + 592) )
        {
          ExpInterlockedPushEntrySList(v87, v3);
        }
        else
        {
          ++LODWORD(v87[2].Alignment);
          ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v87[3].Region)(v3, v87);
        }
        v92 = DXGPROCESS::GetCurrent(v89, v88, v90, v91);
        DXGWORKQUEUE::FlushQueue((PLIST_ENTRY)(*((_QWORD *)v92 + 8) + 96LL));
        return (unsigned int)AllocationInfo;
      }
      if ( (*((_DWORD *)v123 + 109) & 0x100) != 0 && (v68 & 0x18000) == 0 )
      {
        WdLogSingleEntry1(2LL, 2356LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"No non-direct display presents can go to indirect display device",
          2356LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_160;
      }
    }
    if ( v69 )
      goto LABEL_192;
    goto LABEL_191;
  }
  v45 = 1;
  LODWORD(v121) = 1;
  while ( 1 )
  {
    if ( v45 >= v142 )
      v46 = (unsigned int *)v140;
    else
      v46 = (unsigned int *)((char *)v140 + 4 * v45);
    v47 = *v46;
    v48 = (v47 >> 6) & 0xFFFFFF;
    v49 = v47 >> 30;
    if ( v48 >= *((_DWORD *)v122 + 74) )
      goto LABEL_94;
    v50 = v48;
    v51 = *((_QWORD *)v122 + 35);
    v52 = *(_DWORD *)(v51 + 16LL * v48 + 8);
    if ( v49 != ((v52 >> 5) & 3) || (v52 & 0x2000) != 0 || (v52 & 0x1F) == 0 )
      goto LABEL_94;
    v53 = 2 * v50;
    if ( (v52 & 0x1F) != 0xF )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      v45 = (unsigned int)v121;
      v44 = (unsigned int)v123;
LABEL_94:
      v54 = 0LL;
      goto LABEL_95;
    }
    v54 = *(_QWORD *)(v51 + 8 * v53);
LABEL_95:
    if ( v45 >= v116 )
      v55 = P;
    else
      v55 = (char *)P + 8 * v45;
    *v55 = v54;
    v56 = (char *)P;
    v57 = (char *)P + 8 * v45;
    if ( v45 >= v116 )
      v57 = P;
    if ( !*v57 )
      break;
    if ( v45 < v116 )
      v56 = (char *)P + 8 * v45;
    *((_QWORD *)v118 + v45) = *(_QWORD *)(*(_QWORD *)v56 + 16LL);
    v58 = *((_QWORD *)v118 + v45);
    if ( !v58 || *(_QWORD *)(v58 + 16) != *((_QWORD *)v112 + 2) )
    {
      v61 = v44;
      WdLogSingleEntry4(2LL, v112, *((unsigned int *)&v3[6].Next + v44), v44, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v112,
        *((unsigned int *)&v3[6].Next + v61),
        v61,
        -1073741811LL,
        0LL);
      goto LABEL_113;
    }
    if ( *(_DWORD *)(*(_QWORD *)(v126 + 8LL * v45) + 400LL) <= *(_DWORD *)(*(_QWORD *)(v126 + 8LL * v44) + 400LL) )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Context physical adapters must be in the increasing adapter ordinal order, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_113;
    }
    v44 = v45;
    LODWORD(v123) = v45++;
    LODWORD(v121) = v45;
    if ( v44 >= *((_DWORD *)&v3[5].Next + 3) )
      goto LABEL_108;
  }
  if ( v45 >= v142 )
    v62 = (unsigned int *)v140;
  else
    v62 = (unsigned int *)((char *)v140 + 4 * v45);
  v126 = v44 + 1;
  WdLogSingleEntry2(2LL, *v62, v126);
  if ( (int)v123 + 1 >= v142 )
    v63 = (unsigned int *)v140;
  else
    v63 = (unsigned int *)((char *)v140 + 4 * (unsigned int)((_DWORD)v123 + 1));
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DxgkSubmitPresentToHwQueue failed with invalid HW queue handle 0x%x at index %d",
    *v63,
    v126,
    0LL,
    0LL,
    0LL);
LABEL_113:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v137);
LABEL_161:
  if ( v118 != v119 && v118 )
    ExFreePoolWithTag(v118, 0);
  v118 = 0LL;
  v120 = 0;
  if ( v117[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v117);
LABEL_166:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v125);
  if ( v31 )
LABEL_167:
    DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v31);
LABEL_168:
  if ( P != v115 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v116 = 0;
  if ( v140 != v141 && v140 )
    ExFreePoolWithTag(v140, 0);
  v140 = 0LL;
  v142 = 0;
LABEL_175:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
  if ( v111 )
  {
    if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v109,
        v71,
        *(_DWORD *)v109,
        *(_DWORD *)(v109 + 56),
        *(_QWORD *)(v109 + 80),
        *(_QWORD *)(v109 + 88),
        *(_DWORD *)(v109 + 1096),
        *v110);
  }
  else if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
  {
    McTemplateK0qpqqqqpp_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v109,
      v71,
      *(_DWORD *)v109,
      *(_QWORD *)(v109 + 8),
      *(_DWORD *)(v109 + 16),
      *(_DWORD *)(v109 + 84),
      *(_DWORD *)(v109 + 88),
      *v110,
      *(_DWORD *)(v109 + 20),
      *(_DWORD *)(v109 + 24));
  }
  if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v70, &EventProfilerExit, v71, v107);
  v72 = DXGGLOBAL_GetGlobal();
  v73 = (union _SLIST_HEADER *)((char *)v72 + 1168);
  ++*((_DWORD *)v72 + 299);
  if ( ExQueryDepthSList((PSLIST_HEADER)v72 + 73) < *((_WORD *)v72 + 592) )
  {
    ExpInterlockedPushEntrySList(v73, v3);
  }
  else
  {
    v74 = (void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v73[3].Region;
    ++LODWORD(v73[2].Alignment);
    v74(v3, v73);
  }
  return 3221225485LL;
}
