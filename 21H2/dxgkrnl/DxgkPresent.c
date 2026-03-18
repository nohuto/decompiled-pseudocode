/*
 * XREFs of DxgkPresent @ 0x1C0181EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001960 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0001B60 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001DB4 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00096C0 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C002B450 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C002C614 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C002C6C0 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXJ_N@Z @ 0x1C002C7E8 (-RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x1C005439C (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x1C0054474 (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01752C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C0183090 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C01E5974 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C032FFB4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C0331BE8 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 */

__int64 __fastcall DxgkPresent(char *Src)
{
  bool v2; // r15
  struct DXGGLOBAL *Global; // rax
  char *v4; // rdi
  PSLIST_ENTRY v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r14
  const void *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct DXGCONTEXT *v25; // r15
  __int64 v26; // r13
  struct _KEVENT *v27; // rdx
  struct _KEVENT *v28; // rdi
  unsigned int v29; // edi
  __int64 v30; // rdi
  _QWORD *Pool2; // rcx
  _QWORD *v32; // r12
  __int64 v33; // rdi
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r12
  int v39; // eax
  DXGPRESENT *v40; // rax
  int v41; // edi
  int v42; // ecx
  struct DXGADAPTER *v43; // r8
  struct DXGADAPTER *v44; // rdi
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // r14
  PSLIST_ENTRY v50; // rdi
  __int64 v51; // rcx
  int v52; // edx
  unsigned int v53; // eax
  __int64 v54; // rax
  int v55; // edx
  int v56; // r8d
  bool v57; // al
  int v58; // ecx
  int v59; // edx
  unsigned int v60; // eax
  int v61; // edx
  __int64 v62; // rcx
  DXGGLOBAL **v63; // rdx
  _BYTE *v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // r8
  struct DXGGLOBAL *v67; // rax
  char *v68; // rdi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rbx
  PLIST_ENTRY i; // rdi
  __int64 Next_low; // rax
  DXGPRESENT *v81; // rcx
  struct DXGTHREAD *Current; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // r8
  struct DXGGLOBAL *v91; // rax
  union _SLIST_HEADER *v92; // rdi
  __int64 v93; // rcx
  __int64 v94; // r8
  struct DXGGLOBAL *v95; // rax
  union _SLIST_HEADER *v96; // rdi
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  struct DXGCONTEXT *v100; // rdx
  unsigned int v101; // edi
  __int64 v102; // rax
  __int64 v103; // rdx
  unsigned int Next; // edi
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // r8
  struct DXGGLOBAL *v108; // rax
  union _SLIST_HEADER *v109; // rdi
  struct _KEVENT *v110; // rdi
  struct _KEVENT *v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // rcx
  __int64 v115; // r8
  struct DXGGLOBAL *v116; // rax
  union _SLIST_HEADER *v117; // rdi
  __int64 v118; // r8
  __int64 v119; // rax
  __int64 v120; // r9
  unsigned int v121; // ecx
  __int64 v122; // rdx
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // rcx
  __int64 v128; // r8
  struct DXGGLOBAL *v129; // rax
  union _SLIST_HEADER *v130; // rsi
  __int64 v131; // rcx
  __int64 v132; // r8
  struct DXGGLOBAL *v133; // rax
  void (__fastcall *Region)(PSLIST_ENTRY, union _SLIST_HEADER *); // rax
  unsigned int v135; // r14d
  __int64 v136; // rcx
  __int64 v137; // r8
  struct DXGGLOBAL *v138; // rax
  union _SLIST_HEADER *v139; // rdi
  __int64 v140; // rcx
  __int64 v141; // r8
  struct DXGGLOBAL *v142; // rax
  union _SLIST_HEADER *v143; // rdi
  struct DXGTHREAD *v144; // rax
  __int64 v145; // rcx
  __int64 v146; // r8
  struct DXGGLOBAL *v147; // rax
  void (__fastcall *v148)(PSLIST_ENTRY, union _SLIST_HEADER *); // rax
  int v149; // [rsp+60h] [rbp-268h] BYREF
  __int64 v150; // [rsp+68h] [rbp-260h]
  __int64 v151; // [rsp+70h] [rbp-258h]
  int *v152; // [rsp+78h] [rbp-250h]
  char v153; // [rsp+80h] [rbp-248h]
  int AllocationInfo; // [rsp+88h] [rbp-240h] BYREF
  PVOID P; // [rsp+90h] [rbp-238h]
  _BYTE v156[32]; // [rsp+98h] [rbp-230h] BYREF
  unsigned int v157; // [rsp+B8h] [rbp-210h]
  DXGCONTEXT *v158; // [rsp+C0h] [rbp-208h] BYREF
  char v159; // [rsp+C8h] [rbp-200h]
  __int64 v160; // [rsp+D0h] [rbp-1F8h] BYREF
  int v161; // [rsp+D8h] [rbp-1F0h]
  __int64 v162; // [rsp+E0h] [rbp-1E8h]
  __int64 v163; // [rsp+E8h] [rbp-1E0h] BYREF
  struct DXGADAPTER *v164; // [rsp+F0h] [rbp-1D8h]
  char v165; // [rsp+F8h] [rbp-1D0h]
  struct DXGCONTEXT *v166; // [rsp+100h] [rbp-1C8h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+108h] [rbp-1C0h]
  __int64 v168; // [rsp+110h] [rbp-1B8h]
  __int64 v169; // [rsp+118h] [rbp-1B0h]
  struct DXGCONTEXT *v170; // [rsp+120h] [rbp-1A8h] BYREF
  char *v171; // [rsp+128h] [rbp-1A0h]
  __int64 v172; // [rsp+130h] [rbp-198h]
  struct _SLIST_ENTRY *v173[2]; // [rsp+138h] [rbp-190h] BYREF
  _QWORD v174[6]; // [rsp+148h] [rbp-180h] BYREF
  char v175; // [rsp+178h] [rbp-150h]
  _BYTE v176[16]; // [rsp+180h] [rbp-148h] BYREF
  _BYTE v177[32]; // [rsp+190h] [rbp-138h] BYREF
  _BYTE v178[64]; // [rsp+1B0h] [rbp-118h] BYREF
  struct _SLIST_ENTRY v179; // [rsp+1F0h] [rbp-D8h] BYREF
  DXGADAPTER *v180; // [rsp+208h] [rbp-C0h]
  char v181; // [rsp+210h] [rbp-B8h]
  __int64 v182; // [rsp+218h] [rbp-B0h]
  _BYTE v183[16]; // [rsp+238h] [rbp-90h] BYREF
  __int64 v184; // [rsp+248h] [rbp-80h]
  __int64 v185; // [rsp+278h] [rbp-50h]
  char v186; // [rsp+280h] [rbp-48h]

  v171 = Src;
  AllocationInfo = -1073741811;
  v2 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Global = DXGGLOBAL_GetGlobal();
  v4 = (char *)Global + 1168;
  ++*((_DWORD *)Global + 297);
  v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 73);
  ListEntry = v5;
  if ( !v5 )
  {
    ++*((_DWORD *)v4 + 6);
    v5 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))v4 + 6))(
                         *((unsigned int *)v4 + 9),
                         *((unsigned int *)v4 + 11),
                         *((unsigned int *)v4 + 10),
                         v4);
    ListEntry = v5;
  }
  if ( !v5 )
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
  memset(v5, 0, 0x5F8uLL);
  if ( bTracingEnabled )
    v7 = (__int64)v5;
  else
    v7 = 0LL;
  v150 = 0LL;
  v149 = 2020;
  v152 = &AllocationInfo;
  v153 = 0;
  v151 = v7;
  if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)&AllocationInfo, &EventProfilerEnter, v6, 2020);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v149, 2020);
  CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v17 = ProcessDxgProcess;
  if ( ProcessDxgProcess
    && (v18 = *(_DWORD *)(ProcessDxgProcess + 424) >> 7, (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0)
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v19 = *((_QWORD *)Current + 3), (v169 = v19) == 0) )
  {
    v19 = v17;
    v169 = v17;
  }
  v168 = v19;
  if ( !v19 )
  {
    v83 = PsGetCurrentProcess(v18, v14, v15, v16);
    WdLogSingleEntry2(2LL, -1073741811LL, v83);
    v88 = PsGetCurrentProcess(v85, v84, v86, v87);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v88,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v149);
    if ( v153 )
    {
      if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v151,
          v90,
          *(_DWORD *)v151,
          *(_DWORD *)(v151 + 56),
          *(_QWORD *)(v151 + 80),
          *(_QWORD *)(v151 + 88),
          *(_DWORD *)(v151 + 1096),
          *v152);
    }
    else if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v151,
        v90,
        *(_DWORD *)v151,
        *(_QWORD *)(v151 + 8),
        *(_DWORD *)(v151 + 16),
        *(_DWORD *)(v151 + 84),
        *(_DWORD *)(v151 + 88),
        *v152,
        *(_DWORD *)(v151 + 20),
        *(_DWORD *)(v151 + 24));
    }
    if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
