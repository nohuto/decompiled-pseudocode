/*
 * XREFs of ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01083E0
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00F57B0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00F8F90 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FD870 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresent @ 0x1C0100C00 (DxgkPresent.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C0107D90 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C01487FC (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C026D850 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkPresentRedirected @ 0x1C027E930 (DxgkPresentRedirected.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0009604 (_tlgKeywordOn.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A3BC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000A8F8 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EC34 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D9A4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     McTemplateK0ppqqx_EtwWriteTransfer @ 0x1C00400F0 (McTemplateK0ppqqx_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@435555555@Z @ 0x1C0045FD8 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@.c)
 *     ??1KOBJECTREF@@QEAA@XZ @ 0x1C00461BC (--1KOBJECTREF@@QEAA@XZ.c)
 *     McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq_EtwWriteTransfer @ 0x1C0046460 (McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq_EtwWriteTransfer.c)
 *     ?DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z @ 0x1C006335C (-DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z.c)
 *     ?VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C00D4170 (-VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONT.c)
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C00D87E8 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD5D0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C010A300 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C011BAB0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C0146940 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C021CE50 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     ?VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGSYNCOBJECT@@PEAVDXGALLOCATION_VGPU@@I_K@Z @ 0x1C0248BFC (-VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXG.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C0250B4C (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C027DE38 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 */

