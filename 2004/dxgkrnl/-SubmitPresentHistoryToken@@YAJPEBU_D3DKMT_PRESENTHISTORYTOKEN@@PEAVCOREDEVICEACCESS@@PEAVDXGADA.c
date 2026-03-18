/*
 * XREFs of ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C0104170
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00EA570 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00F1DF0 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FD2E0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresent @ 0x1C0100670 (DxgkPresent.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C0103B20 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C015634C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0271CB0 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkPresentRedirected @ 0x1C0282DB0 (DxgkPresentRedirected.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004150 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004384 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00056C8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006E20 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007264 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D9F4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     McTemplateK0ppqqx_EtwWriteTransfer @ 0x1C004113C (McTemplateK0ppqqx_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@435555555@Z @ 0x1C0046F60 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@.c)
 *     ??1KOBJECTREF@@QEAA@XZ @ 0x1C0047144 (--1KOBJECTREF@@QEAA@XZ.c)
 *     McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq_EtwWriteTransfer @ 0x1C00473E8 (McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq_EtwWriteTransfer.c)
 *     ?DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z @ 0x1C00644E8 (-DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z.c)
 *     ?VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C00D6D7C (-VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONT.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FCD20 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD040 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD140 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FE8C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0106090 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0114208 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C0151658 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C0154240 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C02210A0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     ?VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGSYNCOBJECT@@PEAVDXGALLOCATION_VGPU@@I_K@Z @ 0x1C024CEF0 (-VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXG.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C0254E4C (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268C6C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C02822B4 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
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
  __int64 v56; // rbx
  __int64 v57; // rax
  char *v58; // rdx
  __int64 v59; // rbx
  _QWORD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r8
  char *v65; // rdx
  char v66; // al
  char *v67; // rax
  __int64 v68; // rax
  char *v69; // rdx
  DXGPRESENTHISTORYTOKENQUEUE *v70; // r12
  union _SLIST_HEADER *v71; // rdi
  PSLIST_ENTRY v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r14
  PSLIST_ENTRY v75; // rbx
  __int64 v76; // rdx
  int v77; // r8d
  unsigned int v78; // eax
  __int64 v79; // rax
  int v80; // edx
  int v81; // r8d
  int v82; // edx
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v89; // rdx
  unsigned __int64 v90; // r8
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // ebx
  __int64 v92; // rax
  unsigned int v93; // ebx
  __int64 v94; // rax
  int v95; // ebx
  UINT NumRects; // ebx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // ebx
  __int64 v98; // rax
  __int64 v99; // rdx
  struct CRefCountedBuffer *v100; // rbx
  int v101; // eax
  volatile signed __int32 *v102; // r12
  struct DXGK_PRESENT_PARAMS *v103; // rcx
  struct _SLIST_ENTRY *v104; // rdi
  bool v105; // cc
  unsigned int v106; // edx
  void *v107; // r8
  struct DXGK_PRESENT_PARAMS *v108; // r10
  int v109; // eax
  __int64 v110; // rcx
  __int64 v111; // rax
  int v112; // eax
  int v113; // r11d
  __int64 v114; // rax
  int v115; // r10d
  __int64 v116; // rcx
  __int64 v117; // r9
  unsigned int *v118; // rdx
  __int64 v119; // r8
  __int128 v120; // xmm1
  unsigned int v121; // ecx
  __int64 v122; // r10
  int v123; // ecx
  DXGADAPTER *v124; // rax
  unsigned int v125; // r8d
  unsigned int v126; // r12d
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  _QWORD *v130; // r9
  __int64 v131; // r12
  _BYTE *PoolWithTag; // r9
  unsigned int v133; // edx
  __int64 v134; // r8
  __int64 v135; // r10
  __int64 v136; // rcx
  int v137; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rax
  ULONGLONG Alignment; // r9
  int v146; // edx
  __int64 v147; // rdx
  __int64 v148; // rax
  __int64 v149; // rcx
  __int64 v150; // rax
  __int64 v151; // rcx
  ULONGLONG v152; // r9
  int v153; // edx
  __int64 v154; // rdx
  __int64 v155; // rax
  DXGSYNCOBJECT *v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rdx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v161; // r9
  __int64 v162; // r10
  __int64 v163; // rdx
  __int64 v164; // rdx
  __int64 v165; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  unsigned int CurrentProcessSessionId; // eax
  union _SLIST_HEADER *v170; // rcx
  __int64 v171; // rax
  __int64 v172; // r9
  int v173; // edx
  __int64 v174; // rdx
  struct _EX_RUNDOWN_REF **v175; // rax
  __int64 v176; // rax
  struct _EX_RUNDOWN_REF *v177; // rdx
  __int64 v178; // rdx
  bool v179; // zf
  void *v180; // rcx
  struct DXGPROCESS *v181; // rax
  DXGPROCESS *Current; // rax
  unsigned int v183; // r14d
  __int64 v184; // r12
  int v185; // r8d
  _QWORD *v186; // r10
  __int64 v187; // rdi
  void (__fastcall *v188)(struct CRefCountedBuffer *, __int64); // rax
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // rbx
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 v197; // rax
  __int64 v198; // rax
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-148h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-140h]
  unsigned int v201; // [rsp+F0h] [rbp-80h]
  char v202; // [rsp+F4h] [rbp-7Ch]
  int v203; // [rsp+F8h] [rbp-78h]
  int v204; // [rsp+100h] [rbp-70h]
  int v205; // [rsp+100h] [rbp-70h]
  DXGSYNCOBJECT *v206; // [rsp+100h] [rbp-70h]
  unsigned int v207; // [rsp+100h] [rbp-70h]
  unsigned int v208; // [rsp+108h] [rbp-68h]
  PSLIST_HEADER ListHead; // [rsp+110h] [rbp-60h]
  PSLIST_HEADER ListHeada; // [rsp+110h] [rbp-60h]
  PSLIST_HEADER ListHeadb; // [rsp+110h] [rbp-60h]
  PSLIST_HEADER ListHeadc; // [rsp+110h] [rbp-60h]
  PSLIST_HEADER ListHeadd; // [rsp+110h] [rbp-60h]
  unsigned int ListHead_4; // [rsp+114h] [rbp-5Ch]
  DXGADAPTER *v215; // [rsp+118h] [rbp-58h]
  __int64 v216; // [rsp+120h] [rbp-50h]
  int v217; // [rsp+120h] [rbp-50h]
  _QWORD *v218; // [rsp+120h] [rbp-50h]
  char Srca; // [rsp+128h] [rbp-48h]
  unsigned int Srcb; // [rsp+128h] [rbp-48h]
  struct ADAPTER_RENDER *v222; // [rsp+138h] [rbp-38h]
  __int16 v223; // [rsp+140h] [rbp-30h] BYREF
  __int16 v224; // [rsp+142h] [rbp-2Eh] BYREF
  PRKSEMAPHORE Semaphore; // [rsp+148h] [rbp-28h]
  DXGSESSIONMGR *v226; // [rsp+150h] [rbp-20h]
  int v227; // [rsp+158h] [rbp-18h]
  unsigned int v228; // [rsp+15Ch] [rbp-14h] BYREF
  struct _SLIST_ENTRY *v229; // [rsp+160h] [rbp-10h]
  struct CRefCountedBuffer *v230; // [rsp+168h] [rbp-8h] BYREF
  DXGPRESENTHISTORYTOKENQUEUE *v231; // [rsp+170h] [rbp+0h]
  struct DXGGLOBAL *v232; // [rsp+178h] [rbp+8h] BYREF
  char v233; // [rsp+180h] [rbp+10h]
  int v234; // [rsp+188h] [rbp+18h] BYREF
  int v235; // [rsp+18Ch] [rbp+1Ch] BYREF
  int v236; // [rsp+190h] [rbp+20h] BYREF
  int v237; // [rsp+194h] [rbp+24h] BYREF
  int v238; // [rsp+198h] [rbp+28h] BYREF
  int v239; // [rsp+19Ch] [rbp+2Ch] BYREF
  int Next; // [rsp+1A0h] [rbp+30h] BYREF
  int v241; // [rsp+1A4h] [rbp+34h] BYREF
  int v242; // [rsp+1A8h] [rbp+38h] BYREF
  int v243; // [rsp+1ACh] [rbp+3Ch] BYREF
  struct _EX_RUNDOWN_REF *v244; // [rsp+1B0h] [rbp+40h] BYREF
  int v245; // [rsp+1B8h] [rbp+48h] BYREF
  int v246; // [rsp+1BCh] [rbp+4Ch] BYREF
  __int128 v247; // [rsp+1C0h] [rbp+50h]
  signed __int64 v248; // [rsp+1D0h] [rbp+60h]
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+1D8h] [rbp+68h]
  unsigned __int64 v250; // [rsp+1E0h] [rbp+70h] BYREF
  struct CRefCountedBuffer *v251; // [rsp+1E8h] [rbp+78h]
  __int128 v252; // [rsp+1F0h] [rbp+80h]
  __int128 v253; // [rsp+200h] [rbp+90h]
  PSLIST_ENTRY v254; // [rsp+210h] [rbp+A0h] BYREF
  struct ADAPTER_RENDER *v255; // [rsp+218h] [rbp+A8h]
  PRKSEMAPHORE v256; // [rsp+220h] [rbp+B0h] BYREF
  __int64 v257; // [rsp+228h] [rbp+B8h] BYREF
  __int64 v258; // [rsp+230h] [rbp+C0h] BYREF
  void *v259; // [rsp+238h] [rbp+C8h] BYREF
  PSLIST_HEADER v260; // [rsp+240h] [rbp+D0h] BYREF
  __int64 v261; // [rsp+248h] [rbp+D8h] BYREF
  PVOID Object[2]; // [rsp+250h] [rbp+E0h] BYREF
  _BYTE v263[16]; // [rsp+260h] [rbp+F0h] BYREF
  char v264[8]; // [rsp+270h] [rbp+100h] BYREF
  __int64 v265; // [rsp+278h] [rbp+108h]
  int v266; // [rsp+280h] [rbp+110h]
  PVOID P; // [rsp+290h] [rbp+120h]
  _BYTE v268[64]; // [rsp+298h] [rbp+128h] BYREF
  int v269; // [rsp+2D8h] [rbp+168h]
  _BYTE v271[64]; // [rsp+2E0h] [rbp+170h] BYREF
  _BYTE v272[64]; // [rsp+320h] [rbp+1B0h] BYREF
  char v273[64]; // [rsp+360h] [rbp+1F0h] BYREF
  _DWORD v274[16]; // [rsp+3A0h] [rbp+230h] BYREF

  v13 = a8;
  v15 = a10;
  v226 = a10;
  if ( !a9 )
  {
    if ( !a10 || !*((_DWORD *)a10 + 2) || !*(_QWORD *)a10 )
      goto LABEL_3;
LABEL_8:
    v208 = 0;
    v216 = 0LL;
    if ( a9 )
    {
      v15 = *(struct _PRESENT_REDIRECTED_PARAMS **)(*((_QWORD *)a9 + 2) + 16LL);
    }
    else
    {
      v216 = *(_QWORD *)a10;
      v208 = *((_DWORD *)a10 + 2);
    }
    v18 = *((_QWORD *)v15 + 2);
    v215 = (DXGADAPTER *)v18;
    v19 = *(_QWORD *)(v18 + 2704);
    v222 = (struct ADAPTER_RENDER *)v19;
    v20 = *(_QWORD *)(v19 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v20 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v20 + 168)) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v21, a2);
      *(_QWORD *)(v22 + 24) = 2836LL;
      WdLogEvent5_WdAssertion(v22);
    }
    v265 = v19 + 840;
    if ( v19 != -840 && *(struct _KTHREAD **)(v19 + 848) == KeGetCurrentThread() )
    {
      v23 = WdLogNewEntry5_WdAssertion(v19 + 840, a2);
      *(_QWORD *)(v23 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v23);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v265, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v27 = *(_DWORD *)(v265 + 24);
        if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, &EventBlockThread, v26, v27);
      }
      ExAcquirePushLockSharedEx(v265, 0LL);
    }
    v266 = 1;
    CurrentProcess = PsGetCurrentProcess(v25, v24);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    if ( ProcessSessionId >= *(_DWORD *)(v19 + 872)
      || (v30 = 8LL * ProcessSessionId, !*(_QWORD *)(v30 + *(_QWORD *)(v19 + 880)))
      || (_mm_lfence(),
          v31 = *(PRKSEMAPHORE **)(v30 + *(_QWORD *)(v19 + 880)),
          (v231 = (DXGPRESENTHISTORYTOKENQUEUE *)v31) == 0LL) )
    {
      v198 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v198 + 24) = v18;
      WdLogEvent5_WdEvent(v198);
      LODWORD(a3) = -1073741811;
      goto LABEL_322;
    }
    Semaphore = v31[8];
    v256 = Semaphore;
    ObfReferenceObject(Semaphore);
    v266 = 0;
    ExReleasePushLockSharedEx(v265, 0LL);
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
    Object[0] = (PVOID)(v18 + 2672);
    Object[1] = Semaphore;
    v41 = (union _LARGE_INTEGER *)&v257;
    if ( a6 )
      v41 = a6;
    v257 = -200000000LL;
    v229 = (struct _SLIST_ENTRY *)v41;
    v42 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, v41, 0LL);
    if ( !v42 )
      goto LABEL_57;
    if ( v42 == 258 )
    {
      if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v18 + 4496)) <= 2 )
      {
        LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(0x193u, 0x814uLL, 0LL, 0LL, 0LL, 1);
        ListHead = *(PSLIST_HEADER *)(v18 + 316);
        v44 = *(unsigned int *)(v18 + 320);
        v204 = LiveDumpWithWdLogs;
        if ( (unsigned int)dword_1C00B0A90 > 5 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C00B0A90, 0x400000040000LL) )
          {
            v47 = *(unsigned __int8 *)(v18 + 209);
            LOBYTE(v44) = 1;
            IsDebuggerPresent = WdIsDebuggerPresent(v44);
            v234 = v47;
            v236 = *(_DWORD *)(v18 + 2792);
            v237 = *(unsigned __int8 *)(v18 + 2646);
            v238 = *(_DWORD *)(v18 + 4496);
            v239 = v204;
            v235 = IsDebuggerPresent;
            v261 = 0x1000000LL;
            Next = (int)v229->Next;
            v223 = *(_WORD *)(v18 + 2596);
            v258 = *(_QWORD *)(v18 + 1600);
            v259 = *(void **)(v18 + 1592);
            v241 = *(_DWORD *)(v18 + 340);
            v242 = *(_DWORD *)(v18 + 336);
            v243 = *(_DWORD *)(v18 + 332);
            v245 = *(_DWORD *)(v18 + 328);
            v246 = *(_DWORD *)(v18 + 324);
            v260 = ListHead;
            v224 = 1;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              IsDebuggerPresent,
              byte_1C007FB02,
              v49,
              v50,
              (__int64)&v224,
              (__int64)&v261,
              (__int64)&v260,
              (__int64)&v246,
              (__int64)&v245,
              (__int64)&v243,
              (__int64)&v242,
              (__int64)&v241,
              &v259,
              (__int64)&v258,
              (__int64)&v223,
              (__int64)&Next,
              (__int64)&v239,
              (__int64)&v238,
              (__int64)&v237,
              (__int64)&v236,
              (__int64)&v235,
              (__int64)&v234);
            v40 = a6;
          }
        }
      }
      if ( v40 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v44, &EventPerformanceWarning, v45, 19);
        v54 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v54 + 24) = 258LL;
        WdLogEvent5_WdEvent(v54);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)a3);
        v55 = COREDEVICEACCESS::AcquireShared(a2, a11);
        v56 = v55;
        if ( v55 >= 0 )
        {
          LODWORD(a3) = 258;
        }
        else
        {
          v57 = WdLogNewEntry5_WdEvent();
          *(_QWORD *)(v57 + 24) = v56;
          WdLogEvent5_WdEvent(v57);
          COREDEVICEACCESS::AcquireSharedUncheck(a2, v58);
          LODWORD(a3) = -1073741130;
        }
        KOBJECTREF::~KOBJECTREF((PVOID *)&v256);
        goto LABEL_322;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v44, &EventPerformanceWarning, v45, 19);
      v51 = WdLogNewEntry5_WdError(v44, v43);
      *(_QWORD *)(v51 + 24) = 2923LL;
      WdLogEvent5_WdError(v51);
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) )
      {
LABEL_57:
        v52 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v52 + 24) = v18;
        WdLogEvent5_WdEvent(v52);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)a3);
        COREDEVICEACCESS::AcquireSharedUncheck(a2, v53);
        LODWORD(a3) = -1073741130;
        KOBJECTREF::~KOBJECTREF((PVOID *)&v256);
LABEL_322:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v264);
        return (unsigned int)a3;
      }
    }
    if ( !*(_BYTE *)(a3 + 16) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a3 + 8) + 24LL));
      v59 = *(_QWORD *)(a3 + 8);
      *(_QWORD *)a3 = -1LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v59 + 136, 0LL);
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
      v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v44, v43);
      LODWORD(a3) = 0;
      v60[3] = 275LL;
      v60[4] = 4LL;
      v60[5] = v34;
      v60[6] = 0LL;
      v60[7] = 0LL;
      WdLogEvent5_WdCriticalError(v60);
    }
    else
    {
      LODWORD(a3) = 0;
    }
    v61 = *((_QWORD *)a2 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v61 + 184) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v61 + 48)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v62, &EventBlockThread, v63, 72);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)a2 + 3) + 48LL), Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a2 + 3), a11);
    }
    *((_QWORD *)a2 + 5) = 0LL;
    if ( a11 )
    {
      v64 = 17LL;
      v65 = (char *)a2 + 48;
      do
      {
        if ( v64 == -2147483629 )
          break;
        v66 = v65[a11 - ((char *)a2 + 48)];
        if ( !v66 )
          break;
        *v65++ = v66;
        --v64;
      }
      while ( v64 );
      v67 = v65 - 1;
      if ( v64 )
        v67 = v65;
      *v67 = 0;
      if ( v64 )
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
        v68 = WdLogNewEntry5_WdEvent();
        LODWORD(a3) = -1073741130;
        *(_QWORD *)(v68 + 24) = -1073741130LL;
        WdLogEvent5_WdEvent(v68);
        COREDEVICEACCESS::AcquireSharedUncheck(a2, v69);
        KOBJECTREF::~KOBJECTREF((PVOID *)&v256);
        goto LABEL_322;
      }
LABEL_90:
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
      goto LABEL_91;
    }
    v70 = v231;
    v203 = 0;
    v71 = (union _SLIST_HEADER *)((char *)v231 + 48);
    ListHeada = (PSLIST_HEADER)((char *)v231 + 48);
    v72 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v231 + 3);
    if ( !v72
      && (!DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(v70) || (v72 = ExpInterlockedPopEntrySList(v71)) == 0LL)
      || (v74 = (__int64)&v72[1], v72 == (PSLIST_ENTRY)-16LL) )
    {
      LODWORD(a3) = -1073741801;
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v197 = WdLogNewEntry5_WdLowResource(v194, v193, v195, v196);
      *(_QWORD *)(v197 + 24) = v70;
      *(_QWORD *)(v197 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v197);
      KOBJECTREF::~KOBJECTREF((PVOID *)&v256);
      goto LABEL_322;
    }
    if ( a8 )
    {
      v75 = 0LL;
      v254 = 0LL;
      v255 = v222;
    }
    else
    {
      v255 = v222;
      ++*((_DWORD *)v222 + 317);
      v75 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v222 + 78);
      if ( !v75 )
      {
        ++*((_DWORD *)v222 + 318);
        v75 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))v222 + 162))(
                              *((unsigned int *)v222 + 321),
                              *((unsigned int *)v222 + 323),
                              *((unsigned int *)v222 + 322),
                              (__int64)v222 + 1248);
      }
      v254 = v75;
      if ( !v75 )
      {
        KeReleaseSemaphore(Semaphore, 0, 1, 0);
        v88 = WdLogNewEntry5_WdLowResource(v85, v84, v86, v87);
        *(_QWORD *)(v88 + 24) = 2981LL;
        WdLogEvent5_WdLowResource(v88);
        CVidSchSubmitData::~CVidSchSubmitData(&v254);
        LODWORD(a3) = -1073741801;
        KOBJECTREF::~KOBJECTREF((PVOID *)&v256);
        goto LABEL_322;
      }
      v76 = *((_QWORD *)v222 + 2);
      if ( *(int *)(v76 + 2328) < 0x2000 )
        v77 = 1;
      else
        v77 = *(_DWORD *)(v76 + 280);
      if ( *(int *)(v76 + 2328) >= 0x2000 || *(_BYTE *)(v76 + 2628) )
        v78 = *(_DWORD *)(v76 + 2536) * ((v77 << 6) + ((8 * v77 + 199) & 0xFFFFFFF8)) + 8 * (v77 + 73);
      else
        v78 = 1288;
      memset(v75, 0, v78);
      v79 = *((_QWORD *)v222 + 2);
      if ( *(int *)(v79 + 2328) < 0x2000 )
        v80 = 1;
      else
        v80 = *(_DWORD *)(v79 + 280);
      LOBYTE(v73) = *(int *)(v79 + 2328) >= 0x2000 || *(_BYTE *)(v79 + 2628);
      v81 = *(_DWORD *)(v79 + 2536);
      v71 = ListHeada;
      v70 = v231;
      *((_BYTE *)&v75[21].Next + 12) = v73;
      if ( (_BYTE)v73 )
      {
        v73 = (unsigned int)(8 * v80);
        LODWORD(v75[36].Next) = v80;
        v82 = v80 << 6;
        *((_DWORD *)&v75[35].Next + 3) = v81;
        HIDWORD(v75[36].Next) = v81 * (v82 + ((v73 + 199) & 0xFFFFFFF8)) + 16;
        v83 = v81 * (v82 + ((v73 + 199) & 0xFFFFFFF8)) + 584;
        *((_DWORD *)&v75[33].Next + 2) = v83;
        *((_DWORD *)&v75[33].Next + 3) = v73 + v83;
      }
    }
    v89 = a1;
    v90 = 0x1C0000000uLL;
    v201 = 1;
    if ( !a8 )
      v13 = (struct VIDSCH_SUBMIT_DATA_BASE *)v75;
    switch ( a1->Model )
    {
      case D3DKMT_PM_REDIRECTED_GDI:
        FlipInterval = a1->Token.Flip.FlipInterval;
        if ( (unsigned int)FlipInterval > 0x10 )
        {
          v92 = WdLogNewEntry5_WdAssertion(v73, a1);
          *(_QWORD *)(v92 + 24) = 54LL;
          goto LABEL_123;
        }
        v95 = 16 * FlipInterval + 67;
        goto LABEL_135;
      case D3DKMT_PM_REDIRECTED_FLIP:
        NumRects = a1->Token.Flip.DirtyRegions.NumRects;
        if ( NumRects > 0x10 )
        {
          v92 = WdLogNewEntry5_WdAssertion(v73, a1);
          *(_QWORD *)(v92 + 24) = 64LL;
          goto LABEL_123;
        }
        v95 = 16 * NumRects + 831;
        goto LABEL_135;
      case D3DKMT_PM_REDIRECTED_BLT:
        VidPnSourceId = a1->Token.Flip.VidPnSourceId;
        if ( VidPnSourceId > 0x10 )
        {
          v92 = WdLogNewEntry5_WdAssertion(v73, a1);
          *(_QWORD *)(v92 + 24) = 74LL;
LABEL_123:
          WdLogEvent5_WdAssertion(v92);
          v93 = 0;
LABEL_124:
          v94 = WdLogNewEntry5_WdWarning(v73, v89, v90);
          *(_QWORD *)(v94 + 24) = v93;
          WdLogEvent5_WdWarning(v94);
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          CVidSchSubmitData::~CVidSchSubmitData(&v254);
          LODWORD(a3) = -1073741811;
          KOBJECTREF::~KOBJECTREF((PVOID *)&v256);
          goto LABEL_322;
        }
        v95 = 16 * VidPnSourceId + 51;
LABEL_135:
        v93 = v95 & 0xFFFFFFF8;
        if ( v93 - 1 > 0x437 )
          goto LABEL_124;
        break;
      case D3DKMT_PM_REDIRECTED_VISTABLT:
      case D3DKMT_PM_SCREENCAPTUREFENCE:
      case D3DKMT_PM_REDIRECTED_COMPOSITION:
      case D3DKMT_PM_SURFACECOMPLETE:
        v95 = 31;
        goto LABEL_135;
      case D3DKMT_PM_FLIPMANAGER:
        v95 = 47;
        goto LABEL_135;
      default:
        v98 = WdLogNewEntry5_WdAssertion(v73, a1);
        *(_QWORD *)(v98 + 24) = 97LL;
        WdLogEvent5_WdAssertion(v98);
        v89 = a1;
        v95 = 7;
        goto LABEL_135;
    }
    memmove((void *)v74, v89, v93);
    v99 = 0x1C0000000uLL;
    switch ( *(_DWORD *)v74 )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 7:
      case 8:
      case 9:
        v100 = 0LL;
        v101 = *(_DWORD *)v13;
        *((_QWORD *)v13 + 12) = v70;
        *((_QWORD *)v13 + 13) = v74;
        *(_DWORD *)v13 = v101 & 0xFFFFFFDF | (32 * (a5 & 1 | 0x2000));
        v102 = 0LL;
        v103 = v215;
        v104 = 0LL;
        *((_DWORD *)v13 + 29) = -1;
        v230 = 0LL;
        v251 = 0LL;
        v105 = *((_DWORD *)v215 + 582) < 0x2000;
        v229 = 0LL;
        if ( v105 && !*((_BYTE *)v215 + 2628) )
        {
          v108 = a7;
          goto LABEL_149;
        }
        if ( a9 )
        {
          v108 = a7;
          if ( !a7 || ((a1->Model - 1) & 0xFFFFFFFD) == 0 )
            goto LABEL_149;
          v106 = *((_DWORD *)a7 + 368);
          v107 = (void *)*((_QWORD *)a7 + 185);
        }
        else
        {
          v106 = *(_DWORD *)(v216 + 1104);
          v107 = *(void **)(v216 + 1112);
        }
        v109 = ReadPresentPrivateDriverData(v215, v106, v107, &v230);
        a3 = v109;
        v203 = v109;
        if ( v109 < 0 )
        {
          v111 = WdLogNewEntry5_WdError(v110, v99);
          *(_QWORD *)(v111 + 24) = a3;
          WdLogEvent5_WdError(v111);
          v203 = a3;
          goto LABEL_294;
        }
        v102 = (volatile signed __int32 *)v230;
        v103 = v215;
        v108 = a7;
        if ( v230 )
        {
          v100 = v230;
          *((_QWORD *)v13 + 96) = v230;
          *((_DWORD *)v13 + 1) |= 4u;
          v251 = (struct CRefCountedBuffer *)v102;
          v203 = v109;
        }
LABEL_149:
        if ( !*((_BYTE *)v103 + 209) )
        {
          LODWORD(a3) = 0;
          v203 = 0;
          if ( !a9 && !*((_BYTE *)v103 + 2650) )
            goto LABEL_154;
          v112 = PrepareIndependentFlipToken(
                   (struct _D3DKMT_PRESENTHISTORYTOKEN *)v74,
                   v108,
                   v13,
                   a9,
                   v226,
                   (struct CRefCountedBuffer *)v102);
          v104 = (struct _SLIST_ENTRY *)*((_QWORD *)v13 + 4);
          LODWORD(a3) = v112;
          v203 = v112;
          v229 = v104;
        }
        if ( (int)a3 < 0 )
          goto LABEL_295;
LABEL_154:
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v113 = *(_DWORD *)v74;
          LOBYTE(v114) = 0;
          v115 = *(_DWORD *)(v74 + 4);
          v247 = 0LL;
          ListHead_4 = 0;
          LOBYTE(v217) = 0;
          v227 = 0;
          Srca = v115;
          v253 = 0LL;
          v252 = 0LL;
          v116 = v113 - 1;
          switch ( v113 )
          {
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
              v117 = *(_QWORD *)(v74 + 16);
              break;
            case 2:
              v117 = *(_QWORD *)(v74 + 24);
              break;
            default:
              v117 = 0LL;
              break;
          }
          switch ( v113 )
          {
            case 1:
              v118 = (unsigned int *)(v74 + 56);
              break;
            case 2:
              v118 = (unsigned int *)(v74 + 820);
              break;
            case 3:
              v118 = (unsigned int *)(v74 + 40);
              break;
            default:
              v118 = 0LL;
              break;
          }
          v119 = (unsigned int)(v113 - 1);
          if ( v113 == 1 )
          {
            v114 = *(_QWORD *)(v74 + 48);
            ListHead_4 = HIDWORD(v114);
            v247 = *(_OWORD *)(v74 + 32);
          }
          else if ( v113 == 2 )
          {
            v114 = *(_QWORD *)(v74 + 116);
            ListHead_4 = HIDWORD(v114);
            v247 = *(_OWORD *)(v74 + 100);
            v217 = *(_DWORD *)(v74 + 756);
            v120 = *(_OWORD *)(v74 + 764);
            v116 = *(unsigned int *)(v74 + 760);
            v253 = *(_OWORD *)(v74 + 740);
            v227 = v116;
            v252 = v120;
          }
          if ( v118 )
          {
            v121 = *v118;
            v205 = *v118;
            if ( *v118 >= 0x10 )
            {
              v121 = 16;
              v205 = 16;
            }
            else if ( !v121 )
            {
LABEL_179:
              McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq_EtwWriteTransfer(
                ListHead_4,
                (__int64)v118,
                v119,
                (__int64)v222,
                v74,
                v113,
                v115,
                v117,
                v247,
                SBYTE8(v247),
                SBYTE4(v247),
                SBYTE12(v247),
                v114,
                ListHead_4,
                v205,
                (__int64)v274,
                (__int64)v273,
                (__int64)v272,
                (__int64)v271,
                v253,
                SBYTE8(v253),
                SBYTE4(v253),
                SBYTE12(v253),
                v217,
                v227,
                v252,
                SBYTE8(v252),
                SBYTE4(v252),
                SBYTE12(v252));
              goto LABEL_181;
            }
            v118 += 3;
            v122 = v121;
            v119 = 0LL;
            do
            {
              v123 = *(v118 - 2);
              v118 += 4;
              *(_DWORD *)((char *)v274 + v119) = v123;
              v119 += 4LL;
              *(_DWORD *)&v272[v119 + 60] = *(v118 - 4);
              *(_DWORD *)&v271[v119 + 60] = *(v118 - 5);
              *(_DWORD *)&v271[v119 - 4] = *(v118 - 3);
              --v122;
            }
            while ( v122 );
            LOBYTE(v115) = Srca;
            goto LABEL_179;
          }
          LODWORD(Timeout) = v115;
          *(_DWORD *)Alertable = v113;
          McTemplateK0ppqqx_EtwWriteTransfer(
            v116,
            &EventSubmitPresentHistory,
            v119,
            v222,
            v74,
            *(_QWORD *)Alertable,
            Timeout,
            v117);
        }
LABEL_181:
        if ( !a9 )
          goto LABEL_222;
        v103 = a7;
        if ( !a7 )
        {
          if ( !*((_BYTE *)v215 + 209) && (*((_DWORD *)a9 + 105) & 0x10) != 0 )
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(a9, 0LL, 0, 1, v13, 0);
          v201 = 1;
          goto LABEL_222;
        }
        *((_BYTE *)a7 + 1512) = (*((_BYTE *)v13 + 3) & 1) == 0;
        v124 = v215;
        if ( !*((_BYTE *)v215 + 209) )
        {
          if ( (*((_DWORD *)a9 + 105) & 0x10) != 0 )
          {
            v125 = *((_DWORD *)a7 + 23);
            v201 = v125 + 1;
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
              a9,
              *((struct DXGCONTEXT ***)a7 + 187),
              v125,
              1,
              v13,
              0);
            goto LABEL_222;
          }
          v124 = v215;
        }
        v99 = *((unsigned int *)a7 + 23);
        if ( !(_DWORD)v99 || !DXGADAPTER::IsDxgmms2(v124) )
          goto LABEL_222;
        v126 = v99 + 1;
        v201 = v99 + 1;
        v248 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a9 + 2) + 1896LL));
        BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)a9 + 2));
        if ( !BroadcastPresentSyncObject )
        {
          v129 = WdLogNewEntry5_WdError(v128, v127);
          *(_QWORD *)(v129 + 24) = -1073741801LL;
          *(_QWORD *)(v129 + 32) = 3132LL;
          WdLogEvent5_WdError(v129);
          LODWORD(a3) = -1073741801;
          v203 = -1073741801;
LABEL_296:
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          if ( (*(_DWORD *)v13 & 0x1000000) != 0 )
          {
            v183 = 0;
            if ( v126 )
            {
              v184 = 0LL;
              do
              {
                if ( a9 )
                  v185 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a7 + 187) + v184) + 416LL);
                else
                  LOBYTE(v185) = 0;
                if ( *((_BYTE *)v13 + 348) )
                  v186 = (_QWORD *)((char *)v13
                                  + 64 * (unsigned __int64)(v183 * *((_DWORD *)v13 + 143))
                                  + *((_DWORD *)v13 + 143) * ((8 * *((_DWORD *)v13 + 144) + 199) & 0xFFFFFFF8)
                                  + 616);
                else
                  v186 = (_QWORD *)((char *)v13 + 488);
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v222 + 80) + 8LL)
                                                                       + 432LL))(
                  *((_QWORD *)v222 + 81),
                  (unsigned int)(1 << v185),
                  *v186,
                  0LL);
                ++v183;
                v184 += 8LL;
              }
              while ( v183 < v201 );
              v100 = v251;
              v104 = v229;
              LODWORD(a3) = v203;
            }
          }
          goto LABEL_308;
        }
        v130 = 0LL;
        P = 0LL;
        v269 = 0;
        v131 = *((unsigned int *)a7 + 23);
        if ( (unsigned int)v131 <= 8 )
        {
          PoolWithTag = v268;
          P = v268;
        }
        else
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v131 < 8 )
          {
LABEL_201:
            if ( !v130 )
              goto LABEL_202;
            v126 = v201;
            v133 = 1;
            if ( v201 > 1 )
            {
              v134 = 8LL;
              while ( 1 )
              {
                v135 = *(_QWORD *)(v134 + *((_QWORD *)a7 + 187));
                if ( (*(_DWORD *)(v135 + 420) & 0x10) != 0 )
                  break;
                v136 = v133++ - 1;
                v130[v136] = *(_QWORD *)(v135 + 272);
                v134 += 8LL;
                if ( v133 >= v201 )
                  goto LABEL_207;
              }
              LODWORD(a3) = -1073741811;
              v203 = -1073741811;
              if ( P != v268 && P )
                ExFreePoolWithTag(P, 0);
              goto LABEL_296;
            }
LABEL_207:
            LODWORD(a3) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v222 + 77) + 8LL)
                                                                            + 640LL))(
                            0LL,
                            0LL,
                            *((unsigned int *)a7 + 23));
            v203 = a3;
            if ( (int)a3 < 0 )
            {
              v103 = (struct DXGK_PRESENT_PARAMS *)P;
              if ( P == v268 || !P )
                goto LABEL_294;
              goto LABEL_210;
            }
            v137 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*((_QWORD *)v222 + 77) + 8LL) + 624LL))(
                     *((_QWORD *)a9 + 34),
                     BroadcastPresentSyncObject,
                     v248);
            v103 = (struct DXGK_PRESENT_PARAMS *)P;
            LODWORD(a3) = v137;
            v203 = v137;
            if ( v137 < 0 )
            {
              if ( P == v268 || !P )
                goto LABEL_294;
LABEL_210:
              ExFreePoolWithTag(v103, 0);
              goto LABEL_294;
            }
            if ( P != v268 && P )
              ExFreePoolWithTag(P, 0);
            v102 = (volatile signed __int32 *)v230;
LABEL_222:
            v206 = 0LL;
            v218 = 0LL;
            Global = DXGGLOBAL::GetGlobal((__int64)v103, v99);
            v232 = Global;
            v233 = 0;
            if ( !Global )
            {
              v141 = WdLogNewEntry5_WdAssertion(v140, v139);
              *(_QWORD *)(v141 + 24) = 2423LL;
              WdLogEvent5_WdAssertion(v141);
              Global = v232;
            }
            if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 65)) )
            {
              v144 = WdLogNewEntry5_WdAssertion(v143, v142);
              *(_QWORD *)(v144 + 24) = 2428LL;
              WdLogEvent5_WdAssertion(v144);
            }
            if ( !v208 )
            {
              v151 = 0LL;
              goto LABEL_252;
            }
            DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v232, v142);
            v207 = (v208 >> 6) & 0xFFFFFF;
            if ( *((int *)v215 + 649) >= 2000 )
            {
              ListHeadb = (PSLIST_HEADER)DXGPROCESS::GetCurrent();
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&ListHeadb[13]);
              if ( v207 < LODWORD(ListHeadb[16].Alignment) )
              {
                Alignment = ListHeadb[15].Alignment;
                v146 = *(_DWORD *)(Alignment + 16LL * v207 + 8);
                if ( ((v208 >> 25) & 0x60) == (v146 & 0x60) && (v146 & 0x2000) == 0 && (v146 & 0x1F) != 0 )
                {
                  v147 = v146 & 0x1F;
                  if ( (_BYTE)v147 == 11 )
                  {
                    v218 = *(_QWORD **)(Alignment + 16LL * v207);
                    goto LABEL_235;
                  }
                  v148 = WdLogNewEntry5_WdError((v208 >> 25) & 0x60, v147);
                  *(_QWORD *)(v148 + 24) = 267LL;
                  WdLogEvent5_WdError(v148);
                }
              }
              v218 = 0LL;
LABEL_235:
              ExReleasePushLockSharedEx(&ListHeadb[13], 0LL);
              KeLeaveCriticalRegion();
              if ( !v218 )
              {
                v150 = WdLogNewEntry5_WdError(v149, v142);
                LODWORD(a3) = -1073741811;
                *(_QWORD *)(v150 + 24) = v208;
                *(_QWORD *)(v150 + 32) = -1073741811LL;
                WdLogEvent5_WdError(v150);
                v203 = -1073741811;
                if ( v233 )
LABEL_237:
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v232);
LABEL_295:
                v126 = v201;
                goto LABEL_296;
              }
              v151 = v218[4];
              v206 = (DXGSYNCOBJECT *)v151;
LABEL_252:
              if ( !*((_BYTE *)v215 + 209) )
              {
                if ( a9 )
                {
                  if ( *((struct _KTHREAD **)a9 + 59) != KeGetCurrentThread() )
                  {
                    v158 = WdLogNewEntry5_WdAssertion(v151, v142);
                    *(_QWORD *)(v158 + 24) = 3230LL;
                    WdLogEvent5_WdAssertion(v158);
                  }
                  v159 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a9 + 2) + 16LL) + 616LL) + 8LL);
                  if ( (*((_DWORD *)a9 + 105) & 0x10) != 0 )
                    LODWORD(a3) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v159 + 432))(
                                    *((_QWORD *)a9 + 38),
                                    v13);
                  else
                    LODWORD(a3) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v159 + 424))(
                                    *((_QWORD *)a9 + 34),
                                    v13);
                  v203 = a3;
                }
                else
                {
                  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v263, (struct DXGFASTMUTEX *const)(v151 + 32), 0);
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v263);
                  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(v206, v222);
                  LODWORD(a3) = (*(__int64 (__fastcall **)(struct VIDSCH_SUBMIT_DATA_BASE *, __int64, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v161 + 8) + 1008LL))(
                                  v13,
                                  v162,
                                  VidSchSyncObject);
                  v203 = a3;
                  if ( v263[8] )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v263, v163);
                }
LABEL_292:
                if ( v233 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v232);
LABEL_294:
                if ( (int)a3 >= 0 )
                {
LABEL_308:
                  if ( v104 )
                    CRefCountedBuffer::RefCountedBufferRelease(v104);
                  if ( !v100 || _InterlockedExchangeAdd((volatile signed __int32 *)v100 + 3, 0xFFFFFFFF) != 1 )
                    goto LABEL_316;
                  v187 = *(_QWORD *)v100;
                  if ( *(_QWORD *)v100 )
                  {
                    ++*(_DWORD *)(v187 + 28);
                    if ( ExQueryDepthSList((PSLIST_HEADER)v187) < *(_WORD *)(v187 + 16) )
                    {
                      ExpInterlockedPushEntrySList((PSLIST_HEADER)v187, (PSLIST_ENTRY)v100);
                    }
                    else
                    {
                      v188 = *(void (__fastcall **)(struct CRefCountedBuffer *, __int64))(v187 + 56);
                      ++*(_DWORD *)(v187 + 32);
                      v188(v100, v187);
                    }
                    goto LABEL_316;
                  }
                  ExFreePoolWithTag(v100, 0);
                  CVidSchSubmitData::~CVidSchSubmitData(&v254);
                  KOBJECTREF::~KOBJECTREF((PVOID *)&v256);
                  goto LABEL_322;
                }
                goto LABEL_295;
              }
              if ( v102 )
              {
                _InterlockedIncrement(v102 + 3);
                v102 = (volatile signed __int32 *)v230;
              }
              v202 = 1;
              if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v151, v142) + 408) < 0x18u )
                goto LABEL_286;
              SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal(v165, v164)
                                                                        + 102);
              v226 = SessionDataForSpecifiedSession;
              if ( SessionDataForSpecifiedSession )
              {
                CurrentProcessSessionId = PsGetCurrentProcessSessionId(v168, v167);
                SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                   v226,
                                                   CurrentProcessSessionId);
              }
              if ( !*((_DWORD *)SessionDataForSpecifiedSession + 4730)
                || *(_DWORD *)v74 != 2
                || !a9
                || (v170 = *(union _SLIST_HEADER **)(*((_QWORD *)a9 + 2) + 40LL),
                    v226 = (DXGSESSIONMGR *)v170,
                    !*((_BYTE *)&v170[21].HeaderX64 + 10))
                || !a7
                || (Srcb = *((_DWORD *)a7 + 5)) == 0 )
              {
LABEL_286:
                a3 = 0LL;
                if ( !a9 )
                  a3 = (__int64)v218;
                Current = DXGPROCESS::GetCurrent();
                LODWORD(a3) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitPresentHistoryToken(
                                (DXGADAPTER *)((char *)v215 + 4240),
                                Current,
                                (__int64)a9,
                                *(_QWORD *)v13,
                                (__int64)v231,
                                v74,
                                (__int64)v102,
                                a3);
                v203 = a3;
LABEL_289:
                if ( (int)a3 < 0 && v102 )
                  CRefCountedBuffer::RefCountedBufferRelease((PSLIST_ENTRY)v102);
                goto LABEL_292;
              }
              ListHeadd = v170 + 13;
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&v170[13]);
              v171 = (Srcb >> 6) & 0xFFFFFF;
              if ( (unsigned int)v171 < *((_DWORD *)v226 + 64) )
              {
                v172 = *((_QWORD *)v226 + 30);
                v173 = *(_DWORD *)(v172 + 16 * v171 + 8);
                if ( ((Srcb >> 25) & 0x60) == (*(_BYTE *)(v172 + 16 * v171 + 8) & 0x60)
                  && (v173 & 0x2000) == 0
                  && (v173 & 0x1F) != 0 )
                {
                  v174 = v173 & 0x1F;
                  v175 = (struct _EX_RUNDOWN_REF **)(v172 + 16LL * (unsigned int)v171);
                  if ( (_BYTE)v174 == 5 )
                  {
                    v177 = *v175;
                    goto LABEL_280;
                  }
                  v176 = WdLogNewEntry5_WdError((Srcb >> 25) & 0x60, v174);
                  *(_QWORD *)(v176 + 24) = 267LL;
                  WdLogEvent5_WdError(v176);
                }
              }
              v177 = 0LL;
LABEL_280:
              DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v244, v177);
              ExReleasePushLockSharedEx(ListHeadd, 0LL);
              KeLeaveCriticalRegion();
              if ( v244 )
              {
                v179 = *(_DWORD *)v74 == 2;
                v228 = 0;
                v250 = 0LL;
                if ( v179 )
                {
                  v180 = *(void **)(v74 + 64);
                  if ( v180 )
                  {
                    LODWORD(a3) = DxgkQueryHostCompSurfInfo(v180, &v228, &v250);
                    v203 = a3;
                    if ( (int)a3 >= 0 )
                    {
                      v181 = DXGPROCESS::GetCurrent();
                      LODWORD(a3) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitVailPresentHistoryToken(
                                      (char *)v215 + 4240,
                                      v181,
                                      a9,
                                      *(_QWORD *)v13,
                                      v231,
                                      v74,
                                      v102,
                                      v206,
                                      v244,
                                      v228,
                                      v250);
                      v202 = 0;
                      v203 = a3;
                    }
                  }
                }
              }
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v244, v178);
              if ( !v202 )
                goto LABEL_289;
              goto LABEL_286;
            }
            ListHeadc = (PSLIST_HEADER)DXGPROCESS::GetCurrent();
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&ListHeadc[13]);
            if ( v207 < LODWORD(ListHeadc[16].Alignment) )
            {
              v152 = ListHeadc[15].Alignment;
              v153 = *(_DWORD *)(v152 + 16LL * v207 + 8);
              if ( ((v208 >> 25) & 0x60) == (v153 & 0x60) && (v153 & 0x2000) == 0 && (v153 & 0x1F) != 0 )
              {
                v154 = v153 & 0x1F;
                if ( (_BYTE)v154 == 8 )
                {
                  v156 = *(DXGSYNCOBJECT **)(v152 + 16LL * v207);
LABEL_247:
                  v206 = v156;
                  ExReleasePushLockSharedEx(&ListHeadc[13], 0LL);
                  KeLeaveCriticalRegion();
                  v151 = (__int64)v206;
                  if ( !v206 )
                  {
                    v157 = WdLogNewEntry5_WdError(0LL, v142);
                    LODWORD(a3) = -1073741811;
                    *(_QWORD *)(v157 + 24) = v208;
                    *(_QWORD *)(v157 + 32) = -1073741811LL;
                    WdLogEvent5_WdError(v157);
                    v203 = -1073741811;
                    if ( !v233 )
                      goto LABEL_295;
                    goto LABEL_237;
                  }
                  goto LABEL_252;
                }
                v155 = WdLogNewEntry5_WdError((v208 >> 25) & 0x60, v154);
                *(_QWORD *)(v155 + 24) = 267LL;
                WdLogEvent5_WdError(v155);
              }
            }
            v156 = 0LL;
            goto LABEL_247;
          }
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v131, 0x4B677844u);
          P = PoolWithTag;
        }
        v269 = v131;
        if ( !PoolWithTag )
        {
LABEL_202:
          LODWORD(a3) = -1073741801;
          v203 = -1073741801;
          goto LABEL_295;
        }
        memset(PoolWithTag, 0, 8 * v131);
        v130 = P;
        goto LABEL_201;
      default:
        LODWORD(a3) = -1071775733;
        ExpInterlockedPushEntrySList(v71, (PSLIST_ENTRY)(v74 - 16));
        KeReleaseSemaphore(Semaphore, 0, 1, 0);
        v192 = WdLogNewEntry5_WdWarning(v190, v189, v191);
        *(_QWORD *)(v192 + 24) = DXGPROCESS::GetCurrent();
        WdLogEvent5_WdWarning(v192);
LABEL_316:
        CVidSchSubmitData::~CVidSchSubmitData(&v254);
        KOBJECTREF::~KOBJECTREF((PVOID *)&v256);
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