LABEL_131:
      McTemplateK0q_EtwWriteTransfer(v89, &EventProfilerExit, v90, v149);
LABEL_132:
    v91 = DXGGLOBAL_GetGlobal();
    v92 = (union _SLIST_HEADER *)((char *)v91 + 1168);
    ++*((_DWORD *)v91 + 299);
    if ( ExQueryDepthSList((PSLIST_HEADER)v91 + 73) >= *((_WORD *)v91 + 592) )
    {
LABEL_301:
      Region = (void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v92[3].Region;
      ++LODWORD(v92[2].Alignment);
      Region(v5, v92);
      return 3221225485LL;
    }
LABEL_133:
    ExpInterlockedPushEntrySList(v92, v5);
    return 3221225485LL;
  }
  v20 = Src;
  if ( v2 )
  {
    if ( (unsigned __int64)Src >= MmUserProbeAddress )
      v20 = (const void *)MmUserProbeAddress;
    memmove(v5, v20, 0x5D8uLL);
  }
  else
  {
    memmove(v5, Src, 0x5D8uLL);
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v19 + 88) + 400LL))() && (*(_DWORD *)(&v5[5].Next + 1) & 0x8000) == 0 )
  {
    AllocationInfo = -1071775738;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v149);
    if ( v153 )
    {
      if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v151,
          v94,
          *(_DWORD *)v151,
          *(_DWORD *)(v151 + 56),
          *(_QWORD *)(v151 + 80),
          *(_QWORD *)(v151 + 88),
          *(_DWORD *)(v151 + 1096),
          *v152);
    }
    else if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v151,
        v94,
        *(_DWORD *)v151,
        *(_QWORD *)(v151 + 8),
        *(_DWORD *)(v151 + 16),
        *(_DWORD *)(v151 + 84),
        *(_DWORD *)(v151 + 88),
        *v152,
        *(_DWORD *)(v151 + 20),
        *(_DWORD *)(v151 + 24));
    }
    if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v93, &EventProfilerExit, v94, v149);
    v95 = DXGGLOBAL_GetGlobal();
    v96 = (union _SLIST_HEADER *)((char *)v95 + 1168);
    ++*((_DWORD *)v95 + 299);
    if ( ExQueryDepthSList((PSLIST_HEADER)v95 + 73) < *((_WORD *)v95 + 592) )
    {
      ExpInterlockedPushEntrySList(v96, v5);
    }
    else
    {
      ++LODWORD(v96[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v96[3].Region)(v5, v96);
    }
    return 3223191558LL;
  }
  if ( (*(_DWORD *)(&v5[5].Next + 1) & 0x10000000) != 0 )
  {
    v170 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
      (DXGCONTEXTBYHANDLE *)v176,
      (unsigned int)v5->Next,
      (struct DXGPROCESS *)v19,
      &v170,
      0,
      1);
    v100 = v170;
    if ( v170 )
    {
      LODWORD(v5->Next) = *((_DWORD *)&v5[90].Next + 2);
      AllocationInfo = PreIndirectPresentReadAllocationInfo(
                         (struct DXGPROCESS *)v19,
                         *((struct DXGDEVICE **)v100 + 2),
                         HIDWORD(v5[1].Next),
                         (struct INDIRECT_RESOURCE_INFO *)((char *)&v5[94].Next + 12));
      if ( AllocationInfo < 0 )
        WdLogSingleEntry1(3LL, HIDWORD(v5[1].Next));
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v176);
      goto LABEL_18;
    }
    v101 = *((_DWORD *)&v5[90].Next + 2);
    v102 = PsGetCurrentProcess(v97, 0LL, v98, v99);
    WdLogSingleEntry3(3LL, -1073741811LL, v102, v101);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v176);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v149);
    v103 = v151;
    if ( v153 )
      goto LABEL_158;
    if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      goto LABEL_154;