__int64 __fastcall SubmitPresentHistoryToken(
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a1,
        struct COREDEVICEACCESS *a2,
        __int64 a3,
        struct CWin32kLocks *a4,
        char a5,
        union _LARGE_INTEGER *a6,
        struct DXGK_PRESENT_PARAMS *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct DXGCONTEXT *a9,
        struct _PRESENT_REDIRECTED_PARAMS *a10,
        char *a11)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v13; // r15
  struct _PRESENT_REDIRECTED_PARAMS *v15; // rcx
  __int64 v16; // rax
  __int64 v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r9d
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v30; // rdx
  PRKSEMAPHORE *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  char *v34; // rdi
  _QWORD *v35; // rax
  struct _KTHREAD **v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  union _LARGE_INTEGER *v40; // rbx
  union _LARGE_INTEGER *v41; // rax
  NTSTATUS v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int LiveDumpWithWdLogs; // eax
  int v47; // ebx
  unsigned __int8 IsDebuggerPresent; // al
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rax
  char *v53; // rdx
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // rax
  char *v60; // rdx
  __int64 v61; // rbx
  _QWORD *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r8
  char *v67; // rdx
  char v68; // al
  char *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  char *v73; // rdx
  union _SLIST_HEADER *v74; // r12
  union _SLIST_HEADER *v75; // rdi
  PSLIST_ENTRY v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r14
  PSLIST_ENTRY v79; // rbx
  __int64 v80; // rdx
  int v81; // r8d
  unsigned int v82; // eax
  __int64 v83; // rax
  int v84; // edx
  int v85; // r8d
  int v86; // edx
  int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rax
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v93; // rdx
  unsigned __int64 v94; // r8
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // ebx
  __int64 v96; // rax
  unsigned int v97; // ebx
  __int64 v98; // rax
  int v99; // ebx
  UINT NumRects; // ebx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // ebx
  __int64 v102; // rax
  __int64 v103; // rdx
  struct CRefCountedBuffer *v104; // rbx
  int v105; // eax
  volatile signed __int32 *v106; // r12
  struct DXGK_PRESENT_PARAMS *v107; // rcx
  struct _SLIST_ENTRY *v108; // rdi
  bool v109; // cc
  unsigned int v110; // edx
  void *v111; // r8
  struct DXGK_PRESENT_PARAMS *v112; // r10
  int v113; // eax
  __int64 v114; // rcx
  __int64 v115; // rax
  int v116; // eax
  int v117; // r11d
  __int64 v118; // rax
  int v119; // r10d
  __int64 v120; // rcx
  __int64 v121; // r9
  unsigned int *v122; // rdx
  __int64 v123; // r8
  __int128 v124; // xmm1
  unsigned int v125; // ecx
  __int64 v126; // r10
  int v127; // ecx
  DXGADAPTER *v128; // rax
  unsigned int v129; // r8d
  unsigned int v130; // r12d
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rax
  _QWORD *v134; // r9
  __int64 v135; // r12
  _BYTE *PoolWithTag; // r9
  unsigned int v137; // edx
  __int64 v138; // r8
  __int64 v139; // r10
  __int64 v140; // rcx
  int v141; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rax
  ULONGLONG Alignment; // r9
  int v150; // edx
  __int64 v151; // rdx
  __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rcx
  ULONGLONG v157; // r9
  int v158; // edx
  __int64 v159; // rdx
  __int64 v160; // rax
  DXGSYNCOBJECT *v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rdx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v167; // r9
  __int64 v168; // r10
  __int64 v169; // rdx
  __int64 v170; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v172; // rcx
  unsigned int CurrentProcessSessionId; // eax
  union _SLIST_HEADER *v174; // rcx
  __int64 v175; // rax
  __int64 v176; // r9
  int v177; // edx
  __int64 v178; // rdx
  struct _EX_RUNDOWN_REF **v179; // rax
  __int64 v180; // rax
  struct _EX_RUNDOWN_REF *v181; // rdx
  __int64 v182; // rdx
  bool v183; // zf
  void *v184; // rcx
  struct DXGPROCESS *v185; // rax
  DXGPROCESS *Current; // rax
  unsigned int v187; // r14d
  __int64 v188; // r12
  int v189; // r8d
  _QWORD *v190; // r10
  __int64 v191; // rdi
  void (__fastcall *v192)(struct CRefCountedBuffer *, __int64); // rax
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // rbx
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // r9
  __int64 v201; // rax
  __int64 v202; // rax
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-148h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-140h]
  unsigned int v205; // [rsp+F0h] [rbp-80h]
  char v206; // [rsp+F4h] [rbp-7Ch]
  int v207; // [rsp+F8h] [rbp-78h]
  int v208; // [rsp+100h] [rbp-70h]
  int v209; // [rsp+100h] [rbp-70h]
  DXGSYNCOBJECT *v210; // [rsp+100h] [rbp-70h]
  unsigned int v211; // [rsp+100h] [rbp-70h]
  unsigned int v212; // [rsp+108h] [rbp-68h]
  PSLIST_HEADER ListHead; // [rsp+110h] [rbp-60h]
  PSLIST_HEADER ListHeada; // [rsp+110h] [rbp-60h]
  PSLIST_HEADER ListHeadb; // [rsp+110h] [rbp-60h]
  PSLIST_HEADER ListHeadc; // [rsp+110h] [rbp-60h]
  PSLIST_HEADER ListHeadd; // [rsp+110h] [rbp-60h]
  unsigned int ListHead_4; // [rsp+114h] [rbp-5Ch]
  DXGADAPTER *v219; // [rsp+118h] [rbp-58h]
  __int64 v220; // [rsp+120h] [rbp-50h]
  int v221; // [rsp+120h] [rbp-50h]
  _QWORD *v222; // [rsp+120h] [rbp-50h]
  char Srca; // [rsp+128h] [rbp-48h]
  unsigned int Srcb; // [rsp+128h] [rbp-48h]
  struct ADAPTER_RENDER *v226; // [rsp+138h] [rbp-38h]
  __int16 v227; // [rsp+140h] [rbp-30h] BYREF
  __int16 v228; // [rsp+142h] [rbp-2Eh] BYREF
  PRKSEMAPHORE Semaphore; // [rsp+148h] [rbp-28h]
  DXGSESSIONMGR *v230; // [rsp+150h] [rbp-20h]
  int v231; // [rsp+158h] [rbp-18h]
  unsigned int v232; // [rsp+15Ch] [rbp-14h] BYREF
  struct _SLIST_ENTRY *v233; // [rsp+160h] [rbp-10h]
  struct CRefCountedBuffer *v234; // [rsp+168h] [rbp-8h] BYREF
  DXGPRESENTHISTORYTOKENQUEUE *v235; // [rsp+170h] [rbp+0h]
  struct DXGGLOBAL *v236; // [rsp+178h] [rbp+8h] BYREF
  char v237; // [rsp+180h] [rbp+10h]
  int v238; // [rsp+188h] [rbp+18h] BYREF
  int v239; // [rsp+18Ch] [rbp+1Ch] BYREF
  int v240; // [rsp+190h] [rbp+20h] BYREF
  int v241; // [rsp+194h] [rbp+24h] BYREF
  int v242; // [rsp+198h] [rbp+28h] BYREF
  int v243; // [rsp+19Ch] [rbp+2Ch] BYREF
  int Next; // [rsp+1A0h] [rbp+30h] BYREF
  int v245; // [rsp+1A4h] [rbp+34h] BYREF
  int v246; // [rsp+1A8h] [rbp+38h] BYREF
  int v247; // [rsp+1ACh] [rbp+3Ch] BYREF
  struct _EX_RUNDOWN_REF *v248; // [rsp+1B0h] [rbp+40h] BYREF
  int v249; // [rsp+1B8h] [rbp+48h] BYREF
  int v250; // [rsp+1BCh] [rbp+4Ch] BYREF
  __int128 v251; // [rsp+1C0h] [rbp+50h]
  signed __int64 v252; // [rsp+1D0h] [rbp+60h]
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+1D8h] [rbp+68h]
  unsigned __int64 v254; // [rsp+1E0h] [rbp+70h] BYREF
  struct CRefCountedBuffer *v255; // [rsp+1E8h] [rbp+78h]
  __int128 v256; // [rsp+1F0h] [rbp+80h]
  __int128 v257; // [rsp+200h] [rbp+90h]
  PSLIST_ENTRY v258; // [rsp+210h] [rbp+A0h] BYREF
  struct ADAPTER_RENDER *v259; // [rsp+218h] [rbp+A8h]
  PRKSEMAPHORE v260; // [rsp+220h] [rbp+B0h] BYREF
  __int64 v261; // [rsp+228h] [rbp+B8h] BYREF
  __int64 v262; // [rsp+230h] [rbp+C0h] BYREF
  void *v263; // [rsp+238h] [rbp+C8h] BYREF
  PSLIST_HEADER v264; // [rsp+240h] [rbp+D0h] BYREF
  __int64 v265; // [rsp+248h] [rbp+D8h] BYREF
  PVOID Object[2]; // [rsp+250h] [rbp+E0h] BYREF
  _BYTE v267[16]; // [rsp+260h] [rbp+F0h] BYREF
  char v268[8]; // [rsp+270h] [rbp+100h] BYREF
  __int64 v269; // [rsp+278h] [rbp+108h]
  int v270; // [rsp+280h] [rbp+110h]
  PVOID P; // [rsp+290h] [rbp+120h]
  _BYTE v272[64]; // [rsp+298h] [rbp+128h] BYREF
  int v273; // [rsp+2D8h] [rbp+168h]
  _BYTE v275[64]; // [rsp+2E0h] [rbp+170h] BYREF
  _BYTE v276[64]; // [rsp+320h] [rbp+1B0h] BYREF
  char v277[64]; // [rsp+360h] [rbp+1F0h] BYREF
  _DWORD v278[16]; // [rsp+3A0h] [rbp+230h] BYREF

  v13 = a8;
  v15 = a10;
  v230 = a10;
  if ( !a9 )
  {
    if ( !a10 || !*((_DWORD *)a10 + 2) || !*(_QWORD *)a10 )
      goto LABEL_3;
LABEL_8:
    v212 = 0;
    v220 = 0LL;
    if ( a9 )
    {
      v15 = *(struct _PRESENT_REDIRECTED_PARAMS **)(*((_QWORD *)a9 + 2) + 16LL);
    }
    else
    {
      v220 = *(_QWORD *)a10;
      v212 = *((_DWORD *)a10 + 2);
    }
    v18 = *((_QWORD *)v15 + 2);
    v219 = (DXGADAPTER *)v18;
    v19 = *(_QWORD *)(v18 + 2680);
    v226 = (struct ADAPTER_RENDER *)v19;
    v20 = *(_QWORD *)(v19 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v20 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v20 + 168)) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v21, a2);
      *(_QWORD *)(v22 + 24) = 2839LL;
      WdLogEvent5_WdAssertion(v22);
    }
    v269 = v19 + 840;
    if ( v19 != -840 && *(struct _KTHREAD **)(v19 + 848) == KeGetCurrentThread() )
    {
      v23 = WdLogNewEntry5_WdAssertion(v19 + 840, a2);
      *(_QWORD *)(v23 + 24) = 1569LL;
      WdLogEvent5_WdAssertion(v23);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v269, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v27 = *(_DWORD *)(v269 + 24);
        if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, &EventBlockThread, v26, v27);
      }
      ExAcquirePushLockSharedEx(v269, 0LL);
    }
    v270 = 1;
    CurrentProcess = PsGetCurrentProcess(v25, v24);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    if ( ProcessSessionId >= *(_DWORD *)(v19 + 872)
      || (v30 = 8LL * ProcessSessionId, !*(_QWORD *)(v30 + *(_QWORD *)(v19 + 880)))
      || (_mm_lfence(),
          v31 = *(PRKSEMAPHORE **)(v30 + *(_QWORD *)(v19 + 880)),
          (v235 = (DXGPRESENTHISTORYTOKENQUEUE *)v31) == 0LL) )
    {
      v202 = WdLogNewEntry5_WdEvent(v19, v30);
      *(_QWORD *)(v202 + 24) = v18;
      WdLogEvent5_WdEvent(v202);
      LODWORD(a3) = -1073741811;
      goto LABEL_322;
    }
    Semaphore = v31[8];
    v260 = Semaphore;
    ObfReferenceObject(Semaphore);
    v270 = 0;
    ExReleasePushLockSharedEx(v269, 0LL);
    KeLeaveCriticalRegion();
    v34 = (char *)a2 + 8;
    if ( !*((_BYTE *)a2 + 32) )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32);
      v35[3] = 275LL;
      v35[4] = 4LL;
      v35[5] = v34;
      v35[6] = 0LL;
      v35[7] = 0LL;
      WdLogEvent5_WdCriticalError(v35);
    }
    v36 = (struct _KTHREAD **)*((_QWORD *)a2 + 3);
    *((_BYTE *)a2 + 32) = 0;
    if ( KeGetCurrentThread() != v36[23] )
      DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v36, *((char **)a2 + 5));
    *((_QWORD *)a2 + 5) = 0LL;
    if ( *((_BYTE *)a2 + 144) )
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
    if ( *(_BYTE *)(a3 + 16) )
    {
      v37 = *(_QWORD *)(a3 + 8) + 136LL;
      *(_BYTE *)(a3 + 16) = 0;
      ExReleasePushLockSharedEx(v37, 0LL);
      KeLeaveCriticalRegion();
      v38 = *(_QWORD *)(a3 + 8);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v38 + 16), (struct DXGADAPTER *)v38);
    }
    if ( a4 )
    {
      if ( *((_QWORD *)a4 + 2) )
      {
        (*(void (**)(void))(*((_QWORD *)a4 + 3) + 24LL))();
        *((_QWORD *)a4 + 2) = 0LL;
      }
      if ( *(_QWORD *)a4 )
      {
        v39 = *((_QWORD *)a4 + 5);
        if ( v39 )
        {
          if ( *((_DWORD *)a4 + 13) )
            (*(void (__fastcall **)(__int64, bool))(*((_QWORD *)a4 + 4) + 280LL))(v39, *((_DWORD *)a4 + 12) == 0);
          (*(void (**)(void))(*((_QWORD *)a4 + 4) + 264LL))();
          *((_QWORD *)a4 + 5) = 0LL;
          *((_QWORD *)a4 + 6) = 0LL;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 288LL))(*(_QWORD *)a4, 0LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 64LL))(*(_QWORD *)a4, *((_QWORD *)a4 + 1));
        *(_QWORD *)a4 = 0LL;
      }
    }
    v40 = a6;
    Object[0] = (PVOID)(v18 + 2648);
    Object[1] = Semaphore;
    v41 = (union _LARGE_INTEGER *)&v261;
    if ( a6 )
      v41 = a6;
    v261 = -200000000LL;
    v233 = (struct _SLIST_ENTRY *)v41;
    v42 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, v41, 0LL);
    if ( !v42 )
      goto LABEL_57;
    if ( v42 == 258 )
    {
      if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v18 + 4456)) <= 2 )
      {
        LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(0x193u, 0x814uLL, 0LL, 0LL, 0LL, 1);
        ListHead = *(PSLIST_HEADER *)(v18 + 316);
        v44 = *(unsigned int *)(v18 + 320);
        v208 = LiveDumpWithWdLogs;
        if ( (unsigned int)dword_1C00AEA90 > 5 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C00AEA90, 0x400000040000LL) )
          {
            v47 = *(unsigned __int8 *)(v18 + 209);
            LOBYTE(v44) = 1;
            IsDebuggerPresent = WdIsDebuggerPresent(v44);
            v238 = v47;
            v240 = *(_DWORD *)(v18 + 2768);
            v241 = *(unsigned __int8 *)(v18 + 2622);
            v242 = *(_DWORD *)(v18 + 4456);
            v243 = v208;
            v239 = IsDebuggerPresent;
            v265 = 0x1000000LL;
            Next = (int)v233->Next;
            v227 = *(_WORD *)(v18 + 2572);
            v262 = *(_QWORD *)(v18 + 1576);
            v263 = *(void **)(v18 + 1568);
            v245 = *(_DWORD *)(v18 + 340);
            v246 = *(_DWORD *)(v18 + 336);
            v247 = *(_DWORD *)(v18 + 332);
            v249 = *(_DWORD *)(v18 + 328);
            v250 = *(_DWORD *)(v18 + 324);
            v264 = ListHead;
            v228 = 1;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              IsDebuggerPresent,
              byte_1C007D0DA,
              v49,
              v50,
              (__int64)&v228,
              (__int64)&v265,
              (__int64)&v264,
              (__int64)&v250,
              (__int64)&v249,
              (__int64)&v247,
              (__int64)&v246,
              (__int64)&v245,
              &v263,
              (__int64)&v262,
              (__int64)&v227,
              (__int64)&Next,
              (__int64)&v243,
              (__int64)&v242,
              (__int64)&v241,
              (__int64)&v240,
              (__int64)&v239,
              (__int64)&v238);
            v40 = a6;
          }
        }
      }
      if ( v40 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v44, &EventPerformanceWarning, v45, 19);
        v54 = WdLogNewEntry5_WdEvent(v44, v43);
        *(_QWORD *)(v54 + 24) = 258LL;
        WdLogEvent5_WdEvent(v54);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)a3);
        v55 = COREDEVICEACCESS::AcquireShared(a2, a11);
        v58 = v55;
        if ( v55 >= 0 )
        {
          LODWORD(a3) = 258;
        }
        else
        {
          v59 = WdLogNewEntry5_WdEvent(v57, v56);
          *(_QWORD *)(v59 + 24) = v58;
          WdLogEvent5_WdEvent(v59);
          COREDEVICEACCESS::AcquireSharedUncheck(a2, v60);
          LODWORD(a3) = -1073741130;
        }
        KOBJECTREF::~KOBJECTREF((PVOID *)&v260);
        goto LABEL_322;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v44, &EventPerformanceWarning, v45, 19);
      v51 = WdLogNewEntry5_WdError(v44, v43);
      *(_QWORD *)(v51 + 24) = 2926LL;
      WdLogEvent5_WdError(v51);
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) )
      {
LABEL_57:
        v52 = WdLogNewEntry5_WdEvent(v44, v43);
        *(_QWORD *)(v52 + 24) = v18;
        WdLogEvent5_WdEvent(v52);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)a3);
        COREDEVICEACCESS::AcquireSharedUncheck(a2, v53);
        LODWORD(a3) = -1073741130;
        KOBJECTREF::~KOBJECTREF((PVOID *)&v260);
