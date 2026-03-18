/*
 * XREFs of ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C017B810
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0159A40 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C032E758 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C032F268 (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C000A948 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0172460 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C01789B0 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0179F48 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C01ED040 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C0224DC6 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C02E5670 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0332444 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresent(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        struct DXGHWQUEUE **a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct DXGALLOCATION *a6,
        unsigned int a7,
        unsigned int a8,
        struct _DXGKARG_PRESENT *a9,
        struct _D3DKMT_PRESENT_RGNS *a10,
        struct _VIDMM_DMA_BUFFER *a11,
        struct VIDSCH_SUBMIT_DATA_BASE *a12,
        enum _D3DDDIFORMAT a13,
        struct COREDEVICEACCESS *a14)
{
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r13
  struct _EX_RUNDOWN_REF *v19; // rdi
  struct DXGALLOCATION *v20; // rsi
  struct DXGALLOCATION **AllocationSafe; // rax
  struct DXGTHREAD *DxgThread; // rax
  __int64 v23; // rax
  char v24; // al
  struct CRefCountedBuffer *v25; // rbx
  struct _D3DKMT_PRESENT *v26; // r11
  int v27; // eax
  __int64 v28; // r15
  char v29; // r15
  struct _DXGKARG_PRESENT *v30; // rcx
  unsigned int v31; // ecx
  unsigned int v32; // r13d
  struct DXGCONTEXT **v33; // r9
  int v34; // r8d
  __int64 v35; // rdx
  DXGDEVICE **v36; // r10
  __int64 v37; // rcx
  __int64 v38; // rdx
  struct DXGALLOCATION *v39; // rdx
  struct _DXGKARG_PRESENT *v40; // rax
  int v41; // ecx
  __int64 v42; // rcx
  char *v43; // r8
  int v44; // r12d
  DXGCONTEXT *v45; // r10
  _QWORD *v46; // rcx
  __int64 v47; // rax
  int v48; // ecx
  struct VIDSCH_SUBMIT_DATA_BASE *v49; // r8
  char v50; // al
  __int64 *v51; // rcx
  struct DXGALLOCATION *v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rdx
  char v55; // cl
  char *v56; // r15
  _QWORD *v57; // rcx
  _QWORD *v58; // rdx
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  BOOL v63; // eax
  __int64 v64; // rax
  struct _DXGKARG_PRESENT *v65; // r8
  void *v66; // rdx
  unsigned int v67; // edi
  unsigned int v68; // r13d
  struct VIDSCH_SUBMIT_DATA_BASE *v69; // rbx
  DXGCONTEXT *v70; // r15
  struct _VIDMM_DMA_BUFFER *v71; // r8
  struct DXGTHREAD *v72; // rax
  struct DXGTHREAD *v73; // rax
  struct DXGCONTEXT **v75; // rsi
  struct DXGCONTEXT *v76; // r10
  __int64 v77; // rdx
  int v78; // eax
  struct DXGALLOCATION **v79; // rax
  struct DXGTHREAD *v80; // rax
  struct DXGHWQUEUE *v81; // r8
  int v82; // eax
  const wchar_t *v83; // r9
  struct _D3DKMT_PRESENT_RGNS *v84; // rcx
  UINT v85; // eax
  struct _DXGKARG_PRESENT *v86; // rdx
  RECT *v87; // r9
  unsigned int v88; // edx
  unsigned int MoveRectCount; // r8d
  unsigned int v90; // r15d
  unsigned int v91; // r12d
  unsigned int *v92; // rdx
  struct _EX_RUNDOWN_REF **v93; // rax
  __int64 v94; // r15
  struct DXGCONTEXT **v95; // r13
  struct DXGCONTEXT *v96; // r8
  unsigned int *v97; // rdx
  struct _EX_RUNDOWN_REF **v98; // rax
  __int64 v99; // r15
  struct DXGCONTEXT **v100; // r13
  struct DXGCONTEXT *v101; // r8
  struct DXGHWQUEUE *v102; // r8
  struct DXGCONTEXT **v103; // r8
  _BYTE *Pool2; // r9
  unsigned int v105; // edx
  unsigned int v106; // r10d
  __int64 v107; // r15
  struct DXGCONTEXT *v108; // r8
  _BYTE *v109; // rcx
  unsigned int v110; // edi
  char *v111; // r8
  __int64 v112; // rdi
  int v113; // [rsp+50h] [rbp-378h]
  struct _VIDMM_DMA_BUFFER *v114; // [rsp+58h] [rbp-370h]
  struct DXGALLOCATION *v117; // [rsp+70h] [rbp-358h] BYREF
  struct DXGALLOCATION *v118; // [rsp+78h] [rbp-350h] BYREF
  struct DXGCONTEXT **v119; // [rsp+80h] [rbp-348h]
  int v120; // [rsp+88h] [rbp-340h] BYREF
  unsigned int v121; // [rsp+8Ch] [rbp-33Ch]
  unsigned int v122; // [rsp+90h] [rbp-338h]
  struct _D3DKMT_PRESENT *v123; // [rsp+98h] [rbp-330h]
  unsigned int v124; // [rsp+A4h] [rbp-324h]
  struct _DXGKARG_PRESENT *v125; // [rsp+A8h] [rbp-320h]
  struct DXGALLOCATION *v126; // [rsp+B0h] [rbp-318h]
  __int64 v127; // [rsp+B8h] [rbp-310h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v128; // [rsp+C0h] [rbp-308h]
  unsigned int v129; // [rsp+C8h] [rbp-300h]
  unsigned int v130; // [rsp+CCh] [rbp-2FCh]
  struct DXGTHREAD *v131; // [rsp+D0h] [rbp-2F8h] BYREF
  struct DXGTHREAD *v132; // [rsp+D8h] [rbp-2F0h] BYREF
  struct _D3DKMT_PRESENT_RGNS *v133; // [rsp+E0h] [rbp-2E8h]
  struct DXGTHREAD *v134; // [rsp+E8h] [rbp-2E0h] BYREF
  struct DXGTHREAD *v135; // [rsp+F0h] [rbp-2D8h] BYREF
  struct CRefCountedBuffer *v136; // [rsp+F8h] [rbp-2D0h] BYREF
  __int64 v137; // [rsp+100h] [rbp-2C8h]
  struct _VIDMM_DMA_BUFFER *v138; // [rsp+108h] [rbp-2C0h]
  signed __int64 v139; // [rsp+110h] [rbp-2B8h]
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+118h] [rbp-2B0h]
  struct DXGHWQUEUE **v141; // [rsp+120h] [rbp-2A8h]
  struct COREDEVICEACCESS *v142; // [rsp+128h] [rbp-2A0h]
  struct CRefCountedBuffer *v143; // [rsp+130h] [rbp-298h]
  struct _EX_RUNDOWN_REF *v144; // [rsp+138h] [rbp-290h] BYREF
  struct _EX_RUNDOWN_REF *v145; // [rsp+140h] [rbp-288h] BYREF
  char v146[8]; // [rsp+148h] [rbp-280h] BYREF
  char v147[8]; // [rsp+150h] [rbp-278h] BYREF
  struct CRefCountedBuffer *v148; // [rsp+158h] [rbp-270h]
  DXGCONTEXT *v149; // [rsp+160h] [rbp-268h]
  PVOID P; // [rsp+170h] [rbp-258h]
  _BYTE v151[64]; // [rsp+178h] [rbp-250h] BYREF
  unsigned int v152; // [rsp+1B8h] [rbp-210h]
  __int64 v153; // [rsp+1C0h] [rbp-208h]
  struct DXGALLOCATION *v154; // [rsp+1C8h] [rbp-200h]
  __int64 v155; // [rsp+1D0h] [rbp-1F8h]
  struct DXGALLOCATION *v156; // [rsp+1D8h] [rbp-1F0h]
  _BYTE v157[40]; // [rsp+1E0h] [rbp-1E8h] BYREF
  _BYTE v158[56]; // [rsp+208h] [rbp-1C0h] BYREF
  _BYTE v159[320]; // [rsp+240h] [rbp-188h] BYREF

  v141 = a3;
  v123 = a2;
  v125 = a9;
  v149 = this;
  v119 = a5;
  v126 = a6;
  v15 = a7;
  v124 = a7;
  v122 = a8;
  v133 = a10;
  v114 = a11;
  v138 = a11;
  v128 = a12;
  v142 = a14;
  v113 = 0;
  v16 = *((_QWORD *)this + 2);
  v17 = *(_QWORD *)(v16 + 40);
  v137 = v17;
  v18 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v18 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 168)) )
    {
      WdLogSingleEntry1(1LL, 7924LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
        7924LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v15 = v124;
  }
  v19 = 0LL;
  v117 = 0LL;
  v20 = 0LL;
  v118 = 0LL;
  if ( v15 )
  {
    AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v17, (DXGALLOCATIONREFERENCE *)&v144, v15);
    v19 = (struct _EX_RUNDOWN_REF *)*AllocationSafe;
    v117 = *AllocationSafe;
    *AllocationSafe = 0LL;
    if ( v144 )
      ExReleaseRundownProtection(v144 + 11);
    if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
    {
      v131 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v131) >= 0 )
      {
        DxgThread = v131;
        if ( v131 || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v131 = DxgThread) != 0LL) )
        {
          if ( *((_DWORD *)DxgThread + 12) )
            WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
        }
      }
    }
  }
  if ( v122 )
  {
    v79 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v17, (DXGALLOCATIONREFERENCE *)&v145, v122);
    v20 = *v79;
    v118 = *v79;
    *v79 = 0LL;
    if ( v145 )
      ExReleaseRundownProtection(v145 + 11);
    if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
    {
      v132 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v132) >= 0 )
      {
        v80 = v132;
        if ( v132 || (v80 = DxgkThreadObjectCreateDxgThread(), (v132 = v80) != 0LL) )
        {
          if ( *((_DWORD *)v80 + 12) )
            WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v80 + 12), 0LL, 0LL);
        }
      }
    }
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
    || ((v23 = *(_QWORD *)(v17 + 88)) != 0
     && (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v23 + 224))(0LL, 0LL, 0LL)
      ? (v24 = 1)
      : (v24 = 0),
        v24) )
  {
    *((_DWORD *)a12 + 29) = 0;
  }
  v25 = 0LL;
  v143 = 0LL;
  v136 = 0LL;
  v26 = v123;
  if ( v123 )
  {
    v27 = ReadPresentPrivateDriverData(
            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
            v123->PrivateDriverDataSize,
            (char *)v123->pPrivateDriverData,
            &v136);
    v28 = v27;
    v113 = v27;
    if ( v27 < 0 )
    {
      WdLogSingleEntry1(2LL, v27);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to read private driver data. Returning 0x%I64x",
        v28,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v118);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v117);
      return (unsigned int)v28;
    }
    v25 = v136;
    v143 = v136;
    v26 = v123;
  }
  v148 = v25;
  v29 = 0;
  if ( (*(int *)(v18 + 2424) >= 0x2000 || *(_BYTE *)(v18 + 2724)) && *(_DWORD *)(v18 + 1968) >= 0x5007u && v26 )
  {
    v29 = 1;
    if ( v25 )
    {
      v30 = v125;
      v125->PrivateDriverDataSize = v26->PrivateDriverDataSize;
      v30->pPrivateDriverData = (char *)v25 + 16;
    }
    *((_QWORD *)a12 + 100) = v25;
    goto LABEL_28;
  }
  if ( !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v18) )
  {
LABEL_28:
    v31 = a4;
    goto LABEL_29;
  }
  v31 = a4;
  if ( a4 )
  {
    v44 = -1073741811;
LABEL_146:
    v113 = v44;
    goto LABEL_147;
  }
LABEL_29:
  v32 = v31 + 1;
  v121 = v31 + 1;
  v33 = v119;
  v34 = *((_DWORD *)*v119 + 99);
  LODWORD(v35) = 0;
  while ( (unsigned int)v35 < v31 )
  {
    v35 = (unsigned int)(v35 + 1);
    v82 = *((_DWORD *)v119[v35] + 99);
    if ( (v82 & v34) != 0 )
    {
      v44 = -1073741811;
      v70 = this;
      WdLogSingleEntry2(2LL, this, -1073741811LL);
      v83 = L"0x%I64x failed, can't broadcast flip to multiple context on the same physical adapter returning 0x%I64x";
LABEL_152:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v83, (__int64)v70, -1073741811LL, 0LL, 0LL, 0LL);
      v113 = -1073741811;
      goto LABEL_83;
    }
    v34 |= v82;
    v31 = a4;
  }
  *((_DWORD *)a12 + 34) = v34;
  v36 = (DXGDEVICE **)this;
  if ( v133 )
  {
    v37 = *((_QWORD *)this + 2);
    v38 = *(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL);
    if ( (*(_DWORD *)(v38 + 436) & 0x10) != 0 && v38 == *(_QWORD *)(v37 + 1848) )
    {
      v84 = v133;
      v85 = v133->MoveRectCount + v133->DirtyRectCount;
      if ( v85 <= 0x14 )
      {
        v86 = v125;
        v125->SubRectCnt = v85;
        v86->pDstSubRects = (const RECT *)v159;
        v87 = (RECT *)v159;
        v88 = 0;
        MoveRectCount = v84->MoveRectCount;
        while ( v88 < MoveRectCount )
          *v87++ = v84->pMoveRects[v88++].DestRect;
        memmove(v87, v84->pDirtyRects, 16LL * v84->DirtyRectCount);
        v36 = (DXGDEVICE **)this;
        v26 = v123;
        v33 = v119;
      }
    }
    v31 = a4;
  }
  if ( ((*((_DWORD *)a12 + 30) - 3) & 0xFFFFFFFD) == 0 )
  {
    v39 = v126;
    if ( !v126 )
    {
      WdLogSingleEntry1(1LL, 8071LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pFlipToDxgAllocation", 8071LL, 0LL, 0LL, 0LL, 0LL);
      v36 = (DXGDEVICE **)this;
      v26 = v123;
      v31 = a4;
      v39 = 0LL;
      v33 = v119;
    }
    v40 = v125;
    if ( v125->pDmaBuffer )
    {
      WdLogSingleEntry1(1LL, 8072LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pPresentDdiArg->pDmaBuffer == NULL",
        8072LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v36 = (DXGDEVICE **)this;
      v26 = v123;
      v31 = a4;
      v40 = v125;
      v39 = v126;
      v33 = v119;
    }
    if ( !v31 || !v29 )
    {
      if ( v32 > 1 )
        v41 = 3072;
      else
        v41 = 2048;
      *(_DWORD *)a12 = v41 | *(_DWORD *)a12 & 0xFFFFFBFF;
      *((_DWORD *)a12 + 35) = v32;
      v42 = 600LL;
      if ( !*((_BYTE *)a12 + 356) )
        v42 = 496LL;
      *(_DWORD *)((char *)a12 + v42) = *(_DWORD *)((_BYTE *)a12 + v42) & 0xFFFFFC00 | 1;
      if ( *((_BYTE *)a12 + 356) )
        v43 = (char *)a12 + *((_DWORD *)a12 + 151) * ((8 * *((_DWORD *)a12 + 152) + 231) & 0xFFFFFFF8) + 648;
      else
        v43 = (char *)a12 + 504;
      v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v36[2] + 2) + 648LL)
                                                                          + 8LL)
                                                              + 424LL))(
              *((_QWORD *)v36[2] + 95),
              *((_QWORD *)v39 + 3),
              v43);
      v113 = v44;
      if ( v44 < 0 )
        goto LABEL_147;
      v120 = 0;
      v127 = 0LL;
      v45 = this;
      v46 = *(_QWORD **)(*((_QWORD *)this + 2) + 16LL);
      v47 = v46[2];
      if ( *(int *)(v47 + 2424) >= 0x2000 || *(_BYTE *)(v47 + 2724) )
      {
        v48 = 0xFFFF;
        v120 = 0xFFFF;
        v127 = -1LL;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(v46[81] + 8LL) + 224LL))(
          v46[82],
          *(_QWORD *)(*((_QWORD *)v126 + 6) + 8LL),
          &v120,
          &v127,
          0LL);
        v48 = v120;
        v45 = this;
      }
      v49 = v128;
      v50 = *((_BYTE *)v128 + 356);
      if ( v50 )
      {
        *(_WORD *)((char *)v128 + *((_DWORD *)v128 + 151) * ((8 * *((_DWORD *)v128 + 152) + 231) & 0xFFFFFFF8) + 632) = v48;
        v50 = *((_BYTE *)v49 + 356);
      }
      else
      {
        *((_DWORD *)v128 + 139) ^= (*((_DWORD *)v128 + 139) ^ (v48 << 17)) & 0x3E0000;
      }
      if ( v50 )
        v51 = (__int64 *)((char *)v49 + *((_DWORD *)v49 + 151) * ((8 * *((_DWORD *)v49 + 152) + 231) & 0xFFFFFFF8) + 640);
      else
        v51 = (__int64 *)((char *)v49 + 520);
      *v51 = v127;
      v52 = v126;
      v53 = *((_QWORD *)v126 + 5);
      if ( v53 && (*(_DWORD *)(v53 + 4) & 8) != 0 )
        v54 = *(_QWORD *)(*(_QWORD *)(v53 + 56) + 184LL);
      else
        v54 = 0LL;
      v55 = *((_BYTE *)v49 + 356);
      if ( v55 )
      {
        *(_QWORD *)((char *)v49 + *((_DWORD *)v49 + 151) * ((8 * *((_DWORD *)v49 + 152) + 231) & 0xFFFFFFF8) + 656) = v54;
        v55 = *((_BYTE *)v49 + 356);
      }
      else
      {
        *((_QWORD *)v49 + 72) = v54;
      }
      if ( v55 )
        v56 = (char *)v49 + 760;
      else
        v56 = (char *)v49 + 528;
      if ( v55 )
        v57 = (_QWORD *)((char *)v49 + *((_DWORD *)v49 + 151) * ((8 * *((_DWORD *)v49 + 152) + 231) & 0xFFFFFFF8) + 624);
      else
        v57 = (_QWORD *)((char *)v49 + 512);
      *v57 = *(_QWORD *)(*((_QWORD *)v52 + 6) + 16LL);
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v45 + 2) + 16LL) + 16LL) + 2746LL) )
      {
        if ( *((_BYTE *)v49 + 356) )
          v58 = (_QWORD *)((char *)v49 + *((_DWORD *)v49 + 151) * ((8 * *((_DWORD *)v49 + 152) + 231) & 0xFFFFFFF8)
                                       + 616);
        else
          v58 = (_QWORD *)((char *)v49 + 568);
        *v58 = *((_QWORD *)v45 + 23);
      }
      if ( *((_BYTE *)v49 + 356) )
        *((_DWORD *)v49 + 160) = -1;
      v59 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v45 + 2) + 1848LL) + 2792LL);
      v60 = *((unsigned int *)v49 + 29);
      v122 = v60;
      if ( (unsigned int)v60 >= *(_DWORD *)(v59 + 96) )
      {
        WdLogSingleEntry1(1LL, 5533LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"VidPnSourceId < m_NumVidPnSources",
          5533LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v60 = v122;
        v45 = this;
        v52 = v126;
      }
      v61 = *(_QWORD *)(v59 + 128) + 4000 * v60;
      *(_WORD *)v56 = 0;
      *((_WORD *)v56 + 1) = *(_WORD *)(v61 + 1008);
      *((_WORD *)v56 + 2) = 0;
      *((_WORD *)v56 + 3) = *(_WORD *)(v61 + 1012);
      v62 = *(_QWORD *)v56;
      *((_QWORD *)v56 + 1) = *(_QWORD *)v56;
      *((_QWORD *)v56 + 2) = v62;
      v63 = a13 == D3DDDIFMT_A16B16G16R16F || a13 == D3DDDIFMT_A32B32G32R32F;
      *((_DWORD *)v56 + 6) = v63;
      *((_DWORD *)v56 + 7) &= 0xFFFFFFE7;
      *((_DWORD *)v56 + 8) = 0;
      memset(&v157[8], 0, 32);
      memset(v158, 0, sizeof(v158));
      v64 = *((_QWORD *)v52 + 4);
      if ( *((_BYTE *)v45 + 438) )
      {
        memset(v157, 0, 32);
        memset(v158, 0, sizeof(v158));
        *(_QWORD *)&v157[32] = v64;
        *(_QWORD *)v158 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v45 + 2) + 16LL) + 648LL) + 8LL)
                                                                                       + 256LL))(
                            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v45 + 2) + 16LL) + 656LL),
                            v19[3].Count,
                            *((unsigned __int8 *)v45 + 439),
                            *((unsigned int *)v45 + 100));
        *(_QWORD *)&v158[8] = v127;
        *(_WORD *)&v158[16] = v120;
        v45 = this;
      }
      else
      {
        memset(v157, 0, 24);
        *(_OWORD *)&v158[16] = 0uLL;
        *(_QWORD *)&v157[24] = v64;
        *(_QWORD *)&v157[32] = 2 * (v120 & 0x1Fu);
        *(_OWORD *)v158 = (unsigned __int64)v127;
      }
      v65 = v125;
      v125->pAllocationList = (DXGK_ALLOCATIONLIST *)v157;
      v66 = 0LL;
      if ( (v65->Flags.Value & 1) != 0
        || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v45 + 2) + 16LL) + 16LL) + 2746LL) )
      {
        v66 = (void *)*((_QWORD *)v45 + 23);
      }
      v44 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(*((_QWORD *)v45 + 2) + 16LL), v66, v65);
      v113 = v44;
      if ( v44 >= 0 )
      {
        v67 = 0;
        v68 = v121;
        v69 = v128;
        while ( v67 < v68 )
        {
          v75 = &v119[v67];
          v76 = *v75;
          if ( *((struct _KTHREAD **)*v75 + 57) != KeGetCurrentThread() )
          {
            WdLogSingleEntry1(1LL, 8255LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
              8255LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v76 = *v75;
          }
          if ( (*((_DWORD *)this + 101) & 0x10) != 0 )
          {
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v76, 0LL, 0, 0, v69, 0);
            v76 = *v75;
          }
          v77 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL) + 624LL) + 8LL);
          v78 = (*((_DWORD *)v76 + 101) & 0x10) != 0
              ? (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v77 + 432))(
                  *((_QWORD *)v76 + 36),
                  v69)
              : (*(unsigned __int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v77 + 424))(
                  *((_QWORD *)v76 + 32),
                  v69);
          v44 = v78;
          v113 = v78;
          if ( v78 < 0 )
            break;
          *(_DWORD *)v69 &= ~0x800u;
          ++v67;
        }
        v19 = (struct _EX_RUNDOWN_REF *)v117;
        v20 = v118;
        v25 = v143;
      }
      v70 = this;
      if ( v44 < 0 )
      {
        if ( *((_BYTE *)v128 + 356) )
          v111 = (char *)v128 + *((_DWORD *)v128 + 151) * ((8 * *((_DWORD *)v128 + 152) + 231) & 0xFFFFFFF8) + 648;
        else
          v111 = (char *)v128 + 504;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 648LL)
                                                                           + 8LL)
                                                               + 440LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 656LL),
          *((unsigned int *)v128 + 34),
          *(_QWORD *)v111,
          0LL);
      }
      goto LABEL_83;
    }
    v110 = DXGCONTEXT::SubmitPresentLda((DXGCONTEXT *)v36, v26, v31, v33, v39, v40, a12);
    if ( a11 )
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 648LL)
                                                                             + 8LL)
                                                                 + 512LL))(
        a11,
        0LL);
    if ( v25 )
      CRefCountedBuffer::RefCountedBufferRelease((PSLIST_ENTRY)v25);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v118);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v117);
    return v110;
  }
  if ( v32 <= 1 )
  {
    if ( v141 )
      v81 = *v141;
    else
      v81 = 0LL;
    v44 = DXGCONTEXT::SubmitPresentWithDmaBuffer(
            (DXGCONTEXT *)v36,
            v26,
            v81,
            (struct DXGALLOCATION *)v19,
            v20,
            v125,
            a11,
            a12,
            v142);
    v113 = v44;
    v70 = this;
    v71 = 0LL;
    goto LABEL_84;
  }
  if ( !v29 )
  {
    v44 = -1073741811;
    WdLogSingleEntry2(2LL, v36, -1073741811LL);
    v70 = this;
    v83 = L"0x%I64x Broadcast present only supported on the Software Flip Queue, returning 0x%I64x";
    goto LABEL_152;
  }
  BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(v36[2]);
  if ( !BroadcastPresentSyncObject )
  {
    WdLogSingleEntry2(2LL, -1073741801LL, 8307LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create present sync object. Returning 0x%I64x",
      -1073741801LL,
      8307LL,
      0LL,
      0LL,
      0LL);
    v44 = -1073741801;
    goto LABEL_146;
  }
  v139 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 2) + 1896LL));
  *(_DWORD *)a12 |= 0xC00u;
  v90 = 0;
  v44 = v113;
  v19 = (struct _EX_RUNDOWN_REF *)v117;
  v20 = v118;
  while ( v90 < v32 )
  {
    if ( v90 )
    {
      v91 = 0;
      v129 = 0;
      v130 = 0;
      if ( v124 )
      {
        v92 = &v123->BroadcastSrcAllocation[v90 - 1];
        if ( v92 + 1 < v92 || (unsigned __int64)(v92 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v91 = *v92;
        v129 = v91;
        v93 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(v137, (DXGALLOCATIONREFERENCE *)v146, v91);
        DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v117, v93);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v146);
        v19 = (struct _EX_RUNDOWN_REF *)v117;
        if ( !v117 )
        {
          v94 = v91;
          v44 = -1073741811;
          WdLogSingleEntry3(2LL, (unsigned int)v94, -1073741811LL, 8333LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid allocation handle in present: 0x%I64x. Returning 0x%I64x",
            v94,
            -1073741811LL,
            8333LL,
            0LL,
            0LL);
          v113 = -1073741811;
          v70 = this;
          v71 = v114;
          goto LABEL_84;
        }
        v95 = &v119[v90];
        v96 = *v95;
        v153 = *((_QWORD *)*v95 + 2);
        v154 = v117;
        if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v117 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v153 + 16) + 16LL) )
        {
          _mm_lfence();
          v44 = -1073741811;
          v19 = (struct _EX_RUNDOWN_REF *)v117;
          WdLogSingleEntry3(2LL, *((_QWORD *)v96 + 2), v117, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            *((_QWORD *)*v95 + 2),
            (__int64)v19,
            -1073741811LL,
            0LL,
            0LL);
          v113 = -1073741811;
          v20 = v118;
          v70 = this;
          v71 = v114;
          goto LABEL_84;
        }
        v32 = v121;
      }
      if ( v122 )
      {
        v97 = &v123->BroadcastDstAllocation[v90 - 1];
        if ( v97 + 1 < v97 || (unsigned __int64)(v97 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v130 = *v97;
        v98 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(v137, (DXGALLOCATIONREFERENCE *)v147, v130);
        DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v118, v98);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v147);
        v20 = v118;
        if ( !v118 )
        {
          v99 = v91;
          v44 = -1073741811;
          WdLogSingleEntry3(2LL, (unsigned int)v99, -1073741811LL, 8356LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid allocation handle in present: 0x%I64x. Returning 0x%I64x",
            v99,
            -1073741811LL,
            8356LL,
            0LL,
            0LL);
          v113 = -1073741811;
          v70 = this;
          v71 = v114;
          goto LABEL_84;
        }
        v100 = &v119[v90];
        v101 = *v100;
        v155 = *((_QWORD *)*v100 + 2);
        v156 = v118;
        if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v118 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v155 + 16) + 16LL) )
        {
          _mm_lfence();
          v44 = -1073741811;
          v20 = v118;
          WdLogSingleEntry3(2LL, *((_QWORD *)v101 + 2), v118, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            *((_QWORD *)*v100 + 2),
            (__int64)v20,
            -1073741811LL,
            0LL,
            0LL);
          v113 = -1073741811;
          v19 = (struct _EX_RUNDOWN_REF *)v117;
          v70 = this;
          v71 = v114;
          goto LABEL_84;
        }
        v32 = v121;
      }
    }
    if ( v141 )
      v102 = v141[v90];
    else
      v102 = 0LL;
    v44 = DXGCONTEXT::SubmitPresentWithDmaBuffer(
            v119[v90],
            v123,
            v102,
            (struct DXGALLOCATION *)v19,
            v20,
            v125,
            v114,
            v128,
            v142);
    v113 = v44;
    if ( v44 < 0 )
    {
      v44 = -1073741811;
      WdLogSingleEntry2(2LL, -1073741811LL, 8394LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to submit DMA present buffer. Returning 0x%I64x",
        -1073741811LL,
        8394LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_146;
    }
    v114 = 0LL;
    v138 = 0LL;
    *(_DWORD *)v128 &= ~0x800u;
    ++v90;
  }
  v103 = v119;
  if ( (*((_DWORD *)*v119 + 101) & 0x10) != 0 )
    goto LABEL_147;
  Pool2 = 0LL;
  P = 0LL;
  v152 = 0;
  if ( a4 <= 8 )
  {
    Pool2 = v151;
    P = v151;
    if ( a4 )
    {
      memset(v151, 0, 8LL * a4);
      Pool2 = P;
      v103 = v119;
    }
    goto LABEL_195;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a4 >= 8 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * a4, 1265072196LL, 0LL);
    P = Pool2;
    v103 = v119;
LABEL_195:
    v152 = a4;
  }
  if ( !Pool2 )
  {
    v44 = -1073741801;
    v113 = -1073741801;
    goto LABEL_147;
  }
  v105 = 1;
  v106 = v121;
  while ( 1 )
  {
    if ( v105 >= v106 )
    {
      v70 = this;
      v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                  + 16LL)
                                                                                      + 624LL)
                                                                          + 8LL)
                                                              + 640LL))(
              0LL,
              0LL,
              a4);
      v113 = v44;
      if ( v44 >= 0 )
      {
        v44 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL) + 8LL)
                                                                                              + 624LL))(
                *((_QWORD *)this + 32),
                BroadcastPresentSyncObject,
                v139);
        v113 = v44;
        v109 = P;
        if ( v44 < 0 )
        {
          if ( P == v151 || !P )
            goto LABEL_83;
LABEL_209:
          ExFreePoolWithTag(v109, 0);
          goto LABEL_83;
        }
      }
      else
      {
        v109 = P;
      }
      if ( v109 == v151 || !v109 )
        goto LABEL_83;
      goto LABEL_209;
    }
    v107 = v105;
    v108 = v103[v105];
    if ( (*((_DWORD *)v108 + 101) & 0x10) != 0 )
      break;
    *(_QWORD *)&Pool2[8 * v105++ - 8] = *((_QWORD *)v108 + 32);
    v103 = v119;
  }
  WdLogSingleEntry1(2LL, v108);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DXGCONTEXT 0x%p broadcast present mixes hardware scheduled and non-hardware scheduled contexts.",
    (__int64)v119[v107],
    0LL,
    0LL,
    0LL,
    0LL);
  v44 = -1073741811;
  v113 = -1073741811;
  if ( P != v151 && P )
    ExFreePoolWithTag(P, 0);
LABEL_147:
  v70 = this;
LABEL_83:
  v71 = v114;
LABEL_84:
  if ( v71 )
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v70 + 2) + 16LL)
                                                                                       + 648LL)
                                                                           + 8LL)
                                                               + 512LL))(
      v71,
      0LL);
  if ( v25 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v25 + 3, 0xFFFFFFFF) == 1 )
    {
      v112 = *(_QWORD *)v25;
      if ( *(_QWORD *)v25 )
      {
        ++*(_DWORD *)(v112 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v112) < *(_WORD *)(v112 + 16) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v112, (PSLIST_ENTRY)v25);
        }
        else
        {
          ++*(_DWORD *)(v112 + 32);
          (*(void (__fastcall **)(struct CRefCountedBuffer *, __int64))(v112 + 56))(v25, v112);
        }
      }
      else
      {
        ExFreePoolWithTag(v25, 0);
      }
    }
    v20 = v118;
    v19 = (struct _EX_RUNDOWN_REF *)v117;
    v44 = v113;
  }
  if ( v20 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v20 + 11);
  if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
  {
    v134 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v134) >= 0 )
    {
      v72 = v134;
      if ( v134 || (v72 = DxgkThreadObjectCreateDxgThread(), (v134 = v72) != 0LL) )
      {
        if ( *((_DWORD *)v72 + 12) )
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v72 + 12), 0LL, 0LL);
      }
    }
  }
  if ( v19 )
    ExReleaseRundownProtection(v19 + 11);
  if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
  {
    v135 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v135) >= 0 )
    {
      v73 = v135;
      if ( v135 || (v73 = DxgkThreadObjectCreateDxgThread(), (v135 = v73) != 0LL) )
      {
        if ( *((_DWORD *)v73 + 12) )
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v73 + 12), 0LL, 0LL);
      }
    }
  }
  return (unsigned int)v44;
}