LABEL_155:
    if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      goto LABEL_131;
    goto LABEL_132;
  }
LABEL_18:
  v166 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)&v158,
    (unsigned int)v5->Next,
    (struct DXGPROCESS *)v19,
    &v166,
    0,
    1);
  v25 = v166;
  if ( !v166 )
  {
    Next = (unsigned int)v5->Next;
    v105 = PsGetCurrentProcess(v22, v21, v23, v24);
    WdLogSingleEntry3(3LL, -1073741811LL, v105, Next);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v158);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v149);
    v103 = v151;
    if ( v153 )
      goto LABEL_158;
    goto LABEL_165;
  }
  if ( *((_BYTE *)v166 + 441) && *((_DWORD *)&v5[5].Next + 3) )
  {
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v158);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v149);
    if ( v153 )
    {
      if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v151,
          v107,
          *(_DWORD *)v151,
          *(_DWORD *)(v151 + 56),
          *(_QWORD *)(v151 + 80),
          *(_QWORD *)(v151 + 88),
          *(_DWORD *)(v151 + 1096),
          *v152);
    }
    else if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v151,
        v107,
        *(_DWORD *)v151,
        *(_QWORD *)(v151 + 8),
        *(_DWORD *)(v151 + 16),
        *(_DWORD *)(v151 + 84),
        *(_DWORD *)(v151 + 88),
        *v152,
        *(_DWORD *)(v151 + 20),
        *(_DWORD *)(v151 + 24));
    }
    if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v106, &EventProfilerExit, v107, v149);
    v108 = DXGGLOBAL_GetGlobal();
    v109 = (union _SLIST_HEADER *)((char *)v108 + 1168);
    ++*((_DWORD *)v108 + 299);
    if ( ExQueryDepthSList((PSLIST_HEADER)v108 + 73) < *((_WORD *)v108 + 592) )
    {
      ExpInterlockedPushEntrySList(v109, v5);
    }
    else
    {
      ++LODWORD(v109[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v109[3].Region)(v5, v109);
    }
    return 3221225474LL;
  }
  if ( (*((_DWORD *)v166 + 101) & 8) != 0 )
  {
    WdLogSingleEntry1(3LL, 1388LL);
    goto LABEL_184;
  }
  v26 = *((_QWORD *)v166 + 2);
  v27 = *(struct _KEVENT **)(v26 + 16);
  if ( ((__int64)v27->Header.WaitListHead.Blink[166].Blink & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, LODWORD(v5->Next));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present is not supported on MCDM adapter context 0x%I64x",
      LODWORD(v5->Next),
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_184;
  }
  v172 = *((_QWORD *)v166 + 2);
  v160 = v26;
  v161 = 0;
  if ( v26 )
  {
    if ( *(_DWORD *)(v26 + 432) == 2 )
    {
      v110 = v27;
      if ( KeReadStateEvent(v27 + 5) )
        goto LABEL_25;
      v111 = v110 + 5;
    }
    else
    {
      v28 = v27 + 4;
      if ( KeReadStateEvent(v27 + 4) )
      {
LABEL_25:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v26 + 136), 0) )
        {
          DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v112, (const EVENT_DESCRIPTOR *)"g", v113, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v26 + 136), 1u);
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
        }
        v161 = 1;
        goto LABEL_27;
      }
      v111 = v28;
    }
    KeWaitForSingleObject(v111, Executive, 0, 0, 0LL);
    goto LABEL_25;
  }