LABEL_322:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v268);
        return (unsigned int)a3;
      }
    }
    if ( !*(_BYTE *)(a3 + 16) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a3 + 8) + 24LL));
      v61 = *(_QWORD *)(a3 + 8);
      *(_QWORD *)a3 = -1LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v61 + 136, 0LL);
      *(_BYTE *)(a3 + 16) = 1;
    }
    if ( *((_BYTE *)a2 + 144) )
    {
      COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a2 + 72), 0LL);
      v43 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 200LL);
      if ( (_DWORD)v43 != 1 )
        goto LABEL_90;
    }
    if ( *((_BYTE *)a2 + 32) )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v44, v43);
      LODWORD(a3) = 0;
      v62[3] = 275LL;
      v62[4] = 4LL;
      v62[5] = v34;
      v62[6] = 0LL;
      v62[7] = 0LL;
      WdLogEvent5_WdCriticalError(v62);
    }
    else
    {
      LODWORD(a3) = 0;
    }
    v63 = *((_QWORD *)a2 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v63 + 184) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v63 + 48)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v64, &EventBlockThread, v65, 72);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)a2 + 3) + 48LL), Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a2 + 3), a11);
    }
    *((_QWORD *)a2 + 5) = 0LL;
    if ( a11 )
    {
      v66 = 17LL;
      v67 = (char *)a2 + 48;
      do
      {
        if ( v66 == -2147483629 )
          break;
        v68 = v67[a11 - ((char *)a2 + 48)];
        if ( !v68 )
          break;
        *v67++ = v68;
        --v66;
      }
      while ( v66 );
      v69 = v67 - 1;
      if ( v66 )
        v69 = v67;
      *v69 = 0;
      if ( v66 )
        *((_QWORD *)a2 + 5) = (char *)a2 + 48;
    }
    *((_BYTE *)a2 + 32) = 1;
    if ( *(_DWORD *)(*((_QWORD *)a2 + 17) + 576LL) != 1 )
    {
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 8));
      if ( !*((_BYTE *)a2 + 144) )
      {
LABEL_91:
        KeReleaseSemaphore(Semaphore, 0, 1, 0);
        v72 = WdLogNewEntry5_WdEvent(v71, v70);
        LODWORD(a3) = -1073741130;
        *(_QWORD *)(v72 + 24) = -1073741130LL;
        WdLogEvent5_WdEvent(v72);
        COREDEVICEACCESS::AcquireSharedUncheck(a2, v73);
        KOBJECTREF::~KOBJECTREF((PVOID *)&v260);
        goto LABEL_322;
      }
