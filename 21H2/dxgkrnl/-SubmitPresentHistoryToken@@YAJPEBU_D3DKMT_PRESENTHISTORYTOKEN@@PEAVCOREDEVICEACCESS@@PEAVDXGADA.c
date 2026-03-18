/*
 * XREFs of ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01752C0
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0159A40 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0171830 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C0174BD0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresent @ 0x1C0181EB0 (DxgkPresent.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C0191040 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0313260 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkPresentRedirected @ 0x1C0333590 (DxgkPresentRedirected.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0001B60 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C000A948 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C001DFD8 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x1C002F308 (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
 *     McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer @ 0x1C002F3E0 (McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@435555555@Z @ 0x1C0057014 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$_ea_1C0057014.c)
 *     ?DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z @ 0x1C00772FC (-DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C016A93C (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0175D10 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C01789B0 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C01DA370 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C0224DC6 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C02E5670 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C037E268 (-VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONT.c)
 *     ?VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGSYNCOBJECT@@PEAVDXGALLOCATION_VGPU@@I_K@Z @ 0x1C037E398 (-VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXG.c)
 */

__int64 __fastcall SubmitPresentHistoryToken(
        struct _D3DKMT_PRESENTHISTORYTOKEN *a1,
        struct _SLIST_ENTRY *a2,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a3,
        struct CWin32kLocks *a4,
        char a5,
        union _LARGE_INTEGER *a6,
        struct DXGK_PRESENT_PARAMS *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct DXGCONTEXT *a9,
        struct _PRESENT_REDIRECTED_PARAMS *a10,
        char *a11)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v12; // r12
  __int64 v14; // rax
  DXGADAPTER *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v24; // rcx
  PVOID *v25; // rax
  PSLIST_ENTRY v26; // rbx
  struct _SLIST_ENTRY **v27; // rdi
  struct _KTHREAD **v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  union _LARGE_INTEGER *v32; // r13
  NTSTATUS v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rbx
  struct _SLIST_ENTRY *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  const char *v40; // rsi
  DXGPRESENTHISTORYTOKENQUEUE *v41; // rbx
  __int64 v42; // r13
  union _SLIST_HEADER *v43; // rsi
  struct _SLIST_ENTRY *v44; // rdi
  struct _SLIST_ENTRY *v45; // rbx
  __int64 v46; // rax
  int v47; // edx
  unsigned int v48; // eax
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  int v52; // ecx
  int v53; // edx
  unsigned int v54; // eax
  int v55; // eax
  unsigned int v56; // ecx
  int v57; // ecx
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  int Next; // eax
  struct _SLIST_ENTRY *v61; // rsi
  unsigned int v62; // eax
  struct _SLIST_ENTRY *v63; // rdi
  int v64; // ecx
  DXGPRESENTHISTORYTOKENQUEUE *v65; // rax
  DXGADAPTER *v66; // rcx
  struct CRefCountedBuffer *v67; // rax
  bool v68; // cc
  struct DXGK_PRESENT_PARAMS *v69; // r10
  int v70; // eax
  struct DXGK_PRESENT_PARAMS *v71; // rdx
  DXGADAPTER *v72; // r13
  struct DXGGLOBAL *Global; // rax
  DXGSYNCOBJECT *v74; // rax
  __int64 v75; // rdx
  int v76; // eax
  struct ADAPTER_RENDER *v77; // rbx
  struct _SLIST_ENTRY *v78; // rdi
  char *v79; // rbx
  unsigned int v81; // ecx
  unsigned int v82; // edx
  void *v83; // r8
  int v84; // eax
  const wchar_t *v85; // r9
  unsigned int v86; // ecx
  int v87; // r9d
  char *v88; // rdx
  __int64 v89; // r9
  __int64 v90; // r8
  __int64 v91; // r9
  int v92; // eax
  struct _SLIST_ENTRY *v93; // r10
  char *v94; // rdx
  const wchar_t *v95; // r9
  struct DXGPROCESS *Current; // rax
  unsigned int v97; // r8d
  struct DXGK_PRESENT_PARAMS *v98; // rdi
  __int64 v99; // rsi
  int v100; // r9d
  int v101; // r9d
  int Next_high; // r11d
  struct _SLIST_ENTRY *v103; // rax
  int v104; // r10d
  __int64 v105; // rdx
  unsigned int *v106; // r8
  __int128 v107; // xmm1
  int v108; // ecx
  int v109; // r13d
  __int64 v110; // rcx
  unsigned int v111; // r11d
  __int64 v112; // rsi
  unsigned __int64 v113; // r10
  int v114; // ecx
  unsigned int v115; // r8d
  int v116; // edx
  struct DXGK_PRESENT_PARAMS *v117; // r11
  _BYTE *Pool2; // r9
  __int64 v119; // rax
  unsigned int v120; // edx
  __int64 v121; // r8
  __int64 v122; // r10
  __int64 v123; // rcx
  int v124; // eax
  _BYTE *v125; // rcx
  PLARGE_INTEGER v126; // r9
  union _LARGE_INTEGER v127; // r10
  int v128; // edx
  PLARGE_INTEGER v129; // rcx
  union _LARGE_INTEGER v130; // r10
  int v131; // edx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  _DWORD *v135; // rcx
  __int64 v136; // rcx
  __int64 v137; // r8
  int v138; // r9d
  __int64 v139; // rax
  __int64 v140; // r9
  int v141; // ecx
  struct DXGALLOCATION *v142; // rdx
  bool v143; // zf
  struct _SLIST_ENTRY *v144; // rcx
  unsigned __int64 v145; // r15
  unsigned int v146; // r12d
  struct _SLIST_ENTRY *v147; // rbx
  struct DXGPROCESS *v148; // rax
  __int64 v149; // rbx
  struct DXGPROCESS *v150; // rax
  _QWORD *v151; // r8
  __int64 WaitMode; // [rsp+20h] [rbp-160h]
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-158h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-150h]
  __int64 v155; // [rsp+40h] [rbp-140h]
  char v156; // [rsp+40h] [rbp-140h]
  __int64 v157; // [rsp+48h] [rbp-138h]
  int v158; // [rsp+100h] [rbp-80h]
  char v159; // [rsp+100h] [rbp-80h]
  unsigned int v160; // [rsp+100h] [rbp-80h]
  DXGADAPTER *v161; // [rsp+108h] [rbp-78h]
  struct ADAPTER_RENDER *v162; // [rsp+110h] [rbp-70h]
  DXGSYNCOBJECT *v163; // [rsp+118h] [rbp-68h]
  int LiveDumpWithWdLogs; // [rsp+118h] [rbp-68h]
  char v165; // [rsp+118h] [rbp-68h]
  int v166; // [rsp+118h] [rbp-68h]
  unsigned int v167; // [rsp+118h] [rbp-68h]
  unsigned int v168; // [rsp+120h] [rbp-60h]
  unsigned int v169; // [rsp+124h] [rbp-5Ch]
  PLARGE_INTEGER v170; // [rsp+128h] [rbp-58h]
  unsigned int v171; // [rsp+12Ch] [rbp-54h]
  unsigned int v172; // [rsp+130h] [rbp-50h] BYREF
  PSLIST_ENTRY v173; // [rsp+138h] [rbp-48h]
  __int64 v174; // [rsp+140h] [rbp-40h]
  struct CRefCountedBuffer *v175; // [rsp+148h] [rbp-38h] BYREF
  void *Src; // [rsp+150h] [rbp-30h]
  struct DXGK_PRESENT_PARAMS *v177; // [rsp+158h] [rbp-28h]
  PSLIST_ENTRY v178; // [rsp+160h] [rbp-20h]
  PVOID v179; // [rsp+168h] [rbp-18h]
  __int16 v180; // [rsp+170h] [rbp-10h] BYREF
  __int16 v181; // [rsp+172h] [rbp-Eh] BYREF
  struct _SLIST_ENTRY *v182; // [rsp+178h] [rbp-8h]
  DXGSESSIONMGR *v183; // [rsp+180h] [rbp+0h] BYREF
  DXGPRESENTHISTORYTOKENQUEUE *v184; // [rsp+188h] [rbp+8h]
  __int64 v185; // [rsp+190h] [rbp+10h] BYREF
  PSLIST_ENTRY v186; // [rsp+198h] [rbp+18h]
  struct DXGGLOBAL *v187; // [rsp+1A0h] [rbp+20h] BYREF
  char v188; // [rsp+1A8h] [rbp+28h]
  int v189; // [rsp+1B0h] [rbp+30h] BYREF
  int IsDebuggerPresent; // [rsp+1B4h] [rbp+34h] BYREF
  int v191; // [rsp+1B8h] [rbp+38h] BYREF
  int v192; // [rsp+1BCh] [rbp+3Ch] BYREF
  int v193; // [rsp+1C0h] [rbp+40h] BYREF
  int v194; // [rsp+1C4h] [rbp+44h] BYREF
  DWORD LowPart; // [rsp+1C8h] [rbp+48h] BYREF
  int v196; // [rsp+1CCh] [rbp+4Ch] BYREF
  int v197; // [rsp+1D0h] [rbp+50h] BYREF
  int v198; // [rsp+1D4h] [rbp+54h] BYREF
  int v199; // [rsp+1D8h] [rbp+58h] BYREF
  int v200; // [rsp+1DCh] [rbp+5Ch] BYREF
  struct _SLIST_ENTRY *v201; // [rsp+1E0h] [rbp+60h]
  struct _SLIST_ENTRY v202; // [rsp+1E8h] [rbp+68h]
  PSLIST_ENTRY ListEntry; // [rsp+1F8h] [rbp+78h] BYREF
  struct ADAPTER_RENDER *v204; // [rsp+200h] [rbp+80h]
  signed __int64 v205; // [rsp+208h] [rbp+88h]
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+210h] [rbp+90h]
  unsigned __int64 v207; // [rsp+218h] [rbp+98h] BYREF
  struct _PRESENT_REDIRECTED_PARAMS *v208; // [rsp+220h] [rbp+A0h]
  __int128 v209; // [rsp+228h] [rbp+A8h]
  __int128 v210; // [rsp+238h] [rbp+B8h]
  __int64 v211; // [rsp+248h] [rbp+C8h] BYREF
  __int64 v212; // [rsp+250h] [rbp+D0h] BYREF
  void *v213; // [rsp+258h] [rbp+D8h] BYREF
  struct _SLIST_ENTRY *v214; // [rsp+260h] [rbp+E0h] BYREF
  PVOID Object[2]; // [rsp+268h] [rbp+E8h] BYREF
  _BYTE v216[24]; // [rsp+278h] [rbp+F8h] BYREF
  PVOID P; // [rsp+290h] [rbp+110h]
  _BYTE v218[64]; // [rsp+298h] [rbp+118h] BYREF
  int v219; // [rsp+2D8h] [rbp+158h]
  _BYTE v221[64]; // [rsp+2E0h] [rbp+160h] BYREF
  _BYTE v222[64]; // [rsp+320h] [rbp+1A0h] BYREF
  char v223[64]; // [rsp+360h] [rbp+1E0h] BYREF
  _DWORD v224[16]; // [rsp+3A0h] [rbp+220h] BYREF

  v12 = a8;
  v177 = a7;
  Src = a1;
  v178 = (PSLIST_ENTRY)a11;
  v173 = a2;
  v186 = (PSLIST_ENTRY)a8;
  v208 = a10;
  if ( !a9 )
  {
    if ( a10 && *((_DWORD *)a10 + 2) && *(_QWORD *)a10 )
    {
      v15 = (DXGADAPTER *)*((_QWORD *)a10 + 2);
      v86 = *((_DWORD *)a10 + 2);
      v174 = *(_QWORD *)a10;
      v168 = v86;
      goto LABEL_4;
    }
    LODWORD(v42) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v85 = L"Sync Object and pPresentRedirected must be specified when context is null, returning 0x%I64x";
LABEL_330:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v85, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v42;
  }
  if ( a10 )
  {
    LODWORD(v42) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v85 = L"Context can not be with sync object, returning 0x%I64x";
    goto LABEL_330;
  }
  v14 = *((_QWORD *)a9 + 2);
  v168 = 0;
  v174 = 0LL;
  v15 = *(DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL);
