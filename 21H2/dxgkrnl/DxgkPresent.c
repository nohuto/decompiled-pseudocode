/*
 * XREFs of DxgkPresent @ 0x1C0101330
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00026F0 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004160 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004200 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0004280 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004534 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00058C8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007514 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A500 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A824 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C0027AF8 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C0027B24 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXJ_N@Z @ 0x1C0027D38 (-RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x1C00472EC (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x1C00473C4 (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD9E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FDFA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C0103960 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01050C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C015BDD8 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020CC74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C027FAB4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C02814C4 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 */

__int64 __fastcall DxgkPresent(char *Src)
{
  bool v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  char *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  PSLIST_ENTRY v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // r15
  const void *v22; // rdx
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGCONTEXT *v27; // r14
  __int64 v28; // r13
  struct _KEVENT *v29; // rdi
  unsigned int v30; // edi
  __int64 v31; // rdi
  _QWORD *PoolWithTag; // rcx
  _QWORD *v33; // r12
  unsigned int v34; // edi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r12
  int v39; // eax
  DXGPRESENT *v40; // rax
  int v41; // edi
  __int64 v42; // rcx
  struct DXGADAPTER *v43; // r8
  struct DXGADAPTER *v44; // rdi
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // r15
  __int64 v52; // rdx
  __int64 v53; // rcx
  PSLIST_ENTRY v54; // rdi
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  int v58; // r8d
  unsigned int v60; // edx
  __int64 v61; // rcx
  int v62; // r8d
  bool v63; // al
  int v64; // edx
  int v65; // ecx
  int v66; // r8d
  unsigned int v67; // eax
  int v68; // r9d
  __int64 v69; // rdx
  __int64 Next_low; // rcx
  DXGGLOBAL **v71; // rdx
  _BYTE *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rdx
  struct DXGGLOBAL *v77; // rax
  char *v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rbx
  PLIST_ENTRY i; // rdi
  __int64 v90; // rdx
  DXGPRESENT *PoolWithQuotaTag; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rax
  struct DXGTHREAD *Current; // rax
  __int64 v96; // rdi
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rdx
  struct DXGGLOBAL *v103; // rax
  union _SLIST_HEADER *v104; // rdi
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // rdx
  struct DXGGLOBAL *v108; // rax
  union _SLIST_HEADER *v109; // rdi
  __int64 v110; // rcx
  __int64 v111; // r8
  struct DXGCONTEXT *v112; // rdx
  _QWORD *v113; // rdi
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // rax
  _QWORD *v121; // rdi
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // rdx
  struct DXGGLOBAL *v129; // rax
  union _SLIST_HEADER *v130; // rdi
  __int64 v131; // rax
  __int64 v132; // rdx
  struct _KEVENT *v133; // rcx
  __int64 v134; // rcx
  unsigned __int8 v135; // di
  __int64 v136; // r8
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // rdx
  struct DXGGLOBAL *v143; // rax
  union _SLIST_HEADER *v144; // rdi
  __int64 v145; // rax
  __int64 v146; // r9
  unsigned int v147; // ecx
  __int64 *v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // rax
  __int64 v151; // rdx
  __int64 v152; // r8
  __int64 v153; // rcx
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r9
  __int64 v157; // rdx
  _QWORD *v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rax
  _QWORD *v163; // rax
  _QWORD *v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // rdx
  struct DXGGLOBAL *v169; // rax
  union _SLIST_HEADER *v170; // rsi
  __int64 v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // rdx
  struct DXGGLOBAL *v176; // rax
  void (__fastcall *Region)(PSLIST_ENTRY, union _SLIST_HEADER *); // rax
  _QWORD *v178; // rax
  __int64 v179; // rdx
  unsigned int v180; // r14d
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // rdx
  struct DXGGLOBAL *v185; // rax
  union _SLIST_HEADER *v186; // rdi
  __int64 v187; // rax
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // rdx
  struct DXGGLOBAL *v192; // rax
  void (__fastcall *v193)(PSLIST_ENTRY, union _SLIST_HEADER *); // rax
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // rdx
  struct DXGGLOBAL *v198; // rax
  union _SLIST_HEADER *v199; // rdi
  struct DXGTHREAD *v200; // rax
  int v201; // [rsp+60h] [rbp-268h] BYREF
  __int64 v202; // [rsp+68h] [rbp-260h]
  __int64 v203; // [rsp+70h] [rbp-258h]
  int *v204; // [rsp+78h] [rbp-250h]
  char v205; // [rsp+80h] [rbp-248h]
  int AllocationInfo; // [rsp+88h] [rbp-240h] BYREF
  PVOID P; // [rsp+90h] [rbp-238h]
  _BYTE v208[32]; // [rsp+98h] [rbp-230h] BYREF
  unsigned int v209; // [rsp+B8h] [rbp-210h]
  DXGCONTEXT *v210; // [rsp+C0h] [rbp-208h] BYREF
  char v211; // [rsp+C8h] [rbp-200h]
  __int64 v212; // [rsp+D0h] [rbp-1F8h] BYREF
  int v213; // [rsp+D8h] [rbp-1F0h]
  __int64 v214; // [rsp+E0h] [rbp-1E8h] BYREF
  struct DXGADAPTER *v215; // [rsp+E8h] [rbp-1E0h]
  char v216; // [rsp+F0h] [rbp-1D8h]
  __int64 v217; // [rsp+F8h] [rbp-1D0h]
  struct DXGCONTEXT *v218; // [rsp+100h] [rbp-1C8h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+108h] [rbp-1C0h]
  __int64 v220; // [rsp+110h] [rbp-1B8h]
  __int64 v221; // [rsp+118h] [rbp-1B0h]
  struct DXGCONTEXT *v222; // [rsp+120h] [rbp-1A8h] BYREF
  char *v223; // [rsp+128h] [rbp-1A0h]
  __int64 v224; // [rsp+130h] [rbp-198h]
  struct _SLIST_ENTRY *v225[2]; // [rsp+138h] [rbp-190h] BYREF
  _QWORD v226[6]; // [rsp+148h] [rbp-180h] BYREF
  char v227; // [rsp+178h] [rbp-150h]
  _BYTE v228[16]; // [rsp+180h] [rbp-148h] BYREF
  _BYTE v229[32]; // [rsp+190h] [rbp-138h] BYREF
  _BYTE v230[64]; // [rsp+1B0h] [rbp-118h] BYREF
  char v231[8]; // [rsp+1F0h] [rbp-D8h] BYREF
  _BYTE v232[16]; // [rsp+1F8h] [rbp-D0h] BYREF
  DXGADAPTER *v233; // [rsp+208h] [rbp-C0h]
  char v234; // [rsp+210h] [rbp-B8h]
  __int64 v235; // [rsp+218h] [rbp-B0h]
  _BYTE v236[16]; // [rsp+238h] [rbp-90h] BYREF
  __int64 v237; // [rsp+248h] [rbp-80h]
  __int64 v238; // [rsp+278h] [rbp-50h]
  char v239; // [rsp+280h] [rbp-48h]

  v223 = Src;
  AllocationInfo = -1073741811;
  v2 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Global = DXGGLOBAL::GetGlobal(v4, v3);
  v6 = (char *)Global + 1024;
  ++*((_DWORD *)Global + 261);
  v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 64);
  ListEntry = v9;
  if ( !v9 )
  {
    ++*((_DWORD *)v6 + 6);
    v9 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))v6 + 6))(
                         *((unsigned int *)v6 + 9),
                         *((unsigned int *)v6 + 11),
                         *((unsigned int *)v6 + 10),
                         v6);
    ListEntry = v9;
  }
  if ( !v9 )
  {
    v94 = WdLogNewEntry5_WdLowResource(v8, v7, v10, v11);
    *(_QWORD *)(v94 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v94);
    return 3221225495LL;
  }
  memset(v9, 0, 0x5F8uLL);
  if ( bTracingEnabled )
    v13 = (__int64)v9;
  else
    v13 = 0LL;
  v202 = 0LL;
  v201 = 2020;
  v204 = &AllocationInfo;
  v205 = 0;
  v203 = v13;
  if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)&AllocationInfo, &EventProfilerEnter, v12, 2020);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v201, 2020LL);
  CurrentProcess = PsGetCurrentProcess(v15, v14);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v20 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v19, v18)) == 0LL
    || (v21 = *((_QWORD *)Current + 1), (v221 = v21) == 0) )
  {
    v21 = v20;
    v221 = v20;
  }
  v220 = v21;
  if ( !v21 )
  {
    v96 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v96 + 24) = -1073741811LL;
    *(_QWORD *)(v96 + 32) = PsGetCurrentProcess(v98, v97);
    WdLogEvent5_WdError(v96);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v201, v99);
    v102 = v203;
    if ( v205 )
    {
      if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v203,
          v101,
          *(_DWORD *)v203,
          *(_DWORD *)(v203 + 56),
          *(_QWORD *)(v203 + 80),
          *(_QWORD *)(v203 + 88),
          *(_DWORD *)(v203 + 1096),
          *v204);
    }
    else if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v203,
        v101,
        *(_DWORD *)v203,
        *(_QWORD *)(v203 + 8),
        *(_DWORD *)(v203 + 16),
        *(_DWORD *)(v203 + 84),
        *(_DWORD *)(v203 + 88),
        *v204,
        *(_DWORD *)(v203 + 20),
        *(_DWORD *)(v203 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_134:
      McTemplateK0q_EtwWriteTransfer(v100, &EventProfilerExit, v101, v201);
LABEL_135:
    v103 = DXGGLOBAL::GetGlobal(v100, v102);
    v104 = (union _SLIST_HEADER *)((char *)v103 + 1024);
    ++*((_DWORD *)v103 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v103 + 64) >= *((_WORD *)v103 + 520) )
    {
LABEL_304:
      Region = (void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v104[3].Region;
      ++LODWORD(v104[2].Alignment);
      Region(v9, v104);
      return 3221225485LL;
    }
LABEL_136:
    ExpInterlockedPushEntrySList(v104, v9);
    return 3221225485LL;
  }
  v22 = Src;
  if ( v2 )
  {
    if ( (unsigned __int64)Src >= MmUserProbeAddress )
      v22 = (const void *)MmUserProbeAddress;
    memmove(v9, v22, 0x5D8uLL);
  }
  else
  {
    memmove(v9, Src, 0x5D8uLL);
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v21 + 88) + 400LL))() && (*(_DWORD *)(&v9[5].Next + 1) & 0x8000) == 0 )
  {
    AllocationInfo = -1071775738;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v201, v23);
    v107 = v203;
    if ( v205 )
    {
      if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v203,
          v106,
          *(_DWORD *)v203,
          *(_DWORD *)(v203 + 56),
          *(_QWORD *)(v203 + 80),
          *(_QWORD *)(v203 + 88),
          *(_DWORD *)(v203 + 1096),
          *v204);
    }
    else if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v203,
        v106,
        *(_DWORD *)v203,
        *(_QWORD *)(v203 + 8),
        *(_DWORD *)(v203 + 16),
        *(_DWORD *)(v203 + 84),
        *(_DWORD *)(v203 + 88),
        *v204,
        *(_DWORD *)(v203 + 20),
        *(_DWORD *)(v203 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v105, &EventProfilerExit, v106, v201);
    v108 = DXGGLOBAL::GetGlobal(v105, v107);
    v109 = (union _SLIST_HEADER *)((char *)v108 + 1024);
    ++*((_DWORD *)v108 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v108 + 64) < *((_WORD *)v108 + 520) )
    {
      ExpInterlockedPushEntrySList(v109, v9);
    }
    else
    {
      ++LODWORD(v109[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v109[3].Region)(v9, v109);
    }
    return 3223191558LL;
  }
  if ( (*(_DWORD *)(&v9[5].Next + 1) & 0x10000000) != 0 )
  {
    v222 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
      (DXGCONTEXTBYHANDLE *)v228,
      (unsigned int)v9->Next,
      (struct DXGPROCESS *)v21,
      &v222,
      0);
    v112 = v222;
    if ( v222 )
    {
      LODWORD(v9->Next) = *((_DWORD *)&v9[90].Next + 2);
      AllocationInfo = PreIndirectPresentReadAllocationInfo(
                         (struct DXGPROCESS *)v21,
                         *((struct DXGDEVICE **)v112 + 2),
                         HIDWORD(v9[1].Next),
                         (struct INDIRECT_RESOURCE_INFO *)((char *)&v9[94].Next + 12));
      if ( AllocationInfo < 0 )
      {
        v120 = WdLogNewEntry5_WdWarning(v118, v117, v119);
        *(_QWORD *)(v120 + 24) = HIDWORD(v9[1].Next);
        WdLogEvent5_WdWarning(v120);
      }
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v228);
      goto LABEL_18;
    }
    v113 = (_QWORD *)WdLogNewEntry5_WdWarning(v110, 0LL, v111);
    v113[3] = -1073741811LL;
    v113[4] = PsGetCurrentProcess(v115, v114);
    v113[5] = *((unsigned int *)&v9[90].Next + 2);
    WdLogEvent5_WdWarning(v113);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v228);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v201, v116);
    v102 = v203;
    if ( v205 )
      goto LABEL_161;
    if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      goto LABEL_157;