LABEL_90:
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
      goto LABEL_91;
    }
    v74 = (union _SLIST_HEADER *)v235;
    v207 = 0;
    v75 = (union _SLIST_HEADER *)((char *)v235 + 48);
    ListHeada = (PSLIST_HEADER)((char *)v235 + 48);
    v76 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v235 + 3);
    if ( !v76
      && (!DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(v74) || (v76 = ExpInterlockedPopEntrySList(v75)) == 0LL)
      || (v78 = (__int64)&v76[1], v76 == (PSLIST_ENTRY)-16LL) )
    {
      LODWORD(a3) = -1073741801;
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v201 = WdLogNewEntry5_WdLowResource(v198, v197, v199, v200);
      *(_QWORD *)(v201 + 24) = v74;
      *(_QWORD *)(v201 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v201);
      KOBJECTREF::~KOBJECTREF((PVOID *)&v260);
      goto LABEL_322;
    }
    if ( a8 )
    {
      v79 = 0LL;
      v258 = 0LL;
      v259 = v226;
    }
    else
    {
      v259 = v226;
      ++*((_DWORD *)v226 + 317);
      v79 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v226 + 78);
      if ( !v79 )
      {
        ++*((_DWORD *)v226 + 318);
        v79 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))v226 + 162))(
                              *((unsigned int *)v226 + 321),
                              *((unsigned int *)v226 + 323),
                              *((unsigned int *)v226 + 322),
                              (__int64)v226 + 1248);
      }
      v258 = v79;
      if ( !v79 )
      {
        KeReleaseSemaphore(Semaphore, 0, 1, 0);
        v92 = WdLogNewEntry5_WdLowResource(v89, v88, v90, v91);
        *(_QWORD *)(v92 + 24) = 2984LL;
        WdLogEvent5_WdLowResource(v92);
        CVidSchSubmitData::~CVidSchSubmitData(&v258);
        LODWORD(a3) = -1073741801;
        KOBJECTREF::~KOBJECTREF((PVOID *)&v260);
        goto LABEL_322;
      }
      v80 = *((_QWORD *)v226 + 2);
      if ( *(int *)(v80 + 2304) < 0x2000 )
        v81 = 1;
      else
        v81 = *(_DWORD *)(v80 + 280);
      if ( *(int *)(v80 + 2304) >= 0x2000 || *(_BYTE *)(v80 + 2604) )
        v82 = *(_DWORD *)(v80 + 2512) * ((v81 << 6) + ((8 * v81 + 199) & 0xFFFFFFF8)) + 8 * (v81 + 73);
      else
        v82 = 1288;
      memset(v79, 0, v82);
      v83 = *((_QWORD *)v226 + 2);
      if ( *(int *)(v83 + 2304) < 0x2000 )
        v84 = 1;
      else
        v84 = *(_DWORD *)(v83 + 280);
      LOBYTE(v77) = *(int *)(v83 + 2304) >= 0x2000 || *(_BYTE *)(v83 + 2604);
      v85 = *(_DWORD *)(v83 + 2512);
      v75 = ListHeada;
      v74 = (union _SLIST_HEADER *)v235;
      *((_BYTE *)&v79[21].Next + 12) = v77;
      if ( (_BYTE)v77 )
      {
        v77 = (unsigned int)(8 * v84);
        LODWORD(v79[36].Next) = v84;
        v86 = v84 << 6;
        *((_DWORD *)&v79[35].Next + 3) = v85;
        HIDWORD(v79[36].Next) = v85 * (v86 + ((v77 + 199) & 0xFFFFFFF8)) + 16;
        v87 = v85 * (v86 + ((v77 + 199) & 0xFFFFFFF8)) + 584;
        *((_DWORD *)&v79[33].Next + 2) = v87;
        *((_DWORD *)&v79[33].Next + 3) = v77 + v87;
      }
    }
    v93 = a1;
    v94 = 0x1C0000000uLL;
    v205 = 1;
    if ( !a8 )
      v13 = (struct VIDSCH_SUBMIT_DATA_BASE *)v79;
    switch ( a1->Model )
    {
      case D3DKMT_PM_REDIRECTED_GDI:
        FlipInterval = a1->Token.Flip.FlipInterval;
        if ( (unsigned int)FlipInterval > 0x10 )
        {
          v96 = WdLogNewEntry5_WdAssertion(v77, a1);
          *(_QWORD *)(v96 + 24) = 54LL;
          goto LABEL_123;
        }
        v99 = 16 * FlipInterval + 67;
        goto LABEL_135;
      case D3DKMT_PM_REDIRECTED_FLIP:
        NumRects = a1->Token.Flip.DirtyRegions.NumRects;
        if ( NumRects > 0x10 )
        {
          v96 = WdLogNewEntry5_WdAssertion(v77, a1);
          *(_QWORD *)(v96 + 24) = 64LL;
          goto LABEL_123;
        }
        v99 = 16 * NumRects + 831;
        goto LABEL_135;
      case D3DKMT_PM_REDIRECTED_BLT:
        VidPnSourceId = a1->Token.Flip.VidPnSourceId;
        if ( VidPnSourceId > 0x10 )
        {
          v96 = WdLogNewEntry5_WdAssertion(v77, a1);
          *(_QWORD *)(v96 + 24) = 74LL;
LABEL_123:
          WdLogEvent5_WdAssertion(v96);
          v97 = 0;
LABEL_124:
          v98 = WdLogNewEntry5_WdWarning(v77, v93, v94);
          *(_QWORD *)(v98 + 24) = v97;
          WdLogEvent5_WdWarning(v98);
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          CVidSchSubmitData::~CVidSchSubmitData(&v258);
          LODWORD(a3) = -1073741811;
          KOBJECTREF::~KOBJECTREF((PVOID *)&v260);
          goto LABEL_322;
        }
        v99 = 16 * VidPnSourceId + 51;
LABEL_135:
        v97 = v99 & 0xFFFFFFF8;
        if ( v97 - 1 > 0x437 )
          goto LABEL_124;
        break;
      case D3DKMT_PM_REDIRECTED_VISTABLT:
      case D3DKMT_PM_SCREENCAPTUREFENCE:
      case D3DKMT_PM_REDIRECTED_COMPOSITION:
      case D3DKMT_PM_SURFACECOMPLETE:
        v99 = 31;
        goto LABEL_135;
      case D3DKMT_PM_FLIPMANAGER:
        v99 = 47;
        goto LABEL_135;
      default:
        v102 = WdLogNewEntry5_WdAssertion(v77, a1);
        *(_QWORD *)(v102 + 24) = 97LL;
        WdLogEvent5_WdAssertion(v102);
        v93 = a1;
        v99 = 7;
        goto LABEL_135;
    }
    memmove((void *)v78, v93, v97);
    v103 = 0x1C0000000uLL;
    switch ( *(_DWORD *)v78 )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 7:
      case 8:
      case 9:
        v104 = 0LL;
        v105 = *(_DWORD *)v13;
        *((_QWORD *)v13 + 12) = v74;
        *((_QWORD *)v13 + 13) = v78;
        *(_DWORD *)v13 = v105 & 0xFFFFFFDF | (32 * (a5 & 1 | 0x2000));
        v106 = 0LL;
        v107 = v219;
        v108 = 0LL;
        *((_DWORD *)v13 + 29) = -1;
        v234 = 0LL;
        v255 = 0LL;
        v109 = *((_DWORD *)v219 + 576) < 0x2000;
        v233 = 0LL;
        if ( v109 && !*((_BYTE *)v219 + 2604) )
        {
          v112 = a7;
          goto LABEL_149;
        }
        if ( a9 )
        {
          v112 = a7;
          if ( !a7 || ((a1->Model - 1) & 0xFFFFFFFD) == 0 )
            goto LABEL_149;
          v110 = *((_DWORD *)a7 + 368);
          v111 = (void *)*((_QWORD *)a7 + 185);
        }
        else
        {
          v110 = *(_DWORD *)(v220 + 1104);
          v111 = *(void **)(v220 + 1112);
        }
        v113 = ReadPresentPrivateDriverData(v219, v110, v111, &v234);
        a3 = v113;
        v207 = v113;
        if ( v113 < 0 )
        {
          v115 = WdLogNewEntry5_WdError(v114, v103);
          *(_QWORD *)(v115 + 24) = a3;
          WdLogEvent5_WdError(v115);
          v207 = a3;
          goto LABEL_294;
        }
        v106 = (volatile signed __int32 *)v234;
        v107 = v219;
        v112 = a7;
        if ( v234 )
        {
          v104 = v234;
          *((_QWORD *)v13 + 96) = v234;
          *((_DWORD *)v13 + 1) |= 4u;
          v255 = (struct CRefCountedBuffer *)v106;
          v207 = v113;
        }