LABEL_27:
  v29 = *((_DWORD *)&v5[5].Next + 3);
  if ( v29 > 0x40 )
  {
    WdLogSingleEntry2(3LL, v25, -1073741811LL);
    goto LABEL_197;
  }
  v30 = v29 + 1;
  Pool2 = 0LL;
  P = 0LL;
  v157 = 0;
  if ( (unsigned int)v30 <= 4 )
  {
    Pool2 = v156;
    P = v156;
    if ( (_DWORD)v30 )
    {
      memset(v156, 0, 8LL * (unsigned int)v30);
      Pool2 = P;
    }
    goto LABEL_31;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v30 >= 8 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v30, 1265072196LL, v24);
    P = Pool2;
LABEL_31:
    v157 = v30;
  }
  if ( !Pool2 )
  {
    WdLogSingleEntry1(3LL, 1420LL);
    if ( P != v156 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v157 = 0;
    if ( v26 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v160);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v158);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v149);
    if ( v153 )
    {
      if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v151,
          v115,
          *(_DWORD *)v151,
          *(_DWORD *)(v151 + 56),
          *(_QWORD *)(v151 + 80),
          *(_QWORD *)(v151 + 88),
          *(_DWORD *)(v151 + 1096),
          *v152);
    }
    else if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v151,
        v115,
        *(_DWORD *)v151,
        *(_QWORD *)(v151 + 8),
        *(_DWORD *)(v151 + 16),
        *(_DWORD *)(v151 + 84),
        *(_DWORD *)(v151 + 88),
        *v152,
        *(_DWORD *)(v151 + 20),
        *(_DWORD *)(v151 + 24));
    }
    if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
LABEL_215:
      McTemplateK0q_EtwWriteTransfer(v114, &EventProfilerExit, v115, v149);
