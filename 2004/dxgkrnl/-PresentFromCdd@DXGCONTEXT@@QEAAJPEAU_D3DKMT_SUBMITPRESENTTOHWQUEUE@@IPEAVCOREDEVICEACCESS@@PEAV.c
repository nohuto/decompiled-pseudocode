/*
 * XREFs of ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C015634C
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00DD900 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0190FD4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z @ 0x1C022D330 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C0002524 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004384 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00056C8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00099A8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000B9F4 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0016934 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0016A64 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0016A90 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0016B44 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C0016B78 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0016BB8 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1C0047670 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer @ 0x1C00478E4 (McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00E4748 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD140 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FE8C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00FE910 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C0104170 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C011F918 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C0156B90 (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C0156C40 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C0156CD8 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C0156ED8 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C016D0E8 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::PresentFromCdd(
        DXGCONTEXT *this,
        struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        struct DXGCONTEXT **a6)
{
  DXGCONTEXT *v7; // rsi
  struct DXGGLOBAL *Global; // rax
  char *v9; // rbx
  PSLIST_ENTRY v10; // rdi
  D3DKMT_HANDLE v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  DXGADAPTER **v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  const RECT **v18; // r15
  unsigned int *v19; // r12
  unsigned int v20; // ebx
  __int64 v21; // r13
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // ecx
  __int64 v27; // rcx
  struct _EX_RUNDOWN_REF *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int Next_high; // ebx
  __int64 v32; // r13
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // r8
  int v37; // ecx
  __int64 v38; // rcx
  struct _EX_RUNDOWN_REF *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  struct VIDSCH_SUBMIT_DATA_BASE *v46; // rdx
  int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rdx
  int v53; // eax
  COREDEVICEACCESS *v54; // r14
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct DXGPRESENTMUTEX *v59; // r8
  __int64 v60; // r13
  unsigned __int8 v61; // r14
  int v62; // ebx
  ADAPTER_DISPLAY *v63; // r13
  unsigned int v64; // r14d
  int updated; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  int CurrentOrientation; // eax
  UINT Value; // eax
  UINT i; // r14d
  const RECT *v73; // rcx
  const RECT *v74; // rcx
  __int64 v75; // r8
  const RECT *pDstSubRects; // r15
  UINT SubRectCnt; // r14d
  struct _VIDMM_DMA_BUFFER *v78; // r12
  UINT v79; // ebx
  __int64 v80; // rdx
  unsigned int v81; // r10d
  unsigned int v82; // r9d
  __int64 v83; // rcx
  struct COREDEVICEACCESS *v84; // r14
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rcx
  struct DXGGLOBAL *v90; // rax
  char *v91; // rsi
  DXGPRESENT *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  DXGPRESENT *v98; // rax
  __int64 v99; // rdx
  __int64 (__fastcall *v100)(__int64, __int64, __int64, char *); // rax
  __int64 v101; // r8
  __int64 v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  int v110; // r9d
  __int64 v111; // rax
  _QWORD *v112; // rax
  int v113; // r9d
  __int64 v114; // rax
  _QWORD *v115; // rax
  __int64 v116; // rdx
  _QWORD *v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  char *v121; // rdx
  _QWORD *v122; // rax
  _QWORD *v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  const RECT *DdiSubRectList; // r14
  __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rbx
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rax
  UINT v140; // r12d
  int v141; // r13d
  int v142; // esi
  __int64 v143; // rbx
  LONG left; // r8d
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  LONG top; // eax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  _QWORD *v159; // rax
  struct DXGCONTEXT **v160; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v161; // [rsp+28h] [rbp-F8h]
  struct _VIDMM_DMA_BUFFER *v163; // [rsp+A8h] [rbp-78h] BYREF
  ADAPTER_DISPLAY *v164; // [rsp+B0h] [rbp-70h]
  struct VIDSCH_SUBMIT_DATA_BASE *v165[2]; // [rsp+B8h] [rbp-68h] BYREF
  struct _EX_RUNDOWN_REF *v166; // [rsp+C8h] [rbp-58h] BYREF
  union _LARGE_INTEGER v167; // [rsp+D0h] [rbp-50h] BYREF
  struct DXGHWQUEUE *v168; // [rsp+D8h] [rbp-48h] BYREF
  COREDEVICEACCESS *v169; // [rsp+E0h] [rbp-40h]
  DXGADAPTERSTOPRESETLOCKSHARED *v170; // [rsp+E8h] [rbp-38h]
  __int64 v171; // [rsp+F0h] [rbp-30h]
  DXGCONTEXT *v172; // [rsp+F8h] [rbp-28h]
  _BYTE v173[24]; // [rsp+100h] [rbp-20h] BYREF
  _BYTE v174[24]; // [rsp+118h] [rbp-8h] BYREF
  struct _DXGKARG_PRESENT v175; // [rsp+130h] [rbp+10h] BYREF
  _BYTE v177[64]; // [rsp+1E0h] [rbp+C0h] BYREF
  _BYTE v178[64]; // [rsp+220h] [rbp+100h] BYREF
  _BYTE v179[64]; // [rsp+260h] [rbp+140h] BYREF
  _BYTE v180[64]; // [rsp+2A0h] [rbp+180h] BYREF

  v170 = a5;
  v7 = this;
  v167.QuadPart = (LONGLONG)a6;
  v169 = a4;
  v172 = this;
  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2);
  v9 = (char *)Global + 1024;
  ++*((_DWORD *)Global + 261);
  v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 64);
  if ( !v10 )
  {
    v99 = *((unsigned int *)v9 + 11);
    v100 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v9 + 6);
    v101 = *((unsigned int *)v9 + 10);
    v102 = *((unsigned int *)v9 + 9);
    ++*((_DWORD *)v9 + 6);
    v10 = (PSLIST_ENTRY)v100(v102, v99, v101, v9);
    if ( !v10 )
    {
      v107 = WdLogNewEntry5_WdLowResource(v104, v103, v105, v106);
      *(_QWORD *)(v107 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v107);
      return 3221225495LL;
    }
  }
  memset(v10, 0, 0x5F8uLL);
  v168 = 0LL;
  memmove(v10, &a2->PrivatePresentData, 0x5D8uLL);
  v10[94].Next = (struct _SLIST_ENTRY *)&v168;
  if ( a2->hHwQueues )
    v11 = *a2->hHwQueues;
  else
    v11 = 0;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
    (DXGHWQUEUEBYHANDLE *)v174,
    v11,
    *(struct _KTHREAD ***)(*((_QWORD *)v7 + 2) + 40LL),
    &v168,
    1);
  v12 = *((_QWORD *)v7 + 2);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 88LL);
  v14 = *(_QWORD *)(v12 + 1848);
  v171 = v13;
  v15 = *(DXGADAPTER ***)(v14 + 2696);
  v164 = (ADAPTER_DISPLAY *)v15;
  if ( !v15 || !DXGADAPTER::IsCoreResourceSharedOwner(v15[2]) )
  {
    v108 = WdLogNewEntry5_WdAssertion(v15, v13);
    *(_QWORD *)(v108 + 24) = 6719LL;
    WdLogEvent5_WdAssertion(v108);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL)) )
  {
    v109 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v109 + 24) = 6720LL;
    WdLogEvent5_WdAssertion(v109);
  }
  v18 = (const RECT **)(&v10[4].Next + 1);
  if ( !*((_QWORD *)&v10[4].Next + 1)
    || (v19 = (unsigned int *)&v10[4], !LODWORD(v10[4].Next))
    || (v17 = *((unsigned int *)&v10[5].Next + 2),
        (((unsigned __int8)v17 ^ (unsigned __int8)(*((_DWORD *)&v10[5].Next + 2) >> 1)) & 1) == 0)
    || (v17 & 0x63C) != 0 )
  {
    v159 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    LODWORD(v51) = -1073741811;
    v159[3] = -1073741811LL;
    v159[4] = v7;
    v159[5] = *v18;
    v159[6] = LODWORD(v10[4].Next);
    v159[7] = *((unsigned int *)&v10[5].Next + 2);
    WdLogEvent5_WdError(v159);
    goto LABEL_86;
  }
  memset(&v175, 0, sizeof(v175));
  v20 = *((_DWORD *)&v10[1].Next + 2);
  v21 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v21 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v110 = *(_DWORD *)(v21 + 232);
      if ( v110 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, &EventBlockThread, v23, v110);
    }
    ExAcquirePushLockSharedEx(v21 + 208, 0LL);
  }
  v24 = (v20 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v24 < *(_DWORD *)(v21 + 256) )
  {
    v25 = *(_QWORD *)(v21 + 240);
    v26 = *(_DWORD *)(v25 + 16 * v24 + 8);
    if ( ((v20 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60) && (v26 & 0x2000) == 0 && (v26 & 0x1F) != 0 )
    {
      v27 = v26 & 0x1F;
      if ( (_BYTE)v27 == 5 )
      {
        v28 = *(struct _EX_RUNDOWN_REF **)(v25 + 16LL * (unsigned int)v24);
        goto LABEL_19;
      }
      v111 = WdLogNewEntry5_WdError(v27, 2LL * (unsigned int)v24);
      *(_QWORD *)(v111 + 24) = 267LL;
      WdLogEvent5_WdError(v111);
    }
  }
  v28 = 0LL;
LABEL_19:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v166, v28);
  ExReleasePushLockSharedEx(v21 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v166 )
  {
    v112 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
    LODWORD(v51) = -1073741811;
    v112[3] = -1073741811LL;
    v112[4] = v7;
    v112[5] = *v18;
    v112[6] = *v19;
    v112[7] = *((unsigned int *)&v10[1].Next + 2);
    WdLogEvent5_WdError(v112);
    goto LABEL_85;
  }
  if ( (*(_DWORD *)(&v10[5].Next + 1) & 1) != 0 )
  {
    Next_high = HIDWORD(v10[1].Next);
    v32 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v32 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v113 = *(_DWORD *)(v32 + 232);
        if ( v113 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v33, &EventBlockThread, v34, v113);
      }
      ExAcquirePushLockSharedEx(v32 + 208, 0LL);
    }
    v35 = (Next_high >> 6) & 0xFFFFFF;
    if ( (unsigned int)v35 < *(_DWORD *)(v32 + 256) )
    {
      v36 = *(_QWORD *)(v32 + 240);
      v37 = *(_DWORD *)(v36 + 16 * v35 + 8);
      if ( ((Next_high >> 25) & 0x60) == (*(_BYTE *)(v36 + 16 * v35 + 8) & 0x60)
        && (v37 & 0x2000) == 0
        && (v37 & 0x1F) != 0 )
      {
        v38 = v37 & 0x1F;
        if ( (_BYTE)v38 == 5 )
        {
          v39 = *(struct _EX_RUNDOWN_REF **)(v36 + 16LL * (unsigned int)v35);
LABEL_28:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v165, v39);
          ExReleasePushLockSharedEx(v32 + 208, 0LL);
          KeLeaveCriticalRegion();
          if ( !v165[0] )
          {
            v115 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
            LODWORD(v51) = -1073741811;
            v115[3] = -1073741811LL;
            v115[4] = v7;
            v115[5] = HIDWORD(v10[1].Next);
            WdLogEvent5_WdError(v115);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v165, v116);
            goto LABEL_85;
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v165, v40);
          goto LABEL_30;
        }
        v114 = WdLogNewEntry5_WdError(v38, 2LL * (unsigned int)v35);
        *(_QWORD *)(v114 + 24) = 267LL;
        WdLogEvent5_WdError(v114);
      }
    }
    v39 = 0LL;
    goto LABEL_28;
  }
LABEL_30:
  if ( !*((_QWORD *)v7 + 19) )
  {
    v93 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x670uLL);
    v98 = v93 ? DXGPRESENT::DXGPRESENT(v93, 1u) : 0LL;
    *((_QWORD *)v7 + 19) = v98;
    if ( !v98 )
    {
      v117 = (_QWORD *)WdLogNewEntry5_WdLowResource(v95, v94, v96, v97);
      v117[3] = -1073741801LL;
      v117[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL);
      v117[5] = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
      v117[6] = v7;
      WdLogEvent5_WdLowResource(v117);
      LODWORD(v51) = -1073741801;
      goto LABEL_85;
    }
  }
  v42 = *((_QWORD *)v7 + 2);
  v165[0] = 0LL;
  v165[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v42 + 16);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v165);
  v46 = v165[0];
  if ( !v165[0] )
  {
    v118 = WdLogNewEntry5_WdLowResource(v43, 0LL, v44, v45);
    *(_QWORD *)(v118 + 24) = 6784LL;
    WdLogEvent5_WdLowResource(v118);
    LODWORD(v51) = -1073741801;
    goto LABEL_84;
  }
  v47 = *(_DWORD *)v165[0] | 0x10000;
  *(_DWORD *)v165[0] = v47;
  if ( (*(_DWORD *)(&v10[5].Next + 1) & 0x4000) == 0 )
  {
    v47 |= 1u;
    *(_DWORD *)v46 = v47;
  }
  *(_DWORD *)v46 = v47 | 0x100;
  LOBYTE(v44) = 1;
  v48 = *((_QWORD *)v7 + 2);
  v163 = 0LL;
  LODWORD(v51) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v48 + 16) + 640LL) + 8LL)
                                                                                                 + 496LL))(
                   *((_QWORD *)v7 + 29),
                   0LL,
                   v44,
                   &v163);
  if ( (int)v51 < 0 )
    goto LABEL_84;
  if ( !v163 )
  {
    v119 = WdLogNewEntry5_WdAssertion(v50, v49);
    *(_QWORD *)(v119 + 24) = 6802LL;
    WdLogEvent5_WdAssertion(v119);
  }
  DXGPRESENTMUTEX::DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v173, *(struct _KTHREAD ***)(*((_QWORD *)v7 + 2) + 16LL));
  v53 = *((_DWORD *)&v10[5].Next + 2);
  if ( (v53 & 0x4000) == 0 )
  {
    v54 = v169;
    COREDEVICEACCESS::Release(v169, v52);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v170);
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v173, v55);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v170);
    v56 = COREDEVICEACCESS::AcquireShared(v54, 0LL);
    v51 = v56;
    if ( v56 < 0 )
    {
      v120 = WdLogNewEntry5_WdEvent(v58, v57);
      *(_QWORD *)(v120 + 24) = v51;
      *(_QWORD *)(v120 + 32) = v7;
      WdLogEvent5_WdEvent(v120);
      COREDEVICEACCESS::AcquireSharedUncheck(v54, v121);
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                         + 640LL)
                                                                             + 8LL)
                                                                 + 504LL))(
        v163,
        0LL);
      goto LABEL_83;
    }
    v60 = v171;
    v61 = 0;
    if ( v171 )
    {
      v62 = *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL);
      if ( v62 != (*(unsigned int (**)(void))(v171 + 8))() )
      {
        *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL) = (*(__int64 (**)(void))(v60 + 8))();
        DXGDEVICE::FlushScheduler(*((_QWORD **)v7 + 2), 2u);
        v61 = 1;
      }
    }
    DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v7 + 2), v7, v59, v61);
    v53 = *((_DWORD *)&v10[5].Next + 2);
  }
  if ( (v53 & 1) == 0 || HIDWORD(v10[1].Next) == *((_DWORD *)&v10[1].Next + 2) )
  {
    v63 = v164;
    goto LABEL_119;
  }
  v63 = v164;
  if ( (*(_DWORD *)(v166[6].Count + 4) & 2) == 0 )
  {
LABEL_119:
    v64 = a3;
    goto LABEL_48;
  }
  v64 = a3;
  updated = DxgkCddUpdatePresentRects(v164, a3, (const struct tagRECT **)&v10[4].Next + 1, (unsigned int *)&v10[4]);
  v51 = updated;
  if ( updated < 0 )
  {
    v122 = (_QWORD *)WdLogNewEntry5_WdEvent(v67, v66);
    v122[3] = v51;
    v122[4] = *((_QWORD *)v7 + 2);
    v122[5] = a3;
    goto LABEL_124;
  }
  LODWORD(v51) = 0;
  if ( *v19 )
  {
LABEL_48:
    LODWORD(v51) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v7 + 19), *v19);
    if ( (int)v51 < 0 )
    {
LABEL_125:
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                         + 640LL)
                                                                             + 8LL)
                                                                 + 504LL))(
        v163,
        0LL);
      v163 = 0LL;
      goto LABEL_83;
    }
    v175.DstRect = (RECT)v10[2];
    v175.SubRectCnt = *v19;
    v69 = *((unsigned int *)&v10[5].Next + 2);
    if ( (v69 & 0x4000) != 0 )
    {
      Value = v175.Flags.Value;
    }
    else
    {
      CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v63, v64, 1);
      Value = (CurrentOrientation != 1 ? 0x80 : 0) | v175.Flags.Value & 0xFFFFFF7F;
      v175.Flags.Value = Value;
      v69 = *((unsigned int *)&v10[5].Next + 2);
    }
    if ( (v69 & 1) == 0 )
    {
      if ( (v69 & 2) == 0 )
      {
        v158 = WdLogNewEntry5_WdAssertion(v69, v68);
        *(_QWORD *)(v158 + 24) = 7005LL;
        WdLogEvent5_WdAssertion(v158);
        Value = v175.Flags.Value;
      }
      v175.Flags.Value = Value | 2;
      v175.Color = *((_DWORD *)&v10[1].Next + 3);
      v175.pDstSubRects = *v18;
      goto LABEL_69;
    }
    v175.Flags.Value = Value | 1;
    v175.SrcRect = (RECT)v10[3];
    if ( HIDWORD(v10[1].Next) != *((_DWORD *)&v10[1].Next + 2) )
    {
      v175.pDstSubRects = *v18;
LABEL_54:
      for ( i = 0; i < v175.SubRectCnt; ++i )
      {
        v73 = *v18;
        if ( (*v18)[i].left >= (*v18)[i].right )
        {
          v152 = WdLogNewEntry5_WdAssertion(v73, v68);
          *(_QWORD *)(v152 + 24) = 6989LL;
          WdLogEvent5_WdAssertion(v152);
          v73 = *v18;
        }
        if ( v73[i].top >= v73[i].bottom )
        {
          v153 = WdLogNewEntry5_WdAssertion(v73, v68);
          *(_QWORD *)(v153 + 24) = 6990LL;
          WdLogEvent5_WdAssertion(v153);
        }
        if ( (*(_DWORD *)(&v10[5].Next + 1) & 0x4000) == 0 )
        {
          v74 = *v18;
          if ( (*v18)[i].left < v175.SrcRect.left )
          {
            v154 = WdLogNewEntry5_WdAssertion(v74, v68);
            *(_QWORD *)(v154 + 24) = 6995LL;
            WdLogEvent5_WdAssertion(v154);
            v74 = *v18;
          }
          if ( v74[i].right > v175.SrcRect.right )
          {
            v155 = WdLogNewEntry5_WdAssertion(v74, v68);
            *(_QWORD *)(v155 + 24) = 6996LL;
            WdLogEvent5_WdAssertion(v155);
            v74 = *v18;
          }
          if ( v74[i].top < v175.SrcRect.top )
          {
            v156 = WdLogNewEntry5_WdAssertion(v74, v68);
            *(_QWORD *)(v156 + 24) = 6997LL;
            WdLogEvent5_WdAssertion(v156);
            v74 = *v18;
          }
          if ( v74[i].bottom > v175.SrcRect.bottom )
          {
            v157 = WdLogNewEntry5_WdAssertion(v74, v68);
            *(_QWORD *)(v157 + 24) = 6998LL;
            WdLogEvent5_WdAssertion(v157);
          }
        }
      }
LABEL_69:
      if ( bTracingEnabled )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 640LL)
                                                           + 8LL)
                                               + 344LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 648LL),
          *((unsigned int *)&v10[1].Next + 2));
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 640LL)
                                                           + 8LL)
                                               + 344LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 648LL),
          HIDWORD(v10[1].Next));
        pDstSubRects = v175.pDstSubRects;
        SubRectCnt = v175.SubRectCnt;
        v78 = v163;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
          McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
            HIDWORD(*(_QWORD *)&v175.DstRect.left),
            HIDWORD(*(_QWORD *)&v175.DstRect.right),
            HIDWORD(*(_QWORD *)&v175.SrcRect.left),
            0LL,
            v163);
        v79 = 0;
        if ( SubRectCnt )
        {
          while ( 1 )
          {
            v80 = SubRectCnt - v79;
            if ( (unsigned int)v80 > 0x10 )
              break;
            v81 = SubRectCnt - v79;
            if ( (_DWORD)v80 )
              goto LABEL_75;
LABEL_77:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
            {
              LODWORD(v161) = v81;
              LODWORD(v160) = SubRectCnt - v79 <= 0x10;
              McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                (__int64)v180,
                v80,
                v75,
                v78,
                v160,
                v161,
                v180,
                v179,
                v178,
                v177);
            }
            v79 += 16;
            if ( v79 >= SubRectCnt )
              goto LABEL_80;
          }
          v81 = 16;
LABEL_75:
          v75 = 0LL;
          v82 = 0;
          do
          {
            v83 = v82 + v79;
            ++v82;
            v83 *= 2LL;
            v75 += 4LL;
            *(_DWORD *)&v179[v75 + 60] = *(&pDstSubRects->left + 2 * v83);
            *(_DWORD *)&v178[v75 + 60] = *(&pDstSubRects->right + 2 * v83);
            *(_DWORD *)&v177[v75 + 60] = *(&pDstSubRects->top + 2 * v83);
            *(_DWORD *)&v177[v75 - 4] = *(&pDstSubRects->bottom + 2 * v83);
          }
          while ( v82 < v81 );
          goto LABEL_77;
        }
      }
LABEL_80:
      v84 = v169;
      LODWORD(v51) = DXGCONTEXT::SubmitPresent(
                       (struct _EX_RUNDOWN_REF *)v7,
                       (struct _D3DKMT_PRESENT *)v10,
                       (struct DXGHWQUEUE **)v10[94].Next,
                       *((_DWORD *)&v10[5].Next + 3),
                       (struct DXGCONTEXT **)v167.QuadPart,
                       0LL,
                       HIDWORD(v10[1].Next),
                       *((_DWORD *)&v10[1].Next + 2),
                       &v175,
                       0LL,
                       v163,
                       v165[0],
                       D3DDDIFMT_A8B8G8R8,
                       v169);
      if ( (int)v51 >= 0 && *((_DWORD *)&v10[22].Next + 2) == 1 )
      {
        v167.QuadPart = -100000LL;
        LODWORD(v51) = SubmitPresentHistoryToken(
                         (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v10[22].Next + 1),
                         v84,
                         (__int64)v170,
                         0LL,
                         0,
                         &v167,
                         (struct DXGK_PRESENT_PARAMS *)v10,
                         0LL,
                         v7,
                         0LL,
                         0LL);
      }
      goto LABEL_83;
    }
    if ( (*(_DWORD *)(&v10[5].Next + 1) & 0x4000) != 0
      || !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v63, v64) )
    {
      DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v7 + 19), 0);
      v68 = (unsigned int)(v175.SrcRect.right - v175.SrcRect.left);
      v127 = (unsigned int)(v175.DstRect.right - v175.DstRect.left);
      v175.pDstSubRects = DdiSubRectList;
      if ( (_DWORD)v127 != (_DWORD)v68 )
      {
        v128 = WdLogNewEntry5_WdAssertion(v127, v68);
        *(_QWORD *)(v128 + 24) = 6950LL;
        WdLogEvent5_WdAssertion(v128);
      }
      v129 = (unsigned int)(v175.SrcRect.bottom - v175.SrcRect.top);
      if ( v175.DstRect.bottom - v175.DstRect.top != (_DWORD)v129 )
      {
        v130 = WdLogNewEntry5_WdAssertion(v129, v68);
        *(_QWORD *)(v130 + 24) = 6953LL;
        WdLogEvent5_WdAssertion(v130);
      }
      if ( v175.SrcRect.left >= v175.SrcRect.right )
      {
        v131 = WdLogNewEntry5_WdAssertion(v129, v68);
        *(_QWORD *)(v131 + 24) = 6955LL;
        WdLogEvent5_WdAssertion(v131);
      }
      if ( v175.SrcRect.left < 0 )
      {
        v132 = WdLogNewEntry5_WdAssertion(v129, v68);
        *(_QWORD *)(v132 + 24) = 6956LL;
        WdLogEvent5_WdAssertion(v132);
      }
      v133 = 3968LL * a3;
      v134 = (unsigned int)(*(_DWORD *)(v133 + *((_QWORD *)v63 + 14) + 636)
                          - *(_DWORD *)(v133 + *((_QWORD *)v63 + 14) + 628));
      if ( v175.SrcRect.right > (int)v134 )
      {
        v135 = WdLogNewEntry5_WdAssertion(v134, v68);
        *(_QWORD *)(v135 + 24) = 6957LL;
        WdLogEvent5_WdAssertion(v135);
      }
      if ( v175.DstRect.top >= v175.DstRect.bottom )
      {
        v136 = WdLogNewEntry5_WdAssertion(v134, v68);
        *(_QWORD *)(v136 + 24) = 6959LL;
        WdLogEvent5_WdAssertion(v136);
      }
      if ( v175.DstRect.top < 0 )
      {
        v137 = WdLogNewEntry5_WdAssertion(v134, v68);
        *(_QWORD *)(v137 + 24) = 6960LL;
        WdLogEvent5_WdAssertion(v137);
      }
      v138 = (unsigned int)(*(_DWORD *)(v133 + *((_QWORD *)v63 + 14) + 640)
                          - *(_DWORD *)(v133 + *((_QWORD *)v63 + 14) + 632));
      if ( v175.SrcRect.bottom > (int)v138 )
      {
        v139 = WdLogNewEntry5_WdAssertion(v138, v68);
        *(_QWORD *)(v139 + 24) = 6961LL;
        WdLogEvent5_WdAssertion(v139);
      }
      v140 = 0;
      v141 = v175.DstRect.left - v175.SrcRect.left;
      if ( v175.SubRectCnt )
      {
        v142 = v175.DstRect.top - v175.SrcRect.top;
        do
        {
          v143 = v140;
          left = v141 + (*v18)[v140].left;
          DdiSubRectList[v143].left = left;
          v68 = (unsigned int)(v141 + (*v18)[v140].right);
          DdiSubRectList[v143].right = v68;
          DdiSubRectList[v143].top = v142 + (*v18)[v140].top;
          DdiSubRectList[v143].bottom = v142 + (*v18)[v140].bottom;
          if ( left >= (int)v68 )
          {
            v145 = WdLogNewEntry5_WdAssertion(v138, v68);
            *(_QWORD *)(v145 + 24) = 6973LL;
            WdLogEvent5_WdAssertion(v145);
            left = DdiSubRectList[v140].left;
          }
          if ( left < v175.DstRect.left )
          {
            v146 = WdLogNewEntry5_WdAssertion(v138, v68);
            *(_QWORD *)(v146 + 24) = 6974LL;
            WdLogEvent5_WdAssertion(v146);
          }
          if ( DdiSubRectList[v140].right > v175.DstRect.right )
          {
            v147 = WdLogNewEntry5_WdAssertion(v138, v68);
            *(_QWORD *)(v147 + 24) = 6975LL;
            WdLogEvent5_WdAssertion(v147);
          }
          top = DdiSubRectList[v140].top;
          if ( top >= DdiSubRectList[v140].bottom )
          {
            v149 = WdLogNewEntry5_WdAssertion(v138, v68);
            *(_QWORD *)(v149 + 24) = 6976LL;
            WdLogEvent5_WdAssertion(v149);
            top = DdiSubRectList[v140].top;
          }
          if ( top < v175.DstRect.top )
          {
            v150 = WdLogNewEntry5_WdAssertion(v138, v68);
            *(_QWORD *)(v150 + 24) = 6977LL;
            WdLogEvent5_WdAssertion(v150);
          }
          if ( DdiSubRectList[v140].bottom > v175.DstRect.bottom )
          {
            v151 = WdLogNewEntry5_WdAssertion(v138, v68);
            *(_QWORD *)(v151 + 24) = 6978LL;
            WdLogEvent5_WdAssertion(v151);
          }
          ++v140;
        }
        while ( v140 < v175.SubRectCnt );
        v7 = v172;
      }
      goto LABEL_54;
    }
    v122 = (_QWORD *)WdLogNewEntry5_WdEvent(v125, v124);
    LODWORD(v51) = -1071774910;
    v122[3] = -1071774910LL;
    v122[4] = *((_QWORD *)v7 + 2);
    v122[5] = *((unsigned int *)&v10[1].Next + 2);
    v122[6] = v64;
LABEL_124:
    WdLogEvent5_WdEvent(v122);
    goto LABEL_125;
  }
  v123 = (_QWORD *)WdLogNewEntry5_WdEvent(v67, v66);
  v123[3] = 0LL;
  v123[4] = *((_QWORD *)v7 + 2);
  v123[5] = *((unsigned int *)&v10[1].Next + 2);
  v123[6] = a3;
  WdLogEvent5_WdEvent(v123);
  (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2)
                                                                                                 + 16LL)
                                                                                     + 640LL)
                                                                         + 8LL)
                                                             + 504LL))(
    v163,
    0LL);
  v163 = 0LL;
LABEL_83:
  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v173, v85);
LABEL_84:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v165);
LABEL_85:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v166, v86);
LABEL_86:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v174, v87);
  v90 = DXGGLOBAL::GetGlobal(v89, v88);
  v91 = (char *)v90 + 1024;
  ++*((_DWORD *)v90 + 263);
  if ( ExQueryDepthSList((PSLIST_HEADER)v90 + 64) >= *((_WORD *)v90 + 520) )
  {
    ++*((_DWORD *)v91 + 8);
    (*((void (__fastcall **)(PSLIST_ENTRY, char *))v91 + 7))(v10, v91);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v91, v10);
  }
  return (unsigned int)v51;
}