LABEL_149:
        if ( !*((_BYTE *)v107 + 209) )
        {
          LODWORD(a3) = 0;
          v207 = 0;
          if ( !a9 && !*((_BYTE *)v107 + 2626) )
            goto LABEL_154;
          v116 = PrepareIndependentFlipToken(
                   (struct _D3DKMT_PRESENTHISTORYTOKEN *)v78,
                   v112,
                   v13,
                   a9,
                   v230,
                   (struct CRefCountedBuffer *)v106);
          v108 = (struct _SLIST_ENTRY *)*((_QWORD *)v13 + 4);
          LODWORD(a3) = v116;
          v207 = v116;
          v233 = v108;
        }
        if ( (int)a3 < 0 )
          goto LABEL_295;
LABEL_154:
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v117 = *(_DWORD *)v78;
          LOBYTE(v118) = 0;
          v119 = *(_DWORD *)(v78 + 4);
          v251 = 0LL;
          ListHead_4 = 0;
          LOBYTE(v221) = 0;
          v231 = 0;
          Srca = v119;
          v257 = 0LL;
          v256 = 0LL;
          v120 = v117 - 1;
          switch ( v117 )
          {
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
              v121 = *(_QWORD *)(v78 + 16);
              break;
            case 2:
              v121 = *(_QWORD *)(v78 + 24);
              break;
            default:
              v121 = 0LL;
              break;
          }
          switch ( v117 )
          {
            case 1:
              v122 = (unsigned int *)(v78 + 56);
              break;
            case 2:
              v122 = (unsigned int *)(v78 + 820);
              break;
            case 3:
              v122 = (unsigned int *)(v78 + 40);
              break;
            default:
              v122 = 0LL;
              break;
          }
          v123 = (unsigned int)(v117 - 1);
          if ( v117 == 1 )
          {
            v118 = *(_QWORD *)(v78 + 48);
            ListHead_4 = HIDWORD(v118);
            v251 = *(_OWORD *)(v78 + 32);
          }
          else if ( v117 == 2 )
          {
            v118 = *(_QWORD *)(v78 + 116);
            ListHead_4 = HIDWORD(v118);
            v251 = *(_OWORD *)(v78 + 100);
            v221 = *(_DWORD *)(v78 + 756);
            v124 = *(_OWORD *)(v78 + 764);
            v120 = *(unsigned int *)(v78 + 760);
            v257 = *(_OWORD *)(v78 + 740);
            v231 = v120;
            v256 = v124;
          }
          if ( v122 )
          {
            v125 = *v122;
            v209 = *v122;
            if ( *v122 >= 0x10 )
            {
              v125 = 16;
              v209 = 16;
            }
            else if ( !v125 )
            {
LABEL_179:
              McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq_EtwWriteTransfer(
                ListHead_4,
                (__int64)v122,
                v123,
                (__int64)v226,
                v78,
                v117,
                v119,
                v121,
                v251,
                SBYTE8(v251),
                SBYTE4(v251),
                SBYTE12(v251),
                v118,
                ListHead_4,
                v209,
                (__int64)v278,
                (__int64)v277,
                (__int64)v276,
                (__int64)v275,
                v257,
                SBYTE8(v257),
                SBYTE4(v257),
                SBYTE12(v257),
                v221,
                v231,
                v256,
                SBYTE8(v256),
                SBYTE4(v256),
                SBYTE12(v256));
              goto LABEL_181;
            }
            v122 += 3;
            v126 = v125;
            v123 = 0LL;
            do
            {
              v127 = *(v122 - 2);
              v122 += 4;
              *(_DWORD *)((char *)v278 + v123) = v127;
              v123 += 4LL;
              *(_DWORD *)&v276[v123 + 60] = *(v122 - 4);
              *(_DWORD *)&v275[v123 + 60] = *(v122 - 5);
              *(_DWORD *)&v275[v123 - 4] = *(v122 - 3);
              --v126;
            }
            while ( v126 );
            LOBYTE(v119) = Srca;
            goto LABEL_179;
          }
          LODWORD(Timeout) = v119;
          *(_DWORD *)Alertable = v117;
          McTemplateK0ppqqx_EtwWriteTransfer(
            v120,
            &EventSubmitPresentHistory,
            v123,
            v226,
            v78,
            *(_QWORD *)Alertable,
            Timeout,
            v121);
        }