LABEL_158:
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      goto LABEL_134;
    goto LABEL_135;
  }
LABEL_18:
  v218 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)&v210,
    (unsigned int)v9->Next,
    (struct DXGPROCESS *)v21,
    &v218,
    0);
  v27 = v218;
  if ( !v218 )
  {
    v121 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
    v121[3] = -1073741811LL;
    v121[4] = PsGetCurrentProcess(v123, v122);
    v121[5] = LODWORD(v9->Next);
    WdLogEvent5_WdWarning(v121);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v210);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v201, v124);
    v102 = v203;
    if ( v205 )
      goto LABEL_161;
    goto LABEL_168;
  }
  if ( *((_BYTE *)v218 + 457) && *((_DWORD *)&v9[5].Next + 3) )
  {
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v210);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v201, v125);
    v128 = v203;
    if ( v205 )
    {
      if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v203,
          v127,
          *(_DWORD *)v203,
          *(_DWORD *)(v203 + 56),
          *(_QWORD *)(v203 + 80),
          *(_QWORD *)(v203 + 88),
          *(_DWORD *)(v203 + 1096),
          *v204);
    }
    else if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v203,
        v127,
        *(_DWORD *)v203,
        *(_QWORD *)(v203 + 8),
        *(_DWORD *)(v203 + 16),
        *(_DWORD *)(v203 + 84),
        *(_DWORD *)(v203 + 88),
        *v204,
        *(_DWORD *)(v203 + 20),
        *(_DWORD *)(v203 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v126, &EventProfilerExit, v127, v201);
    v129 = DXGGLOBAL::GetGlobal(v126, v128);
    v130 = (union _SLIST_HEADER *)((char *)v129 + 1024);
    ++*((_DWORD *)v129 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v129 + 64) < *((_WORD *)v129 + 520) )
    {
      ExpInterlockedPushEntrySList(v130, v9);
    }
    else
    {
      ++LODWORD(v130[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v130[3].Region)(v9, v130);
    }
    return 3221225474LL;
  }
  if ( (*((_DWORD *)v218 + 105) & 8) != 0 )
  {
    v131 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    *(_QWORD *)(v131 + 24) = 1215LL;
    WdLogEvent5_WdWarning(v131);
    goto LABEL_187;
  }
  v28 = *((_QWORD *)v218 + 2);
  v224 = v28;
  v212 = v28;
  v213 = 0;
  if ( v28 )
  {
    v29 = *(struct _KEVENT **)(v28 + 16);
    if ( *(_DWORD *)(v28 + 432) == 2 )
    {
      if ( KeReadStateEvent(v29 + 5) )
        goto LABEL_24;
      v133 = v29 + 5;
    }
    else
    {
      if ( KeReadStateEvent(v29 + 4) )
      {
LABEL_24:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v28 + 136), 0) )
        {
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 104LL));
          v135 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v28 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v134, &EventBlockThread, v136, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v28 + 136), 1u);
          if ( v135 )
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v28 + 16) + 16LL));
          ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 104LL, 0LL);
          KeLeaveCriticalRegion();
        }
        v213 = 1;
        goto LABEL_26;
      }
      v133 = v29 + 4;
    }
    KeWaitForSingleObject(v133, Executive, 0, 0, 0LL);
    goto LABEL_24;
  }
