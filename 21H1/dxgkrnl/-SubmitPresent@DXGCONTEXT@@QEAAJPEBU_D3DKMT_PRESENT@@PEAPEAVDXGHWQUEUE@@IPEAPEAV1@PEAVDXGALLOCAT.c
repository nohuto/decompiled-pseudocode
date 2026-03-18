/*
 * XREFs of ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00FEEA0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FD870 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C01487FC (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C027A034 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027A91C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014980 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D9A4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F4B80 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C010183C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C0146940 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0149520 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C015DE6C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C0250B4C (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C027D538 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C027DE38 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresent(
        struct _EX_RUNDOWN_REF *this,
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
  struct _EX_RUNDOWN_REF *v14; // r12
  ULONG_PTR Count; // rax
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _KTHREAD *CurrentThread; // r15
  int CurrentProcessSessionId; // r14d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rbx
  void *v31; // rax
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int *ThreadProperty; // rbx
  ULONG_PTR v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  char v42; // al
  struct _SLIST_ENTRY *v43; // rbx
  struct _D3DKMT_PRESENT *v44; // r10
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rbx
  char v48; // r14
  int v49; // ecx
  struct _DXGKARG_PRESENT *v50; // rcx
  struct DXGCONTEXT *v51; // rcx
  unsigned int v52; // r13d
  struct DXGCONTEXT **v53; // r9
  int v54; // r8d
  __int64 v55; // rdx
  struct _D3DKMT_PRESENT_RGNS *v56; // r11
  ULONG_PTR v57; // rcx
  struct DXGALLOCATION *v58; // r15
  struct _DXGKARG_PRESENT *v59; // rax
  int v60; // ecx
  __int64 v61; // rax
  char *v62; // r8
  _QWORD *v63; // rcx
  __int64 v64; // rax
  int v65; // ecx
  char *v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  char v69; // al
  __int64 v70; // rbx
  char *v71; // rbx
  char *v72; // rdx
  char *v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // r15
  __int64 v76; // r12
  __int64 v77; // rdx
  __int64 v78; // rax
  BOOL v79; // eax
  __int64 v80; // rbx
  struct _DXGKARG_PRESENT *v81; // r8
  PVOID Ptr; // rdx
  __int64 v83; // rcx
  unsigned int v84; // ebx
  struct DXGCONTEXT **v85; // rsi
  struct _VIDMM_DMA_BUFFER *v86; // r9
  struct DXGALLOCATION *v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  struct _KTHREAD *v90; // r14
  int v91; // edi
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rbx
  void *v96; // rax
  __int64 v97; // rdi
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 *v100; // rax
  __int64 v101; // rcx
  int *v102; // rbx
  struct DXGALLOCATION *v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rcx
  struct _KTHREAD *v106; // r14
  int v107; // edi
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rbx
  void *v112; // rax
  __int64 v113; // rdi
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 *v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  int *v119; // rbx
  struct DXGCONTEXT **v121; // r15
  struct DXGCONTEXT *v122; // r10
  __int64 v123; // rdx
  int v124; // eax
  DXGALLOCATIONREFERENCE *v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // rdx
  __int64 v129; // rcx
  struct _KTHREAD *v130; // r15
  int v131; // r14d
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rbx
  void *v136; // rax
  __int64 v137; // r14
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 *v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  int *DxgThread; // rbx
  struct DXGHWQUEUE *v144; // r8
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  _QWORD *v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  int v153; // ebx
  __int64 v154; // rax
  _QWORD *v155; // rax
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rdx
  int v159; // eax
  __int64 v160; // rax
  UINT v161; // eax
  struct _DXGKARG_PRESENT *v162; // rcx
  RECT *v163; // r9
  unsigned int v164; // edx
  unsigned int MoveRectCount; // r8d
  __int64 v166; // rcx
  __int64 v167; // rax
  unsigned int v168; // r14d
  struct _D3DKMT_PRESENT *v169; // r15
  struct _VIDMM_DMA_BUFFER *v170; // r9
  __int64 v171; // rbx
  unsigned int *v172; // rdx
  DXGALLOCATIONREFERENCE *v173; // rax
  __int64 v174; // rdx
  __int64 v175; // rdx
  __int64 v176; // rcx
  _QWORD *v177; // rax
  struct DXGCONTEXT **v178; // r10
  struct DXGCONTEXT **v179; // r15
  __int64 v180; // rdx
  __int64 v181; // rcx
  _QWORD *v182; // rax
  unsigned int *v183; // rdx
  DXGALLOCATIONREFERENCE *v184; // rax
  __int64 v185; // rdx
  __int64 v186; // rdx
  __int64 v187; // rcx
  _QWORD *v188; // rax
  struct DXGCONTEXT **v189; // rbx
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // rax
  struct DXGHWQUEUE *v193; // r8
  __int64 v194; // rcx
  _QWORD *v195; // r9
  _BYTE *PoolWithTag; // r9
  __int64 i; // rdx
  struct DXGCONTEXT *v198; // r8
  struct DXGCONTEXT **v199; // rbx
  __int64 v200; // rax
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // rdx
  unsigned int v204; // edi
  __int64 v205; // rdx
  __int64 v206; // rax
  __int64 v207; // rax
  char *v208; // r8
  struct _SLIST_ENTRY *v209; // rbx
  __int64 v210; // rdi
  __int64 v211; // rax
  __int64 v212; // rax
  int v213; // ebx
  __int64 v214; // rax
  _QWORD *v215; // rax
  __int64 v216; // rax
  __int64 v217; // rax
  int v218; // ebx
  __int64 v219; // rax
  _QWORD *v220; // rax
  int v221; // [rsp+50h] [rbp-388h]
  struct _VIDMM_DMA_BUFFER *v222; // [rsp+58h] [rbp-380h]
  int v224; // [rsp+64h] [rbp-374h] BYREF
  struct DXGALLOCATION *v225; // [rsp+68h] [rbp-370h] BYREF
  struct DXGCONTEXT **v226; // [rsp+70h] [rbp-368h]
  struct DXGALLOCATION *v227[2]; // [rsp+78h] [rbp-360h] BYREF
  struct _D3DKMT_PRESENT *v228; // [rsp+88h] [rbp-350h]
  struct _DXGKARG_PRESENT *v229; // [rsp+90h] [rbp-348h]
  __int64 v230; // [rsp+98h] [rbp-340h]
  unsigned int v231; // [rsp+A0h] [rbp-338h]
  __int64 v232; // [rsp+A8h] [rbp-330h] BYREF
  int v233; // [rsp+B0h] [rbp-328h]
  unsigned int v234; // [rsp+B4h] [rbp-324h]
  unsigned int v235; // [rsp+B8h] [rbp-320h]
  struct CRefCountedBuffer *v236; // [rsp+C0h] [rbp-318h] BYREF
  struct _VIDMM_DMA_BUFFER *v237; // [rsp+C8h] [rbp-310h]
  signed __int64 v238; // [rsp+D0h] [rbp-308h]
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+D8h] [rbp-300h]
  struct DXGHWQUEUE **v240; // [rsp+E0h] [rbp-2F8h]
  struct COREDEVICEACCESS *v241; // [rsp+E8h] [rbp-2F0h]
  struct DXGALLOCATION *v242; // [rsp+F0h] [rbp-2E8h]
  PVOID v243; // [rsp+F8h] [rbp-2E0h]
  struct _EX_RUNDOWN_REF *v244; // [rsp+100h] [rbp-2D8h] BYREF
  struct _EX_RUNDOWN_REF *v245; // [rsp+108h] [rbp-2D0h] BYREF
  struct _D3DKMT_PRESENT_RGNS *v246; // [rsp+110h] [rbp-2C8h]
  struct _EX_RUNDOWN_REF *v247; // [rsp+118h] [rbp-2C0h] BYREF
  struct _EX_RUNDOWN_REF *v248[2]; // [rsp+120h] [rbp-2B8h] BYREF
  struct _EX_RUNDOWN_REF *v249; // [rsp+130h] [rbp-2A8h]
  PVOID P; // [rsp+140h] [rbp-298h]
  _BYTE v251[64]; // [rsp+148h] [rbp-290h] BYREF
  unsigned int v252; // [rsp+188h] [rbp-250h]
  __int64 v253; // [rsp+190h] [rbp-248h]
  __int64 v254; // [rsp+198h] [rbp-240h]
  __int64 v255; // [rsp+1A0h] [rbp-238h]
  __int64 v256; // [rsp+1A8h] [rbp-230h]
  __int64 v257; // [rsp+1B0h] [rbp-228h]
  __int64 v258; // [rsp+1B8h] [rbp-220h]
  __int64 v259; // [rsp+1C0h] [rbp-218h]
  __int64 v260; // [rsp+1C8h] [rbp-210h]
  __int64 v261; // [rsp+1D0h] [rbp-208h]
  __int64 v262; // [rsp+1D8h] [rbp-200h]
  __int64 v263; // [rsp+1E0h] [rbp-1F8h]
  __int64 v264; // [rsp+1E8h] [rbp-1F0h]
  _QWORD v265[12]; // [rsp+1F0h] [rbp-1E8h] BYREF
  _BYTE v266[320]; // [rsp+250h] [rbp-188h] BYREF

  v240 = a3;
  v228 = a2;
  v14 = this;
  v249 = this;
  v229 = a9;
  v248[1] = this;
  v226 = a5;
  v242 = a6;
  v235 = a7;
  v231 = a8;
  v246 = a10;
  v222 = a11;
  v237 = a11;
  v241 = a14;
  Count = this[2].Count;
  v16 = *(_QWORD *)(Count + 40);
  v230 = v16;
  v17 = *(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 168)) )
  {
    v145 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v145 + 24) = 7710LL;
    WdLogEvent5_WdAssertion(v145);
  }
  v225 = 0LL;
  v227[0] = 0LL;
  if ( a7 )
  {
    AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v16, (DXGALLOCATIONREFERENCE *)&v244, a7);
    v225 = *AllocationSafe;
    *AllocationSafe = 0LL;
    v22 = (__int64)v244;
    if ( v244 )
      ExReleaseRundownProtection(v244 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v22, v21) + 283) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v146 = WdLogNewEntry5_WdAssertion(v24, v23);
        *(_QWORD *)(v146 + 24) = 496LL;
        WdLogEvent5_WdAssertion(v146);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v24);
      CurrentProcess = PsGetCurrentProcess(v28, v27);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      if ( !CurrentProcessSessionId )
        goto LABEL_178;
      if ( (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
        goto LABEL_178;
      if ( !ProcessDxgProcess )
        goto LABEL_178;
      v31 = *(void **)(ProcessDxgProcess + 88);
      if ( !v31 || v31 == &gDxgkWin32kEngInterface )
        goto LABEL_178;
      v32 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v147 = PsGetCurrentProcess(v34, v33),
            ProcessSessionId = PsGetProcessSessionIdEx(v147),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v32 = *ThreadWin32Thread;
      }
      if ( v32 )
      {
        ThreadProperty = *(int **)(v32 + 80);
      }
      else
      {
LABEL_178:
        ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
        if ( !ThreadProperty )
          ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread();
        if ( !ThreadProperty )
          goto LABEL_23;
        ObfDereferenceObject(ThreadProperty);
      }
      if ( ThreadProperty && ThreadProperty[8] )
      {
        v150 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v36);
        v150[3] = 275LL;
        v150[4] = 38LL;
        v150[5] = ThreadProperty[8];
        v150[6] = 0LL;
        v150[7] = 0LL;
        WdLogEvent5_WdCriticalError(v150);
      }
LABEL_23:
      v16 = v230;
    }
  }
  if ( v231 )
  {
    v125 = DXGPROCESS::GetAllocationSafe(v16, (DXGALLOCATIONREFERENCE *)&v245, v231);
    v227[0] = *(struct DXGALLOCATION **)v125;
    *(_QWORD *)v125 = 0LL;
    v127 = (__int64)v245;
    if ( v245 )
      ExReleaseRundownProtection(v245 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v127, v126) + 283) )
    {
      v130 = KeGetCurrentThread();
      if ( !v130 )
      {
        v151 = WdLogNewEntry5_WdAssertion(v129, v128);
        *(_QWORD *)(v151 + 24) = 496LL;
        WdLogEvent5_WdAssertion(v151);
      }
      v131 = PsGetCurrentProcessSessionId(v129);
      v134 = PsGetCurrentProcess(v133, v132);
      v135 = PsGetProcessDxgProcess(v134);
      if ( v131 )
      {
        if ( (unsigned int)PsGetThreadSessionId(v130) == v131 )
        {
          if ( v135 )
          {
            v136 = *(void **)(v135 + 88);
            if ( v136 )
            {
              if ( v136 != &gDxgkWin32kEngInterface )
              {
                v137 = 0LL;
                if ( !(unsigned __int8)KeIsAttachedProcess()
                  || (v152 = PsGetCurrentProcess(v139, v138),
                      v153 = PsGetProcessSessionIdEx(v152),
                      v154 = PsGetCurrentThreadProcess(),
                      v153 == (unsigned int)PsGetProcessSessionIdEx(v154)) )
                {
                  v140 = (__int64 *)PsGetThreadWin32Thread(v130);
                  if ( v140 )
                    v137 = *v140;
                }
                if ( v137 )
                {
                  DxgThread = *(int **)(v137 + 80);
LABEL_158:
                  if ( DxgThread && DxgThread[8] )
                  {
                    v155 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v142, v141);
                    v155[3] = 275LL;
                    v155[4] = 38LL;
                    v155[5] = DxgThread[8];
                    v155[6] = 0LL;
                    v155[7] = 0LL;
                    WdLogEvent5_WdCriticalError(v155);
                  }
                  goto LABEL_25;
                }
              }
            }
          }
        }
      }
      DxgThread = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
      if ( !DxgThread )
        DxgThread = (int *)DxgkThreadObjectCreateDxgThread();
      if ( DxgThread )
      {
        ObfDereferenceObject(DxgThread);
        goto LABEL_158;
      }
    }
  }
LABEL_25:
  v39 = v14[2].Count;
  v40 = *(_QWORD *)(v39 + 1848);
  if ( v40 != *(_QWORD *)(*(_QWORD *)(v39 + 16) + 16LL)
    || ((v41 = *(_QWORD *)(v230 + 88)) != 0
     && (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v41 + 224))(0LL, 0LL, 0LL)
      ? (v42 = 1)
      : (v42 = 0),
        v42) )
  {
    *((_DWORD *)a12 + 29) = 0;
  }
  v43 = 0LL;
  v236 = 0LL;
  v44 = v228;
  if ( v228 )
  {
    v45 = ReadPresentPrivateDriverData(
            *(struct DXGADAPTER **)(*(_QWORD *)(v14[2].Count + 16) + 16LL),
            v228->PrivateDriverDataSize,
            v228->pPrivateDriverData,
            &v236);
    v47 = v45;
    if ( v45 < 0 )
    {
      v156 = WdLogNewEntry5_WdError(v46, v40);
      *(_QWORD *)(v156 + 24) = v47;
      WdLogEvent5_WdError(v156);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v227, v157);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v225, v158);
      return (unsigned int)v47;
    }
    v43 = (struct _SLIST_ENTRY *)v236;
    v44 = v228;
  }
  v243 = v43;
  v48 = 0;
  v49 = *(_DWORD *)(v17 + 2304);
  if ( (v49 >= 0x2000 || *(_BYTE *)(v17 + 2604)) && *(_DWORD *)(v17 + 1848) >= 0x5007u && v44 )
  {
    v48 = 1;
    if ( v43 )
    {
      v50 = v229;
      v229->PrivateDriverDataSize = v44->PrivateDriverDataSize;
      v50->pPrivateDriverData = &v43[1];
    }
    *((_QWORD *)a12 + 96) = v43;
    goto LABEL_39;
  }
  if ( v49 < 0x2000 && !*(_BYTE *)(v17 + 2604) )
  {
LABEL_39:
    v51 = (struct DXGCONTEXT *)a4;
    goto LABEL_40;
  }
  v51 = (struct DXGCONTEXT *)a4;
  if ( a4 )
    goto LABEL_204;
LABEL_40:
  v52 = (_DWORD)v51 + 1;
  v53 = v226;
  v54 = *((_DWORD *)*v226 + 103);
  v55 = 0LL;
  while ( (unsigned int)v55 < (unsigned int)v51 )
  {
    v55 = (unsigned int)(v55 + 1);
    v51 = v226[v55];
    v159 = *((_DWORD *)v51 + 103);
    if ( (v159 & v54) != 0 )
      goto LABEL_208;
    v54 |= v159;
    v51 = (struct DXGCONTEXT *)a4;
  }
  *((_DWORD *)a12 + 34) = v54;
  v56 = v246;
  if ( v246 )
  {
    v57 = v14[2].Count;
    v55 = *(_QWORD *)(*(_QWORD *)(v57 + 16) + 16LL);
    if ( (*(_DWORD *)(v55 + 348) & 0x10) != 0 && v55 == *(_QWORD *)(v57 + 1848) )
    {
      v161 = v246->MoveRectCount + v246->DirtyRectCount;
      if ( v161 <= 0x14 )
      {
        v162 = v229;
        v229->SubRectCnt = v161;
        v162->pDstSubRects = (const RECT *)v266;
        v163 = (RECT *)v266;
        v164 = 0;
        MoveRectCount = v56->MoveRectCount;
        while ( v164 < MoveRectCount )
          *v163++ = v56->pMoveRects[v164++].DestRect;
        memmove(v163, v56->pDirtyRects, 16LL * v56->DirtyRectCount);
        v44 = v228;
        v53 = v226;
      }
    }
    v51 = (struct DXGCONTEXT *)a4;
  }
  if ( ((*((_DWORD *)a12 + 30) - 3) & 0xFFFFFFFD) != 0 )
  {
    if ( v52 <= 1 )
    {
      if ( v240 )
        v144 = *v240;
      else
        v144 = 0LL;
      v221 = DXGCONTEXT::SubmitPresentWithDmaBuffer((DXGCONTEXT *)v14, v44, v144, v225, v227[0], v229, a11, a12, v241);
      v86 = 0LL;
LABEL_94:
      if ( v86 )
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[2].Count + 16)
                                                                                           + 640LL)
                                                                               + 8LL)
                                                                   + 504LL))(
          v86,
          0LL);
      if ( v243 && _InterlockedExchangeAdd((volatile signed __int32 *)v243 + 3, 0xFFFFFFFF) == 1 )
      {
        v209 = (struct _SLIST_ENTRY *)v243;
        v210 = *(_QWORD *)v243;
        if ( *(_QWORD *)v243 )
        {
          ++*(_DWORD *)(v210 + 28);
          if ( ExQueryDepthSList((PSLIST_HEADER)v210) < *(_WORD *)(v210 + 16) )
          {
            ExpInterlockedPushEntrySList((PSLIST_HEADER)v210, v209);
          }
          else
          {
            ++*(_DWORD *)(v210 + 32);
            (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v210 + 56))(v209, v210);
          }
        }
        else
        {
          ExFreePoolWithTag(v243, 0);
        }
      }
      v87 = v227[0];
      if ( v227[0] )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v227[0] + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v87, v40) + 283) )
      {
        v90 = KeGetCurrentThread();
        if ( !v90 )
        {
          v211 = WdLogNewEntry5_WdAssertion(v89, v88);
          *(_QWORD *)(v211 + 24) = 496LL;
          WdLogEvent5_WdAssertion(v211);
        }
        v91 = PsGetCurrentProcessSessionId(v89);
        v94 = PsGetCurrentProcess(v93, v92);
        v95 = PsGetProcessDxgProcess(v94);
        if ( v91 )
        {
          if ( (unsigned int)PsGetThreadSessionId(v90) == v91 )
          {
            if ( v95 )
            {
              v96 = *(void **)(v95 + 88);
              if ( v96 )
              {
                if ( v96 != &gDxgkWin32kEngInterface )
                {
                  v97 = 0LL;
                  if ( !(unsigned __int8)KeIsAttachedProcess()
                    || (v212 = PsGetCurrentProcess(v99, v98),
                        v213 = PsGetProcessSessionIdEx(v212),
                        v214 = PsGetCurrentThreadProcess(),
                        v213 == (unsigned int)PsGetProcessSessionIdEx(v214)) )
                  {
                    v100 = (__int64 *)PsGetThreadWin32Thread(v90);
                    if ( v100 )
                      v97 = *v100;
                  }
                  if ( v97 )
                  {
                    v102 = *(int **)(v97 + 80);
LABEL_113:
                    if ( v102 && v102[8] )
                    {
                      v215 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v101, v88);
                      v215[3] = 275LL;
                      v215[4] = 38LL;
                      v215[5] = v102[8];
                      v215[6] = 0LL;
                      v215[7] = 0LL;
                      WdLogEvent5_WdCriticalError(v215);
                    }
                    goto LABEL_116;
                  }
                }
              }
            }
          }
        }
        v102 = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
        if ( !v102 )
          v102 = (int *)DxgkThreadObjectCreateDxgThread();
        if ( v102 )
        {
          ObfDereferenceObject(v102);
          goto LABEL_113;
        }
      }
LABEL_116:
      v103 = v225;
      if ( v225 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v225 + 11);
      if ( !*((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v103, v88) + 283) )
        return (unsigned int)v221;
      v106 = KeGetCurrentThread();
      if ( !v106 )
      {
        v216 = WdLogNewEntry5_WdAssertion(v105, v104);
        *(_QWORD *)(v216 + 24) = 496LL;
        WdLogEvent5_WdAssertion(v216);
      }
      v107 = PsGetCurrentProcessSessionId(v105);
      v110 = PsGetCurrentProcess(v109, v108);
      v111 = PsGetProcessDxgProcess(v110);
      if ( !v107 )
        goto LABEL_191;
      if ( (unsigned int)PsGetThreadSessionId(v106) != v107 )
        goto LABEL_191;
      if ( !v111 )
        goto LABEL_191;
      v112 = *(void **)(v111 + 88);
      if ( !v112 || v112 == &gDxgkWin32kEngInterface )
        goto LABEL_191;
      v113 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v217 = PsGetCurrentProcess(v115, v114),
            v218 = PsGetProcessSessionIdEx(v217),
            v219 = PsGetCurrentThreadProcess(),
            v218 == (unsigned int)PsGetProcessSessionIdEx(v219)) )
      {
        v116 = (__int64 *)PsGetThreadWin32Thread(v106);
        if ( v116 )
          v113 = *v116;
      }
      if ( v113 )
      {
        v119 = *(int **)(v113 + 80);
      }
      else
      {
LABEL_191:
        v119 = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
        if ( !v119 )
          v119 = (int *)DxgkThreadObjectCreateDxgThread();
        if ( !v119 )
          return (unsigned int)v221;
        ObfDereferenceObject(v119);
      }
      if ( v119 )
      {
        if ( v119[8] )
        {
          v220 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v118, v117);
          v220[3] = 275LL;
          v220[4] = 38LL;
          v220[5] = v119[8];
          v220[6] = 0LL;
          v220[7] = 0LL;
          WdLogEvent5_WdCriticalError(v220);
        }
      }
      return (unsigned int)v221;
    }
    if ( v48 )
    {
      BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject((DXGDEVICE *)v14[2].Count);
      if ( !BroadcastPresentSyncObject )
      {
        v167 = WdLogNewEntry5_WdError(v166, v40);
        *(_QWORD *)(v167 + 24) = -1073741801LL;
        *(_QWORD *)(v167 + 32) = 8093LL;
        WdLogEvent5_WdError(v167);
        v221 = -1073741801;
        goto LABEL_93;
      }
      v238 = _InterlockedIncrement64((volatile signed __int64 *)(v14[2].Count + 1896));
      *(_DWORD *)a12 |= 0xC00u;
      v168 = 0;
      v169 = v228;
      v170 = a11;
      while ( v168 < v52 )
      {
        if ( v168 )
        {
          LODWORD(v171) = 0;
          v233 = 0;
          v234 = 0;
          if ( v235 )
          {
            v172 = &v169->BroadcastSrcAllocation[v168 - 1];
            if ( v172 + 1 < v172 || (unsigned __int64)(v172 + 1) > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            v171 = *v172;
            v233 = v171;
            v173 = DXGPROCESS::GetAllocationSafe(v230, (DXGALLOCATIONREFERENCE *)&v247, v171);
            DXGALLOCATIONREFERENCE::MoveAssign(&v225, v173);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v247, v174);
            if ( !v225 )
            {
              v177 = (_QWORD *)WdLogNewEntry5_WdError(v176, v175);
              v177[3] = v171;
              v177[4] = -1073741811LL;
              v177[5] = 8119LL;
              WdLogEvent5_WdError(v177);
              v221 = -1073741811;
              v86 = v222;
              goto LABEL_94;
            }
            v178 = v226;
            v179 = &v226[v168];
            v253 = *((_QWORD *)*v179 + 2);
            v254 = *(_QWORD *)(*((_QWORD *)v225 + 1) + 16LL);
            v180 = *(_QWORD *)(v254 + 16);
            v255 = v180;
            v256 = *(_QWORD *)(v253 + 16);
            v181 = *(_QWORD *)(v256 + 16);
            v257 = v181;
            if ( v180 != v181 )
            {
              _mm_lfence();
              v182 = (_QWORD *)WdLogNewEntry5_WdError(v181, v180);
              v258 = *((_QWORD *)*v179 + 2);
              v182[3] = v258;
              v182[4] = v225;
              v182[5] = -1073741811LL;
              WdLogEvent5_WdError(v182);
              v221 = -1073741811;
              v86 = v222;
              goto LABEL_94;
            }
            v169 = v228;
            v170 = v222;
          }
          else
          {
            v178 = v226;
          }
          if ( v231 )
          {
            v183 = &v169->BroadcastDstAllocation[v168 - 1];
            if ( v183 + 1 < v183 || (unsigned __int64)(v183 + 1) > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            v234 = *v183;
            v184 = DXGPROCESS::GetAllocationSafe(v230, (DXGALLOCATIONREFERENCE *)v248, v234);
            DXGALLOCATIONREFERENCE::MoveAssign(v227, v184);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v248, v185);
            if ( !v227[0] )
            {
              v188 = (_QWORD *)WdLogNewEntry5_WdError(v187, v186);
              v188[3] = (unsigned int)v171;
              v188[4] = -1073741811LL;
              v188[5] = 8142LL;
              WdLogEvent5_WdError(v188);
              v221 = -1073741811;
              v86 = v222;
              goto LABEL_94;
            }
            v178 = v226;
            v189 = &v226[v168];
            v259 = *((_QWORD *)*v189 + 2);
            v260 = *(_QWORD *)(*((_QWORD *)v227[0] + 1) + 16LL);
            v190 = *(_QWORD *)(v260 + 16);
            v261 = v190;
            v262 = *(_QWORD *)(v259 + 16);
            v191 = *(_QWORD *)(v262 + 16);
            v263 = v191;
            if ( v190 != v191 )
            {
              _mm_lfence();
              v192 = WdLogNewEntry5_WdError(v191, v190);
              v264 = *((_QWORD *)*v189 + 2);
              *(_QWORD *)(v192 + 24) = v264;
              *(struct DXGALLOCATION **)(v192 + 32) = v227[0];
              *(_QWORD *)(v192 + 40) = -1073741811LL;
              WdLogEvent5_WdError(v192);
              v221 = -1073741811;
              v86 = v222;
              goto LABEL_94;
            }
            v170 = v222;
          }
        }
        else
        {
          v178 = v226;
        }
        if ( v240 )
          v193 = v240[v168];
        else
          v193 = 0LL;
        if ( (int)DXGCONTEXT::SubmitPresentWithDmaBuffer(v178[v168], v169, v193, v225, v227[0], v229, v170, a12, v241) < 0 )
        {
          v160 = WdLogNewEntry5_WdError(v194, v40);
          *(_QWORD *)(v160 + 24) = -1073741811LL;
          *(_QWORD *)(v160 + 32) = 8180LL;
          goto LABEL_210;
        }
        v170 = 0LL;
        v222 = 0LL;
        v237 = 0LL;
        *(_DWORD *)a12 &= ~0x800u;
        ++v168;
      }
      v195 = 0LL;
      P = 0LL;
      v252 = 0;
      if ( a4 <= 8 )
      {
        PoolWithTag = v251;
        P = v251;
      }
      else
      {
        v40 = 0xFFFFFFFFFFFFFFFFuLL % a4;
        if ( 0xFFFFFFFFFFFFFFFFuLL / a4 < 8 )
          goto LABEL_255;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a4, 0x4B677844u);
        P = PoolWithTag;
      }
      v252 = a4;
      if ( !PoolWithTag )
        goto LABEL_260;
      memset(PoolWithTag, 0, 8LL * a4);
      v195 = P;
LABEL_255:
      if ( v195 )
      {
        for ( i = 1LL; (unsigned int)i < v52; i = (unsigned int)(i + 1) )
        {
          v198 = v226[(unsigned int)i];
          v199 = &v226[(unsigned int)i];
          if ( (*((_DWORD *)v198 + 105) & 0x10) != 0 )
          {
            v200 = WdLogNewEntry5_WdError(v226, i);
            *(_QWORD *)(v200 + 24) = *v199;
            WdLogEvent5_WdError(v200);
            v221 = -1073741811;
            goto LABEL_262;
          }
          v195[(unsigned int)(i - 1)] = *((_QWORD *)v198 + 34);
        }
        v221 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[2].Count + 16)
                                                                                         + 616LL)
                                                                             + 8LL)
                                                                 + 640LL))(
                 0LL,
                 0LL,
                 a4);
        if ( v221 >= 0 )
          v221 = (*(__int64 (__fastcall **)(ULONG_PTR, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[2].Count + 16) + 616LL) + 8LL) + 624LL))(
                   v14[34].Count,
                   BroadcastPresentSyncObject,
                   v238);
LABEL_262:
        if ( P != v251 && P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_93;
      }
LABEL_260:
      v221 = -1073741801;
      goto LABEL_93;
    }
LABEL_208:
    v160 = WdLogNewEntry5_WdError(v51, v55);
    *(_QWORD *)(v160 + 24) = v14;
    *(_QWORD *)(v160 + 32) = -1073741811LL;
LABEL_210:
    WdLogEvent5_WdError(v160);
LABEL_204:
    v221 = -1073741811;
LABEL_93:
    v86 = v222;
    goto LABEL_94;
  }
  v58 = v242;
  if ( !v242 )
  {
    v201 = WdLogNewEntry5_WdAssertion(v51, v55);
    *(_QWORD *)(v201 + 24) = 7857LL;
    WdLogEvent5_WdAssertion(v201);
    v44 = v228;
    v51 = (struct DXGCONTEXT *)a4;
    v53 = v226;
  }
  v59 = v229;
  if ( v229->pDmaBuffer )
  {
    v202 = WdLogNewEntry5_WdAssertion(v51, v55);
    *(_QWORD *)(v202 + 24) = 7858LL;
    WdLogEvent5_WdAssertion(v202);
    v44 = v228;
    LODWORD(v51) = a4;
    v59 = v229;
    v53 = v226;
  }
  if ( !(_DWORD)v51 || !v48 )
  {
    if ( v52 > 1 )
      v60 = 3072;
    else
      v60 = 2048;
    *(_DWORD *)a12 = v60 | *(_DWORD *)a12 & 0xFFFFFBFF;
    *((_DWORD *)a12 + 35) = v52;
    v61 = 568LL;
    if ( !*((_BYTE *)a12 + 348) )
      v61 = 480LL;
    *(_DWORD *)((char *)a12 + v61) = *(_DWORD *)((_BYTE *)a12 + v61) & 0xFFFFFC00 | 1;
    if ( *((_BYTE *)a12 + 348) )
      v62 = (char *)a12 + *((_DWORD *)a12 + 143) * ((8 * *((_DWORD *)a12 + 144) + 199) & 0xFFFFFFF8) + 616;
    else
      v62 = (char *)a12 + 488;
    v221 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[2].Count + 16)
                                                                                     + 640LL)
                                                                         + 8LL)
                                                             + 416LL))(
             *(_QWORD *)(v14[2].Count + 760),
             *((_QWORD *)v58 + 3),
             v62);
    if ( v221 >= 0 )
    {
      v224 = 0;
      v232 = 0LL;
      v63 = *(_QWORD **)(v14[2].Count + 16);
      v64 = v63[2];
      if ( *(int *)(v64 + 2304) >= 0x2000 || *(_BYTE *)(v64 + 2604) )
      {
        v65 = 0xFFFF;
        v224 = 0xFFFF;
        v232 = -1LL;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(v63[80] + 8LL) + 224LL))(
          v63[81],
          *(_QWORD *)(*((_QWORD *)v58 + 6) + 8LL),
          &v224,
          &v232,
          0LL);
        v65 = v224;
      }
      if ( *((_BYTE *)a12 + 348) )
        *(_WORD *)((char *)a12 + *((_DWORD *)a12 + 143) * ((8 * *((_DWORD *)a12 + 144) + 199) & 0xFFFFFFF8) + 600) = v65;
      else
        *((_DWORD *)a12 + 135) ^= (*((_DWORD *)a12 + 135) ^ (v65 << 17)) & 0x3E0000;
      if ( *((_BYTE *)a12 + 348) )
        v66 = (char *)a12 + *((_DWORD *)a12 + 143) * ((8 * *((_DWORD *)a12 + 144) + 199) & 0xFFFFFFF8) + 608;
      else
        v66 = (char *)a12 + 504;
      *(_QWORD *)v66 = v232;
      v67 = *((_QWORD *)v58 + 5);
      if ( v67 && (*(_DWORD *)(v67 + 4) & 8) != 0 )
        v68 = *(_QWORD *)(*(_QWORD *)(v67 + 56) + 184LL);
      else
        v68 = 0LL;
      if ( *((_BYTE *)a12 + 348) )
        *(_QWORD *)((char *)a12 + *((_DWORD *)a12 + 143) * ((8 * *((_DWORD *)a12 + 144) + 199) & 0xFFFFFFF8) + 624) = v68;
      else
        *((_QWORD *)a12 + 70) = v68;
      v69 = *((_BYTE *)a12 + 348);
      v70 = 728LL;
      if ( !v69 )
        v70 = 512LL;
      v71 = (char *)a12 + v70;
      if ( v69 )
        v72 = (char *)a12 + *((_DWORD *)a12 + 143) * ((8 * *((_DWORD *)a12 + 144) + 199) & 0xFFFFFFF8) + 592;
      else
        v72 = (char *)a12 + 496;
      *(_QWORD *)v72 = *(_QWORD *)(*((_QWORD *)v58 + 6) + 16LL);
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14[2].Count + 16) + 16LL) + 2626LL) )
      {
        v72 = (char *)v14[23].Count;
        if ( *((_BYTE *)a12 + 348) )
          v73 = (char *)a12 + *((_DWORD *)a12 + 143) * ((8 * *((_DWORD *)a12 + 144) + 199) & 0xFFFFFFF8) + 584;
        else
          v73 = (char *)a12 + 552;
        *(_QWORD *)v73 = v72;
      }
      if ( *((_BYTE *)a12 + 348) )
        *((_DWORD *)a12 + 152) = -1;
      v74 = *(_QWORD *)(v14[2].Count + 1848);
      v75 = *(_QWORD *)(v74 + 2672);
      v76 = *((unsigned int *)a12 + 29);
      if ( (unsigned int)v76 >= *(_DWORD *)(v75 + 80) )
      {
        v206 = WdLogNewEntry5_WdAssertion(v74, v72);
        *(_QWORD *)(v206 + 24) = 5505LL;
        WdLogEvent5_WdAssertion(v206);
      }
      v77 = *(_QWORD *)(v75 + 112) + 3968 * v76;
      *(_WORD *)v71 = 0;
      *((_WORD *)v71 + 1) = *(_WORD *)(v77 + 1012);
      *((_WORD *)v71 + 2) = 0;
      *((_WORD *)v71 + 3) = *(_WORD *)(v77 + 1016);
      v78 = *(_QWORD *)v71;
      *((_QWORD *)v71 + 1) = *(_QWORD *)v71;
      *((_QWORD *)v71 + 2) = v78;
      v79 = a13 == D3DDDIFMT_A16B16G16R16F || a13 == D3DDDIFMT_A32B32G32R32F;
      *((_DWORD *)v71 + 6) = v79;
      *((_DWORD *)v71 + 7) &= 0xFFFFFFE7;
      *((_DWORD *)v71 + 8) = 0;
      memset(&v265[1], 0, 0x58uLL);
      v80 = *((_QWORD *)v242 + 4);
      v14 = v249;
      if ( BYTE6(v249[56].Ptr) )
      {
        memset(v265, 0, sizeof(v265));
        v265[4] = v80;
        v265[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v249[2].Count + 16) + 640LL)
                                                                                        + 8LL)
                                                                            + 256LL))(
                    *(_QWORD *)(*(_QWORD *)(v249[2].Count + 16) + 648LL),
                    *((_QWORD *)v225 + 3),
                    HIBYTE(v249[56].Ptr),
                    LODWORD(v249[52].Count));
        v265[6] = v232;
        LOWORD(v265[7]) = v224;
      }
      else
      {
        memset(v265, 0, 24);
        memset(&v265[6], 0, 24);
        v265[3] = v80;
        v265[4] = 2 * (v224 & 0x1Fu);
        v265[5] = v232;
      }
      v81 = v229;
      v229->pAllocationList = (DXGK_ALLOCATIONLIST *)v265;
      Ptr = 0LL;
      if ( (v81->Flags.Value & 1) != 0 || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14[2].Count + 16) + 16LL) + 2626LL) )
        Ptr = v14[23].Ptr;
      v221 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(v14[2].Count + 16), Ptr, v81);
      if ( v221 >= 0 )
      {
        v84 = 0;
        v85 = v226;
        while ( v84 < v52 )
        {
          v121 = &v85[v84];
          v122 = *v121;
          if ( *((struct _KTHREAD **)*v121 + 59) != KeGetCurrentThread() )
          {
            v207 = WdLogNewEntry5_WdAssertion(v83, v40);
            *(_QWORD *)(v207 + 24) = 8041LL;
            WdLogEvent5_WdAssertion(v207);
            v122 = *v121;
          }
          if ( (HIDWORD(v14[52].Ptr) & 0x10) != 0 )
          {
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v122, 0LL, 0, 0, a12, 0);
            v122 = *v121;
          }
          v123 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v122 + 2) + 16LL) + 616LL) + 8LL);
          v124 = (*((_DWORD *)v122 + 105) & 0x10) != 0
               ? (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v123 + 432))(
                   *((_QWORD *)v122 + 38),
                   a12)
               : (*(unsigned __int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v123 + 424))(
                   *((_QWORD *)v122 + 34),
                   a12);
          v221 = v124;
          if ( v124 < 0 )
            break;
          *(_DWORD *)a12 &= ~0x800u;
          ++v84;
        }
      }
      if ( v221 < 0 )
      {
        if ( *((_BYTE *)a12 + 348) )
          v208 = (char *)a12 + *((_DWORD *)a12 + 143) * ((8 * *((_DWORD *)a12 + 144) + 199) & 0xFFFFFFF8) + 616;
        else
          v208 = (char *)a12 + 488;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[2].Count + 16)
                                                                                       + 640LL)
                                                                           + 8LL)
                                                               + 432LL))(
          *(_QWORD *)(*(_QWORD *)(v14[2].Count + 16) + 648LL),
          *((unsigned int *)a12 + 34),
          *(_QWORD *)v208,
          0LL);
      }
    }
    goto LABEL_93;
  }
  v204 = DXGCONTEXT::SubmitPresentLda((DXGCONTEXT *)v14, v44, (unsigned int)v51, v53, v58, v59, a12);
  if ( a11 )
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[2].Count + 16)
                                                                                       + 640LL)
                                                                           + 8LL)
                                                               + 504LL))(
      a11,
      0LL);
  if ( v43 )
    CRefCountedBuffer::RefCountedBufferRelease(v43);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v227, v203);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v225, v205);
  return v204;
}
