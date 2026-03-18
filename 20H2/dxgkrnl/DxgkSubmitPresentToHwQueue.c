/*
 * XREFs of DxgkSubmitPresentToHwQueue @ 0x1C0270CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00040D0 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004384 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0016994 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0016AF0 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0016C18 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019BA0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0019EC4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C0026890 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C00268BC (--1CWin32kLocks@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C0046024 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C0046148 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x1C004639C (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x1C0046474 (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FC160 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C0102FF0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C0165F4C (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C022B448 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C027E814 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C02801CC (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 */

__int64 __fastcall DxgkSubmitPresentToHwQueue(__int64 a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  char *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  PSLIST_ENTRY v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  bool v24; // zf
  bool v25; // zf
  const void *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // ebx
  __int64 v31; // rdx
  const void **v32; // rax
  char *v33; // rdx
  PVOID v34; // rcx
  size_t v35; // r8
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned int v40; // ecx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  signed __int64 v44; // rax
  signed __int64 v45; // rtt
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r12
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rdx
  struct DXGGLOBAL *v59; // rax
  union _SLIST_HEADER *v60; // rbx
  unsigned __int64 v61; // rdx
  _QWORD *PoolWithTag; // rcx
  size_t v63; // r8
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  bool v69; // zf
  unsigned int v70; // r11d
  unsigned int v71; // r8d
  struct DXGDEVICE *v72; // rdx
  _DWORD *v73; // rcx
  __int64 v74; // rax
  int v75; // r9d
  unsigned int v76; // ecx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // r9
  __int64 v80; // rcx
  _QWORD *v81; // r10
  char *v82; // rax
  _QWORD *v83; // r9
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rax
  __int64 v91; // rdx
  _QWORD *v92; // rax
  _QWORD *v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rdx
  unsigned int *v98; // rax
  __int64 v99; // rax
  struct DXGADAPTER *v100; // r13
  __int64 v101; // rdx
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rdx
  struct DXGGLOBAL *v107; // rax
  union _SLIST_HEADER *v108; // rbx
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rdx
  struct DXGGLOBAL *v113; // rax
  union _SLIST_HEADER *v114; // rbx
  void (__fastcall *v115)(PSLIST_ENTRY, union _SLIST_HEADER *); // rax
  __int64 v116; // r9
  int v117; // r13d
  __int64 v118; // rdx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // rdx
  struct DXGGLOBAL *v123; // rax
  union _SLIST_HEADER *v124; // rbx
  unsigned int v125; // r12d
  __int64 v126; // rdx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // rdx
  struct DXGGLOBAL *v131; // rax
  union _SLIST_HEADER *v132; // rbx
  struct VIDSCH_SUBMIT_DATA_BASE *v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rdx
  struct DXGGLOBAL *v141; // rax
  union _SLIST_HEADER *v142; // rbx
  void (__fastcall *Region)(PSLIST_ENTRY, union _SLIST_HEADER *); // rax
  _BYTE *v144; // rdx
  __int64 v145; // rdx
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // rdx
  struct DXGGLOBAL *v150; // rax
  union _SLIST_HEADER *v151; // rbx
  __int64 v152; // rdx
  __int64 v153; // rcx
  struct DXGPROCESS *v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  struct DXGGLOBAL *v158; // rax
  union _SLIST_HEADER *v159; // rbx
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  struct DXGGLOBAL *v165; // rax
  union _SLIST_HEADER *v166; // rbx
  int v167; // [rsp+60h] [rbp-2D8h] BYREF
  __int64 v168; // [rsp+68h] [rbp-2D0h]
  unsigned __int64 v169; // [rsp+70h] [rbp-2C8h]
  int *v170; // [rsp+78h] [rbp-2C0h]
  char v171; // [rsp+80h] [rbp-2B8h]
  int AllocationInfo; // [rsp+88h] [rbp-2B0h] BYREF
  PVOID P; // [rsp+90h] [rbp-2A8h] BYREF
  _BYTE v174[32]; // [rsp+98h] [rbp-2A0h] BYREF
  unsigned int v175; // [rsp+B8h] [rbp-280h]
  _QWORD v176[2]; // [rsp+C0h] [rbp-278h] BYREF
  struct DXGPROCESS *Current; // [rsp+D0h] [rbp-268h]
  PVOID v178; // [rsp+D8h] [rbp-260h]
  _BYTE v179[32]; // [rsp+E0h] [rbp-258h] BYREF
  unsigned int v180; // [rsp+100h] [rbp-238h]
  struct DXGDEVICE *v181; // [rsp+108h] [rbp-230h] BYREF
  _BYTE v182[16]; // [rsp+110h] [rbp-228h] BYREF
  size_t v183; // [rsp+120h] [rbp-218h]
  unsigned int v184; // [rsp+128h] [rbp-210h]
  struct DXGDEVICE *v185; // [rsp+130h] [rbp-208h] BYREF
  __int64 v186; // [rsp+138h] [rbp-200h]
  __int64 v187; // [rsp+140h] [rbp-1F8h]
  PSLIST_ENTRY ListEntry; // [rsp+148h] [rbp-1F0h]
  char v189[8]; // [rsp+150h] [rbp-1E8h] BYREF
  __int64 v190; // [rsp+158h] [rbp-1E0h]
  char v191; // [rsp+160h] [rbp-1D8h]
  struct VIDSCH_SUBMIT_DATA_BASE *v192[2]; // [rsp+168h] [rbp-1D0h] BYREF
  ULONG64 v193; // [rsp+178h] [rbp-1C0h]
  _QWORD *p_Next; // [rsp+180h] [rbp-1B8h]
  PVOID v195; // [rsp+188h] [rbp-1B0h]
  _QWORD v196[6]; // [rsp+190h] [rbp-1A8h] BYREF
  char v197; // [rsp+1C0h] [rbp-178h]
  _BYTE v198[24]; // [rsp+1C8h] [rbp-170h] BYREF
  _BYTE v199[32]; // [rsp+1E0h] [rbp-158h] BYREF
  _BYTE v200[64]; // [rsp+200h] [rbp-138h] BYREF
  PVOID v201; // [rsp+240h] [rbp-F8h] BYREF
  _BYTE v202[16]; // [rsp+248h] [rbp-F0h] BYREF
  unsigned int v203; // [rsp+258h] [rbp-E0h]
  _BYTE v204[24]; // [rsp+260h] [rbp-D8h] BYREF
  DXGADAPTER *v205; // [rsp+278h] [rbp-C0h]

  v193 = a1;
  AllocationInfo = -1073741811;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  v4 = (char *)Global + 1024;
  ++*((_DWORD *)Global + 261);
  v7 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 64);
  ListEntry = v7;
  if ( !v7 )
  {
    ++*((_DWORD *)v4 + 6);
    v7 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))v4 + 6))(
                         *((unsigned int *)v4 + 9),
                         *((unsigned int *)v4 + 11),
                         *((unsigned int *)v4 + 10),
                         v4);
    ListEntry = v7;
  }
  if ( !v7 )
  {
    v10 = WdLogNewEntry5_WdLowResource(v6, v5, v8, v9);
    *(_QWORD *)(v10 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v10);
    return 3221225495LL;
  }
  memset(v7, 0, 0x5F8uLL);
  p_Next = &v7->Next;
  v168 = 0LL;
  v167 = 2020;
  v170 = &AllocationInfo;
  v171 = 0;
  v169 = (unsigned __int64)v7 & -(__int64)(bTracingEnabled != 0);
  if ( (qword_1C00AF9B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(
      (unsigned __int64)v7 & -(__int64)(bTracingEnabled != 0),
      &EventProfilerEnter,
      v12,
      2020);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v167, 2020LL);
  Current = DXGPROCESS::GetCurrent(v14, v13);
  if ( !Current )
  {
    v17 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v17 + 24) = PsGetCurrentProcess(v19, v18);
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167, v20);
    v23 = v169;
    if ( v171 )
    {
      if ( v169 )
        goto LABEL_12;
      goto LABEL_17;
    }
    if ( !v169 )
      goto LABEL_17;
    goto LABEL_15;
  }
  v201 = 0LL;
  v203 = 0;
  P = 0LL;
  v175 = 0;
  v26 = (const void *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v26 = (const void *)MmUserProbeAddress;
  memmove(v7, v26, 0x5D8uLL);
  v29 = *((_DWORD *)&v7[5].Next + 3);
  v30 = v29 + 1;
  v184 = v29 + 1;
  if ( v29 > 0x40 )
  {
    v160 = WdLogNewEntry5_WdError(v28, v27);
    *(_QWORD *)(v160 + 24) = v184;
    WdLogEvent5_WdError(v160);
    if ( P != v174 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v175 = 0;
    if ( v201 != v202 && v201 )
      ExFreePoolWithTag(v201, 0);
    v201 = 0LL;
    v203 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167, v161);
    if ( v171 )
    {
      v164 = v169;
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          *(_QWORD *)(v169 + 88),
          v169,
          *(_DWORD *)v169,
          *(_DWORD *)(v169 + 56),
          *(_QWORD *)(v169 + 80),
          *(_QWORD *)(v169 + 88),
          *(_DWORD *)(v169 + 1096),
          *v170);
    }
    else
    {
      v162 = v169;
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v169,
          v164,
          *(_DWORD *)v169,
          *(_QWORD *)(v169 + 8),
          *(_DWORD *)(v169 + 16),
          *(_DWORD *)(v169 + 84),
          *(_DWORD *)(v169 + 88),
          *v170,
          *(_DWORD *)(v169 + 20),
          *(_DWORD *)(v169 + 24));
    }
    if ( (qword_1C00AF9B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v163, &EventProfilerExit, v164, v167);
    v165 = DXGGLOBAL::GetGlobal(v163, v162);
    v166 = (union _SLIST_HEADER *)((char *)v165 + 1024);
    ++*((_DWORD *)v165 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v165 + 64) < *((_WORD *)v165 + 520) )
    {
      ExpInterlockedPushEntrySList(v166, v7);
    }
    else
    {
      ++LODWORD(v166[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v166[3].Region)(v7, v166);
    }
    return 3221225485LL;
  }
  if ( !PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v201, v30)
    || !PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(&P, v30) )
  {
    if ( P != v174 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v175 = 0;
    if ( v201 != v202 && v201 )
      ExFreePoolWithTag(v201, 0);
    v201 = 0LL;
    v203 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167, v31);
    if ( v171 )
    {
      v157 = v169;
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          *(_QWORD *)(v169 + 88),
          v169,
          *(_DWORD *)v169,
          *(_DWORD *)(v169 + 56),
          *(_QWORD *)(v169 + 80),
          *(_QWORD *)(v169 + 88),
          *(_DWORD *)(v169 + 1096),
          *v170);
    }
    else
    {
      v155 = v169;
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v169,
          v157,
          *(_DWORD *)v169,
          *(_QWORD *)(v169 + 8),
          *(_DWORD *)(v169 + 16),
          *(_DWORD *)(v169 + 84),
          *(_DWORD *)(v169 + 88),
          *v170,
          *(_DWORD *)(v169 + 20),
          *(_DWORD *)(v169 + 24));
    }
    if ( (qword_1C00AF9B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v156, &EventProfilerExit, v157, v167);
    v158 = DXGGLOBAL::GetGlobal(v156, v155);
    v159 = (union _SLIST_HEADER *)((char *)v158 + 1024);
    ++*((_DWORD *)v158 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v158 + 64) < *((_WORD *)v158 + 520) )
    {
      ExpInterlockedPushEntrySList(v159, v7);
    }
    else
    {
      ++LODWORD(v159[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v159[3].Region)(v7, v159);
    }
    return 3221225495LL;
  }
  v187 = 0LL;
  v32 = (const void **)v193;
  if ( v193 >= MmUserProbeAddress )
    v32 = (const void **)MmUserProbeAddress;
  v33 = (char *)*v32;
  v187 = (__int64)v33;
  v34 = v201;
  v195 = v201;
  v183 = v30;
  v35 = 4LL * v30;
  if ( &v33[v35] < v33 || (unsigned __int64)&v33[v35] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v34, v33, v35);
  v36 = 0LL;
  v186 = 0LL;
  if ( (*(_DWORD *)(&v7[5].Next + 1) & 0x10000000) != 0 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v199, (struct _KTHREAD **)Current);
    v37 = (*((_DWORD *)&v7[90].Next + 2) >> 6) & 0xFFFFFF;
    v38 = *((_DWORD *)&v7[90].Next + 2) >> 30;
    if ( (unsigned int)v37 < *((_DWORD *)Current + 64) )
    {
      v39 = *((_QWORD *)Current + 30);
      v40 = *(_DWORD *)(v39 + 16 * v37 + 8);
      if ( (_DWORD)v38 == ((v40 >> 5) & 3) && (v40 & 0x2000) == 0 && (v40 & 0x1F) != 0 )
      {
        v41 = v40 & 0x1F;
        if ( (_BYTE)v41 == 7 )
        {
          v36 = *(_QWORD *)(v39 + 16LL * (unsigned int)v37);
          goto LABEL_38;
        }
        v42 = WdLogNewEntry5_WdError(v41, v38);
        *(_QWORD *)(v42 + 24) = 267LL;
        WdLogEvent5_WdError(v42);
      }
    }
    v36 = 0LL;
