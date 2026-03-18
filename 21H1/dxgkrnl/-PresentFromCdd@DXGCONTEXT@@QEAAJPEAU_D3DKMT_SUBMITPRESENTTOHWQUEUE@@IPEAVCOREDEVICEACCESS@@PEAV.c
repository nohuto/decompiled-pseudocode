/*
 * XREFs of ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C01487FC
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D5EF0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0180664 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z @ 0x1C02290F0 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000A238 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000A8F8 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0011A58 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0016FF4 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0017124 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017150 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0017204 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C0017238 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0017278 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1C00466E8 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer @ 0x1C004695C (McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00DD24C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00FEEA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01083E0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0128708 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C0149040 (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C01490F0 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C0149188 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C0149388 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C015D688 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
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
  int v52; // eax
  COREDEVICEACCESS *v53; // r14
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  struct DXGPRESENTMUTEX *v58; // r8
  __int64 v59; // r13
  unsigned __int8 v60; // r14
  int v61; // ebx
  ADAPTER_DISPLAY *v62; // r13
  unsigned int v63; // r14d
  int updated; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  int CurrentOrientation; // eax
  UINT Value; // eax
  UINT i; // r14d
  const RECT *v72; // rcx
  const RECT *v73; // rcx
  __int64 v74; // r8
  const RECT *pDstSubRects; // r15
  UINT SubRectCnt; // r14d
  struct _VIDMM_DMA_BUFFER *v77; // r12
  UINT v78; // ebx
  __int64 v79; // rdx
  unsigned int v80; // r10d
  unsigned int v81; // r9d
  __int64 v82; // rcx
  struct COREDEVICEACCESS *v83; // r14
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rcx
  struct DXGGLOBAL *v89; // rax
  char *v90; // rsi
  DXGPRESENT *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  DXGPRESENT *v97; // rax
  __int64 v98; // rdx
  __int64 (__fastcall *v99)(__int64, __int64, __int64, char *); // rax
  __int64 v100; // r8
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  int v109; // r9d
  __int64 v110; // rax
  _QWORD *v111; // rax
  int v112; // r9d
  __int64 v113; // rax
  _QWORD *v114; // rax
  __int64 v115; // rdx
  _QWORD *v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  char *v120; // rdx
  _QWORD *v121; // rax
  _QWORD *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  const RECT *DdiSubRectList; // r14
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rbx
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rcx
  __int64 v138; // rax
  UINT v139; // r12d
  int v140; // r13d
  int v141; // esi
  __int64 v142; // rbx
  LONG left; // r8d
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  LONG top; // eax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  _QWORD *v158; // rax
  struct DXGCONTEXT **v159; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v160; // [rsp+28h] [rbp-F8h]
  struct _VIDMM_DMA_BUFFER *v162; // [rsp+A8h] [rbp-78h] BYREF
  ADAPTER_DISPLAY *v163; // [rsp+B0h] [rbp-70h]
  struct VIDSCH_SUBMIT_DATA_BASE *v164[2]; // [rsp+B8h] [rbp-68h] BYREF
  struct _EX_RUNDOWN_REF *v165; // [rsp+C8h] [rbp-58h] BYREF
  union _LARGE_INTEGER v166; // [rsp+D0h] [rbp-50h] BYREF
  struct DXGHWQUEUE *v167; // [rsp+D8h] [rbp-48h] BYREF
  COREDEVICEACCESS *v168; // [rsp+E0h] [rbp-40h]
  DXGADAPTERSTOPRESETLOCKSHARED *v169; // [rsp+E8h] [rbp-38h]
  __int64 v170; // [rsp+F0h] [rbp-30h]
  DXGCONTEXT *v171; // [rsp+F8h] [rbp-28h]
  _BYTE v172[24]; // [rsp+100h] [rbp-20h] BYREF
  _BYTE v173[24]; // [rsp+118h] [rbp-8h] BYREF
  struct _DXGKARG_PRESENT v174; // [rsp+130h] [rbp+10h] BYREF
  _BYTE v176[64]; // [rsp+1E0h] [rbp+C0h] BYREF
  _BYTE v177[64]; // [rsp+220h] [rbp+100h] BYREF
  _BYTE v178[64]; // [rsp+260h] [rbp+140h] BYREF
  _BYTE v179[64]; // [rsp+2A0h] [rbp+180h] BYREF

  v169 = a5;
  v7 = this;
  v166.QuadPart = (LONGLONG)a6;
  v168 = a4;
  v171 = this;
  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2);
  v9 = (char *)Global + 912;
  ++*((_DWORD *)Global + 233);
  v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 57);
  if ( !v10 )
  {
    v98 = *((unsigned int *)v9 + 11);
    v99 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v9 + 6);
    v100 = *((unsigned int *)v9 + 10);
    v101 = *((unsigned int *)v9 + 9);
    ++*((_DWORD *)v9 + 6);
    v10 = (PSLIST_ENTRY)v99(v101, v98, v100, v9);
    if ( !v10 )
    {
      v106 = WdLogNewEntry5_WdLowResource(v103, v102, v104, v105);
      *(_QWORD *)(v106 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v106);
      return 3221225495LL;
    }
  }
  memset(v10, 0, 0x5F8uLL);
  v167 = 0LL;
  memmove(v10, &a2->PrivatePresentData, 0x5D8uLL);
  v10[94].Next = (struct _SLIST_ENTRY *)&v167;
  if ( a2->hHwQueues )
    v11 = *a2->hHwQueues;
  else
    v11 = 0;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
    (DXGHWQUEUEBYHANDLE *)v173,
    v11,
    *(struct _KTHREAD ***)(*((_QWORD *)v7 + 2) + 40LL),
    &v167,
    1);
  v12 = *((_QWORD *)v7 + 2);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 88LL);
  v14 = *(_QWORD *)(v12 + 1848);
  v170 = v13;
  v15 = *(DXGADAPTER ***)(v14 + 2672);
  v163 = (ADAPTER_DISPLAY *)v15;
  if ( !v15 || !DXGADAPTER::IsCoreResourceSharedOwner(v15[2]) )
  {
    v107 = WdLogNewEntry5_WdAssertion(v15, v13);
    *(_QWORD *)(v107 + 24) = 6717LL;
    WdLogEvent5_WdAssertion(v107);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL)) )
  {
    v108 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v108 + 24) = 6718LL;
    WdLogEvent5_WdAssertion(v108);
  }
  v18 = (const RECT **)(&v10[4].Next + 1);
  if ( !*((_QWORD *)&v10[4].Next + 1)
    || (v19 = (unsigned int *)&v10[4], !LODWORD(v10[4].Next))
    || (v17 = *((unsigned int *)&v10[5].Next + 2),
        (((unsigned __int8)v17 ^ (unsigned __int8)(*((_DWORD *)&v10[5].Next + 2) >> 1)) & 1) == 0)
    || (v17 & 0x63C) != 0 )
  {
    v158 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    LODWORD(v51) = -1073741811;
    v158[3] = -1073741811LL;
    v158[4] = v7;
    v158[5] = *v18;
    v158[6] = LODWORD(v10[4].Next);
    v158[7] = *((unsigned int *)&v10[5].Next + 2);
    WdLogEvent5_WdError(v158);
    goto LABEL_86;
  }
  memset(&v174, 0, sizeof(v174));
  v20 = *((_DWORD *)&v10[1].Next + 2);
  v21 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v21 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v109 = *(_DWORD *)(v21 + 232);
      if ( v109 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, &EventBlockThread, v23, v109);
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
      v110 = WdLogNewEntry5_WdError(v27, 2LL * (unsigned int)v24);
      *(_QWORD *)(v110 + 24) = 267LL;
      WdLogEvent5_WdError(v110);
    }
  }
  v28 = 0LL;
LABEL_19:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v165, v28);
  ExReleasePushLockSharedEx(v21 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v165 )
  {
    v111 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
    LODWORD(v51) = -1073741811;
    v111[3] = -1073741811LL;
    v111[4] = v7;
    v111[5] = *v18;
    v111[6] = *v19;
    v111[7] = *((unsigned int *)&v10[1].Next + 2);
    WdLogEvent5_WdError(v111);
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
        v112 = *(_DWORD *)(v32 + 232);
        if ( v112 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v33, &EventBlockThread, v34, v112);
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
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v164, v39);
          ExReleasePushLockSharedEx(v32 + 208, 0LL);
          KeLeaveCriticalRegion();
          if ( !v164[0] )
          {
            v114 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
            LODWORD(v51) = -1073741811;
            v114[3] = -1073741811LL;
            v114[4] = v7;
            v114[5] = HIDWORD(v10[1].Next);
            WdLogEvent5_WdError(v114);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v164, v115);
            goto LABEL_85;
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v164, v40);
          goto LABEL_30;
        }
        v113 = WdLogNewEntry5_WdError(v38, 2LL * (unsigned int)v35);
        *(_QWORD *)(v113 + 24) = 267LL;
        WdLogEvent5_WdError(v113);
      }
    }
    v39 = 0LL;
    goto LABEL_28;
  }
LABEL_30:
  if ( !*((_QWORD *)v7 + 19) )
  {
    v92 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x670uLL);
    v97 = v92 ? DXGPRESENT::DXGPRESENT(v92, 1u) : 0LL;
    *((_QWORD *)v7 + 19) = v97;
    if ( !v97 )
    {
      v116 = (_QWORD *)WdLogNewEntry5_WdLowResource(v94, v93, v95, v96);
      v116[3] = -1073741801LL;
      v116[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL);
      v116[5] = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
      v116[6] = v7;
      WdLogEvent5_WdLowResource(v116);
      LODWORD(v51) = -1073741801;
      goto LABEL_85;
    }
  }
  v42 = *((_QWORD *)v7 + 2);
  v164[0] = 0LL;
  v164[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v42 + 16);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v164);
  v46 = v164[0];
  if ( !v164[0] )
  {
    v117 = WdLogNewEntry5_WdLowResource(v43, 0LL, v44, v45);
    *(_QWORD *)(v117 + 24) = 6782LL;
    WdLogEvent5_WdLowResource(v117);
    LODWORD(v51) = -1073741801;
    goto LABEL_84;
  }
  v47 = *(_DWORD *)v164[0] | 0x10000;
  *(_DWORD *)v164[0] = v47;
  if ( (*(_DWORD *)(&v10[5].Next + 1) & 0x4000) == 0 )
  {
    v47 |= 1u;
    *(_DWORD *)v46 = v47;
  }
  *(_DWORD *)v46 = v47 | 0x100;
  LOBYTE(v44) = 1;
  v48 = *((_QWORD *)v7 + 2);
  v162 = 0LL;
  LODWORD(v51) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v48 + 16) + 640LL) + 8LL)
                                                                                                 + 496LL))(
                   *((_QWORD *)v7 + 29),
                   0LL,
                   v44,
                   &v162);
  if ( (int)v51 < 0 )
    goto LABEL_84;
  if ( !v162 )
  {
    v118 = WdLogNewEntry5_WdAssertion(v50, v49);
    *(_QWORD *)(v118 + 24) = 6800LL;
    WdLogEvent5_WdAssertion(v118);
  }
  DXGPRESENTMUTEX::DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v172, *(struct _KTHREAD ***)(*((_QWORD *)v7 + 2) + 16LL));
  v52 = *((_DWORD *)&v10[5].Next + 2);
  if ( (v52 & 0x4000) == 0 )
  {
    v53 = v168;
    COREDEVICEACCESS::Release(v168);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v169);
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v172, v54);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v169);
    v55 = COREDEVICEACCESS::AcquireShared(v53, 0LL);
    v51 = v55;
    if ( v55 < 0 )
    {
      v119 = WdLogNewEntry5_WdEvent(v57, v56);
      *(_QWORD *)(v119 + 24) = v51;
      *(_QWORD *)(v119 + 32) = v7;
      WdLogEvent5_WdEvent(v119);
      COREDEVICEACCESS::AcquireSharedUncheck(v53, v120);
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                         + 640LL)
                                                                             + 8LL)
                                                                 + 504LL))(
        v162,
        0LL);
      goto LABEL_83;
    }
    v59 = v170;
    v60 = 0;
    if ( v170 )
    {
      v61 = *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL);
      if ( v61 != (*(unsigned int (**)(void))(v170 + 8))() )
      {
        *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL) = (*(__int64 (**)(void))(v59 + 8))();
        DXGDEVICE::FlushScheduler(*((_QWORD **)v7 + 2), 2u);
        v60 = 1;
      }
    }
    DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v7 + 2), v7, v58, v60);
    v52 = *((_DWORD *)&v10[5].Next + 2);
  }
  if ( (v52 & 1) == 0 || HIDWORD(v10[1].Next) == *((_DWORD *)&v10[1].Next + 2) )
  {
    v62 = v163;
    goto LABEL_119;
  }
  v62 = v163;
  if ( (*(_DWORD *)(v165[6].Count + 4) & 2) == 0 )
  {
LABEL_119:
    v63 = a3;
    goto LABEL_48;
  }
  v63 = a3;
  updated = DxgkCddUpdatePresentRects(v163, a3, (const struct tagRECT **)&v10[4].Next + 1, (unsigned int *)&v10[4]);
  v51 = updated;
  if ( updated < 0 )
  {
    v121 = (_QWORD *)WdLogNewEntry5_WdEvent(v66, v65);
    v121[3] = v51;
    v121[4] = *((_QWORD *)v7 + 2);
    v121[5] = a3;
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
        v162,
        0LL);
      v162 = 0LL;
      goto LABEL_83;
    }
    v174.DstRect = (RECT)v10[2];
    v174.SubRectCnt = *v19;
    v68 = *((unsigned int *)&v10[5].Next + 2);
    if ( (v68 & 0x4000) != 0 )
    {
      Value = v174.Flags.Value;
    }
    else
    {
      CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v62, v63, 1);
      Value = (CurrentOrientation != 1 ? 0x80 : 0) | v174.Flags.Value & 0xFFFFFF7F;
      v174.Flags.Value = Value;
      v68 = *((unsigned int *)&v10[5].Next + 2);
    }
    if ( (v68 & 1) == 0 )
    {
      if ( (v68 & 2) == 0 )
      {
        v157 = WdLogNewEntry5_WdAssertion(v68, v67);
        *(_QWORD *)(v157 + 24) = 7003LL;
        WdLogEvent5_WdAssertion(v157);
        Value = v174.Flags.Value;
      }
      v174.Flags.Value = Value | 2;
      v174.Color = *((_DWORD *)&v10[1].Next + 3);
      v174.pDstSubRects = *v18;
      goto LABEL_69;
    }
    v174.Flags.Value = Value | 1;
    v174.SrcRect = (RECT)v10[3];
    if ( HIDWORD(v10[1].Next) != *((_DWORD *)&v10[1].Next + 2) )
    {
      v174.pDstSubRects = *v18;
LABEL_54:
      for ( i = 0; i < v174.SubRectCnt; ++i )
      {
        v72 = *v18;
        if ( (*v18)[i].left >= (*v18)[i].right )
        {
          v151 = WdLogNewEntry5_WdAssertion(v72, v67);
          *(_QWORD *)(v151 + 24) = 6987LL;
          WdLogEvent5_WdAssertion(v151);
          v72 = *v18;
        }
        if ( v72[i].top >= v72[i].bottom )
        {
          v152 = WdLogNewEntry5_WdAssertion(v72, v67);
          *(_QWORD *)(v152 + 24) = 6988LL;
          WdLogEvent5_WdAssertion(v152);
        }
        if ( (*(_DWORD *)(&v10[5].Next + 1) & 0x4000) == 0 )
        {
          v73 = *v18;
          if ( (*v18)[i].left < v174.SrcRect.left )
          {
            v153 = WdLogNewEntry5_WdAssertion(v73, v67);
            *(_QWORD *)(v153 + 24) = 6993LL;
            WdLogEvent5_WdAssertion(v153);
            v73 = *v18;
          }
          if ( v73[i].right > v174.SrcRect.right )
          {
            v154 = WdLogNewEntry5_WdAssertion(v73, v67);
            *(_QWORD *)(v154 + 24) = 6994LL;
            WdLogEvent5_WdAssertion(v154);
            v73 = *v18;
          }
          if ( v73[i].top < v174.SrcRect.top )
          {
            v155 = WdLogNewEntry5_WdAssertion(v73, v67);
            *(_QWORD *)(v155 + 24) = 6995LL;
            WdLogEvent5_WdAssertion(v155);
            v73 = *v18;
          }
          if ( v73[i].bottom > v174.SrcRect.bottom )
          {
            v156 = WdLogNewEntry5_WdAssertion(v73, v67);
            *(_QWORD *)(v156 + 24) = 6996LL;
            WdLogEvent5_WdAssertion(v156);
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
        pDstSubRects = v174.pDstSubRects;
        SubRectCnt = v174.SubRectCnt;
        v77 = v162;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
          McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
            HIDWORD(*(_QWORD *)&v174.DstRect.left),
            HIDWORD(*(_QWORD *)&v174.DstRect.right),
            HIDWORD(*(_QWORD *)&v174.SrcRect.left),
            0LL,
            v162);
        v78 = 0;
        if ( SubRectCnt )
        {
          while ( 1 )
          {
            v79 = SubRectCnt - v78;
            if ( (unsigned int)v79 > 0x10 )
              break;
            v80 = SubRectCnt - v78;
            if ( (_DWORD)v79 )
              goto LABEL_75;
LABEL_77:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
            {
              LODWORD(v160) = v80;
              LODWORD(v159) = SubRectCnt - v78 <= 0x10;
              McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                (__int64)v179,
                v79,
                v74,
                v77,
                v159,
                v160,
                v179,
                v178,
                v177,
                v176);
            }
            v78 += 16;
            if ( v78 >= SubRectCnt )
              goto LABEL_80;
          }
          v80 = 16;
LABEL_75:
          v74 = 0LL;
          v81 = 0;
          do
          {
            v82 = v81 + v78;
            ++v81;
            v82 *= 2LL;
            v74 += 4LL;
            *(_DWORD *)&v178[v74 + 60] = *(&pDstSubRects->left + 2 * v82);
            *(_DWORD *)&v177[v74 + 60] = *(&pDstSubRects->right + 2 * v82);
            *(_DWORD *)&v176[v74 + 60] = *(&pDstSubRects->top + 2 * v82);
            *(_DWORD *)&v176[v74 - 4] = *(&pDstSubRects->bottom + 2 * v82);
          }
          while ( v81 < v80 );
          goto LABEL_77;
        }
      }
LABEL_80:
      v83 = v168;
      LODWORD(v51) = DXGCONTEXT::SubmitPresent(
                       (struct _EX_RUNDOWN_REF *)v7,
                       (struct _D3DKMT_PRESENT *)v10,
                       (struct DXGHWQUEUE **)v10[94].Next,
                       *((_DWORD *)&v10[5].Next + 3),
                       (struct DXGCONTEXT **)v166.QuadPart,
                       0LL,
                       HIDWORD(v10[1].Next),
                       *((_DWORD *)&v10[1].Next + 2),
                       &v174,
                       0LL,
                       v162,
                       v164[0],
                       D3DDDIFMT_A8B8G8R8,
                       v168);
      if ( (int)v51 >= 0 && *((_DWORD *)&v10[22].Next + 2) == 1 )
      {
        v166.QuadPart = -100000LL;
        LODWORD(v51) = SubmitPresentHistoryToken(
                         (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v10[22].Next + 1),
                         v83,
                         (__int64)v169,
                         0LL,
                         0,
                         &v166,
                         (struct DXGK_PRESENT_PARAMS *)v10,
                         0LL,
                         v7,
                         0LL,
                         0LL);
      }
      goto LABEL_83;
    }
    if ( (*(_DWORD *)(&v10[5].Next + 1) & 0x4000) != 0
      || !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v62, v63) )
    {
      DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v7 + 19), 0);
      v67 = (unsigned int)(v174.SrcRect.right - v174.SrcRect.left);
      v126 = (unsigned int)(v174.DstRect.right - v174.DstRect.left);
      v174.pDstSubRects = DdiSubRectList;
      if ( (_DWORD)v126 != (_DWORD)v67 )
      {
        v127 = WdLogNewEntry5_WdAssertion(v126, v67);
        *(_QWORD *)(v127 + 24) = 6948LL;
        WdLogEvent5_WdAssertion(v127);
      }
      v128 = (unsigned int)(v174.SrcRect.bottom - v174.SrcRect.top);
      if ( v174.DstRect.bottom - v174.DstRect.top != (_DWORD)v128 )
      {
        v129 = WdLogNewEntry5_WdAssertion(v128, v67);
        *(_QWORD *)(v129 + 24) = 6951LL;
        WdLogEvent5_WdAssertion(v129);
      }
      if ( v174.SrcRect.left >= v174.SrcRect.right )
      {
        v130 = WdLogNewEntry5_WdAssertion(v128, v67);
        *(_QWORD *)(v130 + 24) = 6953LL;
        WdLogEvent5_WdAssertion(v130);
      }
      if ( v174.SrcRect.left < 0 )
      {
        v131 = WdLogNewEntry5_WdAssertion(v128, v67);
        *(_QWORD *)(v131 + 24) = 6954LL;
        WdLogEvent5_WdAssertion(v131);
      }
      v132 = 3968LL * a3;
      v133 = (unsigned int)(*(_DWORD *)(v132 + *((_QWORD *)v62 + 14) + 636)
                          - *(_DWORD *)(v132 + *((_QWORD *)v62 + 14) + 628));
      if ( v174.SrcRect.right > (int)v133 )
      {
        v134 = WdLogNewEntry5_WdAssertion(v133, v67);
        *(_QWORD *)(v134 + 24) = 6955LL;
        WdLogEvent5_WdAssertion(v134);
      }
      if ( v174.DstRect.top >= v174.DstRect.bottom )
      {
        v135 = WdLogNewEntry5_WdAssertion(v133, v67);
        *(_QWORD *)(v135 + 24) = 6957LL;
        WdLogEvent5_WdAssertion(v135);
      }
      if ( v174.DstRect.top < 0 )
      {
        v136 = WdLogNewEntry5_WdAssertion(v133, v67);
        *(_QWORD *)(v136 + 24) = 6958LL;
        WdLogEvent5_WdAssertion(v136);
      }
      v137 = (unsigned int)(*(_DWORD *)(v132 + *((_QWORD *)v62 + 14) + 640)
                          - *(_DWORD *)(v132 + *((_QWORD *)v62 + 14) + 632));
      if ( v174.SrcRect.bottom > (int)v137 )
      {
        v138 = WdLogNewEntry5_WdAssertion(v137, v67);
        *(_QWORD *)(v138 + 24) = 6959LL;
        WdLogEvent5_WdAssertion(v138);
      }
      v139 = 0;
      v140 = v174.DstRect.left - v174.SrcRect.left;
      if ( v174.SubRectCnt )
      {
        v141 = v174.DstRect.top - v174.SrcRect.top;
        do
        {
          v142 = v139;
          left = v140 + (*v18)[v139].left;
          DdiSubRectList[v142].left = left;
          v67 = (unsigned int)(v140 + (*v18)[v139].right);
          DdiSubRectList[v142].right = v67;
          DdiSubRectList[v142].top = v141 + (*v18)[v139].top;
          DdiSubRectList[v142].bottom = v141 + (*v18)[v139].bottom;
          if ( left >= (int)v67 )
          {
            v144 = WdLogNewEntry5_WdAssertion(v137, v67);
            *(_QWORD *)(v144 + 24) = 6971LL;
            WdLogEvent5_WdAssertion(v144);
            left = DdiSubRectList[v139].left;
          }
          if ( left < v174.DstRect.left )
          {
            v145 = WdLogNewEntry5_WdAssertion(v137, v67);
            *(_QWORD *)(v145 + 24) = 6972LL;
            WdLogEvent5_WdAssertion(v145);
          }
          if ( DdiSubRectList[v139].right > v174.DstRect.right )
          {
            v146 = WdLogNewEntry5_WdAssertion(v137, v67);
            *(_QWORD *)(v146 + 24) = 6973LL;
            WdLogEvent5_WdAssertion(v146);
          }
          top = DdiSubRectList[v139].top;
          if ( top >= DdiSubRectList[v139].bottom )
          {
            v148 = WdLogNewEntry5_WdAssertion(v137, v67);
            *(_QWORD *)(v148 + 24) = 6974LL;
            WdLogEvent5_WdAssertion(v148);
            top = DdiSubRectList[v139].top;
          }
          if ( top < v174.DstRect.top )
          {
            v149 = WdLogNewEntry5_WdAssertion(v137, v67);
            *(_QWORD *)(v149 + 24) = 6975LL;
            WdLogEvent5_WdAssertion(v149);
          }
          if ( DdiSubRectList[v139].bottom > v174.DstRect.bottom )
          {
            v150 = WdLogNewEntry5_WdAssertion(v137, v67);
            *(_QWORD *)(v150 + 24) = 6976LL;
            WdLogEvent5_WdAssertion(v150);
          }
          ++v139;
        }
        while ( v139 < v174.SubRectCnt );
        v7 = v171;
      }
      goto LABEL_54;
    }
    v121 = (_QWORD *)WdLogNewEntry5_WdEvent(v124, v123);
    LODWORD(v51) = -1071774910;
    v121[3] = -1071774910LL;
    v121[4] = *((_QWORD *)v7 + 2);
    v121[5] = *((unsigned int *)&v10[1].Next + 2);
    v121[6] = v63;
LABEL_124:
    WdLogEvent5_WdEvent(v121);
    goto LABEL_125;
  }
  v122 = (_QWORD *)WdLogNewEntry5_WdEvent(v66, v65);
  v122[3] = 0LL;
  v122[4] = *((_QWORD *)v7 + 2);
  v122[5] = *((unsigned int *)&v10[1].Next + 2);
  v122[6] = a3;
  WdLogEvent5_WdEvent(v122);
  (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2)
                                                                                                 + 16LL)
                                                                                     + 640LL)
                                                                         + 8LL)
                                                             + 504LL))(
    v162,
    0LL);
  v162 = 0LL;
LABEL_83:
  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v172, v84);
LABEL_84:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v164);
LABEL_85:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v165, v85);
LABEL_86:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v173, v86);
  v89 = DXGGLOBAL::GetGlobal(v88, v87);
  v90 = (char *)v89 + 912;
  ++*((_DWORD *)v89 + 235);
  if ( ExQueryDepthSList((PSLIST_HEADER)v89 + 57) >= *((_WORD *)v89 + 464) )
  {
    ++*((_DWORD *)v90 + 8);
    (*((void (__fastcall **)(PSLIST_ENTRY, char *))v90 + 7))(v10, v90);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v90, v10);
  }
  return (unsigned int)v51;
}