LABEL_4:
  v16 = *((_QWORD *)v15 + 350);
  v161 = v15;
  v162 = (struct ADAPTER_RENDER *)v16;
  v17 = *(_QWORD *)(v16 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 168)) )
  {
    WdLogSingleEntry1(1LL, 3042LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderCore->IsCoreResourceSharedOwner()",
      3042LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v16 != -864 && *(struct _KTHREAD **)(v16 + 872) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1425LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v16 + 864, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v87 = *(_DWORD *)(v16 + 888);
      if ( v87 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (const EVENT_DESCRIPTOR *)"g", v20, v87);
    }
    ExAcquirePushLockSharedEx(v16 + 864, 0LL);
  }
  CurrentProcess = PsGetCurrentProcess(v19, v18, v20, v21);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  if ( ProcessSessionId >= *(_DWORD *)(v16 + 896)
    || (v24 = 8LL * ProcessSessionId, !*(_QWORD *)(v24 + *(_QWORD *)(v16 + 904)))
    || (_mm_lfence(), v25 = *(PVOID **)(v24 + *(_QWORD *)(v16 + 904)),
                      (v184 = (DXGPRESENTHISTORYTOKENQUEUE *)v25) == 0LL) )
  {
    WdLogSingleEntry1(4LL, v161);
    LODWORD(v42) = -1073741811;
    ExReleasePushLockSharedEx(v16 + 864, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v42;
  }
  v179 = v25[8];
  ObfReferenceObject(v179);
  ExReleasePushLockSharedEx(v16 + 864, 0LL);
  KeLeaveCriticalRegion();
  v26 = v173;
  v27 = &v173->Next + 1;
  if ( !LOBYTE(v173[2].Next) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v173->Next + 1, 0LL, 0LL);
  v28 = (struct _KTHREAD **)*((_QWORD *)&v173[1].Next + 1);
  LOBYTE(v173[2].Next) = 0;
  if ( KeGetCurrentThread() != v28[23] )
    DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v28, (char *)v27[4]);
  v27[4] = 0LL;
  if ( LOBYTE(v26[9].Next) )
    COREACCESS::Release((COREACCESS *)(&v26[4].Next + 1));
  if ( *((_BYTE *)a3 + 16) )
  {
    v29 = *((_QWORD *)a3 + 1) + 136LL;
    *((_BYTE *)a3 + 16) = 0;
    ExReleasePushLockSharedEx(v29, 0LL);
    KeLeaveCriticalRegion();
    v30 = *((_QWORD *)a3 + 1);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v30 + 16), (struct DXGADAPTER *)v30);
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
      v31 = *((_QWORD *)a4 + 5);
      if ( v31 )
      {
        if ( *((_DWORD *)a4 + 13) )
          (*(void (__fastcall **)(__int64, bool))(*((_QWORD *)a4 + 4) + 280LL))(v31, *((_DWORD *)a4 + 12) == 0);
        (*(void (**)(void))(*((_QWORD *)a4 + 4) + 264LL))();
        *((_QWORD *)a4 + 5) = 0LL;
        *((_QWORD *)a4 + 6) = 0LL;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 288LL))(*(_QWORD *)a4, 0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 64LL))(*(_QWORD *)a4, *((_QWORD *)a4 + 1));
      *(_QWORD *)a4 = 0LL;
    }
  }
  v32 = (union _LARGE_INTEGER *)&v211;
  Object[0] = (char *)v161 + 2768;
  Object[1] = v179;
  v211 = -200000000LL;
  if ( a6 )
    v32 = a6;
  v33 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, v32, 0LL);
  if ( !v33 )
  {
    WdLogSingleEntry1(4LL, v161);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
LABEL_160:
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v26, v88);
    LODWORD(v42) = -1073741130;
    goto LABEL_110;
  }
  if ( v33 != 258 )
    goto LABEL_36;
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v161 + 1163) <= 2 )
  {
    LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(403LL, 2068LL);
    LODWORD(v182) = *((_DWORD *)v161 + 101);
    v34 = *((unsigned int *)v161 + 102);
    HIDWORD(v182) = *((_DWORD *)v161 + 102);
    if ( (unsigned int)dword_1C012F918 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C012F918, 0x400000040000LL) )
      {
        LOBYTE(v34) = 1;
        v189 = *(unsigned __int8 *)(v89 + 209);
        IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v34);
        v183 = (DXGSESSIONMGR *)0x1000000;
        v191 = *((_DWORD *)v161 + 722);
        v192 = *((unsigned __int8 *)v161 + 2742);
        v193 = *((_DWORD *)v161 + 1163);
        v194 = LiveDumpWithWdLogs;
        LowPart = v32->LowPart;
        v181 = *((_WORD *)v161 + 1346);
        v212 = *((_QWORD *)v161 + 212);
        v213 = (void *)*((_QWORD *)v161 + 211);
        v196 = *((_DWORD *)v161 + 107);
        v197 = *((_DWORD *)v161 + 106);
        v200 = *((_DWORD *)v161 + 105);
        v199 = *((_DWORD *)v161 + 104);
        v198 = *((_DWORD *)v161 + 103);
        v214 = v182;
        v180 = 1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)v161,
          byte_1C0099382,
          v90,
          v91,
          (__int64)&v180,
          (__int64)&v183,
          (__int64)&v214,
          (__int64)&v198,
          (__int64)&v199,
          (__int64)&v200,
          (__int64)&v197,
          (__int64)&v196,
          &v213,
          (__int64)&v212,
          (__int64)&v181,
          (__int64)&LowPart,
          (__int64)&v194,
          (__int64)&v193,
          (__int64)&v192,
          (__int64)&v191,
          (__int64)&IsDebuggerPresent,
          (__int64)&v189);
      }
    }
  }
  if ( a6 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, &EventPerformanceWarning, v35, 19);
    WdLogSingleEntry1(4LL, 258LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
    v92 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v26, (char *)v178);
    if ( v92 >= 0 )
    {
      LODWORD(v42) = 258;
      goto LABEL_110;
    }
    WdLogSingleEntry1(4LL, v92);
    goto LABEL_160;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, &EventPerformanceWarning, v35, 19);
  WdLogSingleEntry1(2LL, 3131LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Present token is not submitted due to default semaphore timeout of 20 seconds",
    3131LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) )
  {
    WdLogSingleEntry1(4LL, v161);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
    goto LABEL_160;
  }