LABEL_38:
    v186 = v36;
    if ( !v36 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v199);
      goto LABEL_40;
    }
    _m_prefetchw((const void *)(v36 + 32));
    v44 = *(_QWORD *)(v36 + 32);
    do
    {
      if ( !v44 )
        break;
      v45 = v44;
      v44 = _InterlockedCompareExchange64((volatile signed __int64 *)(v36 + 32), v44 + 1, v44);
    }
    while ( v45 != v44 );
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v199);
    v185 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)&v181,
      LODWORD(v7->Next),
      (struct _KTHREAD **)Current,
      &v185);
    if ( !v185 )
    {
      if ( v181 && _InterlockedExchangeAdd64((volatile signed __int64 *)v181 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v181 + 2), v181);
      goto LABEL_59;
    }
    AllocationInfo = PreIndirectPresentReadAllocationInfo(
                       Current,
                       v185,
                       HIDWORD(v7[1].Next),
                       (struct INDIRECT_RESOURCE_INFO *)((char *)&v7[94].Next + 12));
    if ( AllocationInfo < 0 )
    {
      v49 = WdLogNewEntry5_WdWarning(v47, v46, v48);
      *(_QWORD *)(v49 + 24) = HIDWORD(v7[1].Next);
      WdLogEvent5_WdWarning(v49);
    }
    if ( v181 && _InterlockedExchangeAdd64((volatile signed __int64 *)v181 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v181 + 2), v181);
    v36 = v186;
  }
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
    (DXGHWQUEUEBYHANDLE *)v182,
    *(_DWORD *)v201,
    (struct _KTHREAD **)Current,
    (struct DXGHWQUEUE **)P,
    0);
  if ( !*(_QWORD *)P )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
    v52[3] = Current;
    v52[4] = *(unsigned int *)v201;
    v52[5] = -1073741811LL;
    WdLogEvent5_WdError(v52);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v182, v53);
    if ( !v36 )
    {
LABEL_40:
      if ( P != v174 && P )
        ExFreePoolWithTag(P, 0);
      v175 = 0;
      P = 0LL;
      if ( v201 != v202 && v201 )
        ExFreePoolWithTag(v201, 0);
      v201 = 0LL;
      v203 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167, v43);
      v23 = v169;
      if ( v171 )
      {
        if ( v169 )
        {
LABEL_12:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0qqxxqq_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v23,
              v22,
              *(_DWORD *)v23,
              *(_DWORD *)(v23 + 56),
              *(_QWORD *)(v23 + 80),
              *(_QWORD *)(v23 + 88),
              *(_DWORD *)(v23 + 1096),
              *v170);
        }