LABEL_216:
    v116 = DXGGLOBAL_GetGlobal();
    v117 = (union _SLIST_HEADER *)((char *)v116 + 1168);
    ++*((_DWORD *)v116 + 299);
    if ( ExQueryDepthSList((PSLIST_HEADER)v116 + 73) >= *((_WORD *)v116 + 592) )
    {
LABEL_405:
      v148 = (void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v117[3].Region;
      ++LODWORD(v117[2].Alignment);
      v148(v5, v117);
      return 3221225495LL;
    }
    goto LABEL_217;
  }
  *Pool2 = v25;
  v32 = P;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v177, (struct DXGPROCESS *)v19);
  v33 = 0LL;
  if ( *((_DWORD *)&v5[5].Next + 3) )
  {
    do
    {
      v118 = (unsigned int)v33;
      v162 = (unsigned int)v33;
      v119 = (*((_DWORD *)&v5[6].Next + v33) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v119 < *(_DWORD *)(v19 + 296) )
      {
        v120 = *(_QWORD *)(v19 + 280);
        v121 = *(_DWORD *)(v120 + 16 * v119 + 8);
        if ( *((_DWORD *)&v5[6].Next + v33) >> 30 == ((v121 >> 5) & 3) && (v121 & 0x2000) == 0 && (v121 & 0x1F) != 0 )
        {
          if ( (v121 & 0x1F) == 7 )
          {
            v122 = *(_QWORD *)(v120 + 16LL * (unsigned int)v119);
            v118 = (unsigned int)v33;
            goto LABEL_227;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
        v118 = (unsigned int)v33;
      }
      v122 = 0LL;
LABEL_227:
      v123 = (unsigned int)(v33 + 1);
      *((_QWORD *)P + v123) = v122;
      v124 = *((_QWORD *)P + v123);
      if ( !v124 || (*(_DWORD *)(v124 + 404) & 8) != 0 || (v125 = *((_QWORD *)v25 + 2), *(_QWORD *)(v124 + 16) != v125) )
      {
        WdLogSingleEntry4(2LL, v25, *((unsigned int *)&v5[6].Next + v118), v33, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
          (__int64)v25,
          *((unsigned int *)&v5[6].Next + v162),
          v33,
          -1073741811LL,
          0LL);
LABEL_238:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v177);
LABEL_241:
        if ( P != v156 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v157 = 0;
LABEL_197:
        if ( v26 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v160);
LABEL_184:
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v158);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v149);
        v103 = v151;
        if ( v153 )
        {
LABEL_158:
          if ( v103 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0qqxxqq_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v103,
              v90,
              *(_DWORD *)v103,
              *(_DWORD *)(v103 + 56),
              *(_QWORD *)(v103 + 80),
              *(_QWORD *)(v103 + 88),
              *(_DWORD *)(v103 + 1096),
              *v152);
          goto LABEL_155;
        }
LABEL_165:
        if ( !v103 || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
          goto LABEL_155;
LABEL_154:
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v103,
          v90,
          *(_DWORD *)v103,
          *(_QWORD *)(v103 + 8),
          *(_DWORD *)(v103 + 16),
          *(_DWORD *)(v103 + 84),
          *(_DWORD *)(v103 + 88),
          *v152,
          *(_DWORD *)(v103 + 20),
          *(_DWORD *)(v103 + 24));
        goto LABEL_155;
      }
      if ( (_DWORD)v33
        && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v125 + 16) + 16LL))
        && *(_DWORD *)(v32[v126] + 400LL) <= *(_DWORD *)(v32[(unsigned int)(v33 - 1)] + 400LL) )
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
        goto LABEL_238;
      }
      v33 = (unsigned int)v123;
    }
    while ( (unsigned int)v123 < *((_DWORD *)&v5[5].Next + 3) );
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v177);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v174,
    P,
    v157,
    v34,
    1);
  if ( v175 )
  {
    if ( v174[0] )
    {
      WdLogSingleEntry1(3LL, 1490LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v174);
      goto LABEL_241;
    }
    WdLogSingleEntry1(3LL, 1485LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v174);
    if ( P != v156 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v157 = 0;
    if ( v26 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v160);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v158);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v149);
    if ( v153 )
    {
      if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v151,
          v115,
          *(_DWORD *)v151,
          *(_DWORD *)(v151 + 56),
          *(_QWORD *)(v151 + 80),
          *(_QWORD *)(v151 + 88),
          *(_DWORD *)(v151 + 1096),
          *v152);
    }
    else if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v151,
        v115,
        *(_DWORD *)v151,
        *(_QWORD *)(v151 + 8),
        *(_DWORD *)(v151 + 16),
        *(_DWORD *)(v151 + 84),
        *(_DWORD *)(v151 + 88),
        *v152,
        *(_DWORD *)(v151 + 20),
        *(_DWORD *)(v151 + 24));
    }
    if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      goto LABEL_215;
    goto LABEL_216;
  }
  *((_QWORD *)&v5[93].Next + 1) = P;
  *((_BYTE *)&v5[94].Next + 8) = 1;
  v38 = *(_QWORD *)(*((_QWORD *)v25 + 2) + 1848LL);
  v39 = *((_DWORD *)&v5[5].Next + 2);
  if ( (v39 & 0x8000) != 0 )
  {
    if ( (v39 & 0x400000) != 0 || v5[90].Next )
    {
      WdLogSingleEntry4(2LL, -1073741811LL, v25, *((unsigned int *)&v5[5].Next + 2), v5[90].Next);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x 0x%I64x 0x%I64x 0x%I64x RedirectedFlip doesn't support Present regions.",
        -1073741811LL,
        (__int64)v25,
        *((unsigned int *)&v5[5].Next + 2),
        (__int64)v5[90].Next,
        0LL);
      v41 = -1073741811;
    }
    else
    {
      v41 = 0;
    }
  }
  else
  {
    v40 = (DXGPRESENT *)*((_QWORD *)v25 + 19);
    if ( v40
      || ((v81 = (DXGPRESENT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(1648LL, v35, v36, v37)) == 0LL
        ? (v40 = 0LL)
        : (v40 = DXGPRESENT::DXGPRESENT(v81, *(_DWORD *)(*((_QWORD *)v25 + 2) + 1856LL))),
          (*((_QWORD *)v25 + 19) = v40) != 0LL) )
    {
      *((_BYTE *)v25 + 442) = 1;
      v41 = DXGPRESENT::CopyPresentArgs(v40, v25, (struct _D3DKMT_PRESENT *)v5);
    }
    else
    {
      WdLogSingleEntry4(6LL, -1073741801LL, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 16LL), v19, v25);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
        -1073741801LL,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 16LL),
        v19,
        (__int64)v25,
        0LL);
      v41 = -1073741801;
    }
  }
  AllocationInfo = v41;
  if ( v41 < 0 )
  {
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v174);
    if ( P != v156 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v157 = 0;
    if ( v26 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v160);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v158);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v149);
    if ( v153 )
    {
      if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v151,
          v128,
          *(_DWORD *)v151,
          *(_DWORD *)(v151 + 56),
          *(_QWORD *)(v151 + 80),
          *(_QWORD *)(v151 + 88),
          *(_DWORD *)(v151 + 1096),
          *v152);
    }
    else if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v151,
        v128,
        *(_DWORD *)v151,
        *(_QWORD *)(v151 + 8),
        *(_DWORD *)(v151 + 16),
        *(_DWORD *)(v151 + 84),
        *(_DWORD *)(v151 + 88),
        *v152,
        *(_DWORD *)(v151 + 20),
        *(_DWORD *)(v151 + 24));
    }
    if ( (qword_1C012F870 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      goto LABEL_277;
LABEL_276:
    McTemplateK0q_EtwWriteTransfer(v127, &EventProfilerExit, v128, v149);
LABEL_277:
    v129 = DXGGLOBAL_GetGlobal();
    v130 = (union _SLIST_HEADER *)((char *)v129 + 1168);
    ++*((_DWORD *)v129 + 299);
    if ( ExQueryDepthSList((PSLIST_HEADER)v129 + 73) < *((_WORD *)v129 + 592) )
    {
      ExpInterlockedPushEntrySList(v130, v5);
    }
    else
    {
      ++LODWORD(v130[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v130[3].Region)(v5, v130);
    }
    return (unsigned int)v41;
  }
  v42 = *((_DWORD *)&v5[5].Next + 2);
  if ( (v42 & 0x10000000) != 0 )
  {
    if ( v38 )
    {
      if ( (*(_DWORD *)(v38 + 436) & 0x100) != 0 )
        goto LABEL_42;
      WdLogSingleEntry1(2LL, 1517LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Indirect Display present can only be used with a indirect display Dod driver",
        1517LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, 1511LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Indirect Display present has to be on a context associated with Dod",
        1511LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v174);
    goto LABEL_241;
  }
  if ( !v38 )
  {
    v43 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 16LL);
    goto LABEL_43;
  }
  if ( (*(_DWORD *)(v38 + 436) & 0x100) != 0 && (v42 & 0x18000) == 0 )
  {
    WdLogSingleEntry1(2LL, 1527LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No non-direct display presents can go to indirect display device",
      1527LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v174);
    if ( P != v156 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v157 = 0;
    if ( v26 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v160);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v158);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v149);
    if ( v153 )
    {
      if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v151,
          v132,
          *(_DWORD *)v151,
          *(_DWORD *)(v151 + 56),
          *(_QWORD *)(v151 + 80),
          *(_QWORD *)(v151 + 88),
          *(_DWORD *)(v151 + 1096),
          *v152);
    }
    else if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v151,
        v132,
        *(_DWORD *)v151,
        *(_QWORD *)(v151 + 8),
        *(_DWORD *)(v151 + 16),
        *(_DWORD *)(v151 + 84),
        *(_DWORD *)(v151 + 88),
        *v152,
        *(_DWORD *)(v151 + 20),
        *(_DWORD *)(v151 + 24));
    }
    if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v131, &EventProfilerExit, v132, v149);
    v133 = DXGGLOBAL_GetGlobal();
    v92 = (union _SLIST_HEADER *)((char *)v133 + 1168);
    ++*((_DWORD *)v133 + 299);
    if ( ExQueryDepthSList((PSLIST_HEADER)v133 + 73) >= *((_WORD *)v133 + 592) )
      goto LABEL_301;
    goto LABEL_133;
  }