LABEL_36:
  if ( !*((_BYTE *)a3 + 16) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a3 + 1) + 24LL));
    v36 = *((_QWORD *)a3 + 1);
    *(_QWORD *)a3 = -1LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v36 + 136, 0LL);
    v26 = v173;
    *((_BYTE *)a3 + 16) = 1;
  }
  if ( LOBYTE(v26[9].Next) )
  {
    COREACCESS::AcquireShared((COREACCESS *)(&v26[4].Next + 1), 0LL);
    if ( *(_DWORD *)(*((_QWORD *)&v26[5].Next + 1) + 200LL) != 1 )
      goto LABEL_172;
  }
  if ( *((_BYTE *)v27 + 24) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v27, 0LL, 0LL);
  v37 = v27[2];
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)&v37[11].Next + 1) )
  {
    v40 = (const char *)v178;
  }
  else
  {
    if ( !KeReadStateEvent((PRKEVENT)&v37[3]) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v38, (const EVENT_DESCRIPTOR *)"g", v39, 72);
      KeWaitForSingleObject(&v27[2][3], Executive, 0, 0, 0LL);
    }
    v40 = (const char *)v178;
    DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)v27[2], (char *)v178);
  }
  v27[4] = 0LL;
  if ( v40 && (int)RtlStringCbCopyA((char *)v27 + 40, 17LL, v40) >= 0 )
    v27[4] = v93;
  *((_BYTE *)v27 + 24) = 1;
  if ( *(_DWORD *)(*((_QWORD *)&v26[8].Next + 1) + 576LL) == 1 )
  {
    v41 = v184;
    LODWORD(v42) = 0;
    v158 = 0;
    v43 = (union _SLIST_HEADER *)((char *)v184 + 48);
    v178 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v184 + 3);
    v44 = v178;
    if ( v178
      || DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(v41)
      && (v178 = ExpInterlockedPopEntrySList(v43), (v44 = v178) != 0LL) )
    {
      v45 = v44 + 1;
      if ( v44 != (struct _SLIST_ENTRY *)-16LL )
      {
        if ( a8 )
        {
          v204 = v162;
          ListEntry = 0LL;
LABEL_59:
          v169 = 1;
          v55 = *(_DWORD *)Src;
          if ( *(_DWORD *)Src == 1 )
          {
            v58 = *((_DWORD *)Src + 14);
            if ( v58 <= 0x10 )
            {
              v57 = 16 * v58 + 67;
LABEL_65:
              v59 = v57 & 0xFFFFFFF8;
              if ( v59 - 1 <= 0x437 )
              {
LABEL_66:
                memmove(v45, Src, v59);
                Next = (int)v45->Next;
                if ( LODWORD(v45->Next) != 1 && Next != 3 )
                {
                  switch ( Next )
                  {
                    case 2:
                    case 4:
                    case 5:
                    case 7:
                    case 8:
                    case 9:
                      break;
                    default:
                      LODWORD(v42) = -1071775733;
                      ExpInterlockedPushEntrySList(v43, v44);
                      KeReleaseSemaphore((PRKSEMAPHORE)v179, 0, 1, 0);
                      Current = DXGPROCESS::GetCurrent();
                      WdLogSingleEntry1(3LL, Current);
                      v77 = v162;
                      goto LABEL_107;
                  }
                }
                v61 = 0LL;
                v62 = *(_DWORD *)v12 & 0xFFFFFFDF;
                *((_QWORD *)v12 + 13) = v45;
                *((_DWORD *)v12 + 29) = -1;
                v63 = 0LL;
                v64 = v62 | (32 * (a5 & 1 | 0x2000));
                v182 = 0LL;
                v65 = v184;
                *(_DWORD *)v12 = v64;
                v66 = v161;
                *((_QWORD *)v12 + 12) = v65;
                v67 = 0LL;
                v173 = 0LL;
                v175 = 0LL;
                v68 = *((_DWORD *)v161 + 606) < 0x2000;
                v201 = 0LL;
                if ( !v68 || *((_BYTE *)v161 + 2724) )
                {
                  if ( a9 )
                  {
                    v69 = v177;
                    if ( !v177 )
                      goto LABEL_73;
                    if ( ((*(_DWORD *)Src - 1) & 0xFFFFFFFD) == 0 )
                    {
                      v67 = 0LL;
                      goto LABEL_73;
                    }
                    v82 = *((_DWORD *)v177 + 368);
                    v83 = (void *)*((_QWORD *)v177 + 185);
                  }
                  else
                  {
                    v82 = *(_DWORD *)(v174 + 1104);
                    v83 = *(void **)(v174 + 1112);
                  }
                  v84 = ReadPresentPrivateDriverData(v161, v82, v83, &v175);
                  v42 = v84;
                  if ( v84 < 0 )
                  {
                    WdLogSingleEntry1(2LL, v84);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to read private driver data. Returning 0x%I64x",
                      v42,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    v158 = v42;
                    goto LABEL_190;
                  }
                  v67 = v175;
                  v173 = (PSLIST_ENTRY)v175;
                  if ( v175 )
                  {
                    *((_QWORD *)v12 + 100) = v175;
                    v61 = (struct _SLIST_ENTRY *)v67;
                    *((_DWORD *)v12 + 1) |= 4u;
                  }
                  v66 = v161;
                  v158 = v42;
                  v182 = v61;
                }
                v69 = v177;
LABEL_73:
                if ( !*((_BYTE *)v66 + 209) )
                {
                  if ( !a9 && !*((_BYTE *)v66 + 2746) )
                    goto LABEL_77;
                  v70 = PrepareIndependentFlipToken((struct _D3DKMT_PRESENTHISTORYTOKEN *)v45, v69, v12, a9, v208, v67);
                  v63 = (struct _SLIST_ENTRY *)*((_QWORD *)v12 + 4);
                  LODWORD(v42) = v70;
                  v66 = v161;
                  v158 = v70;
                  v201 = v63;
                }
                if ( (int)v42 < 0 )
                  goto LABEL_190;
LABEL_77:
                if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
                {
                  v42 = (__int64)v162;
                  goto LABEL_80;
                }
                v101 = (int)v45->Next;
                Next_high = HIDWORD(v45->Next);
                LOBYTE(v103) = 0;
                v202 = 0LL;
                v171 = 0;
                LOBYTE(v104) = 0;
                LODWORD(Src) = 0;
                LODWORD(v174) = 0;
                v159 = Next_high;
                v210 = 0LL;
                v209 = 0LL;
                switch ( v101 )
                {
                  case 1:
                    v105 = (__int64)v45[1].Next;
                    goto LABEL_199;
                  case 2:
                    v105 = *((_QWORD *)&v45[1].Next + 1);
                    goto LABEL_201;
                  case 3:
                    v105 = (__int64)v45[1].Next;
                    goto LABEL_204;
                  case 4:
                  case 5:
                  case 6:
                  case 7:
                  case 8:
                    v105 = (__int64)v45[1].Next;
                    goto LABEL_209;
                  default:
                    v105 = 0LL;
                    switch ( v101 )
                    {
                      case 1:
LABEL_199:
                        v106 = (unsigned int *)(&v45[3].Next + 1);
                        break;
                      case 2:
LABEL_201:
                        v106 = (unsigned int *)&v45[51].Next + 1;
                        goto LABEL_202;
                      case 3:
LABEL_204:
                        v106 = (unsigned int *)(&v45[2].Next + 1);
                        goto LABEL_222;
                      default:
LABEL_209:
                        v106 = 0LL;
                        if ( v101 != 1 )
                        {
                          if ( v101 != 2 )
                          {
                            LOBYTE(v104) = 0;
                            if ( v101 == 6 )
                            {
                              v109 = *((_DWORD *)&v45[1].Next + 2);
                              goto LABEL_214;
                            }
                            if ( v101 == 9 )
                            {
                              v109 = (int)v45[2].Next;
LABEL_214:
                              v110 = 0LL;
                              goto LABEL_215;
                            }
                            goto LABEL_222;
                          }
LABEL_202:
                          v103 = *(struct _SLIST_ENTRY **)((char *)&v45[7].Next + 4);
                          v171 = HIDWORD(v103);
                          v202 = *(struct _SLIST_ENTRY *)((char *)&v45[6] + 4);
                          v104 = HIDWORD(v45[47].Next);
                          v107 = *(__int128 *)((char *)&v45[47] + 12);
                          v108 = *((_DWORD *)&v45[47].Next + 2);
                          v109 = *((_DWORD *)&v45[3].Next + 3);
                          v210 = *(__int128 *)((char *)&v45[46] + 4);
                          LODWORD(Src) = v104;
                          v209 = v107;
                          LODWORD(v174) = v108;
                          goto LABEL_223;
                        }
                        LOBYTE(v104) = 0;
                        break;
                    }
                    v103 = v45[3].Next;
                    v171 = HIDWORD(v103);
                    v202 = v45[2];
LABEL_222:
                    v109 = 0;
                    if ( v101 != 2 )
                      goto LABEL_214;
LABEL_223:
                    v110 = HIDWORD(v45[50].Next);
LABEL_215:
                    v165 = v110;
                    if ( !v106 )
                    {
                      LODWORD(v157) = v110;
                      LODWORD(v155) = v109;
                      v42 = (__int64)v162;
                      LODWORD(Timeout) = Next_high;
                      *(_DWORD *)Alertable = v101;
                      McTemplateK0ppqqxdqp_EtwWriteTransfer(
                        v110,
                        &EventSubmitPresentHistory,
                        0LL,
                        v162,
                        v45,
                        *(_QWORD *)Alertable,
                        Timeout,
                        v105,
                        v155,
                        v157,
                        0LL);
                      v66 = v161;
LABEL_80:
                      if ( a9 )
                      {
                        v71 = v177;
                        if ( !v177 )
                        {
                          v72 = v161;
                          if ( !*((_BYTE *)v161 + 209) && (*((_DWORD *)a9 + 101) & 0x10) != 0 )
                            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(a9, 0LL, 0, 1, v12, 0);
                          v169 = 1;
LABEL_86:
                          v163 = 0LL;
                          v174 = 0LL;
                          Global = DXGGLOBAL_GetGlobal();
                          v187 = Global;
                          v188 = 0;
                          if ( !Global )
                          {
                            WdLogSingleEntry1(1LL, 2725LL);
                            DxgkLogInternalTriageEvent(
                              0LL,
                              262146,
                              -1,
                              (__int64)L"m_pGlobal != NULL",
                              2725LL,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                            Global = v187;
                          }
                          if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 79)) )
                          {
                            WdLogSingleEntry1(1LL, 2730LL);
                            DxgkLogInternalTriageEvent(
                              0LL,
                              262146,
                              -1,
                              (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursive",
                              2730LL,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                          }
                          if ( !v168 )
                          {
                            v74 = 0LL;
                            goto LABEL_92;
                          }
                          DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v187);
                          v167 = (v168 >> 6) & 0xFFFFFF;
                          if ( *((int *)v72 + 673) < 2000 )
                          {
                            v170 = (PLARGE_INTEGER)DXGPROCESS::GetCurrent();
                            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&v170[31]);
                            v126 = v170;
                            if ( v167 < v170[37].LowPart )
                            {
                              v130 = v170[35];
                              v131 = *(_DWORD *)(v130.QuadPart + 16LL * v167 + 8);
                              if ( ((v168 >> 25) & 0x60) == (v131 & 0x60) && (v131 & 0x2000) == 0 && (v131 & 0x1F) != 0 )
                              {
                                if ( (v131 & 0x1F) == 8 )
                                {
                                  v163 = *(DXGSYNCOBJECT **)(v130.QuadPart + 16LL * v167);
                                  ExReleasePushLockSharedEx(&v170[31], 0LL);
                                  KeLeaveCriticalRegion();
                                  v74 = v163;
                                  if ( v163 )
                                  {
LABEL_92:
                                    if ( !*((_BYTE *)v72 + 209) )
                                    {
                                      if ( !a9 )
                                      {
                                        DXGAUTOMUTEX::DXGAUTOMUTEX(
                                          (DXGAUTOMUTEX *)v216,
                                          (DXGSYNCOBJECT *)((char *)v74 + 32),
                                          0);
                                        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v216);
                                        v77 = v162;
                                        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(v163, v162);
                                        LODWORD(v42) = (*(__int64 (__fastcall **)(struct VIDSCH_SUBMIT_DATA_BASE *, _QWORD, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*((_QWORD *)v162 + 78) + 8LL) + 1008LL))(
                                                         v12,
                                                         *(_QWORD *)(*((_QWORD *)v208 + 3) + 768LL),
                                                         VidSchSyncObject);
                                        v158 = v42;
                                        if ( v216[8] )
                                          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v216);
LABEL_100:
                                        if ( v188 )
                                          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v187);
                                        if ( (int)v42 >= 0 )
                                        {
LABEL_103:
                                          if ( v63 )
                                            CRefCountedBuffer::RefCountedBufferRelease(v63);
                                          if ( v61 )
                                            CRefCountedBuffer::RefCountedBufferRelease(v61);
LABEL_107:
                                          v78 = ListEntry;
                                          if ( ListEntry )
                                          {
                                            v79 = (char *)v77 + 1280;
                                            ++*((_DWORD *)v79 + 7);
                                            if ( ExQueryDepthSList((PSLIST_HEADER)v79) >= *((_WORD *)v79 + 8) )
                                            {
                                              ++*((_DWORD *)v79 + 8);
                                              (*((void (__fastcall **)(struct _SLIST_ENTRY *, char *))v79 + 7))(
                                                v78,
                                                v79);
                                            }
                                            else
                                            {
                                              ExpInterlockedPushEntrySList((PSLIST_HEADER)v79, v78);
                                            }
                                          }
                                          goto LABEL_110;
                                        }
LABEL_190:
                                        KeReleaseSemaphore((PRKSEMAPHORE)v179, 0, 1, 0);
                                        v77 = v162;
                                        if ( (*(_DWORD *)v12 & 0x1000000) != 0 )
                                        {
                                          v97 = 0;
                                          v172 = 0;
                                          if ( v169 )
                                          {
                                            v98 = v177;
                                            v99 = 0LL;
                                            do
                                            {
                                              if ( a9 )
                                                v100 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v98 + 187) + v99) + 400LL);
                                              else
                                                LOBYTE(v100) = 0;
                                              if ( *((_BYTE *)v12 + 356) )
                                                v151 = (_QWORD *)((char *)v12
                                                                + 64 * (unsigned __int64)(v97 * *((_DWORD *)v12 + 151))
                                                                + *((_DWORD *)v12 + 151)
                                                                * ((8 * *((_DWORD *)v12 + 152) + 231) & 0xFFFFFFF8)
                                                                + 648);
                                              else
                                                v151 = (_QWORD *)((char *)v12 + 504);
                                              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v162 + 81) + 8LL) + 440LL))(
                                                *((_QWORD *)v162 + 82),
                                                (unsigned int)(1 << v100),
                                                *v151,
                                                0LL);
                                              v99 += 8LL;
                                              v97 = v172 + 1;
                                              v172 = v97;
                                            }
                                            while ( v97 < v169 );
                                            v63 = v201;
                                            v61 = v182;
                                            LODWORD(v42) = v158;
                                          }
                                        }
                                        goto LABEL_103;
                                      }
                                      if ( *((struct _KTHREAD **)a9 + 57) != KeGetCurrentThread() )
                                      {
                                        WdLogSingleEntry1(1LL, 3438LL);
                                        DxgkLogInternalTriageEvent(
                                          0LL,
                                          262146,
                                          -1,
                                          (__int64)L"pContext->GetContextLock()->IsExclusiveOwner()",
                                          3438LL,
                                          0LL,
                                          0LL,
                                          0LL,
                                          0LL);
                                      }
                                      v75 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a9 + 2) + 16LL) + 624LL)
                                                      + 8LL);
                                      if ( (*((_DWORD *)a9 + 101) & 0x10) != 0 )
                                        v76 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v75 + 432))(
                                                *((_QWORD *)a9 + 36),
                                                v12);
                                      else
                                        v76 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v75 + 424))(
                                                *((_QWORD *)a9 + 32),
                                                v12);
                                      LODWORD(v42) = v76;
                                      v158 = v76;