LABEL_17:
        v24 = (qword_1C00AF9B0 & 2) == 0;
        goto LABEL_18;
      }
      if ( !v169 )
        goto LABEL_17;
LABEL_15:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v23,
          v22,
          *(_DWORD *)v23,
          *(_QWORD *)(v23 + 8),
          *(_DWORD *)(v23 + 16),
          *(_DWORD *)(v23 + 84),
          *(_DWORD *)(v23 + 88),
          *v170,
          *(_DWORD *)(v23 + 20),
          *(_DWORD *)(v23 + 24));
      goto LABEL_17;
    }
LABEL_59:
    DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v36);
    goto LABEL_40;
  }
  v7[94].Next = (struct _SLIST_ENTRY *)P;
  if ( (*(_DWORD *)(&v7[5].Next + 1) & 0x10000000) != 0 )
    v54 = v36;
  else
    v54 = *(_QWORD *)(*(_QWORD *)P + 16LL);
  if ( *(_BYTE *)(v54 + 457) && *((_DWORD *)&v7[5].Next + 3) )
  {
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v182, v50);
    if ( v36 )
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v36);
    if ( P != v174 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v175 = 0;
    if ( v201 != v202 && v201 )
      ExFreePoolWithTag(v201, 0);
    v201 = 0LL;
    v203 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167, v55);
    v58 = v169;
    if ( v171 )
    {
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v169,
          v57,
          *(_DWORD *)v169,
          *(_DWORD *)(v169 + 56),
          *(_QWORD *)(v169 + 80),
          *(_QWORD *)(v169 + 88),
          *(_DWORD *)(v169 + 1096),
          *v170);
    }
    else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v169,
        v57,
        *(_DWORD *)v169,
        *(_QWORD *)(v169 + 8),
        *(_DWORD *)(v169 + 16),
        *(_DWORD *)(v169 + 84),
        *(_DWORD *)(v169 + 88),
        *v170,
        *(_DWORD *)(v169 + 20),
        *(_DWORD *)(v169 + 24));
    }
    if ( (qword_1C00AF9B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v56, &EventProfilerExit, v57, v167);
    v59 = DXGGLOBAL::GetGlobal(v56, v58);
    v60 = (union _SLIST_HEADER *)((char *)v59 + 1024);
    ++*((_DWORD *)v59 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v59 + 64) < *((_WORD *)v59 + 520) )
    {
      ExpInterlockedPushEntrySList(v60, v7);
    }
    else
    {
      ++LODWORD(v60[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v60[3].Region)(v7, v60);
    }
    return 3221225474LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v176,
    *(struct DXGDEVICE **)(v54 + 16));
  PoolWithTag = 0LL;
  v178 = 0LL;
  v180 = 0;
  v63 = v183;
  if ( v184 <= 4 )
  {
    PoolWithTag = v179;
    v178 = v179;
    v63 = 8 * v183;
  }
  else
  {
    v61 = 0xFFFFFFFFFFFFFFFFuLL % v183;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v183 < 8 )
      goto LABEL_102;
    v187 = 8 * v183;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v183, 0x4B677844u);
    v178 = PoolWithTag;
    v63 = v187;
  }
  v180 = v184;
  if ( !PoolWithTag )
  {
LABEL_103:
    v64 = WdLogNewEntry5_WdWarning(PoolWithTag, v61, v63);
    *(_QWORD *)(v64 + 24) = 2155LL;
    WdLogEvent5_WdWarning(v64);
LABEL_138:
    if ( v178 != v179 && v178 )
      ExFreePoolWithTag(v178, 0);
    v180 = 0;
    v178 = 0LL;
    if ( v176[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v176);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v182, v65);
    if ( v36 )
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v36);
    if ( P != v174 && P )
      ExFreePoolWithTag(P, 0);
    v175 = 0;
    P = 0LL;
    if ( v201 != v202 && v201 )
      ExFreePoolWithTag(v201, 0);
    v201 = 0LL;
    v203 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167, v91);
    v66 = v169;
    if ( v171 )
    {
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v169,
          v68,
          *(_DWORD *)v169,
          *(_DWORD *)(v169 + 56),
          *(_QWORD *)(v169 + 80),
          *(_QWORD *)(v169 + 88),
          *(_DWORD *)(v169 + 1096),
          *v170);
    }
    else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v169,
        v68,
        *(_DWORD *)v169,
        *(_QWORD *)(v169 + 8),
        *(_DWORD *)(v169 + 16),
        *(_DWORD *)(v169 + 84),
        *(_DWORD *)(v169 + 88),
        *v170,
        *(_DWORD *)(v169 + 20),
        *(_DWORD *)(v169 + 24));
    }
    if ( (qword_1C00AF9B0 & 2) == 0 )
      goto LABEL_338;
    v69 = (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0;
LABEL_336:
    if ( !v69 )
      McTemplateK0q_EtwWriteTransfer(v67, &EventProfilerExit, v68, v167);
LABEL_338:
    v141 = DXGGLOBAL::GetGlobal(v67, v66);
    v142 = (union _SLIST_HEADER *)((char *)v141 + 1024);
    ++*((_DWORD *)v141 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v141 + 64) < *((_WORD *)v141 + 520) )
    {
      ExpInterlockedPushEntrySList(v142, v7);
    }
    else
    {
      Region = (void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v142[3].Region;
      ++LODWORD(v142[2].Alignment);
      Region(v7, v142);
    }
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, v63);
  PoolWithTag = v178;