LABEL_26:
  v30 = *((_DWORD *)&v9[5].Next + 3);
  if ( v30 > 0x40 )
  {
    v137 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    *(_QWORD *)(v137 + 24) = v27;
    *(_QWORD *)(v137 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v137);
    goto LABEL_202;
  }
  v31 = v30 + 1;
  PoolWithTag = 0LL;
  P = 0LL;
  v209 = 0;
  if ( (unsigned int)v31 > 4 )
  {
    v24 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v31;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v31 < 8 )
      goto LABEL_31;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v31, 0x4B677844u);
    P = PoolWithTag;
  }
  else
  {
    PoolWithTag = v208;
    P = v208;
  }
  v209 = v31;
  if ( !PoolWithTag )
  {
LABEL_206:
    v138 = WdLogNewEntry5_WdWarning(PoolWithTag, v24, v26);
    *(_QWORD *)(v138 + 24) = 1241LL;
    WdLogEvent5_WdWarning(v138);
    if ( P != v208 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v209 = 0;
    if ( v28 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v212);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v210);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v201, v139);
    v142 = v203;
    if ( v205 )
    {
      if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v203,
          v141,
          *(_DWORD *)v203,
          *(_DWORD *)(v203 + 56),
          *(_QWORD *)(v203 + 80),
          *(_QWORD *)(v203 + 88),
          *(_DWORD *)(v203 + 1096),
          *v204);
    }
    else if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v203,
        v141,
        *(_DWORD *)v203,
        *(_QWORD *)(v203 + 8),
        *(_DWORD *)(v203 + 16),
        *(_DWORD *)(v203 + 84),
        *(_DWORD *)(v203 + 88),
        *v204,
        *(_DWORD *)(v203 + 20),
        *(_DWORD *)(v203 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_220:
      McTemplateK0q_EtwWriteTransfer(v140, &EventProfilerExit, v141, v201);
LABEL_221:
    v143 = DXGGLOBAL::GetGlobal(v140, v142);
    v144 = (union _SLIST_HEADER *)((char *)v143 + 1024);
    ++*((_DWORD *)v143 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v143 + 64) >= *((_WORD *)v143 + 520) )
    {
LABEL_370:
      v193 = (void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v144[3].Region;
      ++LODWORD(v144[2].Alignment);
      v193(v9, v144);
      return 3221225495LL;
    }
    goto LABEL_222;
  }
  memset(PoolWithTag, 0, 8 * v31);
  PoolWithTag = P;