LABEL_99:
                                      v77 = v162;
                                      goto LABEL_100;
                                    }
                                    if ( v173 )
                                    {
                                      _InterlockedIncrement((volatile signed __int32 *)&v173->Next + 3);
                                      v173 = (PSLIST_ENTRY)v175;
                                    }
                                    if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 450) < 0x18u
                                      || ((v183 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122)) == 0LL
                                        ? (SessionDataForSpecifiedSession = 0LL)
                                        : (CurrentProcessSessionId = PsGetCurrentProcessSessionId(),
                                           SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                                              v183,
                                                                              CurrentProcessSessionId)),
                                          !*((_DWORD *)SessionDataForSpecifiedSession + 4738)
                                       || LODWORD(v45->Next) != 2
                                       || !a9
                                       || (v135 = *(_DWORD **)(*((_QWORD *)a9 + 2) + 40LL),
                                           v183 = (DXGSESSIONMGR *)v135,
                                           (v135[106] & 4) == 0)
                                       || !v177
                                       || (v160 = *((_DWORD *)v177 + 5)) == 0) )
                                    {
                                      v42 = (__int64)v72 + 4344;
                                      if ( !a9 )
                                      {
LABEL_315:
                                        v149 = *(_QWORD *)v12;
                                        v150 = DXGPROCESS::GetCurrent();
                                        LODWORD(v42) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitPresentHistoryToken(
                                                         v42,
                                                         v150,
                                                         a9,
                                                         v149,
                                                         v184,
                                                         &v178[1],
                                                         v173,
                                                         v174);
                                        v158 = v42;
                                        goto LABEL_316;
                                      }
LABEL_314:
                                      v174 = 0LL;
                                      goto LABEL_315;
                                    }
                                    v175 = (struct CRefCountedBuffer *)(v135 + 62);
                                    KeEnterCriticalRegion();
                                    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v175, 0LL) )
                                    {
                                      if ( bTracingEnabled )
                                      {
                                        v138 = *((_DWORD *)v175 + 6);
                                        if ( v138 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                                          McTemplateK0q_EtwWriteTransfer(
                                            v136,
                                            (const EVENT_DESCRIPTOR *)"g",
                                            v137,
                                            v138);
                                      }
                                      ExAcquirePushLockSharedEx(v175, 0LL);
                                    }
                                    v139 = (v160 >> 6) & 0xFFFFFF;
                                    if ( (unsigned int)v139 < *((_DWORD *)v183 + 74) )
                                    {
                                      v140 = *((_QWORD *)v183 + 35);
                                      v141 = *(_DWORD *)(v140 + 16 * v139 + 8);
                                      if ( ((v160 >> 25) & 0x60) == (*(_BYTE *)(v140 + 16 * v139 + 8) & 0x60)
                                        && (v141 & 0x2000) == 0
                                        && (v141 & 0x1F) != 0 )
                                      {
                                        if ( (v141 & 0x1F) == 5 )
                                        {
                                          v142 = *(struct DXGALLOCATION **)(v140 + 16LL * (unsigned int)v139);
LABEL_306:
                                          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
                                            (DXGALLOCATIONREFERENCE *)&v185,
                                            v142);
                                          ExReleasePushLockSharedEx(v175, 0LL);
                                          KeLeaveCriticalRegion();
                                          if ( v185 )
                                          {
                                            v143 = LODWORD(v45->Next) == 2;
                                            v172 = 0;
                                            v207 = 0LL;
                                            if ( v143 )
                                            {
                                              v144 = v45[4].Next;
                                              if ( v144 )
                                              {
                                                if ( (int)DxgkQueryHostCompSurfInfo(v144, &v172, &v207) >= 0 )
                                                {
                                                  v145 = v207;
                                                  v146 = v172;
                                                  v42 = v185;
                                                  v147 = v186->Next;
                                                  v148 = DXGPROCESS::GetCurrent();
                                                  LODWORD(v42) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitVailPresentHistoryToken(
                                                                   (char *)v161 + 4344,
                                                                   v148,
                                                                   a9,
                                                                   v147,
                                                                   v184,
                                                                   &v178[1],
                                                                   v173,
                                                                   v163,
                                                                   v42,
                                                                   v146,
                                                                   v145);
                                                  v158 = v42;
                                                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v185);
                                                  v12 = (struct VIDSCH_SUBMIT_DATA_BASE *)v186;
LABEL_316:
                                                  if ( (int)v42 < 0 && v173 )
                                                    CRefCountedBuffer::RefCountedBufferRelease(v173);
                                                  goto LABEL_99;
                                                }
                                              }
                                            }
                                          }
                                          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v185);
                                          v42 = (__int64)v72 + 4344;
                                          goto LABEL_314;
                                        }
                                        WdLogSingleEntry1(2LL, 267LL);
                                        DxgkLogInternalTriageEvent(
                                          0LL,
                                          0x40000,
                                          -1,
                                          (__int64)L"Handle type mismatch",
                                          267LL,
                                          0LL,
                                          0LL,
                                          0LL,
                                          0LL);
                                      }
                                    }
                                    v142 = 0LL;
                                    goto LABEL_306;
                                  }