LABEL_102:
  if ( !PoolWithTag )
    goto LABEL_103;
  *PoolWithTag = v54;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v198, (struct _KTHREAD **)Current);
  p_Next = v178;
  v70 = 0;
  LODWORD(v183) = 0;
  if ( *((_DWORD *)&v7[5].Next + 3) )
  {
    v71 = 1;
    LODWORD(v181) = 1;
    while ( 1 )
    {
      v72 = (struct DXGDEVICE *)v71;
      v185 = (struct DXGDEVICE *)v71;
      if ( v71 >= v203 )
      {
        v73 = v201;
        v185 = (struct DXGDEVICE *)v71;
      }
      else
      {
        v73 = (char *)v201 + 4 * v71;
      }
      v74 = (*v73 >> 6) & 0xFFFFFF;
      v75 = *v73 >> 30;
      if ( (unsigned int)v74 >= *((_DWORD *)Current + 64) )
        goto LABEL_123;
      v187 = *((_QWORD *)Current + 30);
      v76 = *(_DWORD *)(v187 + 16 * v74 + 8);
      if ( v75 != ((v76 >> 5) & 3) || (v76 & 0x2000) != 0 || (v76 & 0x1F) == 0 )
        goto LABEL_123;
      v77 = v76 & 0x1F;
      if ( (_BYTE)v77 != 15 )
        break;
      v79 = *(_QWORD *)(v187 + 16LL * (unsigned int)v74);
LABEL_124:
      v80 = 8LL * (_QWORD)v72;
      v81 = P;
      if ( v71 < v175 )
        v81 = (char *)P + v80;
      *v81 = v79;
      v82 = (char *)P;
      v83 = (char *)P + v80;
      if ( v71 >= v175 )
        v83 = P;
      if ( !*v83 )
      {
        v97 = WdLogNewEntry5_WdError(v80, v72);
        if ( (unsigned int)v181 >= v203 )
          v98 = (unsigned int *)v201;
        else
          v98 = (unsigned int *)((char *)v201 + 4 * (_QWORD)v185);
        *(_QWORD *)(v97 + 24) = *v98;
        *(_QWORD *)(v97 + 32) = (unsigned int)(v183 + 1);
        v93 = (_QWORD *)v97;
LABEL_156:
        WdLogEvent5_WdError(v93);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v198);
LABEL_157:
        if ( v178 != v179 && v178 )
          ExFreePoolWithTag(v178, 0);
        v180 = 0;
        v178 = 0LL;
        if ( v176[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v176);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v182, v94);
        if ( v36 )
          DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v36);
        if ( P != v174 && P )
          ExFreePoolWithTag(P, 0);
        v175 = 0;
        P = 0LL;
        if ( v201 != v202 && v201 )
          ExFreePoolWithTag(v201, 0);
        v201 = 0LL;
        v203 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167, v95);
        v23 = v169;
        if ( v171 )
        {
          if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0qqxxqq_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v169,
              v22,
              *(_DWORD *)v169,
              *(_DWORD *)(v169 + 56),
              *(_QWORD *)(v169 + 80),
              *(_QWORD *)(v169 + 88),
              *(_DWORD *)(v169 + 1096),
              *v170);
        }
        else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0qpqqqqpp_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v169,
            v22,
            *(_DWORD *)v169,
            *(_QWORD *)(v169 + 8),
            *(_DWORD *)(v169 + 16),
            *(_DWORD *)(v169 + 84),
            *(_DWORD *)(v169 + 88),
            *v170,
            *(_DWORD *)(v169 + 20),
            *(_DWORD *)(v169 + 24));
        }
        v24 = (qword_1C00AF9B0 & 2) == 0;