LABEL_31:
  if ( !PoolWithTag )
    goto LABEL_206;
  *PoolWithTag = v27;
  v33 = P;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v229, (struct _KTHREAD **)v21);
  v34 = 0;
  if ( *((_DWORD *)&v9[5].Next + 3) )
  {
    do
    {
      v145 = (*((_DWORD *)&v9[6].Next + v34) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v145 < *(_DWORD *)(v21 + 256) )
      {
        v146 = *(_QWORD *)(v21 + 240);
        v147 = *(_DWORD *)(v146 + 16 * v145 + 8);
        if ( *((_DWORD *)&v9[6].Next + v34) >> 30 == ((v147 >> 5) & 3) && (v147 & 0x2000) == 0 && (v147 & 0x1F) != 0 )
        {
          v148 = (__int64 *)(v146 + 16LL * (unsigned int)v145);
          v149 = v147 & 0x1F;
          if ( (_BYTE)v149 == 7 )
          {
            v151 = *v148;
            goto LABEL_230;
          }
          v150 = WdLogNewEntry5_WdError(v149, v148);
          *(_QWORD *)(v150 + 24) = 316LL;
          WdLogEvent5_WdError(v150);
        }
      }
      v151 = 0LL;
LABEL_230:
      v152 = v34 + 1;
      v153 = 8 * v152;
      *((_QWORD *)P + v152) = v151;
      v154 = *((_QWORD *)P + v152);
      if ( !v154 || (*(_DWORD *)(v154 + 420) & 8) != 0 || (v153 = *((_QWORD *)v27 + 2), *(_QWORD *)(v154 + 16) != v153) )
      {
        v158 = (_QWORD *)WdLogNewEntry5_WdError(v153, v154);
        v158[3] = v27;
        v158[4] = *((unsigned int *)&v9[6].Next + v34);
        v158[5] = v34;
        v158[6] = -1073741811LL;
LABEL_241:
        WdLogEvent5_WdError(v158);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v229);
LABEL_244:
        if ( P != v208 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v209 = 0;
LABEL_202:
        if ( v28 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v212);
LABEL_187:
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v210);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v201, v132);
        v102 = v203;
        if ( v205 )
        {
LABEL_161:
          if ( v102 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0qqxxqq_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v102,
              v101,
              *(_DWORD *)v102,
              *(_DWORD *)(v102 + 56),
              *(_QWORD *)(v102 + 80),
              *(_QWORD *)(v102 + 88),
              *(_DWORD *)(v102 + 1096),
              *v204);
          goto LABEL_158;
        }
LABEL_168:
        if ( !v102 || (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_158;
LABEL_157:
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v102,
          v101,
          *(_DWORD *)v102,
          *(_QWORD *)(v102 + 8),
          *(_DWORD *)(v102 + 16),
          *(_DWORD *)(v102 + 84),
          *(_DWORD *)(v102 + 88),
          *v204,
          *(_DWORD *)(v102 + 20),
          *(_DWORD *)(v102 + 24));
        goto LABEL_158;
      }
      if ( v34 )
      {
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v153 + 16) + 16LL)) )
        {
          v157 = *(unsigned int *)(v33[v156] + 416LL);
          if ( (unsigned int)v157 <= *(_DWORD *)(v33[v34 - 1] + 416LL) )
          {
            v158 = (_QWORD *)WdLogNewEntry5_WdError(v155, v157);
            v158[3] = -1073741811LL;
            goto LABEL_241;
          }
        }
      }
      v34 = v152;
    }
    while ( (unsigned int)v152 < *((_DWORD *)&v9[5].Next + 3) );
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v229);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v226,
    P,
    v209);
  if ( v227 )
  {
    if ( v226[0] )
    {
      v162 = WdLogNewEntry5_WdWarning(v36, v35, v37);
      *(_QWORD *)(v162 + 24) = 1311LL;
      WdLogEvent5_WdWarning(v162);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v226);
      goto LABEL_244;
    }
    v160 = WdLogNewEntry5_WdWarning(v36, v35, v37);
    *(_QWORD *)(v160 + 24) = 1306LL;
    WdLogEvent5_WdWarning(v160);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v226);
    if ( P != v208 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v209 = 0;
    if ( v28 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v212);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v210);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v201, v161);
    v142 = v203;
    if ( v205 )
    {
      if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v203,
          v141,
          *(_DWORD *)v203,
          *(_DWORD *)(v203 + 56),
          *(_QWORD *)(v203 + 80),
          *(_QWORD *)(v203 + 88),
          *(_DWORD *)(v203 + 1096),
          *v204);
    }
    else if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v203,
        v141,
        *(_DWORD *)v203,
        *(_QWORD *)(v203 + 8),
        *(_DWORD *)(v203 + 16),
        *(_DWORD *)(v203 + 84),
        *(_DWORD *)(v203 + 88),
        *v204,
        *(_DWORD *)(v203 + 20),
        *(_DWORD *)(v203 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      goto LABEL_220;
    goto LABEL_221;
  }
  *((_QWORD *)&v9[93].Next + 1) = P;
  *((_BYTE *)&v9[94].Next + 8) = 1;
  v38 = *(_QWORD *)(*((_QWORD *)v27 + 2) + 1848LL);
  v39 = *((_DWORD *)&v9[5].Next + 2);
  if ( (v39 & 0x8000) != 0 )
  {
    if ( (v39 & 0x400000) != 0 || v9[90].Next )
    {
      v163 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
      v163[3] = -1073741811LL;
      v163[4] = v27;
      v163[5] = *((unsigned int *)&v9[5].Next + 2);
      v163[6] = v9[90].Next;
      WdLogEvent5_WdError(v163);
      v41 = -1073741811;
    }
    else
    {
      v41 = 0;
    }
  }
  else
  {
    v40 = (DXGPRESENT *)*((_QWORD *)v27 + 19);
    if ( v40
      || ((PoolWithQuotaTag = (DXGPRESENT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x670uLL, 0x4B677844u)) == 0LL
        ? (v40 = 0LL)
        : (v40 = DXGPRESENT::DXGPRESENT(PoolWithQuotaTag, *(_DWORD *)(*((_QWORD *)v27 + 2) + 1856LL))),
          (*((_QWORD *)v27 + 19) = v40) != 0LL) )
    {
      *((_BYTE *)v27 + 458) = 1;
      v41 = DXGPRESENT::CopyPresentArgs(v40, v27, (struct _D3DKMT_PRESENT *)v9);
    }
    else
    {
      v164 = (_QWORD *)WdLogNewEntry5_WdLowResource(PoolWithQuotaTag, v90, v92, v93);
      v164[3] = -1073741801LL;
      v164[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 16LL);
      v164[5] = v21;
      v164[6] = v27;
      WdLogEvent5_WdLowResource(v164);
      v41 = -1073741801;
    }
  }
  AllocationInfo = v41;
  if ( v41 < 0 )
  {
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v226);
    if ( P != v208 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v209 = 0;
    if ( v28 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v212);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v210);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v201, v165);
    v168 = v203;
    if ( v205 )
    {
      if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v203,
          v167,
          *(_DWORD *)v203,
          *(_DWORD *)(v203 + 56),
          *(_QWORD *)(v203 + 80),
          *(_QWORD *)(v203 + 88),
          *(_DWORD *)(v203 + 1096),
          *v204);
    }
    else if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v203,
        v167,
        *(_DWORD *)v203,
        *(_QWORD *)(v203 + 8),
        *(_DWORD *)(v203 + 16),
        *(_DWORD *)(v203 + 84),
        *(_DWORD *)(v203 + 88),
        *v204,
        *(_DWORD *)(v203 + 20),
        *(_DWORD *)(v203 + 24));
    }
    if ( (qword_1C00B19B0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      goto LABEL_280;
LABEL_279:
    McTemplateK0q_EtwWriteTransfer(v166, &EventProfilerExit, v167, v201);
LABEL_280:
    v169 = DXGGLOBAL::GetGlobal(v166, v168);
    v170 = (union _SLIST_HEADER *)((char *)v169 + 1024);
    ++*((_DWORD *)v169 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v169 + 64) < *((_WORD *)v169 + 520) )
    {
      ExpInterlockedPushEntrySList(v170, v9);
    }
    else
    {
      ++LODWORD(v170[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v170[3].Region)(v9, v170);
    }
    return (unsigned int)v41;
  }
  v42 = *((unsigned int *)&v9[5].Next + 2);
  if ( (v42 & 0x10000000) != 0 )
  {
    if ( v38 )
    {
      if ( (*(_DWORD *)(v38 + 348) & 0x100) != 0 )
        goto LABEL_41;
      v159 = WdLogNewEntry5_WdError(v42, v35);
      *(_QWORD *)(v159 + 24) = 1338LL;
    }
    else
    {
      v159 = WdLogNewEntry5_WdError(v42, v35);
      *(_QWORD *)(v159 + 24) = 1332LL;
    }
    WdLogEvent5_WdError(v159);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v226);
    goto LABEL_244;
  }
  if ( !v38 )
  {
    v43 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 16LL);
    goto LABEL_42;
  }
  if ( (*(_DWORD *)(v38 + 348) & 0x100) != 0 && (v42 & 0x18000) == 0 )
  {
    v171 = WdLogNewEntry5_WdError(v42, v35);
    *(_QWORD *)(v171 + 24) = 1348LL;
    WdLogEvent5_WdError(v171);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v226);
    if ( P != v208 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v209 = 0;
    if ( v28 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v212);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v210);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v201, v172);
    v175 = v203;
    if ( v205 )
    {
      if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v203,
          v174,
          *(_DWORD *)v203,
          *(_DWORD *)(v203 + 56),
          *(_QWORD *)(v203 + 80),
          *(_QWORD *)(v203 + 88),
          *(_DWORD *)(v203 + 1096),
          *v204);
    }
    else if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v203,
        v174,
        *(_DWORD *)v203,
        *(_QWORD *)(v203 + 8),
        *(_DWORD *)(v203 + 16),
        *(_DWORD *)(v203 + 84),
        *(_DWORD *)(v203 + 88),
        *v204,
        *(_DWORD *)(v203 + 20),
        *(_DWORD *)(v203 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v173, &EventProfilerExit, v174, v201);
    v176 = DXGGLOBAL::GetGlobal(v173, v175);
    v104 = (union _SLIST_HEADER *)((char *)v176 + 1024);
    ++*((_DWORD *)v176 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v176 + 64) >= *((_WORD *)v176 + 520) )
      goto LABEL_304;
    goto LABEL_136;
  }