LABEL_269:
                                  LODWORD(v42) = -1073741811;
                                  WdLogSingleEntry2(2LL, v168, -1073741811LL);
                                  DxgkLogInternalTriageEvent(
                                    0LL,
                                    0x40000,
                                    -1,
                                    (__int64)L"hSyncObj (0x%I64x) destroyed, returning 0x%I64x",
                                    v168,
                                    -1073741811LL,
                                    0LL,
                                    0LL,
                                    0LL);
                                  v158 = -1073741811;
                                  if ( v188 )
                                    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v187);
                                  goto LABEL_190;
                                }
                                goto LABEL_267;
                              }
                            }
                          }
                          else
                          {
                            v170 = (PLARGE_INTEGER)DXGPROCESS::GetCurrent();
                            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&v170[31]);
                            v126 = v170;
                            if ( v167 < v170[37].LowPart )
                            {
                              v127 = v170[35];
                              v128 = *(_DWORD *)(v127.QuadPart + 16LL * v167 + 8);
                              if ( ((v168 >> 25) & 0x60) == (v128 & 0x60) && (v128 & 0x2000) == 0 && (v128 & 0x1F) != 0 )
                              {
                                if ( (v128 & 0x1F) == 0xB )
                                {
                                  v174 = *(_QWORD *)(v127.QuadPart + 16LL * v167);
                                  ExReleasePushLockSharedEx(&v170[31], 0LL);
                                  KeLeaveCriticalRegion();
                                  if ( v174 )
                                  {
                                    v74 = *(DXGSYNCOBJECT **)(v174 + 32);
                                    v163 = v74;
                                    goto LABEL_92;
                                  }
                                  goto LABEL_269;
                                }
LABEL_267:
                                WdLogSingleEntry1(2LL, 267LL);
                                DxgkLogInternalTriageEvent(
                                  0LL,
                                  0x40000,
                                  -1,
                                  (__int64)L"Handle type mismatch",
                                  267LL,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL);
                                v129 = v170 + 31;
                                goto LABEL_268;
                              }
                            }
                          }
                          v129 = v126 + 31;