LABEL_181:
        if ( !a9 )
          goto LABEL_222;
        v107 = a7;
        if ( !a7 )
        {
          if ( !*((_BYTE *)v219 + 209) && (*((_DWORD *)a9 + 105) & 0x10) != 0 )
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(a9, 0LL, 0, 1, v13, 0);
          v205 = 1;
          goto LABEL_222;
        }
        *((_BYTE *)a7 + 1512) = (*((_BYTE *)v13 + 3) & 1) == 0;
        v128 = v219;
        if ( !*((_BYTE *)v219 + 209) )
        {
          if ( (*((_DWORD *)a9 + 105) & 0x10) != 0 )
          {
            v129 = *((_DWORD *)a7 + 23);
            v205 = v129 + 1;
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
              a9,
              *((struct DXGCONTEXT ***)a7 + 187),
              v129,
              1,
              v13,
              0);
            goto LABEL_222;
          }
          v128 = v219;
        }
        v103 = *((unsigned int *)a7 + 23);
        if ( !(_DWORD)v103 || !DXGADAPTER::IsDxgmms2(v128) )
          goto LABEL_222;
        v130 = v103 + 1;
        v205 = v103 + 1;
        v252 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a9 + 2) + 1896LL));
        BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)a9 + 2));
        if ( !BroadcastPresentSyncObject )
        {
          v133 = WdLogNewEntry5_WdError(v132, v131);
          *(_QWORD *)(v133 + 24) = -1073741801LL;
          *(_QWORD *)(v133 + 32) = 3135LL;
          WdLogEvent5_WdError(v133);
          LODWORD(a3) = -1073741801;
          v207 = -1073741801;
LABEL_296:
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          if ( (*(_DWORD *)v13 & 0x1000000) != 0 )
          {
            v187 = 0;
            if ( v130 )
            {
              v188 = 0LL;
              do
              {
                if ( a9 )
                  v189 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a7 + 187) + v188) + 416LL);
                else
                  LOBYTE(v189) = 0;
                if ( *((_BYTE *)v13 + 348) )
                  v190 = (_QWORD *)((char *)v13
                                  + 64 * (unsigned __int64)(v187 * *((_DWORD *)v13 + 143))
                                  + *((_DWORD *)v13 + 143) * ((8 * *((_DWORD *)v13 + 144) + 199) & 0xFFFFFFF8)
                                  + 616);
                else
                  v190 = (_QWORD *)((char *)v13 + 488);
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v226 + 80) + 8LL)
                                                                       + 432LL))(
                  *((_QWORD *)v226 + 81),
                  (unsigned int)(1 << v189),
                  *v190,
                  0LL);
                ++v187;
                v188 += 8LL;
              }
              while ( v187 < v205 );
              v104 = v255;
              v108 = v233;
              LODWORD(a3) = v207;
            }
          }
          goto LABEL_308;
        }
        v134 = 0LL;
        P = 0LL;
        v273 = 0;
        v135 = *((unsigned int *)a7 + 23);
        if ( (unsigned int)v135 <= 8 )
        {
          PoolWithTag = v272;
          P = v272;
        }
        else
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v135 < 8 )
          {
LABEL_201:
            if ( !v134 )
              goto LABEL_202;
            v130 = v205;
            v137 = 1;
            if ( v205 > 1 )
            {
              v138 = 8LL;
              while ( 1 )
              {
                v139 = *(_QWORD *)(v138 + *((_QWORD *)a7 + 187));
                if ( (*(_DWORD *)(v139 + 420) & 0x10) != 0 )
                  break;
                v140 = v137++ - 1;
                v134[v140] = *(_QWORD *)(v139 + 272);
                v138 += 8LL;
                if ( v137 >= v205 )
                  goto LABEL_207;
              }
              LODWORD(a3) = -1073741811;
              v207 = -1073741811;
              if ( P != v272 && P )
                ExFreePoolWithTag(P, 0);
              goto LABEL_296;
            }
LABEL_207:
            LODWORD(a3) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v226 + 77) + 8LL)
                                                                            + 640LL))(
                            0LL,
                            0LL,
                            *((unsigned int *)a7 + 23));
            v207 = a3;
            if ( (int)a3 < 0 )
            {
              v107 = (struct DXGK_PRESENT_PARAMS *)P;
              if ( P == v272 || !P )
                goto LABEL_294;
              goto LABEL_210;
            }
            v141 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*((_QWORD *)v226 + 77) + 8LL) + 624LL))(
                     *((_QWORD *)a9 + 34),
                     BroadcastPresentSyncObject,
                     v252);
            v107 = (struct DXGK_PRESENT_PARAMS *)P;
            LODWORD(a3) = v141;
            v207 = v141;
            if ( v141 < 0 )
            {
              if ( P == v272 || !P )
                goto LABEL_294;
LABEL_210:
              ExFreePoolWithTag(v107, 0);
              goto LABEL_294;
            }
            if ( P != v272 && P )
              ExFreePoolWithTag(P, 0);
            v106 = (volatile signed __int32 *)v234;