LABEL_41:
  v43 = (struct DXGADAPTER *)v38;
LABEL_42:
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v230, *(const struct _DXGKWIN32KENG_INTERFACE *const *)(v21 + 88), v43);
  v215 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v215 + 3);
  v214 = -1LL;
  v44 = v215;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v44 + 136, 0LL);
  v216 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v231, *((_QWORD *)v27 + 2), 2, v45, 0);
  if ( !v239
    || (COREACCESS::AcquireShared((COREACCESS *)v236, 0LL), v47 = *(unsigned int *)(v237 + 200), (_DWORD)v47 == 1) )
  {
    if ( v234 )
    {
      v178 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v46);
      v178[3] = 275LL;
      v178[4] = 4LL;
      v178[5] = v232;
      v178[6] = 0LL;
      v178[7] = 0LL;
      WdLogEvent5_WdCriticalError(v178);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v233 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v233 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v48, &EventBlockThread, v49, 72);
        KeWaitForSingleObject((char *)v233 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v233, 0LL);
    }
    v235 = 0LL;
    v234 = 1;
    if ( *(_DWORD *)(v238 + 576) == 1 )
    {
      v41 = 0;
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v232);
      if ( v239 )
        COREACCESS::Release((COREACCESS *)v236);
      v41 = -1073741130;
    }
  }
  else
  {
    COREACCESS::Release((COREACCESS *)v236);
    v41 = -1073741130;
  }
  AllocationInfo = v41;
  if ( v41 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v231);
    if ( v216 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v214);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v230);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v226);
    if ( P != v208 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v209 = 0;
    if ( v28 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v212);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v210);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v201, v179);
    v168 = v203;
    if ( v205 )
    {
      if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v203,
          v167,
          *(_DWORD *)v203,
          *(_DWORD *)(v203 + 56),
          *(_QWORD *)(v203 + 80),
          *(_QWORD *)(v203 + 88),
          *(_DWORD *)(v203 + 1096),
          *v204);
    }
    else if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v203,
        v167,
        *(_DWORD *)v203,
        *(_QWORD *)(v203 + 8),
        *(_DWORD *)(v203 + 16),
        *(_DWORD *)(v203 + 84),
        *(_DWORD *)(v203 + 88),
        *v204,
        *(_DWORD *)(v203 + 20),
        *(_DWORD *)(v203 + 24));
    }
    if ( (qword_1C00B19B0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      goto LABEL_280;
    goto LABEL_279;
  }
  if ( (*(_DWORD *)(&v9[5].Next + 1) & 0x200000) != 0 )
  {
    v180 = SubmitPresentHistoryToken(
             (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v9[22].Next + 1),
             (struct COREDEVICEACCESS *)v231,
             (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v214,
             (struct CWin32kLocks *)v230,
             0,
             0LL,
             (struct DXGK_PRESENT_PARAMS *)v9,
             0LL,
             v218,
             0LL,
             0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v231);
    if ( v216 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v214);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v230);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v226);
    if ( P != v208 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v209 = 0;
    if ( v28 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v212);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v210);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v201, v181);
    v184 = v203;
    if ( v205 )
    {
      if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v203,
          v183,
          *(_DWORD *)v203,
          *(_DWORD *)(v203 + 56),
          *(_QWORD *)(v203 + 80),
          *(_QWORD *)(v203 + 88),
          *(_DWORD *)(v203 + 1096),
          *v204);
    }
    else if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v203,
        v183,
        *(_DWORD *)v203,
        *(_QWORD *)(v203 + 8),
        *(_DWORD *)(v203 + 16),
        *(_DWORD *)(v203 + 84),
        *(_DWORD *)(v203 + 88),
        *v204,
        *(_DWORD *)(v203 + 20),
        *(_DWORD *)(v203 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v182, &EventProfilerExit, v183, v201);
    v185 = DXGGLOBAL::GetGlobal(v182, v184);
    v186 = (union _SLIST_HEADER *)((char *)v185 + 1024);
    ++*((_DWORD *)v185 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v185 + 64) < *((_WORD *)v185 + 520) )
    {
      ExpInterlockedPushEntrySList(v186, v9);
    }
    else
    {
      ++LODWORD(v186[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v186[3].Region)(v9, v186);
    }
    return v180;
  }
  v50 = *(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL);
  v217 = v50;
  v225[1] = (struct _SLIST_ENTRY *)v50;
  v51 = v50 + 1248;
  ++*(_DWORD *)(v50 + 1268);
  v54 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v50 + 1248));
  if ( !v54 )
  {
    ++*(_DWORD *)(v51 + 24);
    v54 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v51 + 48))(
                          *(unsigned int *)(v51 + 36),
                          *(unsigned int *)(v51 + 44),
                          *(unsigned int *)(v51 + 40),
                          v51);
  }
  v225[0] = v54;
  if ( !v54 )
  {
    v187 = WdLogNewEntry5_WdLowResource(v53, v52, v55, v56);
    *(_QWORD *)(v187 + 24) = 1390LL;
    WdLogEvent5_WdLowResource(v187);
    CVidSchSubmitData::~CVidSchSubmitData(v225);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v231);
    if ( v216 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v214);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v230);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v226);
    if ( P != v208 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v209 = 0;
    if ( v28 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v212);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v210);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v201, v188);
    v191 = v203;
    if ( v205 )
    {
      if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v203,
          v190,
          *(_DWORD *)v203,
          *(_DWORD *)(v203 + 56),
          *(_QWORD *)(v203 + 80),
          *(_QWORD *)(v203 + 88),
          *(_DWORD *)(v203 + 1096),
          *v204);
    }
    else if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v203,
        v190,
        *(_DWORD *)v203,
        *(_QWORD *)(v203 + 8),
        *(_DWORD *)(v203 + 16),
        *(_DWORD *)(v203 + 84),
        *(_DWORD *)(v203 + 88),
        *v204,
        *(_DWORD *)(v203 + 20),
        *(_DWORD *)(v203 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v189, &EventProfilerExit, v190, v201);
    v192 = DXGGLOBAL::GetGlobal(v189, v191);
    v144 = (union _SLIST_HEADER *)((char *)v192 + 1024);
    ++*((_DWORD *)v192 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v192 + 64) >= *((_WORD *)v192 + 520) )
      goto LABEL_370;