LABEL_18:
        if ( !v24 )
        {
          v25 = (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0;
LABEL_243:
          if ( !v25 )
            McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v167);
        }
        goto LABEL_245;
      }
      if ( v71 < v175 )
        v82 = (char *)P + v80;
      *((_QWORD *)v178 + (_QWORD)v72) = *(_QWORD *)(*(_QWORD *)v82 + 16LL);
      v84 = *((_QWORD *)v178 + (_QWORD)v72);
      if ( !v84 || (v84 = *(_QWORD *)(v84 + 16), v84 != *(_QWORD *)(v54 + 16)) )
      {
        v92 = (_QWORD *)WdLogNewEntry5_WdError(v84, v72);
        v92[3] = v54;
        v96 = (unsigned int)v183;
        v92[4] = *((unsigned int *)&v7[6].Next + (unsigned int)v183);
        v92[5] = v96;
        v92[6] = -1073741811LL;
        goto LABEL_155;
      }
      v85 = *(unsigned int *)(p_Next[(_QWORD)v72] + 416LL);
      v86 = p_Next[v70];
      if ( (unsigned int)v85 <= *(_DWORD *)(v86 + 416) )
      {
        v92 = (_QWORD *)WdLogNewEntry5_WdError(v86, v85);
        v92[3] = -1073741811LL;
LABEL_155:
        v93 = v92;
        goto LABEL_156;
      }
      v70 = v71;
      LODWORD(v183) = v71++;
      LODWORD(v181) = v71;
      if ( v70 >= *((_DWORD *)&v7[5].Next + 3) )
        goto LABEL_135;
    }
    v78 = WdLogNewEntry5_WdError(v77, v71);
    *(_QWORD *)(v78 + 24) = 267LL;
    WdLogEvent5_WdError(v78);
    v71 = (unsigned int)v181;
    v72 = v185;
    v70 = v183;