LABEL_268:
                          ExReleasePushLockSharedEx(v129, 0LL);
                          KeLeaveCriticalRegion();
                          goto LABEL_269;
                        }
                        *((_BYTE *)v177 + 1512) = (*((_BYTE *)v12 + 3) & 1) == 0;
                        if ( !*((_BYTE *)v66 + 209) && (*((_DWORD *)a9 + 101) & 0x10) != 0 )
                        {
                          v115 = *((_DWORD *)v71 + 23);
                          v169 = v115 + 1;
                          DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
                            a9,
                            *((struct DXGCONTEXT ***)v71 + 187),
                            v115,
                            1,
                            v12,
                            0);
                        }
                        else if ( *((_DWORD *)v71 + 23) && DXGADAPTER::IsDxgmms2(v66) )
                        {
                          v169 = v116 + 1;
                          v205 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a9 + 2) + 1896LL));
                          BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)a9 + 2));
                          if ( !BroadcastPresentSyncObject )
                          {
                            WdLogSingleEntry2(2LL, -1073741801LL, 3340LL);
                            DxgkLogInternalTriageEvent(
                              0LL,
                              0x40000,
                              -1,
                              (__int64)L"Failed to create present sync object. Returning 0x%I64x",
                              -1073741801LL,
                              3340LL,
                              0LL,
                              0LL,
                              0LL);
                            LODWORD(v42) = -1073741801;
                            v158 = -1073741801;
                            goto LABEL_190;
                          }
                          v117 = v177;
                          Pool2 = 0LL;
                          P = 0LL;
                          v219 = 0;
                          v119 = *((unsigned int *)v177 + 23);
                          v166 = v119;
                          if ( (unsigned int)v119 <= 8 )
                          {
                            Pool2 = v218;
                            P = v218;
                            if ( !(_DWORD)v119 )
                            {
LABEL_240:
                              v219 = v119;
                              goto LABEL_241;
                            }
                            memset(v218, 0, 8 * v119);
                            Pool2 = P;
                          }
                          else
                          {
                            if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v119 < 8 )
                            {
LABEL_241:
                              if ( !Pool2 )
                              {
                                LODWORD(v42) = -1073741801;
                                v158 = -1073741801;
                                goto LABEL_190;
                              }
                              v120 = 1;
                              if ( v169 > 1 )
                              {
                                v121 = 8LL;
                                while ( 1 )
                                {
                                  v122 = *(_QWORD *)(v121 + *((_QWORD *)v117 + 187));
                                  if ( (*(_DWORD *)(v122 + 404) & 0x10) != 0 )
                                    break;
                                  v123 = v120++ - 1;
                                  *(_QWORD *)&Pool2[8 * v123] = *(_QWORD *)(v122 + 256);
                                  v121 += 8LL;
                                  if ( v120 >= v169 )
                                    goto LABEL_247;
                                }
                                LODWORD(v42) = -1073741811;
                                v158 = -1073741811;
                                goto LABEL_254;
                              }
LABEL_247:
                              LODWORD(v42) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v42 + 624) + 8LL)
                                                                                               + 640LL))(
                                               0LL,
                                               0LL,
                                               *((unsigned int *)v117 + 23));
                              v158 = v42;
                              if ( (int)v42 < 0 )
                              {
LABEL_254:
                                v125 = P;
                                goto LABEL_255;
                              }
                              v124 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*((_QWORD *)v162 + 78) + 8LL) + 624LL))(
                                       *((_QWORD *)a9 + 32),
                                       BroadcastPresentSyncObject,
                                       v205);
                              v125 = P;
                              LODWORD(v42) = v124;
                              v158 = v124;
                              if ( v124 < 0 )
                              {
LABEL_255:
                                if ( v125 != v218 && v125 )
                                  ExFreePoolWithTag(v125, 0);
                                goto LABEL_190;
                              }
                              if ( P != v218 && P )
                                ExFreePoolWithTag(P, 0);
                              v173 = (PSLIST_ENTRY)v175;
                              goto LABEL_85;
                            }
                            Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * (unsigned int)v119, 1265072196LL, 0LL);
                            P = Pool2;
                          }
                          v117 = v177;
                          LODWORD(v119) = v166;
                          goto LABEL_240;
                        }
                      }