LABEL_42:
  v43 = (struct DXGADAPTER *)v38;
LABEL_43:
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v178, *(const struct _DXGKWIN32KENG_INTERFACE *const *)(v19 + 88), v43);
  v164 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v164 + 3);
  v163 = -1LL;
  v44 = v164;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v44 + 136, 0LL);
  v165 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v179, *((_QWORD *)v25 + 2), 2, v45, 0);
  if ( !v186 || (COREACCESS::AcquireShared((COREACCESS *)v183, 0LL), *(_DWORD *)(v184 + 200) == 1) )
  {
    if ( v181 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, &v179.Next + 1, 0LL, 0LL);
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v180 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v180 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v46, (const EVENT_DESCRIPTOR *)"g", v47, 72);
        KeWaitForSingleObject((char *)v180 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v180, 0LL);
    }
    v182 = 0LL;
    v181 = 1;
    if ( *(_DWORD *)(v185 + 576) == 1 )
    {
      v41 = 0;
    }
    else
    {
      COREACCESS::Release((COREACCESS *)(&v179.Next + 1));
      if ( v186 )
        COREACCESS::Release((COREACCESS *)v183);
      v41 = -1073741130;
    }
  }
  else
  {
    COREACCESS::Release((COREACCESS *)v183);
    v41 = -1073741130;
  }
  AllocationInfo = v41;
  if ( v41 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v179);
    if ( v165 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v163);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v178);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v174);
    if ( P != v156 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v157 = 0;
    if ( v26 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v160);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v158);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v149);
    if ( v153 )
    {
      if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v151,
          v128,
          *(_DWORD *)v151,
          *(_DWORD *)(v151 + 56),
          *(_QWORD *)(v151 + 80),
          *(_QWORD *)(v151 + 88),
          *(_DWORD *)(v151 + 1096),
          *v152);
    }
    else if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v151,
        v128,
        *(_DWORD *)v151,
        *(_QWORD *)(v151 + 8),
        *(_DWORD *)(v151 + 16),
        *(_DWORD *)(v151 + 84),
        *(_DWORD *)(v151 + 88),
        *v152,
        *(_DWORD *)(v151 + 20),
        *(_DWORD *)(v151 + 24));
    }
    if ( (qword_1C012F870 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      goto LABEL_277;
    goto LABEL_276;
  }
  if ( (*(_DWORD *)(&v5[5].Next + 1) & 0x200000) != 0 )
  {
    v135 = SubmitPresentHistoryToken(
             (struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v5[22].Next + 1),
             &v179,
             (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v163,
             (struct CWin32kLocks *)v178,
             0,
             0LL,
             (struct DXGK_PRESENT_PARAMS *)v5,
             0LL,
             v166,
             0LL,
             0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v179);
    if ( v165 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v163);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v178);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v174);
    if ( P != v156 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v157 = 0;
    if ( v26 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v160);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v158);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v149);
    if ( v153 )
    {
      if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v151,
          v137,
          *(_DWORD *)v151,
          *(_DWORD *)(v151 + 56),
          *(_QWORD *)(v151 + 80),
          *(_QWORD *)(v151 + 88),
          *(_DWORD *)(v151 + 1096),
          *v152);
    }
    else if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v151,
        v137,
        *(_DWORD *)v151,
        *(_QWORD *)(v151 + 8),
        *(_DWORD *)(v151 + 16),
        *(_DWORD *)(v151 + 84),
        *(_DWORD *)(v151 + 88),
        *v152,
        *(_DWORD *)(v151 + 20),
        *(_DWORD *)(v151 + 24));
    }
    if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v136, &EventProfilerExit, v137, v149);
    v138 = DXGGLOBAL_GetGlobal();
    v139 = (union _SLIST_HEADER *)((char *)v138 + 1168);
    ++*((_DWORD *)v138 + 299);
    if ( ExQueryDepthSList((PSLIST_HEADER)v138 + 73) < *((_WORD *)v138 + 592) )
    {
      ExpInterlockedPushEntrySList(v139, v5);
    }
    else
    {
      ++LODWORD(v139[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v139[3].Region)(v5, v139);
    }
    return v135;
  }
  v48 = *(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL);
  v162 = v48;
  v173[1] = (struct _SLIST_ENTRY *)v48;
  v49 = v48 + 1280;
  ++*(_DWORD *)(v48 + 1300);
  v50 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v48 + 1280));
  if ( !v50 )
  {
    ++*(_DWORD *)(v49 + 24);
    v50 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v49 + 48))(
                          *(unsigned int *)(v49 + 36),
                          *(unsigned int *)(v49 + 44),
                          *(unsigned int *)(v49 + 40),
                          v49);
  }
  v173[0] = v50;
  if ( !v50 )
  {
    WdLogSingleEntry1(6LL, 1569LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate VidSchSubmitData",
      1569LL,
      0LL,
      0LL,
      0LL,
      0LL);
    CVidSchSubmitData::~CVidSchSubmitData(v173);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v179);
    if ( v165 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v163);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v178);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v174);
    if ( P != v156 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v157 = 0;
    if ( v26 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v160);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v158);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v149);
    if ( v153 )
    {
      if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v151,
          v146,
          *(_DWORD *)v151,
          *(_DWORD *)(v151 + 56),
          *(_QWORD *)(v151 + 80),
          *(_QWORD *)(v151 + 88),
          *(_DWORD *)(v151 + 1096),
          *v152);
    }
    else if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v151,
        v146,
        *(_DWORD *)v151,
        *(_QWORD *)(v151 + 8),
        *(_DWORD *)(v151 + 16),
        *(_DWORD *)(v151 + 84),
        *(_DWORD *)(v151 + 88),
        *v152,
        *(_DWORD *)(v151 + 20),
        *(_DWORD *)(v151 + 24));
    }
    if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v145, &EventProfilerExit, v146, v149);
    v147 = DXGGLOBAL_GetGlobal();
    v117 = (union _SLIST_HEADER *)((char *)v147 + 1168);
    ++*((_DWORD *)v147 + 299);
    if ( ExQueryDepthSList((PSLIST_HEADER)v147 + 73) >= *((_WORD *)v147 + 592) )
      goto LABEL_405;