LABEL_222:
            v210 = 0LL;
            v222 = 0LL;
            Global = DXGGLOBAL::GetGlobal((__int64)v107, v103);
            v236 = Global;
            v237 = 0;
            if ( !Global )
            {
              v145 = WdLogNewEntry5_WdAssertion(v144, v143);
              *(_QWORD *)(v145 + 24) = 2405LL;
              WdLogEvent5_WdAssertion(v145);
              Global = v236;
            }
            if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 51)) )
            {
              v148 = WdLogNewEntry5_WdAssertion(v147, v146);
              *(_QWORD *)(v148 + 24) = 2410LL;
              WdLogEvent5_WdAssertion(v148);
            }
            if ( !v212 )
            {
              v156 = 0LL;
              goto LABEL_252;
            }
            DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v236, v146);
            v211 = (v212 >> 6) & 0xFFFFFF;
            if ( *((int *)v219 + 643) >= 2000 )
            {
              ListHeadb = (PSLIST_HEADER)DXGPROCESS::GetCurrent();
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&ListHeadb[13]);
              if ( v211 < LODWORD(ListHeadb[16].Alignment) )
              {
                Alignment = ListHeadb[15].Alignment;
                v150 = *(_DWORD *)(Alignment + 16LL * v211 + 8);
                if ( ((v212 >> 25) & 0x60) == (v150 & 0x60) && (v150 & 0x2000) == 0 && (v150 & 0x1F) != 0 )
                {
                  v151 = v150 & 0x1F;
                  if ( (_BYTE)v151 == 11 )
                  {
                    v222 = *(_QWORD **)(Alignment + 16LL * v211);
                    goto LABEL_235;
                  }
                  v152 = WdLogNewEntry5_WdError((v212 >> 25) & 0x60, v151);
                  *(_QWORD *)(v152 + 24) = 267LL;
                  WdLogEvent5_WdError(v152);
                }
              }
              v222 = 0LL;
LABEL_235:
              ExReleasePushLockSharedEx(&ListHeadb[13], 0LL);
              KeLeaveCriticalRegion();
              if ( !v222 )
              {
                v154 = WdLogNewEntry5_WdError(v153, v146);
                LODWORD(a3) = -1073741811;
                *(_QWORD *)(v154 + 24) = v212;
                *(_QWORD *)(v154 + 32) = -1073741811LL;
                WdLogEvent5_WdError(v154);
                v207 = -1073741811;
                if ( v237 )
LABEL_237:
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v236, v155);
LABEL_295:
                v130 = v205;
                goto LABEL_296;
              }
              v156 = v222[4];
              v210 = (DXGSYNCOBJECT *)v156;
LABEL_252:
              if ( !*((_BYTE *)v219 + 209) )
              {
                if ( a9 )
                {
                  if ( *((struct _KTHREAD **)a9 + 59) != KeGetCurrentThread() )
                  {
                    v163 = WdLogNewEntry5_WdAssertion(v156, v146);
                    *(_QWORD *)(v163 + 24) = 3233LL;
                    WdLogEvent5_WdAssertion(v163);
                  }
                  v164 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a9 + 2) + 16LL) + 616LL) + 8LL);
                  if ( (*((_DWORD *)a9 + 105) & 0x10) != 0 )
                    LODWORD(a3) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v164 + 432))(
                                    *((_QWORD *)a9 + 38),
                                    v13);
                  else
                    LODWORD(a3) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v164 + 424))(
                                    *((_QWORD *)a9 + 34),
                                    v13);
                  v207 = a3;
                }
                else
                {
                  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v267, (struct DXGFASTMUTEX *const)(v156 + 32), 0);
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v267);
                  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(v210, v226);
                  LODWORD(a3) = (*(__int64 (__fastcall **)(struct VIDSCH_SUBMIT_DATA_BASE *, __int64, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v167 + 8) + 1008LL))(
                                  v13,
                                  v168,
                                  VidSchSyncObject);
                  v207 = a3;
                  if ( v267[8] )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v267, v165);
                }
LABEL_292:
                if ( v237 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v236, v165);