LABEL_85:
                      v72 = v161;
                      goto LABEL_86;
                    }
                    v111 = *v106;
                    if ( *v106 >= 0x10 )
                    {
                      v111 = 16;
                    }
                    else if ( !v111 )
                    {
LABEL_228:
                      v156 = v109;
                      v42 = (__int64)v162;
                      McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer(
                        v171,
                        v105,
                        (__int64)v106,
                        (__int64)v162,
                        (char)v45,
                        v101,
                        v159,
                        v105,
                        v156,
                        v165,
                        (char)v202.Next,
                        *((char *)&v202.Next + 8),
                        SBYTE4(v202.Next),
                        *((char *)&v202.Next + 12),
                        (char)v103,
                        v171,
                        v111,
                        (__int64)v224,
                        (__int64)v223,
                        (__int64)v222,
                        (__int64)v221,
                        v210,
                        SBYTE8(v210),
                        SBYTE4(v210),
                        SBYTE12(v210),
                        v104,
                        v174,
                        v209,
                        SBYTE8(v209),
                        SBYTE4(v209),
                        SBYTE12(v209),
                        0);
                      v66 = v161;
                      goto LABEL_80;
                    }
                    v106 += 3;
                    v112 = v111;
                    v113 = 0LL;
                    do
                    {
                      v114 = *(v106 - 2);
                      v106 += 4;
                      v224[v113 / 4] = v114;
                      v113 += 4LL;
                      *(_DWORD *)&v222[v113 + 60] = *(v106 - 4);
                      *(_DWORD *)&v221[v113 + 60] = *(v106 - 5);
                      *(_DWORD *)&v221[v113 - 4] = *(v106 - 3);
                      --v112;
                    }
                    while ( v112 );
                    v61 = v182;
                    LOBYTE(v104) = (_BYTE)Src;
                    goto LABEL_228;
                }
              }
              goto LABEL_183;
            }
            WdLogSingleEntry1(1LL, 53LL);
            WaitMode = 53LL;
          }
          else if ( v55 == 3 )
          {
            v56 = *((_DWORD *)Src + 10);
            if ( v56 <= 0x10 )
            {
              v57 = 16 * v56 + 51;
              goto LABEL_65;
            }
            WdLogSingleEntry1(1LL, 73LL);
            WaitMode = 73LL;
          }
          else
          {
            switch ( v55 )
            {
              case 2:
                v81 = *((_DWORD *)Src + 205);
                if ( v81 <= 0x10 )
                {
                  v57 = 16 * v81 + 831;
                  goto LABEL_65;
                }
                WdLogSingleEntry1(1LL, 63LL);
                WaitMode = 63LL;
                break;
              case 4:
              case 5:
              case 7:
              case 8:
                v59 = 24;
                goto LABEL_66;
              case 9:
                v59 = 40;
                goto LABEL_66;
              default:
                WdLogSingleEntry1(1LL, 96LL);
                v95 = L"Unknown type for present history token is found in queue.";
                WaitMode = 96LL;
                goto LABEL_182;
            }
          }
          v95 = L"FALSE";
