/*
 * XREFs of ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00F57B0
 * Callers:
 *     DxgkRender @ 0x1C00F2C60 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00F4170 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025AFC4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0008268 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000A3E0 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ @ 0x1C000A40C (-DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000A490 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000A550 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000A5F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000A8F8 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EC34 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000EC88 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0038290 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C0040198 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     TraceDxgkPatchLocationList @ 0x1C0042DF8 (TraceDxgkPatchLocationList.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1C00466E8 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0ppqx_EtwWriteTransfer @ 0x1C00471A8 (McTemplateK0ppqx_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD5D0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01083E0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01120E0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C011AE94 (-DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C011BAB0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0147070 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0149520 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1C028AE9C (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
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
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rbx
  __int64 v160; // rax
  int v161; // r15d
  __int64 v162; // rax
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // rax
  __int64 v166; // r8
  DXGDEVICESYNCOBJECT *v167; // rcx
  __int64 v168; // rax
  __int64 v169; // rcx
  int v170; // eax
  PERESOURCE *Global; // rax
  __int64 v172; // rdx
  __int64 v173; // r14
  __int64 v174; // rcx
  unsigned int v175; // esi
  __int64 v176; // r15
  __int64 v177; // rdx
  struct DXGGLOBAL *v178; // rax
  int SyncObject; // eax
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // rax
  _QWORD *v183; // rax
  _QWORD *v184; // rax
  __int64 v185; // rax
  const EVENT_DESCRIPTOR *v186; // rdx
  int v187; // eax
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // r8
  size_t v191; // r8
  void *v192; // rcx
  struct DXGTHREAD *v193; // rax
  __int64 v194; // rax
  __int64 v195; // rax
  __int64 v196; // rax
  int v197; // edi
  __int64 v198; // rax
  _QWORD *v199; // rax
  __int64 v200; // rcx
  _QWORD *v201; // rax
  __int64 v202; // rax
  DXGK_ALLOCATIONLIST *v203; // rdx
  struct DXGTHREAD *Current; // rax
  __int64 v205; // rax
  __int64 v206; // rax
  __int64 v207; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  _QWORD *v210; // rax
  __int64 v211; // rcx
  _QWORD *v212; // rax
  __int64 v213; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  struct DXGHWQUEUE **v215; // r12
  __int64 v216; // rdx
  int v217; // eax
  __int64 v218; // rdx
  __int64 v219; // rcx
  __int64 v220; // r8
  __int64 v221; // rax
  int v222; // eax
  unsigned int v223; // ecx
  int v224; // eax
  unsigned int v225; // ecx
  __int64 v226; // rax
  struct DXGHWQUEUE **v227; // rax
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // rax
  char *v231; // rdx
  __int64 v232; // rax
  __int64 v233; // rdx
  _QWORD *v234; // rax
  __int64 v235; // rax
  __int64 v236; // rax
  __int64 v237; // rbx
  struct DXGCONTEXT **v238; // r12
  int v239; // esi
  __int64 v240; // rbx
  __int64 v241; // rax
  UINT64 PresentHistoryToken; // rax
  int v243; // eax
  __int64 v244; // rdx
  __int64 v245; // r8
  __int64 v246; // rax
  __int64 v247; // rax
  __int64 v248; // rax
  __int64 v249; // rbx
  __int64 v250; // rbx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v252; // [rsp+28h] [rbp-F8h]
  struct DXGK_PRESENT_PARAMS *v253; // [rsp+30h] [rbp-F0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v254; // [rsp+38h] [rbp-E8h]
  bool v255; // [rsp+A0h] [rbp-80h]
  char v256; // [rsp+A1h] [rbp-7Fh]
  char v257; // [rsp+A2h] [rbp-7Eh]
  signed int v258; // [rsp+A4h] [rbp-7Ch]
  __int64 v259; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v260; // [rsp+B0h] [rbp-70h]
  struct _D3DKMT_RENDER *v261; // [rsp+B8h] [rbp-68h]
  unsigned __int64 v262; // [rsp+C0h] [rbp-60h] BYREF
  UINT v263; // [rsp+C8h] [rbp-58h] BYREF
  int v264; // [rsp+CCh] [rbp-54h]
  PSLIST_ENTRY ListEntry; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v266; // [rsp+D8h] [rbp-48h]
  COREDEVICEACCESS *v267; // [rsp+E0h] [rbp-40h]
  void *v268; // [rsp+E8h] [rbp-38h] BYREF
  __int64 CurrentIrql; // [rsp+F0h] [rbp-30h]
  struct DXGHWQUEUE **v270; // [rsp+F8h] [rbp-28h]
  _QWORD v271[2]; // [rsp+100h] [rbp-20h] BYREF
  struct _DXGKARG_RENDER Src; // [rsp+110h] [rbp-10h] BYREF
  struct DXGALLOCATION **v273; // [rsp+180h] [rbp+60h]
  struct DXGCONTEXT **v274; // [rsp+188h] [rbp+68h]
  char v275[8]; // [rsp+190h] [rbp+70h] BYREF
  char v276; // [rsp+198h] [rbp+78h]
  __int64 v277; // [rsp+1A8h] [rbp+88h]
  int v278; // [rsp+1B0h] [rbp+90h]
  int v279; // [rsp+1B8h] [rbp+98h] BYREF
  __int64 v280; // [rsp+1C0h] [rbp+A0h]
  char v281; // [rsp+1C8h] [rbp+A8h]
  __int64 v282; // [rsp+1D8h] [rbp+B8h]
  int v283; // [rsp+1E0h] [rbp+C0h]
  int v284; // [rsp+1E8h] [rbp+C8h] BYREF
  __int64 v285; // [rsp+1F0h] [rbp+D0h]
  char v286; // [rsp+1F8h] [rbp+D8h]
  LARGE_INTEGER v287[2]; // [rsp+200h] [rbp+E0h] BYREF
  char *v288; // [rsp+210h] [rbp+F0h] BYREF
  UINT CommandLength; // [rsp+218h] [rbp+F8h]
  int v290; // [rsp+21Ch] [rbp+FCh]
  void *pDmaBuffer; // [rsp+220h] [rbp+100h]
  unsigned __int64 v292; // [rsp+228h] [rbp+108h]
  __int64 DmaSize; // [rsp+230h] [rbp+110h]
  void *pDmaBufferPrivateData; // [rsp+238h] [rbp+118h]
  __int64 DmaBufferPrivateDataSize; // [rsp+240h] [rbp+120h]
  DXGK_ALLOCATIONLIST *pAllocationList; // [rsp+248h] [rbp+128h]
  int v297; // [rsp+250h] [rbp+130h]
  UINT MultipassOffset; // [rsp+254h] [rbp+134h]
  int v299; // [rsp+260h] [rbp+140h]
  unsigned __int64 v300; // [rsp+268h] [rbp+148h]
  _BYTE v301[16]; // [rsp+270h] [rbp+150h] BYREF
  struct DXGADAPTERSTOPRESETLOCKSHARED *v302; // [rsp+280h] [rbp+160h]
  _QWORD v303[2]; // [rsp+290h] [rbp+170h] BYREF
  __int128 v304; // [rsp+2A0h] [rbp+180h]
  __int128 v305; // [rsp+2B0h] [rbp+190h]
  __int128 v306; // [rsp+2C0h] [rbp+1A0h]
  __int128 v307; // [rsp+2D0h] [rbp+1B0h]
  char v308[8]; // [rsp+2E0h] [rbp+1C0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2E8h] [rbp+1C8h] BYREF
  char v310[8]; // [rsp+318h] [rbp+1F8h] BYREF
  struct _KAPC_STATE v311; // [rsp+320h] [rbp+200h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v312; // [rsp+350h] [rbp+230h] BYREF

  v8 = a2;
  v274 = a5;
  v273 = a6;
  v9 = *((_DWORD *)this + 105);
  v302 = a4;
  v267 = a3;
  v261 = a2;
  v270 = a7;
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
  v258 = a2->BroadcastContextCount + 1;
  v264 = v11 | 0x100;
  v12 = 1;
  v262 = v11 | 0x100LL;
  if ( (*(_BYTE *)&Flags & 0x10) != 0 )
  {
    v264 = v11 | 0x1A0;
    LODWORD(v262) = v11 | 0x1A0;
    v156 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1u, a3);
    v159 = v156;
    if ( v156 < 0 )
    {
      v160 = WdLogNewEntry5_WdEvent(v158, v157);
      *(_QWORD *)(v160 + 24) = this;
      *(_QWORD *)(v160 + 32) = v159;
      WdLogEvent5_WdEvent(v160);
      return (unsigned int)v159;
    }
  }
  if ( (*(_DWORD *)&v8->Flags & 0x20) != 0 )
    pNewCommandBuffer = (char *)v8->pNewCommandBuffer;
  else
    pNewCommandBuffer = (char *)*((_QWORD *)this + 7);
  Src.pCommand = &pNewCommandBuffer[v8->CommandOffset];
  Src.CommandLength = v8->CommandLength;
  memset(&Src.CommandLength + 1, 0, 0x64uLL);
  v17 = v262;
  v268 = 0LL;
  v256 = 0;
  v255 = 1;
  v300 = v262;
  while ( 1 )
  {
    v18 = *((_BYTE *)this + 457) == 0;
    v19 = 0LL;
    v259 = 0LL;
    if ( !v18 )
      goto LABEL_17;
    v20 = *((_DWORD *)this + 18);
    if ( v20 <= 3 )
      v20 = 3;
    if ( *((_QWORD *)this + 29) )
      goto LABEL_11;
    v161 = *((_DWORD *)this + 26);
    LODWORD(v254) = v161;
    LODWORD(v253) = v20;
    LOBYTE(Timeout) = 1;
    v162 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, _DWORD, _DWORD, struct DXGK_PRESENT_PARAMS *, struct VIDSCH_SUBMIT_DATA_BASE *, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 440LL))(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
             *((unsigned int *)this + 104),
             *(_QWORD *)(*((_QWORD *)this + 2) + 760LL),
             this,
             (_DWORD)Timeout,
             *((_DWORD *)this + 50),
             v253,
             v254,
             *((_DWORD *)this + 51),
             *((_DWORD *)this + 52));
    *((_QWORD *)this + 29) = v162;
    if ( v162 )
    {
      LODWORD(v23) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                                + 640LL)
                                                                    + 8LL)
                                                        + 448LL))(v162);
      if ( (int)v23 >= 0 )
      {
        v170 = *((_DWORD *)this + 105);
        *((_DWORD *)this + 53) = v20;
        *((_DWORD *)this + 54) = v161;
        if ( (v170 & 0x10) == 0 )
          goto LABEL_232;
        v303[0] = 5LL;
        *((_QWORD *)this + 31) = 0LL;
        v304 = 0LL;
        v305 = 0LL;
        v306 = 0LL;
        v307 = 0LL;
        v303[1] = 0LL;
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v169, v14);
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v275, Global, 0);
        DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v275, v172);
        v173 = *((_QWORD *)this + 2);
        v174 = *((unsigned int *)this + 104);
        v299 = 4;
        v175 = 1 << v174;
        v176 = *(_QWORD *)(v173 + 16);
        v178 = DXGGLOBAL::GetGlobal(v174, v177);
        LOBYTE(v253) = 0;
        SyncObject = DXGGLOBAL::CreateSyncObject(
                       v178,
                       v176,
                       v173,
                       v175,
                       v303,
                       4,
                       (_DWORD)v253,
                       0LL,
                       0LL,
                       (char *)this + 240,
                       0LL,
                       0LL);
        v23 = SyncObject;
        if ( SyncObject >= 0 )
        {
          if ( v276 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v275, v14);
LABEL_232:
          v8 = v261;
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
                  &v259);
          v23 = v22;
          if ( v22 == -1071775486 )
          {
            v14 = (__int64)v267;
            if ( v267 )
            {
              v143 = (char *)v267 + 8;
              if ( !*((_BYTE *)v267 + 32) )
              {
                v183 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v267);
                v183[3] = 275LL;
                v183[4] = 4LL;
                v183[5] = v143;
                v183[6] = 0LL;
                v183[7] = 0LL;
                WdLogEvent5_WdCriticalError(v183);
                v14 = (__int64)v267;
              }
              v144 = (struct _KTHREAD **)*((_QWORD *)v143 + 2);
              v143[24] = 0;
              if ( KeGetCurrentThread() != v144[23] )
              {
                DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v144, *((char **)v143 + 4));
                v14 = (__int64)v267;
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
                       &v259);
              v148 = v267;
              LODWORD(v23) = v146;
              if ( *((_BYTE *)v267 + 144) )
              {
                COREACCESS::AcquireShared(v145, 0LL);
                v147 = *(unsigned int *)(*((_QWORD *)v148 + 11) + 200LL);
                if ( (_DWORD)v147 != 1 )
                  goto LABEL_323;
              }
              if ( v143[24] )
              {
                v184 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v147, v14);
                v184[3] = 275LL;
                v184[4] = 4LL;
                v184[5] = v143;
                v184[6] = 0LL;
                v184[7] = 0LL;
                WdLogEvent5_WdCriticalError(v184);
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
                v230 = WdLogNewEntry5_WdEvent(v229, v228);
                *(_QWORD *)(v230 + 24) = this;
                *(_QWORD *)(v230 + 32) = -1073741130LL;
                WdLogEvent5_WdEvent(v230);
                COREDEVICEACCESS::AcquireSharedUncheck(v148, v231);
                LODWORD(v23) = -1073741130;
LABEL_325:
                v232 = WdLogNewEntry5_WdEvent(v15, v14);
                *(_QWORD *)(v232 + 32) = (int)v23;
                *(_QWORD *)(v232 + 24) = this;
                WdLogEvent5_WdEvent(v232);
LABEL_344:
                v49 = 0;
LABEL_345:
                v239 = v258;
                goto LABEL_346;
              }
              v8 = v261;
            }
          }
          else if ( v22 < 0 )
          {
            v185 = WdLogNewEntry5_WdEvent(v15, v14);
            *(_QWORD *)(v185 + 24) = this;
            *(_QWORD *)(v185 + 32) = v23;
            WdLogEvent5_WdEvent(v185);
          }
          goto LABEL_15;
        }
        v182 = WdLogNewEntry5_WdWarning(v180, v14, v181);
        *(_QWORD *)(v182 + 24) = this;
        *(_QWORD *)(v182 + 32) = v23;
        WdLogEvent5_WdWarning(v182);
        if ( v276 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v275, v14);
      }
    }
    else
    {
      v165 = WdLogNewEntry5_WdWarning(v163, 0LL, v164);
      *(_QWORD *)(v165 + 24) = this;
      *(_QWORD *)(v165 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v165);
      LODWORD(v23) = -1073741801;
    }
    v167 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v167 )
    {
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v167);
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
      v8 = v261;
      goto LABEL_12;
    }
    v168 = WdLogNewEntry5_WdWarning(v167, v14, v166);
    *(_QWORD *)(v168 + 24) = this;
    WdLogEvent5_WdWarning(v168);
    v8 = v261;
LABEL_15:
    if ( (int)v23 < 0 )
      goto LABEL_325;
    v19 = v259;
LABEL_17:
    if ( !bTracingEnabled )
      goto LABEL_21;
    v24 = v8->Flags;
    if ( (*(_BYTE *)&v24 & 0x10) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
      {
        HIDWORD(v254) = 0;
        HIDWORD(v253) = 0;
        McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(v15, v14, v16, 0LL, v19);
      }
    }
    else
    {
      if ( (*(_BYTE *)&v24 & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_21;
        v186 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_21;
        v186 = (const EVENT_DESCRIPTOR *)&EventRender;
      }
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v186, v16, v19);
    }
LABEL_21:
    v25 = *((_QWORD *)this + 2);
    v263 = 0;
    v287[0].QuadPart = 0LL;
    v262 = 0LL;
    v271[0] = 0LL;
    v26 = *(_QWORD *)(v25 + 16);
    v266 = v26;
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
      v248 = WdLogNewEntry5_WdLowResource(v28, v27, v30, v31);
      *(_QWORD *)(v248 + 24) = 589LL;
      WdLogEvent5_WdLowResource(v248);
      LODWORD(v23) = -1073741801;
      goto LABEL_343;
    }
    v32 = *(_QWORD *)(v26 + 16);
    if ( *(int *)(v32 + 2304) < 0x2000 )
      v33 = 1;
    else
      v33 = *(_DWORD *)(v32 + 280);
    if ( *(int *)(v32 + 2304) >= 0x2000 || *(_BYTE *)(v32 + 2604) )
      v34 = *(_DWORD *)(v32 + 2512) * ((v33 << 6) + ((8 * v33 + 199) & 0xFFFFFFF8)) + 8 * (v33 + 73);
    else
      v34 = 1288;
    memset(v29, 0, v34);
    v35 = *(_QWORD *)(v266 + 16);
    if ( *(int *)(v35 + 2304) < 0x2000 )
      v36 = 1;
    else
      v36 = *(_DWORD *)(v35 + 280);
    v37 = *(int *)(v35 + 2304) >= 0x2000 || *(_BYTE *)(v35 + 2604);
    v38 = *(_DWORD *)(v35 + 2512);
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
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2600LL) & 2) != 0 )
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
    v43 = &v262;
    if ( !*((_BYTE *)this + 454) )
      v43 = 0LL;
    if ( (*(_BYTE *)&v42 & 0x20) != 0 )
      pNewAllocationList = v8->pNewAllocationList;
    else
      pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)this + 11);
    LODWORD(Timeout) = v258;
    v45 = (*(__int64 (__fastcall **)(__int64, D3DDDI_ALLOCATIONLIST *, _QWORD, _QWORD, PLARGE_INTEGER, UINT *, LARGE_INTEGER *, unsigned __int64 *, _QWORD *, PSLIST_ENTRY, struct DXGALLOCATION **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 576LL))(
            v259,
            pNewAllocationList,
            v8->AllocationCount,
            v12,
            Timeout,
            &v263,
            v287,
            v43,
            v271,
            v29 + 12,
            v273);
    v23 = v45;
    if ( v45 < 0 )
    {
      v247 = WdLogNewEntry5_WdWarning(v47, v46, v48);
      *(_QWORD *)(v247 + 24) = this;
      *(_QWORD *)(v247 + 32) = v23;
      WdLogEvent5_WdWarning(v247);
LABEL_343:
      CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
      goto LABEL_344;
    }
    v49 = 1;
LABEL_43:
    v257 = v49;
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                         + 8LL)
                                             + 512LL))(
      v259,
      &v268);
    Src.pDmaBuffer = v268;
    Src.DmaSize = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                             + 640LL)
                                                                 + 8LL)
                                                     + 536LL))(v259);
    Src.pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                                                       + 8LL)
                                                                           + 568LL))(v259);
    Src.DmaBufferPrivateDataSize = *((_DWORD *)this + 52);
    if ( v256 )
    {
      v187 = DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v270, v262);
      v23 = v187;
      if ( v187 == -1071775743 )
      {
        v234 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v189, v188);
        v234[3] = 275LL;
        v234[4] = 40LL;
        v234[5] = this;
        v234[6] = 0LL;
        v234[7] = 0LL;
        WdLogEvent5_WdCriticalError(v234);
LABEL_327:
        v235 = WdLogNewEntry5_WdWarning(v189, v188, v190);
        *(_QWORD *)(v235 + 24) = this;
        *(_QWORD *)(v235 + 32) = v23;
        WdLogEvent5_WdWarning(v235);
        CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
        goto LABEL_345;
      }
      if ( v187 < 0 )
        goto LABEL_327;
      v256 = 0;
    }
    if ( !v255 )
      goto LABEL_103;
    if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) || (*(_DWORD *)&v8->Flags & 0x20) != 0 )
    {
      Src.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                                                                  + 8LL)
                                                                                      + 560LL))(v259);
      Src.AllocationListSize = v8->AllocationCount;
      Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 15);
      Src.PatchLocationListInSize = v8->PatchLocationCount;
      Src.pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL)
                                                                                                 + 552LL))(v259);
      Src.PatchLocationListOutSize = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 640LL)
                                                                                    + 8LL)
                                                                        + 544LL))(v259);
      v51 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v52 = *(struct DXGADAPTER **)(v51 + 16);
      v54 = DXGGLOBAL::GetGlobal(v51, v53);
      if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)v54 + 1436), v52) )
      {
        memmove(*((void **)this + 8), Src.pCommand, *((_QWORD *)this + 6));
        v191 = *((_QWORD *)this + 14);
        v192 = (void *)*((_QWORD *)this + 16);
        Src.pCommand = (const void *)*((_QWORD *)this + 8);
        memmove(v192, Src.pPatchLocationListIn, v191);
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
    Src.DmaBufferSegmentId = v263;
    Src.DmaBufferPhysicalAddress = v287[0];
    if ( (*(_DWORD *)&v8->Flags & 0x20) != 0 )
    {
      if ( *((_BYTE *)this + 454) )
      {
        v288 = (char *)v8->pNewCommandBuffer + v8->CommandOffset;
        CommandLength = v8->CommandLength;
        v297 = AllocationListSize;
        v290 = 0;
        pDmaBuffer = Src.pDmaBuffer;
        DmaSize = Src.DmaSize;
        pDmaBufferPrivateData = Src.pDmaBufferPrivateData;
        DmaBufferPrivateDataSize = Src.DmaBufferPrivateDataSize;
        pAllocationList = Src.pAllocationList;
        MultipassOffset = Src.MultipassOffset;
        v292 = v262;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v252) = AllocationListSize;
            McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &RenderGdi, v50, this, v262, v252);
            AllocationListSize = Src.AllocationListSize;
          }
          v56 = 0;
          if ( (_DWORD)AllocationListSize )
          {
            v57 = v273;
            do
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                v203 = &Src.pAllocationList[v56];
                LODWORD(v252) = *(_DWORD *)&v203->8 & 1;
                McTemplateK0ppqx_EtwWriteTransfer(
                  (REGHANDLE *)&DxgkControlGuid_Context,
                  (__int64)v203,
                  v50,
                  v57[v56],
                  v203->hDeviceSpecificAllocation,
                  v252,
                  v203->PhysicalAddress.QuadPart);
                AllocationListSize = Src.AllocationListSize;
              }
              ++v56;
            }
            while ( v56 < (unsigned int)AllocationListSize );
            v17 = v300;
          }
        }
        v260 = *((_QWORD *)this + 23);
        v58 = *((_QWORD *)this + 2);
        v284 = -1;
        v285 = 0LL;
        v59 = *(_QWORD *)(v58 + 16);
        if ( (qword_1C00AE9B0 & 2) != 0 )
        {
          v286 = 1;
          v284 = 5066;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(AllocationListSize, &EventProfilerEnter, v50, 5066);
        }
        else
        {
          v286 = 0;
        }
        DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v284, 5066LL);
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
        v282 = v65;
        v283 = 0;
        if ( v65 && *(struct _KTHREAD **)(v65 + 8) == KeGetCurrentThread() )
        {
          v205 = WdLogNewEntry5_WdAssertion(v65, v62);
          *(_QWORD *)(v205 + 24) = 1569LL;
          WdLogEvent5_WdAssertion(v205);
        }
        if ( v64 )
        {
          v67 = v282;
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
          v283 = 2;
        }
        DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v59 + 16), 1);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v59 + 16) + 4324LL));
        CurrentIrql = KeGetCurrentIrql();
        ThreadProperty = 0LL;
        if ( (unsigned __int8)CurrentIrql < 2u )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v206 = WdLogNewEntry5_WdAssertion(v71, v70);
            *(_QWORD *)(v206 + 24) = 496LL;
            WdLogEvent5_WdAssertion(v206);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v71);
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
                      || (v207 = PsGetCurrentProcess(),
                          ProcessSessionId = PsGetProcessSessionIdEx(v207),
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
          (DXGVALIDATIONPROCESSATTACH *)v310,
          *(struct DXGADAPTER **)(v59 + 16));
        v23 = (*(int (__fastcall **)(__int64, char **))(*(_QWORD *)(v59 + 16) + 832LL))(v260, &v288);
        if ( v310[0] )
          KeUnstackDetachProcess(&v311);
        if ( (_BYTE)CurrentIrql != KeGetCurrentIrql() )
        {
          v210 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v80, v79);
          v211 = (unsigned __int8)CurrentIrql;
          v210[3] = 275LL;
          v210[4] = 16LL;
          v210[5] = v59;
          v210[6] = v211;
          LOBYTE(v211) = KeGetCurrentIrql();
          v210[7] = (unsigned __int8)v211;
          WdLogEvent5_WdCriticalError(v210);
        }
        if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v66 )
        {
          v212 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v80, v79);
          v212[3] = 275LL;
          v212[4] = 38LL;
          v212[5] = *((int *)ThreadProperty + 8);
          v212[6] = v66;
          v212[7] = 0LL;
          WdLogEvent5_WdCriticalError(v212);
        }
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v59 + 16) + 4324LL));
        v83 = (_QWORD *)WdLogNewEntry5_WdTrace(v80, v79, v81, v82);
        v85 = v260;
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
          v213 = WdLogNewEntry5_WdError(v86, v84);
          *(_QWORD *)(v213 + 24) = v23;
          WdLogEvent5_WdError(v213);
        }
        DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v59 + 16));
        if ( v283 == 1 )
        {
          v283 = 0;
          ExReleasePushLockSharedEx(v282, 0LL);
LABEL_97:
          KeLeaveCriticalRegion();
        }
        else if ( v283 == 2 )
        {
          v88 = v282;
          v283 = 0;
          *(_QWORD *)(v282 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v88, 0LL);
          goto LABEL_97;
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v284, v87);
        if ( v286 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v90, &EventProfilerExit, v91, v284);
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
        v236 = WdLogNewEntry5_WdWarning(0x80000000LL, v89, v91);
        *(_QWORD *)(v236 + 32) = (int)v23;
LABEL_328:
        *(_QWORD *)(v236 + 24) = this;
        WdLogEvent5_WdWarning(v236);
        CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
        v49 = v257;
        goto LABEL_345;
      }
      goto LABEL_102;
    }
    if ( (*((_DWORD *)this + 56) & 1) == 0
      || (AllocationListSize = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2600LL),
          (AllocationListSize & 4) == 0) )
    {
      CurrentIrql = *((_QWORD *)this + 23);
      v110 = *((_QWORD *)this + 2);
      v279 = -1;
      v280 = 0LL;
      v111 = *(_QWORD *)(v110 + 16);
      if ( (qword_1C00AE9B0 & 2) != 0 )
      {
        v281 = 1;
        v279 = 5030;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(AllocationListSize, &EventProfilerEnter, v50, 5030);
      }
      else
      {
        v281 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v279, 5030LL);
      v112 = PsGetCurrentProcess();
      v113 = PsGetProcessDxgProcess(v112);
      v115 = v113;
      if ( (!v113 || (*(_BYTE *)(v113 + 347) & 0x10) != 0)
        && (v193 = DXGTHREAD::GetCurrent()) != 0LL
        && (v116 = *((_QWORD *)v193 + 1)) != 0
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
      v277 = v117;
      v278 = 0;
      if ( v117 && *(struct _KTHREAD **)(v117 + 8) == KeGetCurrentThread() )
      {
        v194 = WdLogNewEntry5_WdAssertion(v117, v114);
        *(_QWORD *)(v194 + 24) = 1569LL;
        WdLogEvent5_WdAssertion(v194);
      }
      if ( v116 )
      {
        v119 = v277;
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
        v278 = 2;
      }
      v121 = *(struct DXGADAPTER **)(v111 + 16);
      v122 = DXGGLOBAL::GetGlobal(v117, v114);
      if ( *((_BYTE *)v122 + 1441)
        && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)v122 + 1436), v121) )
      {
        LODWORD(v23) = -1073741637;
LABEL_180:
        if ( v278 == 1 )
        {
          v278 = 0;
          ExReleasePushLockSharedEx(v277, 0LL);
LABEL_183:
          KeLeaveCriticalRegion();
        }
        else if ( v278 == 2 )
        {
          v141 = v277;
          v278 = 0;
          *(_QWORD *)(v277 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v141, 0LL);
          goto LABEL_183;
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v279, v140);
        if ( v281 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v142, &EventProfilerExit, v91, v279);
        goto LABEL_101;
      }
      DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v111 + 16), 1);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v111 + 16) + 4324LL));
      v260 = KeGetCurrentIrql();
      DxgThread = 0LL;
      if ( (unsigned __int8)v260 < 2u )
      {
        v126 = KeGetCurrentThread();
        if ( !v126 )
        {
          v195 = WdLogNewEntry5_WdAssertion(v124, v123);
          *(_QWORD *)(v195 + 24) = 496LL;
          WdLogEvent5_WdAssertion(v195);
        }
        v127 = PsGetCurrentProcessSessionId(v124);
        v128 = PsGetCurrentProcess();
        v129 = PsGetProcessDxgProcess(v128);
        if ( v127
          && (unsigned int)PsGetThreadSessionId(v126) == v127
          && v129
          && (v130 = *(void **)(v129 + 88)) != 0LL
          && v130 != &gDxgkWin32kEngInterface
          && (!(unsigned __int8)KeIsAttachedProcess()
           || (v196 = PsGetCurrentProcess(),
               v197 = PsGetProcessSessionIdEx(v196),
               v198 = PsGetCurrentThreadProcess(),
               v197 == (unsigned int)PsGetProcessSessionIdEx(v198)))
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
        (DXGVALIDATIONPROCESSATTACH *)v308,
        *(struct DXGADAPTER **)(v111 + 16));
      v23 = (*(int (__fastcall **)(__int64, struct _DXGKARG_RENDER *))(*(_QWORD *)(v111 + 16) + 640LL))(
              CurrentIrql,
              &Src);
      if ( v308[0] )
        KeUnstackDetachProcess(&ApcState);
      if ( (_BYTE)v260 != KeGetCurrentIrql() )
      {
        v199 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v133, v132);
        v200 = (unsigned __int8)v260;
        v199[3] = 275LL;
        v199[4] = 16LL;
        v199[5] = v111;
        v199[6] = v200;
        LOBYTE(v200) = KeGetCurrentIrql();
        v199[7] = (unsigned __int8)v200;
        WdLogEvent5_WdCriticalError(v199);
      }
      if ( DxgThread && *((_DWORD *)DxgThread + 8) != v118 )
      {
        v201 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v133, v132);
        v201[3] = 275LL;
        v201[4] = 38LL;
        v201[5] = *((int *)DxgThread + 8);
        v201[6] = v118;
        v201[7] = 0LL;
        WdLogEvent5_WdCriticalError(v201);
      }
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v111 + 16) + 4324LL));
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
        v202 = WdLogNewEntry5_WdError(v139, v137);
        *(_QWORD *)(v202 + 24) = v23;
        WdLogEvent5_WdError(v202);
      }
LABEL_179:
      DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v111 + 16));
      goto LABEL_180;
    }
LABEL_102:
    v92 = (_DWORD)v23 == -1071775743;
    v255 = v92;
    if ( (*((_DWORD *)this + 105) & 0x10) != 0 )
    {
      if ( *((_QWORD *)this + 31) )
      {
        v215 = v270;
      }
      else
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX(
          (DXGAUTOMUTEX *)v301,
          (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 30) + 32LL) + 32LL),
          0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v301);
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *(DXGSYNCOBJECT **)(*((_QWORD *)this + 30) + 32LL),
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 30) + 16LL) + 16LL));
        v215 = v270;
        (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL)
                                                                                         + 8LL)
                                                                             + 272LL))(
          *((_QWORD *)*v270 + 5),
          VidSchSyncObject,
          0LL);
        if ( v301[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v301, v216);
      }
      ++*((_QWORD *)this + 31);
      v255 = (_DWORD)v23 == -1071775743;
      if ( !*((_BYTE *)this + 312) )
      {
        v217 = DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v215, v262);
        v23 = v217;
        v255 = v92;
        if ( v217 == -1071775743 )
        {
          v256 = 1;
        }
        else if ( v217 < 0 )
        {
          v236 = WdLogNewEntry5_WdWarning(v219, v218, v220);
          *(_QWORD *)(v236 + 32) = v23;
          goto LABEL_328;
        }
      }
    }
LABEL_103:
    LODWORD(v93) = 0;
    AllocationCount = 0;
    v95 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                         + 8LL)
                                             + 568LL))(v259);
    v96 = LODWORD(Src.pDmaBufferPrivateData) - v95;
    LODWORD(v260) = LODWORD(Src.pDmaBuffer) - (_DWORD)v268;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL)
                                    + 520LL))(v259);
    v268 = 0LL;
    if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) )
    {
      v98 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 640LL)
                                                           + 8LL)
                                               + 552LL))(v259);
      v14 = (unsigned __int128)(((__int128)Src.pPatchLocationListOut - v98) * 0x2AAAAAAAAAAAAAABLL) >> 64;
      v93 = ((__int64)Src.pPatchLocationListOut - v98) / 24;
      AllocationCount = v261->AllocationCount;
      if ( (qword_1C00AE9B0 & 0x10) != 0 )
      {
        v221 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 640LL)
                                                              + 8LL)
                                                  + 552LL))(v259);
        TraceDxgkPatchLocationList((__int64)this, v259, v93, v221);
      }
      v97 = 0;
    }
    v29->Next = (struct _SLIST_ENTRY *)v17;
    if ( *((_BYTE *)this + 454) )
    {
      LODWORD(v29->Next) |= 0x8000000u;
      *((_QWORD *)&v29[2].Next + 1) = v262;
    }
    if ( (v264 & 0x20) != 0 )
    {
      if ( v255 || (v222 = v97, v256) )
        v222 = 64;
      v16 = (unsigned int)v258;
      v223 = v222 | (__int64)v29->Next & 0xFFFFFFBF;
      v224 = 2048;
      v225 = v223 & 0xFFFFFBFF;
      if ( v258 > 1 )
        v224 = 3072;
      LODWORD(v29->Next) = v224 | v225;
      v14 = *((_QWORD *)this + 2);
      if ( *(_QWORD *)(v14 + 1848) != *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) )
        HIDWORD(v29[7].Next) = v97;
    }
    else
    {
      v16 = (unsigned int)v258;
    }
    v99 = v259;
    HIDWORD(v29[4].Next) = v93;
    *((_QWORD *)&v29->Next + 1) = v99;
    HIDWORD(v29[3].Next) = v260;
    LODWORD(v29[4].Next) = 0;
    *((_DWORD *)&v29[4].Next + 2) = 0;
    LODWORD(v29[3].Next) = v97;
    *((_DWORD *)&v29[3].Next + 3) = AllocationCount;
    *((_DWORD *)&v29[3].Next + 2) = v97;
    *((_DWORD *)&v29[4].Next + 3) = v96;
    if ( v271[0] )
    {
      v100 = 1;
      v15 = (__int64)v271;
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
    v259 = 0LL;
    if ( ListEntry )
    {
      v107 = v266 + 1248;
      v108 = (union _SLIST_HEADER *)(v266 + 1248);
      ++*(_DWORD *)(v266 + 1276);
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
    if ( !v256 && !v255 )
    {
      if ( (*(_DWORD *)&v261->Flags & 0x10) != 0 )
      {
        memset(&v312, 0, sizeof(v312));
        PresentHistoryToken = v261->PresentHistoryToken;
        v312.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
        v312.Token.Flip.FenceValue = PresentHistoryToken;
        v243 = SubmitPresentHistoryToken(&v312, v267, v302, 0LL, 0, 0LL, 0LL, 0LL, this, 0LL, 0LL);
        v23 = v243;
        if ( (int)(v243 + 0x80000000) >= 0 && v243 != -1073741130 )
        {
          v246 = WdLogNewEntry5_WdWarning(0x80000000LL, v244, v245);
          *(_QWORD *)(v246 + 24) = this;
          *(_QWORD *)(v246 + 32) = v23;
          WdLogEvent5_WdWarning(v246);
          LODWORD(v23) = 0;
        }
      }
      return (unsigned int)v23;
    }
    v8 = v261;
  }
  v102 = v274;
  while ( 1 )
  {
    v103 = *v102;
    if ( *((struct _KTHREAD **)*v102 + 59) != KeGetCurrentThread() )
    {
      v226 = WdLogNewEntry5_WdAssertion(v103, v14);
      *(_QWORD *)(v226 + 24) = 924LL;
      WdLogEvent5_WdAssertion(v226);
      v103 = *v102;
    }
    if ( (*((_DWORD *)v103 + 105) & 0x10) != 0 )
    {
      v29[30].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 31);
      *((_DWORD *)&v29[30].Next + 2) = 0;
      *((_QWORD *)&v29[31].Next + 1) = *(_QWORD *)(*((_QWORD *)this + 30) + 64LL);
      v227 = v270;
      v29[31].Next = *(struct _SLIST_ENTRY **)(*((_QWORD *)this + 30) + 48LL);
      v104 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 616LL)
                                                                         + 8LL)
                                                             + 432LL))(
               *((_QWORD *)*v227 + 5),
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
    LODWORD(v260) = v104;
    v105 = v104;
    if ( v104 < 0 )
      break;
    LODWORD(v29->Next) &= ~0x800u;
    ++v101;
    ++v102;
    if ( v101 >= v258 )
      goto LABEL_121;
  }
  if ( (*((_DWORD *)this + 105) & 0x10) == 0 )
  {
    v237 = v101;
    if ( v101 >= 0 )
    {
      v238 = v274;
      do
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 616LL)
                                                           + 8LL)
                                               + 440LL))(
          *((_QWORD *)v238[v237--] + 34),
          0LL);
      while ( v237 >= 0 );
      v105 = v260;
    }
  }
  v239 = v258;
  if ( v101 < v258 )
  {
    v240 = (unsigned int)(v258 - v101);
    do
    {
      LOBYTE(v14) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 640LL)
                                                           + 8LL)
                                               + 584LL))(
        v259,
        v14);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                          + 8LL)
                                              + 504LL))(
        v259,
        0LL);
      --v240;
    }
    while ( v240 );
  }
  v49 = 0;
  v259 = 0LL;
  v241 = WdLogNewEntry5_WdWarning(v15, v14, v16);
  *(_QWORD *)(v241 + 32) = v105;
  *(_QWORD *)(v241 + 24) = this;
  WdLogEvent5_WdWarning(v241);
  CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
LABEL_346:
  if ( !v259 )
    return (unsigned int)v23;
  if ( v268 )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 520LL))();
  if ( v49 )
  {
    if ( v239 <= 0 )
      return (unsigned int)v23;
    v249 = (unsigned int)v239;
    do
    {
      LOBYTE(v233) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 640LL)
                                                           + 8LL)
                                               + 584LL))(
        v259,
        v233);
      --v249;
    }
    while ( v249 );
  }
  if ( v239 > 0 )
  {
    v250 = (unsigned int)v239;
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                          + 8LL)
                                              + 504LL))(
        v259,
        0LL);
      --v250;
    }
    while ( v250 );
  }
  return (unsigned int)v23;
}