LABEL_294:
                if ( (int)a3 >= 0 )
                {
LABEL_308:
                  if ( v108 )
                    CRefCountedBuffer::RefCountedBufferRelease(v108);
                  if ( !v104 || _InterlockedExchangeAdd((volatile signed __int32 *)v104 + 3, 0xFFFFFFFF) != 1 )
                    goto LABEL_316;
                  v191 = *(_QWORD *)v104;
                  if ( *(_QWORD *)v104 )
                  {
                    ++*(_DWORD *)(v191 + 28);
                    if ( ExQueryDepthSList((PSLIST_HEADER)v191) < *(_WORD *)(v191 + 16) )
                    {
                      ExpInterlockedPushEntrySList((PSLIST_HEADER)v191, (PSLIST_ENTRY)v104);
                    }
                    else
                    {
                      v192 = *(void (__fastcall **)(struct CRefCountedBuffer *, __int64))(v191 + 56);
                      ++*(_DWORD *)(v191 + 32);
                      v192(v104, v191);
                    }
                    goto LABEL_316;
                  }
                  ExFreePoolWithTag(v104, 0);
                  CVidSchSubmitData::~CVidSchSubmitData(&v258);
                  KOBJECTREF::~KOBJECTREF((PVOID *)&v260);
                  goto LABEL_322;
                }
                goto LABEL_295;
              }
              if ( v106 )
              {
                _InterlockedIncrement(v106 + 3);
                v106 = (volatile signed __int32 *)v234;
              }
              v206 = 1;
              if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v156, v146) + 380) < 0x18u )
                goto LABEL_286;
              SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal(v170, v169) + 88);
              v230 = SessionDataForSpecifiedSession;
              if ( SessionDataForSpecifiedSession )
              {
                CurrentProcessSessionId = PsGetCurrentProcessSessionId(v172);
                SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                   v230,
                                                   CurrentProcessSessionId);
              }
              if ( !*((_DWORD *)SessionDataForSpecifiedSession + 4730)
                || *(_DWORD *)v78 != 2
                || !a9
                || (v174 = *(union _SLIST_HEADER **)(*((_QWORD *)a9 + 2) + 40LL),
                    v230 = (DXGSESSIONMGR *)v174,
                    !*((_BYTE *)&v174[21].HeaderX64 + 10))
                || !a7
                || (Srcb = *((_DWORD *)a7 + 5)) == 0 )
              {
LABEL_286:
                a3 = 0LL;
                if ( !a9 )
                  a3 = (__int64)v222;
                Current = DXGPROCESS::GetCurrent();
                LODWORD(a3) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitPresentHistoryToken(
                                (DXGADAPTER *)((char *)v219 + 4208),
                                Current,
                                (__int64)a9,
                                *(_QWORD *)v13,
                                (__int64)v235,
                                v78,
                                (__int64)v106,
                                a3);
                v207 = a3;
LABEL_289:
                if ( (int)a3 < 0 && v106 )
                  CRefCountedBuffer::RefCountedBufferRelease((PSLIST_ENTRY)v106);
                goto LABEL_292;
              }
              ListHeadd = v174 + 13;
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&v174[13]);
              v175 = (Srcb >> 6) & 0xFFFFFF;
              if ( (unsigned int)v175 < *((_DWORD *)v230 + 64) )
              {
                v176 = *((_QWORD *)v230 + 30);
                v177 = *(_DWORD *)(v176 + 16 * v175 + 8);
                if ( ((Srcb >> 25) & 0x60) == (*(_BYTE *)(v176 + 16 * v175 + 8) & 0x60)
                  && (v177 & 0x2000) == 0
                  && (v177 & 0x1F) != 0 )
                {
                  v178 = v177 & 0x1F;
                  v179 = (struct _EX_RUNDOWN_REF **)(v176 + 16LL * (unsigned int)v175);
                  if ( (_BYTE)v178 == 5 )
                  {
                    v181 = *v179;
                    goto LABEL_280;
                  }
                  v180 = WdLogNewEntry5_WdError((Srcb >> 25) & 0x60, v178);
                  *(_QWORD *)(v180 + 24) = 267LL;
                  WdLogEvent5_WdError(v180);
                }
              }
              v181 = 0LL;
LABEL_280:
              DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v248, v181);
              ExReleasePushLockSharedEx(ListHeadd, 0LL);
              KeLeaveCriticalRegion();
              if ( v248 )
              {
                v183 = *(_DWORD *)v78 == 2;
                v232 = 0;
                v254 = 0LL;
                if ( v183 )
                {
                  v184 = *(void **)(v78 + 64);
                  if ( v184 )
                  {
                    LODWORD(a3) = DxgkQueryHostCompSurfInfo(v184, &v232, &v254);
                    v207 = a3;
                    if ( (int)a3 >= 0 )
                    {
                      v185 = DXGPROCESS::GetCurrent();
                      LODWORD(a3) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitVailPresentHistoryToken(
                                      (char *)v219 + 4208,
                                      v185,
                                      a9,
                                      *(_QWORD *)v13,
                                      v235,
                                      v78,
                                      v106,
                                      v210,
                                      v248,
                                      v232,
                                      v254);
                      v206 = 0;
                      v207 = a3;
                    }
                  }
                }
              }
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v248, v182);
              if ( !v206 )
                goto LABEL_289;
              goto LABEL_286;
            }
            ListHeadc = (PSLIST_HEADER)DXGPROCESS::GetCurrent();
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&ListHeadc[13]);
            if ( v211 < LODWORD(ListHeadc[16].Alignment) )
            {
              v157 = ListHeadc[15].Alignment;
              v158 = *(_DWORD *)(v157 + 16LL * v211 + 8);
              if ( ((v212 >> 25) & 0x60) == (v158 & 0x60) && (v158 & 0x2000) == 0 && (v158 & 0x1F) != 0 )
              {
                v159 = v158 & 0x1F;
                if ( (_BYTE)v159 == 8 )
                {
                  v161 = *(DXGSYNCOBJECT **)(v157 + 16LL * v211);
LABEL_247:
                  v210 = v161;
                  ExReleasePushLockSharedEx(&ListHeadc[13], 0LL);
                  KeLeaveCriticalRegion();
                  v156 = (__int64)v210;
                  if ( !v210 )
                  {
                    v162 = WdLogNewEntry5_WdError(0LL, v146);
                    LODWORD(a3) = -1073741811;
                    *(_QWORD *)(v162 + 24) = v212;
                    *(_QWORD *)(v162 + 32) = -1073741811LL;
                    WdLogEvent5_WdError(v162);
                    v207 = -1073741811;
                    if ( !v237 )
                      goto LABEL_295;
                    goto LABEL_237;
                  }
                  goto LABEL_252;
                }
                v160 = WdLogNewEntry5_WdError((v212 >> 25) & 0x60, v159);
                *(_QWORD *)(v160 + 24) = 267LL;
                WdLogEvent5_WdError(v160);
              }
            }
            v161 = 0LL;
            goto LABEL_247;
          }
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v135, 0x4B677844u);
          P = PoolWithTag;
        }
        v273 = v135;
        if ( !PoolWithTag )
        {
LABEL_202:
          LODWORD(a3) = -1073741801;
          v207 = -1073741801;
          goto LABEL_295;
        }
        memset(PoolWithTag, 0, 8 * v135);
        v134 = P;
        goto LABEL_201;
      default:
        LODWORD(a3) = -1071775733;
        ExpInterlockedPushEntrySList(v75, (PSLIST_ENTRY)(v78 - 16));
        KeReleaseSemaphore(Semaphore, 0, 1, 0);
        v196 = WdLogNewEntry5_WdWarning(v194, v193, v195);
        *(_QWORD *)(v196 + 24) = DXGPROCESS::GetCurrent();
        WdLogEvent5_WdWarning(v196);
LABEL_316:
        CVidSchSubmitData::~CVidSchSubmitData(&v258);
        KOBJECTREF::~KOBJECTREF((PVOID *)&v260);
        goto LABEL_322;
    }
  }
  if ( !a10 )
    goto LABEL_8;
LABEL_3:
  v16 = WdLogNewEntry5_WdError(a10, a2);
  LODWORD(a3) = -1073741811;
  *(_QWORD *)(v16 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v16);
  return (unsigned int)a3;
}