LABEL_182:
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v95, WaitMode, 0LL, 0LL, 0LL, 0LL);
          v59 = 0;
LABEL_183:
          WdLogSingleEntry1(3LL, v59);
          KeReleaseSemaphore((PRKSEMAPHORE)v179, 0, 1, 0);
          LODWORD(v42) = -1073741811;
          goto LABEL_184;
        }
        v204 = v162;
        ++*((_DWORD *)v162 + 325);
        v186 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v162 + 80);
        v12 = (struct VIDSCH_SUBMIT_DATA_BASE *)v186;
        if ( !v186 )
        {
          ++*((_DWORD *)v162 + 326);
          v12 = (struct VIDSCH_SUBMIT_DATA_BASE *)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))v162 + 166))(
                                                    *((unsigned int *)v162 + 329),
                                                    *((unsigned int *)v162 + 331),
                                                    *((unsigned int *)v162 + 330),
                                                    (__int64)v162 + 1280);
          v186 = (PSLIST_ENTRY)v12;
        }
        ListEntry = (PSLIST_ENTRY)v12;
        if ( !v12 )
        {
          KeReleaseSemaphore((PRKSEMAPHORE)v179, 0, 1, 0);
          WdLogSingleEntry1(6LL, 3189LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate VidSchSubmitData",
            3189LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v42) = -1073741801;
LABEL_184:
          CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
          goto LABEL_110;
        }
        v46 = *((_QWORD *)v162 + 2);
        if ( *(int *)(v46 + 2424) < 0x2000 )
        {
          v47 = 1;
          if ( !*(_BYTE *)(v46 + 2724) )
          {
            v48 = 1304;
LABEL_55:
            memset(v12, 0, v48);
            v49 = *((_QWORD *)v162 + 2);
            v50 = *(_DWORD *)(v49 + 2632);
            if ( *(int *)(v49 + 2424) < 0x2000 )
            {
              v51 = 1;
              if ( !*(_BYTE *)(v49 + 2724) )
              {
                *((_BYTE *)v12 + 356) = 0;
                goto LABEL_58;
              }
            }
            else
            {
              v51 = *(_DWORD *)(v49 + 288);
            }
            v52 = 8 * v51;
            *((_BYTE *)v12 + 356) = 1;
            *((_DWORD *)v12 + 152) = v51;
            v53 = v51 << 6;
            *((_DWORD *)v12 + 151) = v50;
            *((_DWORD *)v12 + 153) = v50 * (v53 + ((v52 + 231) & 0xFFFFFFF8)) + 16;
            v54 = v50 * (v53 + ((v52 + 231) & 0xFFFFFFF8)) + 616;
            *((_DWORD *)v12 + 138) = v54;
            *((_DWORD *)v12 + 139) = v52 + v54;
LABEL_58:
            v44 = v178;
            goto LABEL_59;
          }
        }
        else
        {
          v47 = *(_DWORD *)(v46 + 288);
        }
        v48 = *(_DWORD *)(v46 + 2632) * ((v47 << 6) + ((8 * v47 + 231) & 0xFFFFFFF8)) + 8 * (v47 + 77);
        goto LABEL_55;
      }
      v41 = v184;
    }
    LODWORD(v42) = -1073741801;
    KeReleaseSemaphore((PRKSEMAPHORE)v179, 0, 1, 0);
    WdLogSingleEntry2(6LL, v41, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Present token is not submitted due to no memory, PresentHistoryTokenQueue: 0x%I64x, returning 0x%I64x",
      (__int64)v41,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_110;
  }
  COREACCESS::Release((COREACCESS *)v27);
  if ( LOBYTE(v26[9].Next) )
LABEL_172:
    COREACCESS::Release((COREACCESS *)(&v26[4].Next + 1));
  KeReleaseSemaphore((PRKSEMAPHORE)v179, 0, 1, 0);
  LODWORD(v42) = -1073741130;
  WdLogSingleEntry1(4LL, -1073741130LL);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v26, v94);
LABEL_110:
  ObfDereferenceObject(v179);
  return (unsigned int)v42;
}
