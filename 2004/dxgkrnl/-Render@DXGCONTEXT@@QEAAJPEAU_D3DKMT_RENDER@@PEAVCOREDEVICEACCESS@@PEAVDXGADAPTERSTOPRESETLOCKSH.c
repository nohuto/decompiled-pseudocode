/*
 * XREFs of ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00EA570
 * Callers:
 *     DxgkRender @ 0x1C00E9000 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00E9B60 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025F2C4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0002378 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0002788 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ @ 0x1C00027B4 (-DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004150 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004384 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00056C8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006E20 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0006E74 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0039170 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C00411E4 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     TraceDxgkPatchLocationList @ 0x1C0043E18 (TraceDxgkPatchLocationList.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1C0047670 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0ppqx_EtwWriteTransfer @ 0x1C0048178 (McTemplateK0ppqx_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FCD20 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD040 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C0104170 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C010DA98 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C0110D74 (-DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0114208 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0154970 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0157070 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1C028F33C (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Render(
        DXGCONTEXT *this,
        struct _D3DKMT_RENDER *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct DXGALLOCATION **a6,
        struct DXGHWQUEUE **a7)
{
  struct _D3DKMT_RENDER *v8; // r15
  int v9; // eax
  D3DKMT_RENDERFLAGS Flags; // ecx
  unsigned int v11; // eax
  unsigned __int8 v12; // r12
  char *pNewCommandBuffer; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  bool v18; // zf
  __int64 v19; // r9
  unsigned int v20; // esi
  __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // r14
  D3DKMT_RENDERFLAGS v24; // eax
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  PSLIST_ENTRY v29; // rsi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  int v33; // r8d
  unsigned int v34; // eax
  __int64 v35; // rcx
  int v36; // edx
  bool v37; // al
  int v38; // r8d
  int v39; // ecx
  int v40; // edx
  unsigned int v41; // eax
  D3DKMT_RENDERFLAGS v42; // eax
  unsigned __int64 *v43; // rdx
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r11
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  char v49; // di
  __int64 v50; // r8
  __int64 v51; // rcx
  struct DXGADAPTER *v52; // rdi
  __int64 v53; // rdx
  struct DXGGLOBAL *v54; // rax
  __int64 AllocationListSize; // rcx
  unsigned int v56; // edi
  struct DXGALLOCATION **v57; // rbx
  __int64 v58; // rax
  __int64 v59; // r12
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v62; // rdx
  __int64 v63; // rdi
  __int64 v64; // r14
  __int64 v65; // rcx
  int v66; // r15d
  __int64 v67; // rdi
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rcx
  struct DXGTHREAD *ThreadProperty; // rdi
  struct _KTHREAD *CurrentThread; // r14
  int CurrentProcessSessionId; // edi
  __int64 v75; // rax
  __int64 v76; // r15
  void *v77; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  _QWORD *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  DXGK_ALLOCATIONLIST *v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  bool v92; // r15
  __int64 v93; // rdi
  UINT AllocationCount; // r15d
  int v95; // eax
  int v96; // r12d
  int v97; // r9d
  __int64 v98; // rax
  __int64 v99; // rax
  int v100; // eax
  int v101; // r15d
  struct DXGCONTEXT **v102; // rdi
  struct DXGCONTEXT *v103; // rcx
  int v104; // eax
  int v105; // r12d
  struct _SLIST_ENTRY *v106; // rsi
  __int64 v107; // rdi
  union _SLIST_HEADER *v108; // rcx
  __int64 v110; // rax
  __int64 v111; // r12
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rdi
  __int64 v116; // r14
  __int64 v117; // rcx
  int v118; // r15d
  __int64 v119; // rdi
  __int64 v120; // r8
  struct DXGADAPTER *v121; // rdi
  struct DXGGLOBAL *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  struct DXGTHREAD *DxgThread; // rdi
  struct _KTHREAD *v126; // r14
  int v127; // edi
  __int64 v128; // rax
  __int64 v129; // r15
  void *v130; // rax
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  _QWORD *v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  DXGK_ALLOCATIONLIST *v139; // rcx
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rcx
  char *v143; // rdi
  struct _KTHREAD **v144; // rcx
  COREACCESS *v145; // r15
  int v146; // eax
  __int64 v147; // rcx
  COREDEVICEACCESS *v148; // rsi
  __int64 v149; // rcx
  __int64 v150; // rcx
  __int64 v151; // r8
  int v152; // r9d
  int v153; // r9d
  __int64 v154; // rax
  __int64 v155; // rax
  int v156; // eax
  __int64 v157; // rbx
  __int64 v158; // rax
  int v159; // r15d
  __int64 v160; // rax
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // rax
  __int64 v164; // r8
  DXGDEVICESYNCOBJECT *v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rcx
  int v168; // eax
  PERESOURCE *Global; // rax
  __int64 v170; // rdx
  __int64 v171; // r14
  __int64 v172; // rcx
  unsigned int v173; // esi
  __int64 v174; // r15
  __int64 v175; // rdx
  struct DXGGLOBAL *v176; // rax
  int SyncObject; // eax
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // rax
  _QWORD *v181; // rax
  _QWORD *v182; // rax
  __int64 v183; // rax
  const EVENT_DESCRIPTOR *v184; // rdx
  int v185; // eax
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // r8
  size_t v189; // r8
  void *v190; // rcx
  struct DXGTHREAD *v191; // rax
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // rax
  int v195; // edi
  __int64 v196; // rax
  _QWORD *v197; // rax
  __int64 v198; // rcx
  _QWORD *v199; // rax
  __int64 v200; // rax
  DXGK_ALLOCATIONLIST *v201; // rdx
  struct DXGTHREAD *Current; // rax
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  _QWORD *v208; // rax
  __int64 v209; // rcx
  _QWORD *v210; // rax
  __int64 v211; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  struct DXGHWQUEUE **v213; // r12
  __int64 v214; // rdx
  int v215; // eax
  __int64 v216; // rdx
  __int64 v217; // rcx
  __int64 v218; // r8
  __int64 v219; // rax
  int v220; // eax
  unsigned int v221; // ecx
  int v222; // eax
  unsigned int v223; // ecx
  __int64 v224; // rax
  struct DXGHWQUEUE **v225; // rax
  __int64 v226; // rax
  char *v227; // rdx
  __int64 v228; // rax
  __int64 v229; // rdx
  _QWORD *v230; // rax
  __int64 v231; // rax
  __int64 v232; // rax
  __int64 v233; // rbx
  struct DXGCONTEXT **v234; // r12
  int v235; // esi
  __int64 v236; // rbx
  __int64 v237; // rax
  UINT64 PresentHistoryToken; // rax
  int v239; // eax
  __int64 v240; // rdx
  __int64 v241; // r8
  __int64 v242; // rax
  __int64 v243; // rax
  __int64 v244; // rax
  __int64 v245; // rbx
  __int64 v246; // rbx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v248; // [rsp+28h] [rbp-F8h]
  struct DXGK_PRESENT_PARAMS *v249; // [rsp+30h] [rbp-F0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v250; // [rsp+38h] [rbp-E8h]
  bool v251; // [rsp+A0h] [rbp-80h]
  char v252; // [rsp+A1h] [rbp-7Fh]
  char v253; // [rsp+A2h] [rbp-7Eh]
  signed int v254; // [rsp+A4h] [rbp-7Ch]
  __int64 v255; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v256; // [rsp+B0h] [rbp-70h]
  struct _D3DKMT_RENDER *v257; // [rsp+B8h] [rbp-68h]
  unsigned __int64 v258; // [rsp+C0h] [rbp-60h] BYREF
  UINT v259; // [rsp+C8h] [rbp-58h] BYREF
  int v260; // [rsp+CCh] [rbp-54h]
  PSLIST_ENTRY ListEntry; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v262; // [rsp+D8h] [rbp-48h]
  COREDEVICEACCESS *v263; // [rsp+E0h] [rbp-40h]
  void *v264; // [rsp+E8h] [rbp-38h] BYREF
  __int64 CurrentIrql; // [rsp+F0h] [rbp-30h]
  struct DXGHWQUEUE **v266; // [rsp+F8h] [rbp-28h]
  _QWORD v267[2]; // [rsp+100h] [rbp-20h] BYREF
  struct _DXGKARG_RENDER Src; // [rsp+110h] [rbp-10h] BYREF
  struct DXGALLOCATION **v269; // [rsp+180h] [rbp+60h]
  struct DXGCONTEXT **v270; // [rsp+188h] [rbp+68h]
  char v271[8]; // [rsp+190h] [rbp+70h] BYREF
  char v272; // [rsp+198h] [rbp+78h]
  __int64 v273; // [rsp+1A8h] [rbp+88h]
  int v274; // [rsp+1B0h] [rbp+90h]
  int v275; // [rsp+1B8h] [rbp+98h] BYREF
  __int64 v276; // [rsp+1C0h] [rbp+A0h]
  char v277; // [rsp+1C8h] [rbp+A8h]
  __int64 v278; // [rsp+1D8h] [rbp+B8h]
  int v279; // [rsp+1E0h] [rbp+C0h]
  int v280; // [rsp+1E8h] [rbp+C8h] BYREF
  __int64 v281; // [rsp+1F0h] [rbp+D0h]
  char v282; // [rsp+1F8h] [rbp+D8h]
  LARGE_INTEGER v283[2]; // [rsp+200h] [rbp+E0h] BYREF
  char *v284; // [rsp+210h] [rbp+F0h] BYREF
  UINT CommandLength; // [rsp+218h] [rbp+F8h]
  int v286; // [rsp+21Ch] [rbp+FCh]
  void *pDmaBuffer; // [rsp+220h] [rbp+100h]
  unsigned __int64 v288; // [rsp+228h] [rbp+108h]
  __int64 DmaSize; // [rsp+230h] [rbp+110h]
  void *pDmaBufferPrivateData; // [rsp+238h] [rbp+118h]
  __int64 DmaBufferPrivateDataSize; // [rsp+240h] [rbp+120h]
  DXGK_ALLOCATIONLIST *pAllocationList; // [rsp+248h] [rbp+128h]
  int v293; // [rsp+250h] [rbp+130h]
  UINT MultipassOffset; // [rsp+254h] [rbp+134h]
  int v295; // [rsp+260h] [rbp+140h]
  unsigned __int64 v296; // [rsp+268h] [rbp+148h]
  _BYTE v297[16]; // [rsp+270h] [rbp+150h] BYREF
  struct DXGADAPTERSTOPRESETLOCKSHARED *v298; // [rsp+280h] [rbp+160h]
  _QWORD v299[2]; // [rsp+290h] [rbp+170h] BYREF
  __int128 v300; // [rsp+2A0h] [rbp+180h]
  __int128 v301; // [rsp+2B0h] [rbp+190h]
  __int128 v302; // [rsp+2C0h] [rbp+1A0h]
  __int128 v303; // [rsp+2D0h] [rbp+1B0h]
  char v304[8]; // [rsp+2E0h] [rbp+1C0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2E8h] [rbp+1C8h] BYREF
  char v306[8]; // [rsp+318h] [rbp+1F8h] BYREF
  struct _KAPC_STATE v307; // [rsp+320h] [rbp+200h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v308; // [rsp+350h] [rbp+230h] BYREF

  v8 = a2;
  v270 = a5;
  v269 = a6;
  v9 = *((_DWORD *)this + 105);
  v298 = a4;
  v263 = a3;
  v257 = a2;
  v266 = a7;
  if ( (v9 & 0x10) != 0 && !a7 )
  {
    v154 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v154 + 24) = 470LL;
    WdLogEvent5_WdError(v154);
    return 3221225473LL;
  }
  if ( (v9 & 8) != 0 )
  {
    v155 = WdLogNewEntry5_WdWarning(a7, a2, a3);
    *(_QWORD *)(v155 + 24) = 477LL;
    WdLogEvent5_WdWarning(v155);
    return 3221225485LL;
  }
  Flags = a2->Flags;
  v11 = (*(_BYTE *)&Flags & 8) << 12;
  v254 = a2->BroadcastContextCount + 1;
  v260 = v11 | 0x100;
  v12 = 1;
  v258 = v11 | 0x100LL;
  if ( (*(_BYTE *)&Flags & 0x10) != 0 )
  {
    v260 = v11 | 0x1A0;
    LODWORD(v258) = v11 | 0x1A0;
    v156 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1u, a3);
    v157 = v156;
    if ( v156 < 0 )
    {
      v158 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v158 + 24) = this;
      *(_QWORD *)(v158 + 32) = v157;
      WdLogEvent5_WdEvent(v158);
      return (unsigned int)v157;
    }
  }
  if ( (*(_DWORD *)&v8->Flags & 0x20) != 0 )
    pNewCommandBuffer = (char *)v8->pNewCommandBuffer;
  else
    pNewCommandBuffer = (char *)*((_QWORD *)this + 7);
  Src.pCommand = &pNewCommandBuffer[v8->CommandOffset];
  Src.CommandLength = v8->CommandLength;
  memset(&Src.CommandLength + 1, 0, 0x64uLL);
  v17 = v258;
  v264 = 0LL;
  v252 = 0;
  v251 = 1;
  v296 = v258;
  while ( 1 )
  {
    v18 = *((_BYTE *)this + 457) == 0;
    v19 = 0LL;
    v255 = 0LL;
    if ( !v18 )
      goto LABEL_17;
    v20 = *((_DWORD *)this + 18);
    if ( v20 <= 3 )
      v20 = 3;
    if ( *((_QWORD *)this + 29) )
      goto LABEL_11;
    v159 = *((_DWORD *)this + 26);
    LODWORD(v250) = v159;
    LODWORD(v249) = v20;
    LOBYTE(Timeout) = 1;
    v160 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, _DWORD, _DWORD, struct DXGK_PRESENT_PARAMS *, struct VIDSCH_SUBMIT_DATA_BASE *, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 440LL))(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
             *((unsigned int *)this + 104),
             *(_QWORD *)(*((_QWORD *)this + 2) + 760LL),
             this,
             (_DWORD)Timeout,
             *((_DWORD *)this + 50),
             v249,
             v250,
             *((_DWORD *)this + 51),
             *((_DWORD *)this + 52));
    *((_QWORD *)this + 29) = v160;
    if ( v160 )
    {
      LODWORD(v23) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                                + 640LL)
                                                                    + 8LL)
                                                        + 448LL))(v160);
      if ( (int)v23 >= 0 )
      {
        v168 = *((_DWORD *)this + 105);
        *((_DWORD *)this + 53) = v20;
        *((_DWORD *)this + 54) = v159;
        if ( (v168 & 0x10) == 0 )
          goto LABEL_232;
        v299[0] = 5LL;
        *((_QWORD *)this + 31) = 0LL;
        v300 = 0LL;
        v301 = 0LL;
        v302 = 0LL;
        v303 = 0LL;
        v299[1] = 0LL;
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v167, v14);
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v271, Global, 0);
        DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v271, v170);
        v171 = *((_QWORD *)this + 2);
        v172 = *((unsigned int *)this + 104);
        v295 = 4;
        v173 = 1 << v172;
        v174 = *(_QWORD *)(v171 + 16);
        v176 = DXGGLOBAL::GetGlobal(v172, v175);
        LOBYTE(v249) = 0;
        SyncObject = DXGGLOBAL::CreateSyncObject(
                       v176,
                       v174,
                       v171,
                       v173,
                       v299,
                       4,
                       (_DWORD)v249,
                       0LL,
                       0LL,
                       (char *)this + 240,
                       0LL,
                       0LL);
        v23 = SyncObject;
        if ( SyncObject >= 0 )
        {
          if ( v272 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v271);
LABEL_232:
          v8 = v257;
LABEL_11:
          v21 = *((_QWORD *)this + 29);
LABEL_12:
          LOBYTE(v14) = 1;
          v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                                                           + 8LL)
                                                                               + 496LL))(
                  v21,
                  v14,
                  0LL,
                  &v255);
          v23 = v22;
          if ( v22 == -1071775486 )
          {
            v14 = (__int64)v263;
            if ( v263 )
            {
              v143 = (char *)v263 + 8;
              if ( !*((_BYTE *)v263 + 32) )
              {
                v181 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v263);
                v181[3] = 275LL;
                v181[4] = 4LL;
                v181[5] = v143;
                v181[6] = 0LL;
                v181[7] = 0LL;
                WdLogEvent5_WdCriticalError(v181);
                v14 = (__int64)v263;
              }
              v144 = (struct _KTHREAD **)*((_QWORD *)v143 + 2);
              v143[24] = 0;
              if ( KeGetCurrentThread() != v144[23] )
              {
                DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v144, *((char **)v143 + 4));
                v14 = (__int64)v263;
              }
              *((_QWORD *)v143 + 4) = 0LL;
              v145 = (COREACCESS *)(v14 + 72);
              if ( *(_BYTE *)(v14 + 144) )
                COREACCESS::Release((COREACCESS *)(v14 + 72));
              v146 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                                                               + 8LL)
                                                                                   + 496LL))(
                       v21,
                       0LL,
                       0LL,
                       &v255);
              v148 = v263;
              LODWORD(v23) = v146;
              if ( *((_BYTE *)v263 + 144) )
              {
                COREACCESS::AcquireShared(v145, 0LL);
                v147 = *(unsigned int *)(*((_QWORD *)v148 + 11) + 200LL);
                if ( (_DWORD)v147 != 1 )
                  goto LABEL_323;
              }
              if ( v143[24] )
              {
                v182 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v147, v14);
                v182[3] = 275LL;
                v182[4] = 4LL;
                v182[5] = v143;
                v182[6] = 0LL;
                v182[7] = 0LL;
                WdLogEvent5_WdCriticalError(v182);
              }
              v149 = *((_QWORD *)v143 + 2);
              if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v149 + 184) )
              {
                if ( !KeReadStateEvent((PRKEVENT)(v149 + 48)) )
                {
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0q_EtwWriteTransfer(v150, &EventBlockThread, v151, 72);
                  KeWaitForSingleObject((PVOID)(*((_QWORD *)v143 + 2) + 48LL), Executive, 0, 0, 0LL);
                }
                DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)v143 + 2), 0LL);
              }
              v143[24] = 1;
              *((_QWORD *)v143 + 4) = 0LL;
              v15 = *(unsigned int *)(*((_QWORD *)v148 + 17) + 576LL);
              if ( (_DWORD)v15 != 1 )
              {
                COREACCESS::Release((COREACCESS *)v143);
                if ( *((_BYTE *)v148 + 144) )
LABEL_323:
                  COREACCESS::Release(v145);
                v226 = WdLogNewEntry5_WdEvent();
                *(_QWORD *)(v226 + 24) = this;
                *(_QWORD *)(v226 + 32) = -1073741130LL;
                WdLogEvent5_WdEvent(v226);
                COREDEVICEACCESS::AcquireSharedUncheck(v148, v227);
                LODWORD(v23) = -1073741130;
LABEL_325:
                v228 = WdLogNewEntry5_WdEvent();
                *(_QWORD *)(v228 + 32) = (int)v23;
                *(_QWORD *)(v228 + 24) = this;
                WdLogEvent5_WdEvent(v228);
LABEL_344:
                v49 = 0;
LABEL_345:
                v235 = v254;
                goto LABEL_346;
              }
              v8 = v257;
            }
          }
          else if ( v22 < 0 )
          {
            v183 = WdLogNewEntry5_WdEvent();
            *(_QWORD *)(v183 + 24) = this;
            *(_QWORD *)(v183 + 32) = v23;
            WdLogEvent5_WdEvent(v183);
          }
          goto LABEL_15;
        }
        v180 = WdLogNewEntry5_WdWarning(v178, v14, v179);
        *(_QWORD *)(v180 + 24) = this;
        *(_QWORD *)(v180 + 32) = v23;
        WdLogEvent5_WdWarning(v180);
        if ( v272 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v271);
      }
    }
    else
    {
      v163 = WdLogNewEntry5_WdWarning(v161, 0LL, v162);
      *(_QWORD *)(v163 + 24) = this;
      *(_QWORD *)(v163 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v163);
      LODWORD(v23) = -1073741801;
    }
    v165 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v165 )
    {
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v165);
      *((_QWORD *)this + 30) = 0LL;
    }
    v21 = *((_QWORD *)this + 29);
    if ( v21 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL)
                                     + 456LL))(*((_QWORD *)this + 29));
      *((_QWORD *)this + 29) = 0LL;
      v21 = 0LL;
    }
    if ( (int)v23 >= 0 )
    {
      v8 = v257;
      goto LABEL_12;
    }
    v166 = WdLogNewEntry5_WdWarning(v165, v14, v164);
    *(_QWORD *)(v166 + 24) = this;
    WdLogEvent5_WdWarning(v166);
    v8 = v257;
LABEL_15:
    if ( (int)v23 < 0 )
      goto LABEL_325;
    v19 = v255;
LABEL_17:
    if ( !bTracingEnabled )
      goto LABEL_21;
    v24 = v8->Flags;
    if ( (*(_BYTE *)&v24 & 0x10) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
      {
        HIDWORD(v250) = 0;
        HIDWORD(v249) = 0;
        McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(v15, v14, v16, 0LL, v19);
      }
    }
    else
    {
      if ( (*(_BYTE *)&v24 & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_21;
        v184 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_21;
        v184 = (const EVENT_DESCRIPTOR *)&EventRender;
      }
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v184, v16, v19);
    }
LABEL_21:
    v25 = *((_QWORD *)this + 2);
    v259 = 0;
    v283[0].QuadPart = 0LL;
    v258 = 0LL;
    v267[0] = 0LL;
    v26 = *(_QWORD *)(v25 + 16);
    v262 = v26;
    ++*(_DWORD *)(v26 + 1268);
    v29 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v26 + 1248));
    if ( !v29 )
    {
      ++*(_DWORD *)(v26 + 1272);
      v29 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v26 + 1296))(
                            *(unsigned int *)(v26 + 1284),
                            *(unsigned int *)(v26 + 1292),
                            *(unsigned int *)(v26 + 1288),
                            v26 + 1248);
    }
    ListEntry = v29;
    if ( !v29 )
    {
      v244 = WdLogNewEntry5_WdLowResource(v28, v27, v30, v31);
      *(_QWORD *)(v244 + 24) = 589LL;
      WdLogEvent5_WdLowResource(v244);
      LODWORD(v23) = -1073741801;
      goto LABEL_343;
    }
    v32 = *(_QWORD *)(v26 + 16);
    if ( *(int *)(v32 + 2328) < 0x2000 )
      v33 = 1;
    else
      v33 = *(_DWORD *)(v32 + 280);
    if ( *(int *)(v32 + 2328) >= 0x2000 || *(_BYTE *)(v32 + 2628) )
      v34 = *(_DWORD *)(v32 + 2536) * ((v33 << 6) + ((8 * v33 + 199) & 0xFFFFFFF8)) + 8 * (v33 + 73);
    else
      v34 = 1288;
    memset(v29, 0, v34);
    v35 = *(_QWORD *)(v262 + 16);
    if ( *(int *)(v35 + 2328) < 0x2000 )
      v36 = 1;
    else
      v36 = *(_DWORD *)(v35 + 280);
    v37 = *(int *)(v35 + 2328) >= 0x2000 || *(_BYTE *)(v35 + 2628);
    v38 = *(_DWORD *)(v35 + 2536);
    *((_BYTE *)&v29[21].Next + 12) = v37;
    if ( v37 )
    {
      v39 = 8 * v36;
      LODWORD(v29[36].Next) = v36;
      v40 = v36 << 6;
      *((_DWORD *)&v29[35].Next + 3) = v38;
      HIDWORD(v29[36].Next) = v38 * (v40 + ((v39 + 199) & 0xFFFFFFF8)) + 16;
      v41 = v38 * (v40 + ((v39 + 199) & 0xFFFFFFF8)) + 584;
      *((_DWORD *)&v29[33].Next + 2) = v41;
      *((_DWORD *)&v29[33].Next + 3) = v39 + v41;
    }
    if ( (*((_DWORD *)this + 56) & 1) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2624LL) & 2) != 0 )
    {
      v42 = v8->Flags;
      if ( (*(_BYTE *)&v42 & 0x20) == 0 )
      {
        LODWORD(v23) = 0;
        v49 = 0;
        goto LABEL_43;
      }
    }
    else
    {
      v42 = v8->Flags;
    }
    v43 = &v258;
    if ( !*((_BYTE *)this + 454) )
      v43 = 0LL;
    if ( (*(_BYTE *)&v42 & 0x20) != 0 )
      pNewAllocationList = v8->pNewAllocationList;
    else
      pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)this + 11);
    LODWORD(Timeout) = v254;
    v45 = (*(__int64 (__fastcall **)(__int64, D3DDDI_ALLOCATIONLIST *, _QWORD, _QWORD, PLARGE_INTEGER, UINT *, LARGE_INTEGER *, unsigned __int64 *, _QWORD *, PSLIST_ENTRY, struct DXGALLOCATION **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 576LL))(
            v255,
            pNewAllocationList,
            v8->AllocationCount,
            v12,
            Timeout,
            &v259,
            v283,
            v43,
            v267,
            v29 + 12,
            v269);
    v23 = v45;
    if ( v45 < 0 )
    {
      v243 = WdLogNewEntry5_WdWarning(v47, v46, v48);
      *(_QWORD *)(v243 + 24) = this;
      *(_QWORD *)(v243 + 32) = v23;
      WdLogEvent5_WdWarning(v243);
LABEL_343:
      CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
      goto LABEL_344;
    }
    v49 = 1;
LABEL_43:
    v253 = v49;
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                         + 8LL)
                                             + 512LL))(
      v255,
      &v264);
    Src.pDmaBuffer = v264;
    Src.DmaSize = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                             + 640LL)
                                                                 + 8LL)
                                                     + 536LL))(v255);
    Src.pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                                                       + 8LL)
                                                                           + 568LL))(v255);
    Src.DmaBufferPrivateDataSize = *((_DWORD *)this + 52);
    if ( v252 )
    {
      v185 = DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v266, v258);
      v23 = v185;
      if ( v185 == -1071775743 )
      {
        v230 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v187, v186);
        v230[3] = 275LL;
        v230[4] = 40LL;
        v230[5] = this;
        v230[6] = 0LL;
        v230[7] = 0LL;
        WdLogEvent5_WdCriticalError(v230);
LABEL_327:
        v231 = WdLogNewEntry5_WdWarning(v187, v186, v188);
        *(_QWORD *)(v231 + 24) = this;
        *(_QWORD *)(v231 + 32) = v23;
        WdLogEvent5_WdWarning(v231);
        CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
        goto LABEL_345;
      }
      if ( v185 < 0 )
        goto LABEL_327;
      v252 = 0;
    }
    if ( !v251 )
      goto LABEL_103;
    if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) || (*(_DWORD *)&v8->Flags & 0x20) != 0 )
    {
      Src.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                                                                  + 8LL)
                                                                                      + 560LL))(v255);
      Src.AllocationListSize = v8->AllocationCount;
      Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 15);
      Src.PatchLocationListInSize = v8->PatchLocationCount;
      Src.pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL)
                                                                                                 + 552LL))(v255);
      Src.PatchLocationListOutSize = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 640LL)
                                                                                    + 8LL)
                                                                        + 544LL))(v255);
      v51 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v52 = *(struct DXGADAPTER **)(v51 + 16);
      v54 = DXGGLOBAL::GetGlobal(v51, v53);
      if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)v54 + 1548), v52) )
      {
        memmove(*((void **)this + 8), Src.pCommand, *((_QWORD *)this + 6));
        v189 = *((_QWORD *)this + 14);
        v190 = (void *)*((_QWORD *)this + 16);
        Src.pCommand = (const void *)*((_QWORD *)this + 8);
        memmove(v190, Src.pPatchLocationListIn, v189);
        Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 16);
      }
      AllocationListSize = Src.AllocationListSize;
      LODWORD(v23) = 0;
    }
    else
    {
      LODWORD(v23) = 0;
      AllocationListSize = 0LL;
      Src.pAllocationList = 0LL;
      Src.AllocationListSize = 0;
      Src.pPatchLocationListIn = 0LL;
      Src.PatchLocationListInSize = 0;
      Src.pPatchLocationListOut = 0LL;
      Src.PatchLocationListOutSize = 0;
    }
    Src.DmaBufferSegmentId = v259;
    Src.DmaBufferPhysicalAddress = v283[0];
    if ( (*(_DWORD *)&v8->Flags & 0x20) != 0 )
    {
      if ( *((_BYTE *)this + 454) )
      {
        v284 = (char *)v8->pNewCommandBuffer + v8->CommandOffset;
        CommandLength = v8->CommandLength;
        v293 = AllocationListSize;
        v286 = 0;
        pDmaBuffer = Src.pDmaBuffer;
        DmaSize = Src.DmaSize;
        pDmaBufferPrivateData = Src.pDmaBufferPrivateData;
        DmaBufferPrivateDataSize = Src.DmaBufferPrivateDataSize;
        pAllocationList = Src.pAllocationList;
        MultipassOffset = Src.MultipassOffset;
        v288 = v258;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v248) = AllocationListSize;
            McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &RenderGdi, v50, this, v258, v248);
            AllocationListSize = Src.AllocationListSize;
          }
          v56 = 0;
          if ( (_DWORD)AllocationListSize )
          {
            v57 = v269;
            do
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                v201 = &Src.pAllocationList[v56];
                LODWORD(v248) = *(_DWORD *)&v201->8 & 1;
                McTemplateK0ppqx_EtwWriteTransfer(
                  (REGHANDLE *)&DxgkControlGuid_Context,
                  (__int64)v201,
                  v50,
                  v57[v56],
                  v201->hDeviceSpecificAllocation,
                  v248,
                  v201->PhysicalAddress.QuadPart);
                AllocationListSize = Src.AllocationListSize;
              }
              ++v56;
            }
            while ( v56 < (unsigned int)AllocationListSize );
            v17 = v296;
          }
        }
        v256 = *((_QWORD *)this + 23);
        v58 = *((_QWORD *)this + 2);
        v280 = -1;
        v281 = 0LL;
        v59 = *(_QWORD *)(v58 + 16);
        if ( (qword_1C00B09B0 & 2) != 0 )
        {
          v282 = 1;
          v280 = 5066;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(AllocationListSize, &EventProfilerEnter, v50, 5066);
        }
        else
        {
          v282 = 0;
        }
        DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v280, 5066LL);
        CurrentProcess = PsGetCurrentProcess();
        ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
        v63 = ProcessDxgProcess;
        if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
          && (Current = DXGTHREAD::GetCurrent()) != 0LL
          && (v64 = *((_QWORD *)Current + 1)) != 0
          || (v64 = v63) != 0 )
        {
          v65 = v64 + 112;
          v66 = 0;
        }
        else
        {
          v66 = 0;
          v65 = 0LL;
        }
        v278 = v65;
        v279 = 0;
        if ( v65 && *(struct _KTHREAD **)(v65 + 8) == KeGetCurrentThread() )
        {
          v203 = WdLogNewEntry5_WdAssertion(v65, v62);
          *(_QWORD *)(v203 + 24) = 1571LL;
          WdLogEvent5_WdAssertion(v203);
        }
        if ( v64 )
        {
          v67 = v278;
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v67, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v153 = *(_DWORD *)(v67 + 24);
              if ( v153 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q_EtwWriteTransfer(v68, &EventBlockThread, v69, v153);
            }
            ExAcquirePushLockExclusiveEx(v67, 0LL);
          }
          *(_QWORD *)(v67 + 8) = KeGetCurrentThread();
          v279 = 2;
        }
        DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v59 + 16), 1);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v59 + 16) + 4364LL));
        CurrentIrql = KeGetCurrentIrql();
        ThreadProperty = 0LL;
        if ( (unsigned __int8)CurrentIrql < 2u )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v204 = WdLogNewEntry5_WdAssertion(v71, v70);
            *(_QWORD *)(v204 + 24) = 507LL;
            WdLogEvent5_WdAssertion(v204);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          v75 = PsGetCurrentProcess();
          v76 = PsGetProcessDxgProcess(v75);
          if ( CurrentProcessSessionId )
          {
            if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
            {
              if ( v76 )
              {
                v77 = *(void **)(v76 + 88);
                if ( v77 )
                {
                  if ( v77 != &gDxgkWin32kEngInterface )
                  {
                    if ( !(unsigned __int8)KeIsAttachedProcess()
                      || (v205 = PsGetCurrentProcess(),
                          ProcessSessionId = PsGetProcessSessionIdEx(v205),
                          CurrentThreadProcess = PsGetCurrentThreadProcess(),
                          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
                    {
                      ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
                      if ( ThreadWin32Thread )
                      {
                        if ( *(_QWORD *)ThreadWin32Thread )
                        {
                          ThreadProperty = *(struct DXGTHREAD **)(*(_QWORD *)ThreadWin32Thread + 80LL);
                          goto LABEL_84;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          ThreadProperty = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
          if ( ThreadProperty || (ThreadProperty = DxgkThreadObjectCreateDxgThread()) != 0LL )
          {
            ObfDereferenceObject(ThreadProperty);
LABEL_84:
            if ( ThreadProperty )
              v66 = *((_DWORD *)ThreadProperty + 8);
            else
              v66 = 0;
          }
          else
          {
            v66 = 0;
            ThreadProperty = 0LL;
          }
        }
        DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
          (DXGVALIDATIONPROCESSATTACH *)v306,
          *(struct DXGADAPTER **)(v59 + 16));
        v23 = (*(int (__fastcall **)(__int64, char **))(*(_QWORD *)(v59 + 16) + 832LL))(v256, &v284);
        if ( v306[0] )
          KeUnstackDetachProcess(&v307);
        if ( (_BYTE)CurrentIrql != KeGetCurrentIrql() )
        {
          v208 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v80, v79);
          v209 = (unsigned __int8)CurrentIrql;
          v208[3] = 275LL;
          v208[4] = 16LL;
          v208[5] = v59;
          v208[6] = v209;
          LOBYTE(v209) = KeGetCurrentIrql();
          v208[7] = (unsigned __int8)v209;
          WdLogEvent5_WdCriticalError(v208);
        }
        if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v66 )
        {
          v210 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v80, v79);
          v210[3] = 275LL;
          v210[4] = 38LL;
          v210[5] = *((int *)ThreadProperty + 8);
          v210[6] = v66;
          v210[7] = 0LL;
          WdLogEvent5_WdCriticalError(v210);
        }
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v59 + 16) + 4364LL));
        v83 = (_QWORD *)WdLogNewEntry5_WdTrace(v80, v79, v81, v82);
        v85 = v256;
        v83[3] = v23;
        v83[4] = v85;
        v83[5] = pDmaBuffer;
        v83[6] = (unsigned int)DmaSize;
        v86 = pAllocationList;
        v83[7] = pAllocationList;
        if ( (_DWORD)v23
          && (_DWORD)v23 != -1071775743
          && (_DWORD)v23 != -1073741816
          && (_DWORD)v23 != -1073741811
          && (_DWORD)v23 != -1073741801
          && (_DWORD)v23 != -1073741592
          && (_DWORD)v23 != -1071775232 )
        {
          v211 = WdLogNewEntry5_WdError(v86, v84);
          *(_QWORD *)(v211 + 24) = v23;
          WdLogEvent5_WdError(v211);
        }
        DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v59 + 16));
        if ( v279 == 1 )
        {
          v279 = 0;
          ExReleasePushLockSharedEx(v278, 0LL);
LABEL_97:
          KeLeaveCriticalRegion();
        }
        else if ( v279 == 2 )
        {
          v88 = v278;
          v279 = 0;
          *(_QWORD *)(v278 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v88, 0LL);
          goto LABEL_97;
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v280, v87);
        if ( v282 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v90, &EventProfilerExit, v91, v280);
        Src.pDmaBuffer = pDmaBuffer;
        Src.pDmaBufferPrivateData = pDmaBufferPrivateData;
        Src.MultipassOffset = MultipassOffset;
        if ( (*((_DWORD *)this + 105) & 0x10) != 0 )
        {
          Src.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
          Src.DmaSize = DmaSize;
        }
      }
      else
      {
        LODWORD(v23) = ADAPTER_RENDER::DdiRenderKm(
                         *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                         *((void **)this + 23),
                         &Src);
      }
LABEL_101:
      if ( (int)(v23 + 0x80000000) >= 0 && (_DWORD)v23 != -1071775743 )
      {
        v232 = WdLogNewEntry5_WdWarning(0x80000000LL, v89, v91);
        *(_QWORD *)(v232 + 32) = (int)v23;
LABEL_328:
        *(_QWORD *)(v232 + 24) = this;
        WdLogEvent5_WdWarning(v232);
        CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
        v49 = v253;
        goto LABEL_345;
      }
      goto LABEL_102;
    }
    if ( (*((_DWORD *)this + 56) & 1) == 0
      || (AllocationListSize = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2624LL),
          (AllocationListSize & 4) == 0) )
    {
      CurrentIrql = *((_QWORD *)this + 23);
      v110 = *((_QWORD *)this + 2);
      v275 = -1;
      v276 = 0LL;
      v111 = *(_QWORD *)(v110 + 16);
      if ( (qword_1C00B09B0 & 2) != 0 )
      {
        v277 = 1;
        v275 = 5030;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(AllocationListSize, &EventProfilerEnter, v50, 5030);
      }
      else
      {
        v277 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v275, 5030LL);
      v112 = PsGetCurrentProcess();
      v113 = PsGetProcessDxgProcess(v112);
      v115 = v113;
      if ( (!v113 || (*(_BYTE *)(v113 + 347) & 0x10) != 0)
        && (v191 = DXGTHREAD::GetCurrent()) != 0LL
        && (v116 = *((_QWORD *)v191 + 1)) != 0
        || (v116 = v115) != 0 )
      {
        v117 = v116 + 112;
        v118 = 0;
      }
      else
      {
        v118 = 0;
        v117 = 0LL;
      }
      v273 = v117;
      v274 = 0;
      if ( v117 && *(struct _KTHREAD **)(v117 + 8) == KeGetCurrentThread() )
      {
        v192 = WdLogNewEntry5_WdAssertion(v117, v114);
        *(_QWORD *)(v192 + 24) = 1571LL;
        WdLogEvent5_WdAssertion(v192);
      }
      if ( v116 )
      {
        v119 = v273;
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v119, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v152 = *(_DWORD *)(v119 + 24);
            if ( v152 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v117, &EventBlockThread, v120, v152);
          }
          ExAcquirePushLockExclusiveEx(v119, 0LL);
        }
        *(_QWORD *)(v119 + 8) = KeGetCurrentThread();
        v274 = 2;
      }
      v121 = *(struct DXGADAPTER **)(v111 + 16);
      v122 = DXGGLOBAL::GetGlobal(v117, v114);
      if ( *((_BYTE *)v122 + 1553)
        && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)v122 + 1548), v121) )
      {
        LODWORD(v23) = -1073741637;
LABEL_180:
        if ( v274 == 1 )
        {
          v274 = 0;
          ExReleasePushLockSharedEx(v273, 0LL);
LABEL_183:
          KeLeaveCriticalRegion();
        }
        else if ( v274 == 2 )
        {
          v141 = v273;
          v274 = 0;
          *(_QWORD *)(v273 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v141, 0LL);
          goto LABEL_183;
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v275, v140);
        if ( v277 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v142, &EventProfilerExit, v91, v275);
        goto LABEL_101;
      }
      DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v111 + 16), 1);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v111 + 16) + 4364LL));
      v256 = KeGetCurrentIrql();
      DxgThread = 0LL;
      if ( (unsigned __int8)v256 < 2u )
      {
        v126 = KeGetCurrentThread();
        if ( !v126 )
        {
          v193 = WdLogNewEntry5_WdAssertion(v124, v123);
          *(_QWORD *)(v193 + 24) = 507LL;
          WdLogEvent5_WdAssertion(v193);
        }
        v127 = PsGetCurrentProcessSessionId();
        v128 = PsGetCurrentProcess();
        v129 = PsGetProcessDxgProcess(v128);
        if ( v127
          && (unsigned int)PsGetThreadSessionId(v126) == v127
          && v129
          && (v130 = *(void **)(v129 + 88)) != 0LL
          && v130 != &gDxgkWin32kEngInterface
          && (!(unsigned __int8)KeIsAttachedProcess()
           || (v194 = PsGetCurrentProcess(),
               v195 = PsGetProcessSessionIdEx(v194),
               v196 = PsGetCurrentThreadProcess(),
               v195 == (unsigned int)PsGetProcessSessionIdEx(v196)))
          && (v131 = PsGetThreadWin32Thread(v126)) != 0
          && *(_QWORD *)v131 )
        {
          DxgThread = *(struct DXGTHREAD **)(*(_QWORD *)v131 + 80LL);
LABEL_169:
          if ( DxgThread )
            v118 = *((_DWORD *)DxgThread + 8);
          else
            v118 = 0;
        }
        else
        {
          DxgThread = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
          if ( DxgThread || (DxgThread = DxgkThreadObjectCreateDxgThread()) != 0LL )
          {
            ObfDereferenceObject(DxgThread);
            goto LABEL_169;
          }
          v118 = 0;
          DxgThread = 0LL;
        }
      }
      DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
        (DXGVALIDATIONPROCESSATTACH *)v304,
        *(struct DXGADAPTER **)(v111 + 16));
      v23 = (*(int (__fastcall **)(__int64, struct _DXGKARG_RENDER *))(*(_QWORD *)(v111 + 16) + 640LL))(
              CurrentIrql,
              &Src);
      if ( v304[0] )
        KeUnstackDetachProcess(&ApcState);
      if ( (_BYTE)v256 != KeGetCurrentIrql() )
      {
        v197 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v133, v132);
        v198 = (unsigned __int8)v256;
        v197[3] = 275LL;
        v197[4] = 16LL;
        v197[5] = v111;
        v197[6] = v198;
        LOBYTE(v198) = KeGetCurrentIrql();
        v197[7] = (unsigned __int8)v198;
        WdLogEvent5_WdCriticalError(v197);
      }
      if ( DxgThread && *((_DWORD *)DxgThread + 8) != v118 )
      {
        v199 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v133, v132);
        v199[3] = 275LL;
        v199[4] = 38LL;
        v199[5] = *((int *)DxgThread + 8);
        v199[6] = v118;
        v199[7] = 0LL;
        WdLogEvent5_WdCriticalError(v199);
      }
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v111 + 16) + 4364LL));
      v136 = (_QWORD *)WdLogNewEntry5_WdTrace(v133, v132, v134, v135);
      v138 = CurrentIrql;
      v136[3] = v23;
      v136[4] = v138;
      v136[5] = Src.pDmaBuffer;
      v136[6] = Src.DmaSize;
      v139 = Src.pAllocationList;
      v136[7] = Src.pAllocationList;
      if ( (_DWORD)v23 )
      {
        if ( (int)v23 > -1073741674 )
        {
          if ( (_DWORD)v23 == -1073741592 || (_DWORD)v23 == -1071775743 || (_DWORD)v23 == -1071775232 )
            goto LABEL_179;
        }
        else if ( (_DWORD)v23 == -1073741674
               || (_DWORD)v23 == -1073741816
               || (_DWORD)v23 == -1073741811
               || (_DWORD)v23 == -1073741801
               || (_DWORD)v23 == -1073741795 )
        {
          goto LABEL_179;
        }
        v200 = WdLogNewEntry5_WdError(v139, v137);
        *(_QWORD *)(v200 + 24) = v23;
        WdLogEvent5_WdError(v200);
      }
LABEL_179:
      DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v111 + 16));
      goto LABEL_180;
    }
LABEL_102:
    v92 = (_DWORD)v23 == -1071775743;
    v251 = v92;
    if ( (*((_DWORD *)this + 105) & 0x10) != 0 )
    {
      if ( *((_QWORD *)this + 31) )
      {
        v213 = v266;
      }
      else
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX(
          (DXGAUTOMUTEX *)v297,
          (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 30) + 32LL) + 32LL),
          0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v297);
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *(DXGSYNCOBJECT **)(*((_QWORD *)this + 30) + 32LL),
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 30) + 16LL) + 16LL));
        v213 = v266;
        (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL)
                                                                                         + 8LL)
                                                                             + 272LL))(
          *((_QWORD *)*v266 + 5),
          VidSchSyncObject,
          0LL);
        if ( v297[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v297, v214);
      }
      ++*((_QWORD *)this + 31);
      v251 = (_DWORD)v23 == -1071775743;
      if ( !*((_BYTE *)this + 312) )
      {
        v215 = DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v213, v258);
        v23 = v215;
        v251 = v92;
        if ( v215 == -1071775743 )
        {
          v252 = 1;
        }
        else if ( v215 < 0 )
        {
          v232 = WdLogNewEntry5_WdWarning(v217, v216, v218);
          *(_QWORD *)(v232 + 32) = v23;
          goto LABEL_328;
        }
      }
    }
LABEL_103:
    LODWORD(v93) = 0;
    AllocationCount = 0;
    v95 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                         + 8LL)
                                             + 568LL))(v255);
    v96 = LODWORD(Src.pDmaBufferPrivateData) - v95;
    LODWORD(v256) = LODWORD(Src.pDmaBuffer) - (_DWORD)v264;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL)
                                    + 520LL))(v255);
    v264 = 0LL;
    if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) )
    {
      v98 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 640LL)
                                                           + 8LL)
                                               + 552LL))(v255);
      v14 = (unsigned __int128)(((__int128)Src.pPatchLocationListOut - v98) * 0x2AAAAAAAAAAAAAABLL) >> 64;
      v93 = ((__int64)Src.pPatchLocationListOut - v98) / 24;
      AllocationCount = v257->AllocationCount;
      if ( (qword_1C00B09B0 & 0x10) != 0 )
      {
        v219 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 640LL)
                                                              + 8LL)
                                                  + 552LL))(v255);
        TraceDxgkPatchLocationList((__int64)this, v255, v93, v219);
      }
      v97 = 0;
    }
    v29->Next = (struct _SLIST_ENTRY *)v17;
    if ( *((_BYTE *)this + 454) )
    {
      LODWORD(v29->Next) |= 0x8000000u;
      *((_QWORD *)&v29[2].Next + 1) = v258;
    }
    if ( (v260 & 0x20) != 0 )
    {
      if ( v251 || (v220 = v97, v252) )
        v220 = 64;
      v16 = (unsigned int)v254;
      v221 = v220 | (__int64)v29->Next & 0xFFFFFFBF;
      v222 = 2048;
      v223 = v221 & 0xFFFFFBFF;
      if ( v254 > 1 )
        v222 = 3072;
      LODWORD(v29->Next) = v222 | v223;
      v14 = *((_QWORD *)this + 2);
      if ( *(_QWORD *)(v14 + 1848) != *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) )
        HIDWORD(v29[7].Next) = v97;
    }
    else
    {
      v16 = (unsigned int)v254;
    }
    v99 = v255;
    HIDWORD(v29[4].Next) = v93;
    *((_QWORD *)&v29->Next + 1) = v99;
    HIDWORD(v29[3].Next) = v256;
    LODWORD(v29[4].Next) = 0;
    *((_DWORD *)&v29[4].Next + 2) = 0;
    LODWORD(v29[3].Next) = v97;
    *((_DWORD *)&v29[3].Next + 3) = AllocationCount;
    *((_DWORD *)&v29[3].Next + 2) = v97;
    *((_DWORD *)&v29[4].Next + 3) = v96;
    if ( v267[0] )
    {
      v100 = 1;
      v15 = (__int64)v267;
    }
    else
    {
      v100 = 0;
      v15 = 0LL;
    }
    v29[21].Next = (struct _SLIST_ENTRY *)v15;
    v101 = 0;
    *((_DWORD *)&v29[21].Next + 2) = v100;
    if ( (int)v16 > 0 )
      break;
LABEL_121:
    v106 = ListEntry;
    v12 = 0;
    v255 = 0LL;
    if ( ListEntry )
    {
      v107 = v262 + 1248;
      v108 = (union _SLIST_HEADER *)(v262 + 1248);
      ++*(_DWORD *)(v262 + 1276);
      if ( ExQueryDepthSList(v108) >= *(_WORD *)(v107 + 16) )
      {
        ++*(_DWORD *)(v107 + 32);
        (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v107 + 56))(v106, v107);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v107, v106);
      }
    }
    if ( !v252 && !v251 )
    {
      if ( (*(_DWORD *)&v257->Flags & 0x10) != 0 )
      {
        memset(&v308, 0, sizeof(v308));
        PresentHistoryToken = v257->PresentHistoryToken;
        v308.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
        v308.Token.Flip.FenceValue = PresentHistoryToken;
        v239 = SubmitPresentHistoryToken(&v308, v263, v298, 0LL, 0, 0LL, 0LL, 0LL, this, 0LL, 0LL);
        v23 = v239;
        if ( (int)(v239 + 0x80000000) >= 0 && v239 != -1073741130 )
        {
          v242 = WdLogNewEntry5_WdWarning(0x80000000LL, v240, v241);
          *(_QWORD *)(v242 + 24) = this;
          *(_QWORD *)(v242 + 32) = v23;
          WdLogEvent5_WdWarning(v242);
          LODWORD(v23) = 0;
        }
      }
      return (unsigned int)v23;
    }
    v8 = v257;
  }
  v102 = v270;
  while ( 1 )
  {
    v103 = *v102;
    if ( *((struct _KTHREAD **)*v102 + 59) != KeGetCurrentThread() )
    {
      v224 = WdLogNewEntry5_WdAssertion(v103, v14);
      *(_QWORD *)(v224 + 24) = 924LL;
      WdLogEvent5_WdAssertion(v224);
      v103 = *v102;
    }
    if ( (*((_DWORD *)v103 + 105) & 0x10) != 0 )
    {
      v29[30].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 31);
      *((_DWORD *)&v29[30].Next + 2) = 0;
      *((_QWORD *)&v29[31].Next + 1) = *(_QWORD *)(*((_QWORD *)this + 30) + 64LL);
      v225 = v266;
      v29[31].Next = *(struct _SLIST_ENTRY **)(*((_QWORD *)this + 30) + 48LL);
      v104 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 616LL)
                                                                         + 8LL)
                                                             + 432LL))(
               *((_QWORD *)*v225 + 5),
               v29);
    }
    else
    {
      v104 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 616LL)
                                                                         + 8LL)
                                                             + 424LL))(
               *((_QWORD *)v103 + 34),
               v29);
    }
    LODWORD(v256) = v104;
    v105 = v104;
    if ( v104 < 0 )
      break;
    LODWORD(v29->Next) &= ~0x800u;
    ++v101;
    ++v102;
    if ( v101 >= v254 )
      goto LABEL_121;
  }
  if ( (*((_DWORD *)this + 105) & 0x10) == 0 )
  {
    v233 = v101;
    if ( v101 >= 0 )
    {
      v234 = v270;
      do
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 616LL)
                                                           + 8LL)
                                               + 440LL))(
          *((_QWORD *)v234[v233--] + 34),
          0LL);
      while ( v233 >= 0 );
      v105 = v256;
    }
  }
  v235 = v254;
  if ( v101 < v254 )
  {
    v236 = (unsigned int)(v254 - v101);
    do
    {
      LOBYTE(v14) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 640LL)
                                                           + 8LL)
                                               + 584LL))(
        v255,
        v14);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                          + 8LL)
                                              + 504LL))(
        v255,
        0LL);
      --v236;
    }
    while ( v236 );
  }
  v49 = 0;
  v255 = 0LL;
  v237 = WdLogNewEntry5_WdWarning(v15, v14, v16);
  *(_QWORD *)(v237 + 32) = v105;
  *(_QWORD *)(v237 + 24) = this;
  WdLogEvent5_WdWarning(v237);
  CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
LABEL_346:
  if ( !v255 )
    return (unsigned int)v23;
  if ( v264 )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 520LL))();
  if ( v49 )
  {
    if ( v235 <= 0 )
      return (unsigned int)v23;
    v245 = (unsigned int)v235;
    do
    {
      LOBYTE(v229) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 640LL)
                                                           + 8LL)
                                               + 584LL))(
        v255,
        v229);
      --v245;
    }
    while ( v245 );
  }
  if ( v235 > 0 )
  {
    v246 = (unsigned int)v235;
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                          + 8LL)
                                              + 504LL))(
        v255,
        0LL);
      --v246;
    }
    while ( v246 );
  }
  return (unsigned int)v23;
}