LABEL_123:
    v79 = 0LL;
    goto LABEL_124;
  }
LABEL_135:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v198);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v196,
    v178,
    v180);
  if ( v197 )
  {
    if ( v196[0] )
    {
      v99 = WdLogNewEntry5_WdWarning(v88, v87, v89);
      *(_QWORD *)(v99 + 24) = 2232LL;
      WdLogEvent5_WdWarning(v99);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v196);
      goto LABEL_157;
    }
    v90 = WdLogNewEntry5_WdWarning(v88, v87, v89);
    *(_QWORD *)(v90 + 24) = 2227LL;
    WdLogEvent5_WdWarning(v90);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v196);
    goto LABEL_138;
  }
  *((_QWORD *)&v7[93].Next + 1) = v178;
  *((_BYTE *)&v7[94].Next + 8) = 1;
  v100 = *(struct DXGADAPTER **)(*(_QWORD *)(v54 + 16) + 1848LL);
  LODWORD(v181) = DXGCONTEXT::CopyPresentArgs((DXGPRESENT **)v54, (struct _D3DKMT_PRESENT *)v7, Current);
  AllocationInfo = (int)v181;
  if ( (int)v181 < 0 )
  {
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v196);
    if ( v178 != v179 && v178 )
      ExFreePoolWithTag(v178, 0);
    v178 = 0LL;
    v180 = 0;
    if ( v176[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v176);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v182, v102);
    if ( v36 )
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v36);
    if ( P != v174 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v175 = 0;
    if ( v201 != v202 && v201 )
      ExFreePoolWithTag(v201, 0);
    v201 = 0LL;
    v203 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167, v103);
    v106 = v169;
    if ( v171 )
    {
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v169,
          v105,
          *(_DWORD *)v169,
          *(_DWORD *)(v169 + 56),
          *(_QWORD *)(v169 + 80),
          *(_QWORD *)(v169 + 88),
          *(_DWORD *)(v169 + 1096),
          *v170);
    }
    else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v169,
        v105,
        *(_DWORD *)v169,
        *(_QWORD *)(v169 + 8),
        *(_DWORD *)(v169 + 16),
        *(_DWORD *)(v169 + 84),
        *(_DWORD *)(v169 + 88),
        *v170,
        *(_DWORD *)(v169 + 20),
        *(_DWORD *)(v169 + 24));
    }
    if ( (qword_1C00AF9B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v104, &EventProfilerExit, v105, v167);
    v107 = DXGGLOBAL::GetGlobal(v104, v106);
    v108 = (union _SLIST_HEADER *)((char *)v107 + 1024);
    ++*((_DWORD *)v107 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v107 + 64) < *((_WORD *)v107 + 520) )
    {
      ExpInterlockedPushEntrySList(v108, v7);
    }
    else
    {
      ++LODWORD(v108[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v108[3].Region)(v7, v108);
    }
    return (unsigned int)v181;
  }
  v109 = *((unsigned int *)&v7[5].Next + 2);
  if ( (v109 & 0x10000000) != 0 )
  {
    if ( !v100 )
    {
      v110 = WdLogNewEntry5_WdError(v109, v101);
      *(_QWORD *)(v110 + 24) = 2253LL;
      goto LABEL_221;
    }
    if ( (*((_DWORD *)v100 + 87) & 0x100) == 0 )
    {
      v110 = WdLogNewEntry5_WdError(v109, v101);
      *(_QWORD *)(v110 + 24) = 2259LL;
      goto LABEL_221;
    }
    goto LABEL_251;
  }
  if ( !v100 )
  {
    v100 = *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v54 + 16) + 16LL) + 16LL);
    goto LABEL_251;
  }
  if ( (*((_DWORD *)v100 + 87) & 0x100) == 0 || (v109 & 0x18000) != 0 )
  {
LABEL_251:
    CWin32kLocks::CWin32kLocks(
      (CWin32kLocks *)v200,
      *((const struct _DXGKWIN32KENG_INTERFACE *const *)Current + 11),
      v100);
    v190 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54 + 16) + 16LL) + 16LL);
    v191 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v189);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v204, *(_QWORD *)(v54 + 16), 2, v116, 0);
    v117 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v204, 0LL);
    AllocationInfo = v117;
    if ( v117 < 0 )
    {
LABEL_252:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v204);
      if ( v191 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v189);
      CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v200);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v196);
      if ( v178 != v179 && v178 )
        ExFreePoolWithTag(v178, 0);
      v180 = 0;
      v178 = 0LL;
      if ( v176[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v176);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v182, v118);
      if ( v36 )
        DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v36);
      if ( P != v174 && P )
        ExFreePoolWithTag(P, 0);
      v175 = 0;
      P = 0LL;
      if ( v201 != v202 && v201 )
        ExFreePoolWithTag(v201, 0);
      v201 = 0LL;
      v203 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167, v119);
      v122 = v169;
      if ( v171 )
      {
        if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v169,
            v121,
            *(_DWORD *)v169,
            *(_DWORD *)(v169 + 56),
            *(_QWORD *)(v169 + 80),
            *(_QWORD *)(v169 + 88),
            *(_DWORD *)(v169 + 1096),
            *v170);
      }
      else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v169,
          v121,
          *(_DWORD *)v169,
          *(_QWORD *)(v169 + 8),
          *(_DWORD *)(v169 + 16),
          *(_DWORD *)(v169 + 84),
          *(_DWORD *)(v169 + 88),
          *v170,
          *(_DWORD *)(v169 + 20),
          *(_DWORD *)(v169 + 24));
      }
      if ( (qword_1C00AF9B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v120, &EventProfilerExit, v121, v167);
      v123 = DXGGLOBAL::GetGlobal(v120, v122);
      v124 = (union _SLIST_HEADER *)((char *)v123 + 1024);
      ++*((_DWORD *)v123 + 263);
      if ( ExQueryDepthSList((PSLIST_HEADER)v123 + 64) < *((_WORD *)v123 + 520) )
      {
        ExpInterlockedPushEntrySList(v124, v7);
      }
      else
      {
        ++LODWORD(v124[2].Alignment);
        ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v124[3].Region)(v7, v124);
      }
      return (unsigned int)v117;
    }
    if ( (*(_DWORD *)(&v7[5].Next + 1) & 0x200000) != 0 )
    {
      v125 = SubmitPresentHistoryToken(
               (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v7[22].Next + 1),
               (struct COREDEVICEACCESS *)v204,
               (__int64)v189,
               (struct CWin32kLocks *)v200,
               0,
               0LL,
               (struct DXGK_PRESENT_PARAMS *)v7,
               0LL,
               (struct DXGCONTEXT *)v54,
               0LL,
               0LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v204);
      if ( v191 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v189);
      CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v200);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v196);
      if ( v178 != v179 && v178 )
        ExFreePoolWithTag(v178, 0);
      v178 = 0LL;
      v180 = 0;
      if ( v176[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v176);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v182, v126);
      if ( v36 )
        DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v36);
      if ( P != v174 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v175 = 0;
      if ( v201 != v202 && v201 )
        ExFreePoolWithTag(v201, 0);
      v201 = 0LL;
      v203 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167, v127);
      v130 = v169;
      if ( v171 )
      {
        if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v169,
            v129,
            *(_DWORD *)v169,
            *(_DWORD *)(v169 + 56),
            *(_QWORD *)(v169 + 80),
            *(_QWORD *)(v169 + 88),
            *(_DWORD *)(v169 + 1096),
            *v170);
      }
      else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v169,
          v129,
          *(_DWORD *)v169,
          *(_QWORD *)(v169 + 8),
          *(_DWORD *)(v169 + 16),
          *(_DWORD *)(v169 + 84),
          *(_DWORD *)(v169 + 88),
          *v170,
          *(_DWORD *)(v169 + 20),
          *(_DWORD *)(v169 + 24));
      }
      if ( (qword_1C00AF9B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v128, &EventProfilerExit, v129, v167);
      v131 = DXGGLOBAL::GetGlobal(v128, v130);
      v132 = (union _SLIST_HEADER *)((char *)v131 + 1024);
      ++*((_DWORD *)v131 + 263);
      if ( ExQueryDepthSList((PSLIST_HEADER)v131 + 64) < *((_WORD *)v131 + 520) )
      {
        ExpInterlockedPushEntrySList(v132, v7);
      }
      else
      {
        ++LODWORD(v132[2].Alignment);
        ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v132[3].Region)(v7, v132);
      }
      return v125;
    }
    v133 = *(struct VIDSCH_SUBMIT_DATA_BASE **)(*(_QWORD *)(v54 + 16) + 16LL);
    v192[0] = 0LL;
    v192[1] = v133;
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v192);
    if ( !v192[0] )
    {
      v138 = WdLogNewEntry5_WdLowResource(v135, v134, v136, v137);
      *(_QWORD *)(v138 + 24) = 2311LL;
      WdLogEvent5_WdLowResource(v138);
      CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v192);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v204);
      if ( v191 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v189);
      CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v200);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v196);
      if ( v178 != v179 && v178 )
        ExFreePoolWithTag(v178, 0);
      v178 = 0LL;
      v180 = 0;
      if ( v176[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v176);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v182, v139);
      if ( v36 )
        DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v36);
      if ( P != v174 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v175 = 0;
      if ( v201 != v202 && v201 )
        ExFreePoolWithTag(v201, 0);
      v201 = 0LL;
      v203 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167, v140);
      v66 = v169;
      if ( v171 )
      {
        if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v169,
            v68,
            *(_DWORD *)v169,
            *(_DWORD *)(v169 + 56),
            *(_QWORD *)(v169 + 80),
            *(_QWORD *)(v169 + 88),
            *(_DWORD *)(v169 + 1096),
            *v170);
      }
      else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v169,
          v68,
          *(_DWORD *)v169,
          *(_QWORD *)(v169 + 8),
          *(_DWORD *)(v169 + 16),
          *(_DWORD *)(v169 + 84),
          *(_DWORD *)(v169 + 88),
          *v170,
          *(_DWORD *)(v169 + 20),
          *(_DWORD *)(v169 + 24));
      }
      if ( (qword_1C00AF9B0 & 2) == 0 )
        goto LABEL_338;
      v69 = (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0;
      goto LABEL_336;
    }
    AllocationInfo = DXGCONTEXT::Present(
                       (DXGCONTEXT *)v54,
                       (struct _D3DKMT_PRESENT *)v7,
                       (struct COREDEVICEACCESS *)v204,
                       (struct DXGADAPTERSTOPRESETLOCKSHARED *)v189,
                       (struct CWin32kLocks *)v200,
                       (struct DXGCONTEXT **)v178,
                       v192[0]);
    if ( AllocationInfo == -1071775482 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v205) )
      {
        v117 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v204, 0LL);
        if ( v117 < 0 )
        {
          CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v192);
          goto LABEL_252;
        }
      }
      DXGDEVICE::CloseInternalCddPrimaryHandle(*(DXGDEVICE **)(v54 + 16), (struct COREDEVICEACCESS *)v204);
    }
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v192);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v204);
    if ( v191 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v189);
    if ( AllocationInfo >= 0 )
    {
      v144 = (_BYTE *)(v193 + 1496);
      if ( v193 + 1496 >= MmUserProbeAddress )
        v144 = (_BYTE *)MmUserProbeAddress;
      *v144 = *((_BYTE *)&v7[94].Next + 8);
    }
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v200);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v196);
    if ( v178 != v179 && v178 )
      ExFreePoolWithTag(v178, 0);
    v178 = 0LL;
    v180 = 0;
    if ( v176[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v176);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v182, v145);
    if ( v36 )
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v36);
    if ( P != v174 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v175 = 0;
    if ( v201 != v202 && v201 )
      ExFreePoolWithTag(v201, 0);
    v201 = 0LL;
    v203 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167, v146);
    v149 = v169;
    if ( v171 )
    {
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v169,
          v148,
          *(_DWORD *)v169,
          *(_DWORD *)(v169 + 56),
          *(_QWORD *)(v169 + 80),
          *(_QWORD *)(v169 + 88),
          *(_DWORD *)(v169 + 1096),
          *v170);
    }
    else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v169,
        v148,
        *(_DWORD *)v169,
        *(_QWORD *)(v169 + 8),
        *(_DWORD *)(v169 + 16),
        *(_DWORD *)(v169 + 84),
        *(_DWORD *)(v169 + 88),
        *v170,
        *(_DWORD *)(v169 + 20),
        *(_DWORD *)(v169 + 24));
    }
    if ( (qword_1C00AF9B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v147, &EventProfilerExit, v148, v167);
    v150 = DXGGLOBAL::GetGlobal(v147, v149);
    v151 = (union _SLIST_HEADER *)((char *)v150 + 1024);
    ++*((_DWORD *)v150 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v150 + 64) < *((_WORD *)v150 + 520) )
    {
      ExpInterlockedPushEntrySList(v151, v7);
    }
    else
    {
      ++LODWORD(v151[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v151[3].Region)(v7, v151);
    }
    v154 = DXGPROCESS::GetCurrent(v153, v152);
    DXGWORKQUEUE::FlushQueue((PLIST_ENTRY)(*((_QWORD *)v154 + 8) + 88LL));
    return (unsigned int)AllocationInfo;
  }
  v110 = WdLogNewEntry5_WdError(v109, v101);
  *(_QWORD *)(v110 + 24) = 2269LL;