LABEL_222:
    ExpInterlockedPushEntrySList(v144, v9);
    return 3221225495LL;
  }
  v57 = *(_QWORD *)(v217 + 16);
  if ( *(int *)(v57 + 2328) < 0x2000 )
    v58 = 1;
  else
    v58 = *(_DWORD *)(v57 + 280);
  if ( *(int *)(v57 + 2328) >= 0x2000 || *(_BYTE *)(v57 + 2628) )
    v60 = *(_DWORD *)(v57 + 2536) * ((v58 << 6) + ((8 * v58 + 199) & 0xFFFFFFF8)) + 8 * v58 + 592;
  else
    v60 = 1288;
  memset(v54, 0, v60);
  v61 = *(_QWORD *)(v217 + 16);
  if ( *(int *)(v61 + 2328) < 0x2000 )
    v62 = 1;
  else
    v62 = *(_DWORD *)(v61 + 280);
  v63 = *(int *)(v61 + 2328) >= 0x2000 || *(_BYTE *)(v61 + 2628);
  v64 = *(_DWORD *)(v61 + 2536);
  *((_BYTE *)&v54[21].Next + 12) = v63;
  if ( v63 )
  {
    HIDWORD(v54[36].Next) = v64;
    *((_DWORD *)&v54[36].Next + 2) = v62;
    v65 = 8 * v62;
    v66 = v62 << 6;
    *((_DWORD *)&v54[36].Next + 3) = v64 * (v66 + ((v65 + 199) & 0xFFFFFFF8)) + 16;
    v67 = v64 * (v66 + ((v65 + 199) & 0xFFFFFFF8)) + 592;
    *((_DWORD *)&v54[33].Next + 2) = v67;
    *((_DWORD *)&v54[33].Next + 3) = v65 + v67;
  }
  v68 = DXGCONTEXT::Present(
          v218,
          (struct _D3DKMT_PRESENT *)v9,
          (struct COREDEVICEACCESS *)v231,
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v214,
          (struct CWin32kLocks *)v230,
          (struct DXGCONTEXT **)P,
          (struct VIDSCH_SUBMIT_DATA_BASE *)v54);
  AllocationInfo = v68;
  if ( v68 != -1071775482 )
    goto LABEL_68;
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v233)
    || (LODWORD(v217) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v231, 0LL), (int)v217 >= 0) )
  {
    DXGDEVICE::CloseInternalCddPrimaryHandle(*((DXGDEVICE **)v27 + 2), (struct COREDEVICEACCESS *)v231);
    v68 = AllocationInfo;
LABEL_68:
    if ( v38 )
    {
      v69 = *(_QWORD *)(v38 + 2696);
      if ( v69 )
      {
        if ( (*(_DWORD *)(&v9[5].Next + 1) & 4) != 0 )
        {
          Next_low = LODWORD(v9[1].Next);
          if ( (unsigned int)Next_low < *(_DWORD *)(v69 + 80) )
            DISPLAY_SOURCE::RecordPresentDiagHistory(
              (DISPLAY_SOURCE *)(*(_QWORD *)(v69 + 112) + 3968 * Next_low),
              v68,
              *(_BYTE *)(v221 + 346) != 0);
        }
      }
    }
    ++*(_DWORD *)(v51 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v51) >= *(_WORD *)(v51 + 16) )
    {
      ++*(_DWORD *)(v51 + 32);
      (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v51 + 56))(v54, v51);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v51, v54);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v231);
    if ( v216 )
    {
      v216 = 0;
      ExReleasePushLockSharedEx((char *)v215 + 136, 0LL);
      KeLeaveCriticalRegion();
      v71 = (DXGGLOBAL **)v215;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v215 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(v71[2], (struct DXGADAPTER *)v71);
    }
    if ( AllocationInfo >= 0 )
    {
      v72 = v223 + 1488;
      if ( (unsigned __int64)(v223 + 1488) >= MmUserProbeAddress )
        v72 = (_BYTE *)MmUserProbeAddress;
      *v72 = *((_BYTE *)&v9[94].Next + 8);
    }
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v230);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v226);
    if ( P != v208 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v209 = 0;
    if ( v28 && v213 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v28 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v210 && !v211 )
      DXGCONTEXT::ReleaseReference(v210);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v201, v73);
    v76 = v203;
    if ( v205 )
    {
      if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v203,
          v75,
          *(_DWORD *)v203,
          *(_DWORD *)(v203 + 56),
          *(_QWORD *)(v203 + 80),
          *(_QWORD *)(v203 + 88),
          *(_DWORD *)(v203 + 1096),
          *v204);
    }
    else if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v203,
        v75,
        *(_DWORD *)v203,
        *(_QWORD *)(v203 + 8),
        *(_DWORD *)(v203 + 16),
        *(_DWORD *)(v203 + 84),
        *(_DWORD *)(v203 + 88),
        *v204,
        *(_DWORD *)(v203 + 20),
        *(_DWORD *)(v203 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v74, &EventProfilerExit, v75, v201);
    v77 = DXGGLOBAL::GetGlobal(v74, v76);
    v78 = (char *)v77 + 1024;
    ++*((_DWORD *)v77 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v77 + 64) >= *((_WORD *)v77 + 520) )
    {
      ++*((_DWORD *)v78 + 8);
      (*((void (__fastcall **)(PSLIST_ENTRY, char *))v78 + 7))(v9, v78);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v78, v9);
    }
    v81 = PsGetCurrentProcess(v80, v79);
    v82 = PsGetProcessDxgProcess(v81);
    v85 = v82;
    if ( v82 && (*(_BYTE *)(v82 + 347) & 0x10) == 0
      || (v200 = DXGTHREAD::GetCurrent(v84, v83)) == 0LL
      || (v86 = *((_QWORD *)v200 + 1)) == 0 )
    {
      v86 = v85;
    }
    v87 = *(_QWORD *)(v86 + 64);
    for ( i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v87 + 88), (PKSPIN_LOCK)(v87 + 104));
          i;
          i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v87 + 88), (PKSPIN_LOCK)(v87 + 104)) )
    {
      ((void (__fastcall *)(struct _LIST_ENTRY *))i[1].Flink)(i[1].Blink);
      operator delete(i);
    }
    return (unsigned int)AllocationInfo;
  }
  CVidSchSubmitData::~CVidSchSubmitData(v225);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v231);
  if ( v216 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v214);
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v230);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v226);
  if ( P != v208 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v209 = 0;
  if ( v28 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v212);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v210);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v201, v194);
  v197 = v203;
  if ( v205 )
  {
    if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v203,
        v196,
        *(_DWORD *)v203,
        *(_DWORD *)(v203 + 56),
        *(_QWORD *)(v203 + 80),
        *(_QWORD *)(v203 + 88),
        *(_DWORD *)(v203 + 1096),
        *v204);
  }
  else if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qpqqqqpp_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v203,
      v196,
      *(_DWORD *)v203,
      *(_QWORD *)(v203 + 8),
      *(_DWORD *)(v203 + 16),
      *(_DWORD *)(v203 + 84),
      *(_DWORD *)(v203 + 88),
      *v204,
      *(_DWORD *)(v203 + 20),
      *(_DWORD *)(v203 + 24));
  }
  if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v195, &EventProfilerExit, v196, v201);
  v198 = DXGGLOBAL::GetGlobal(v195, v197);
  v199 = (union _SLIST_HEADER *)((char *)v198 + 1024);
  ++*((_DWORD *)v198 + 263);
  if ( ExQueryDepthSList((PSLIST_HEADER)v198 + 64) < *((_WORD *)v198 + 520) )
  {
    ExpInterlockedPushEntrySList(v199, v9);
  }
  else
  {
    ++LODWORD(v199[2].Alignment);
    ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v199[3].Region)(v9, v199);
  }
  return (unsigned int)v217;
}