LABEL_217:
    ExpInterlockedPushEntrySList(v117, v5);
    return 3221225495LL;
  }
  v51 = *(_QWORD *)(v162 + 16);
  if ( *(int *)(v51 + 2424) < 0x2000 )
    v52 = 1;
  else
    v52 = *(_DWORD *)(v51 + 288);
  if ( *(int *)(v51 + 2424) >= 0x2000 || *(_BYTE *)(v51 + 2724) )
    v53 = 8 * v52 + *(_DWORD *)(v51 + 2632) * ((v52 << 6) + ((8 * v52 + 231) & 0xFFFFFFF8)) + 616;
  else
    v53 = 1304;
  memset(v50, 0, v53);
  v54 = *(_QWORD *)(v162 + 16);
  if ( *(int *)(v54 + 2424) < 0x2000 )
    v55 = 1;
  else
    v55 = *(_DWORD *)(v54 + 288);
  v56 = *(_DWORD *)(v54 + 2632);
  v57 = *(int *)(v54 + 2424) >= 0x2000 || *(_BYTE *)(v54 + 2724);
  BYTE4(v50[22].Next) = v57;
  if ( v57 )
  {
    *((_DWORD *)&v50[37].Next + 3) = v56;
    LODWORD(v50[38].Next) = v55;
    v58 = 8 * v55;
    v59 = v55 << 6;
    HIDWORD(v50[38].Next) = v56 * (v59 + ((v58 + 231) & 0xFFFFFFF8)) + 16;
    v60 = v56 * (v59 + ((v58 + 231) & 0xFFFFFFF8)) + 616;
    *((_DWORD *)&v50[34].Next + 2) = v60;
    *((_DWORD *)&v50[34].Next + 3) = v58 + v60;
  }
  v61 = DXGCONTEXT::Present(
          v166,
          (struct _D3DKMT_PRESENT *)v5,
          (struct COREDEVICEACCESS *)&v179,
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v163,
          (struct CWin32kLocks *)v178,
          (struct DXGCONTEXT **)P,
          (struct VIDSCH_SUBMIT_DATA_BASE *)v50);
  AllocationInfo = v61;
  if ( v61 != -1071775482 )
    goto LABEL_67;
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v180)
    || (LODWORD(v162) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v179, 0LL), (int)v162 >= 0) )
  {
    DXGDEVICE::CloseInternalCddPrimaryHandle(*((DXGDEVICE **)v25 + 2), (struct COREDEVICEACCESS *)&v179);
    v61 = AllocationInfo;
LABEL_67:
    if ( v38 )
    {
      v62 = *(_QWORD *)(v38 + 2792);
      if ( v62 )
      {
        if ( (*(_DWORD *)(&v5[5].Next + 1) & 4) != 0 )
        {
          Next_low = LODWORD(v5[1].Next);
          if ( (unsigned int)Next_low < *(_DWORD *)(v62 + 96) )
            DISPLAY_SOURCE::RecordPresentDiagHistory(
              (DISPLAY_SOURCE *)(*(_QWORD *)(v62 + 128) + 4000 * Next_low),
              v61,
              (*(_DWORD *)(v169 + 424) & 4) != 0);
        }
      }
    }
    ++*(_DWORD *)(v49 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v49) >= *(_WORD *)(v49 + 16) )
    {
      ++*(_DWORD *)(v49 + 32);
      (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v49 + 56))(v50, v49);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v49, v50);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v179);
    if ( v165 )
    {
      v165 = 0;
      ExReleasePushLockSharedEx((char *)v164 + 136, 0LL);
      KeLeaveCriticalRegion();
      v63 = (DXGGLOBAL **)v164;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v164 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(v63[2], (struct DXGADAPTER *)v63);
    }
    if ( AllocationInfo >= 0 )
    {
      v64 = v171 + 1488;
      if ( (unsigned __int64)(v171 + 1488) >= MmUserProbeAddress )
        v64 = (_BYTE *)MmUserProbeAddress;
      *v64 = *((_BYTE *)&v5[94].Next + 8);
    }
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v178);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v174);
    if ( P != v156 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v157 = 0;
    if ( v26 && v161 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v26 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v158 && !v159 )
      DXGCONTEXT::ReleaseReference(v158);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v149);
    if ( v153 )
    {
      if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v151,
          v66,
          *(_DWORD *)v151,
          *(_DWORD *)(v151 + 56),
          *(_QWORD *)(v151 + 80),
          *(_QWORD *)(v151 + 88),
          *(_DWORD *)(v151 + 1096),
          *v152);
    }
    else if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v151,
        v66,
        *(_DWORD *)v151,
        *(_QWORD *)(v151 + 8),
        *(_DWORD *)(v151 + 16),
        *(_DWORD *)(v151 + 84),
        *(_DWORD *)(v151 + 88),
        *v152,
        *(_DWORD *)(v151 + 20),
        *(_DWORD *)(v151 + 24));
    }
    if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v65, &EventProfilerExit, v66, v149);
    v67 = DXGGLOBAL_GetGlobal();
    v68 = (char *)v67 + 1168;
    ++*((_DWORD *)v67 + 299);
    if ( ExQueryDepthSList((PSLIST_HEADER)v67 + 73) >= *((_WORD *)v67 + 592) )
    {
      ++*((_DWORD *)v68 + 8);
      (*((void (__fastcall **)(PSLIST_ENTRY, char *))v68 + 7))(v5, v68);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v68, v5);
    }
    v73 = PsGetCurrentProcess(v70, v69, v71, v72);
    v74 = PsGetProcessDxgProcess(v73);
    v75 = v74;
    if ( v74 && (*(_DWORD *)(v74 + 424) & 0x80) == 0
      || (v144 = DXGTHREAD::GetCurrent()) == 0LL
      || (v76 = *((_QWORD *)v144 + 3)) == 0 )
    {
      v76 = v75;
    }
    v77 = *(_QWORD *)(v76 + 64);
    for ( i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v77 + 96), (PKSPIN_LOCK)(v77 + 112));
          i;
          i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v77 + 96), (PKSPIN_LOCK)(v77 + 112)) )
    {
      ((void (__fastcall *)(struct _LIST_ENTRY *))i[1].Flink)(i[1].Blink);
      operator delete(i);
    }
    return (unsigned int)AllocationInfo;
  }
  CVidSchSubmitData::~CVidSchSubmitData(v173);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v179);
  if ( v165 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v163);
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v178);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v174);
  if ( P != v156 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v157 = 0;
  if ( v26 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v160);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v158);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v149);
  if ( v153 )
  {
    if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v151,
        v141,
        *(_DWORD *)v151,
        *(_DWORD *)(v151 + 56),
        *(_QWORD *)(v151 + 80),
        *(_QWORD *)(v151 + 88),
        *(_DWORD *)(v151 + 1096),
        *v152);
  }
  else if ( v151 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
  {
    McTemplateK0qpqqqqpp_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v151,
      v141,
      *(_DWORD *)v151,
      *(_QWORD *)(v151 + 8),
      *(_DWORD *)(v151 + 16),
      *(_DWORD *)(v151 + 84),
      *(_DWORD *)(v151 + 88),
      *v152,
      *(_DWORD *)(v151 + 20),
      *(_DWORD *)(v151 + 24));
  }
  if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v140, &EventProfilerExit, v141, v149);
  v142 = DXGGLOBAL_GetGlobal();
  v143 = (union _SLIST_HEADER *)((char *)v142 + 1168);
  ++*((_DWORD *)v142 + 299);
  if ( ExQueryDepthSList((PSLIST_HEADER)v142 + 73) < *((_WORD *)v142 + 592) )
  {
    ExpInterlockedPushEntrySList(v143, v5);
  }
  else
  {
    ++LODWORD(v143[2].Alignment);
    ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v143[3].Region)(v5, v143);
  }
  return (unsigned int)v162;
}