LABEL_221:
  WdLogEvent5_WdError(v110);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v196);
  if ( v178 != v179 && v178 )
    ExFreePoolWithTag(v178, 0);
  v178 = 0LL;
  v180 = 0;
  if ( v176[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v176);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v182, v111);
  if ( v36 )
    DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v36);
  if ( P != v174 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v175 = 0;
  if ( v201 != v202 && v201 )
    ExFreePoolWithTag(v201, 0);
  v201 = 0LL;
  v203 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167, v112);
  v23 = v169;
  if ( v171 )
  {
    if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v169,
        v22,
        *(_DWORD *)v169,
        *(_DWORD *)(v169 + 56),
        *(_QWORD *)(v169 + 80),
        *(_QWORD *)(v169 + 88),
        *(_DWORD *)(v169 + 1096),
        *v170);
  }
  else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qpqqqqpp_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v169,
      v22,
      *(_DWORD *)v169,
      *(_QWORD *)(v169 + 8),
      *(_DWORD *)(v169 + 16),
      *(_DWORD *)(v169 + 84),
      *(_DWORD *)(v169 + 88),
      *v170,
      *(_DWORD *)(v169 + 20),
      *(_DWORD *)(v169 + 24));
  }
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v25 = (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0;
    goto LABEL_243;
  }
LABEL_245:
  v113 = DXGGLOBAL::GetGlobal(v21, v23);
  v114 = (union _SLIST_HEADER *)((char *)v113 + 1024);
  ++*((_DWORD *)v113 + 263);
  if ( ExQueryDepthSList((PSLIST_HEADER)v113 + 64) < *((_WORD *)v113 + 520) )
  {
    ExpInterlockedPushEntrySList(v114, v7);
  }
  else
  {
    v115 = (void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v114[3].Region;
    ++LODWORD(v114[2].Alignment);
    v115(v7, v114);
  }
  return 3221225485LL;
}
