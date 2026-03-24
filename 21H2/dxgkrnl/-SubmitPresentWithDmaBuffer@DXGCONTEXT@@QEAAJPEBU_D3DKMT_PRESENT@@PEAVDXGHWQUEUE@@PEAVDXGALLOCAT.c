/*
 * XREFs of ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EE4C0
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00FF5D0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003ED0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003F90 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004030 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007514 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     TraceDxgkPatchLocationList @ 0x1C0044CA8 (TraceDxgkPatchLocationList.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01165B0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C015BF70 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0171324 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C017217C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C021C6C0 (-DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x1C021F7D4 (-DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentWithDmaBuffer(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        struct DXGHWQUEUE *a3,
        struct DXGALLOCATION *a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct _VIDMM_DMA_BUFFER *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct COREDEVICEACCESS *a9)
{
  struct _VIDMM_DMA_BUFFER *v9; // rdi
  unsigned __int8 v10; // si
  struct COREDEVICEACCESS *v11; // rdx
  struct DXGALLOCATION *v13; // rcx
  char v14; // r14
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF Value; // eax
  struct _VIDMM_DMA_BUFFER *v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // r11
  char *v22; // r10
  D3DGPU_VIRTUAL_ADDRESS *v23; // r8
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r13
  char v29; // si
  void *v30; // rdx
  UINT v31; // ecx
  UINT v32; // eax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r8
  struct DXGALLOCATION *v36; // r11
  __int64 v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  UINT v43; // eax
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF v44; // eax
  __int64 v45; // rdx
  __int64 v46; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v49; // rdx
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned __int8 CurrentIrql; // r13
  struct DXGTHREAD *ThreadProperty; // rdi
  struct _KTHREAD *CurrentThread; // r14
  int CurrentProcessSessionId; // edi
  __int64 v62; // rax
  __int64 v63; // rsi
  void *v64; // rax
  __int64 ThreadWin32Thread; // rax
  int v66; // esi
  __int64 v67; // r14
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  _QWORD *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 DmaSize; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  struct DXGHWQUEUE *v82; // rdi
  __int64 v83; // rdx
  __int64 v84; // rcx
  unsigned int v85; // eax
  __int64 v86; // rdx
  void *pDmaBuffer; // rsi
  __int64 v88; // rcx
  int v89; // eax
  char *v90; // rcx
  unsigned int v91; // esi
  int v92; // r14d
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // rdx
  __int64 v97; // rdi
  int v98; // eax
  __int64 v99; // rcx
  char *v100; // rcx
  __int64 v101; // rsi
  unsigned int *v102; // rsi
  char *v103; // r14
  __int64 v104; // rax
  int v105; // eax
  int v106; // edi
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rdi
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rcx
  void *v121; // rdx
  int v122; // eax
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // rax
  __int64 v126; // rdx
  struct DXGTHREAD *Current; // rax
  __int64 v128; // rax
  int v129; // r9d
  __int64 v130; // rax
  __int64 v131; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  _QWORD *v134; // rax
  unsigned __int8 v135; // cl
  _QWORD *v136; // rax
  __int64 v137; // rax
  _QWORD *v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v143; // rdx
  UINT64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rax
  void *v147; // rdx
  int v148; // eax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // rax
  struct DXGALLOCATION *v159; // rdi
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // rax
  char *v165; // r9
  char *v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rcx
  char *v169; // r8
  __int64 v170; // rax
  struct DXGHWQUEUE *v171; // rax
  __int64 v172; // rax
  _QWORD *v173; // rax
  __int64 v174; // rax
  _QWORD *v175; // rax
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rdi
  char *v180; // rsi
  __int64 v181; // r8
  __int64 v182; // rax
  __int64 v183; // [rsp+20h] [rbp-E0h]
  char v184; // [rsp+60h] [rbp-A0h]
  char v185; // [rsp+61h] [rbp-9Fh]
  bool v186; // [rsp+62h] [rbp-9Eh]
  struct _VIDMM_DMA_BUFFER *v187; // [rsp+68h] [rbp-98h] BYREF
  int v188; // [rsp+74h] [rbp-8Ch] BYREF
  struct DXGALLOCATION *v189; // [rsp+78h] [rbp-88h]
  char *v190; // [rsp+80h] [rbp-80h] BYREF
  UINT v191; // [rsp+88h] [rbp-78h] BYREF
  int v192; // [rsp+8Ch] [rbp-74h] BYREF
  struct DXGALLOCATION *v193; // [rsp+90h] [rbp-70h]
  D3DGPU_VIRTUAL_ADDRESS v194; // [rsp+98h] [rbp-68h] BYREF
  struct DXGHWQUEUE *v195; // [rsp+A0h] [rbp-60h]
  __int64 v196; // [rsp+A8h] [rbp-58h]
  LARGE_INTEGER v197; // [rsp+B0h] [rbp-50h] BYREF
  struct COREDEVICEACCESS *v198; // [rsp+B8h] [rbp-48h]
  __int64 v199; // [rsp+C8h] [rbp-38h]
  int v200; // [rsp+D0h] [rbp-30h]
  int v201; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v202; // [rsp+E0h] [rbp-20h]
  char v203; // [rsp+E8h] [rbp-18h]
  __int64 v204; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v205; // [rsp+F8h] [rbp-8h]
  __int64 v206; // [rsp+100h] [rbp+0h]
  _BYTE v207[24]; // [rsp+108h] [rbp+8h] BYREF
  _DXGKARG_SIGNALMONITOREDFENCE v208; // [rsp+120h] [rbp+20h] BYREF
  struct _DXGKARG_SIGNALMONITOREDFENCE v209; // [rsp+170h] [rbp+70h] BYREF
  char v210[8]; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1C8h] [rbp+C8h] BYREF
  int v212; // [rsp+1F8h] [rbp+F8h] BYREF
  int v213; // [rsp+1FCh] [rbp+FCh]
  int v214; // [rsp+200h] [rbp+100h]
  int v215; // [rsp+204h] [rbp+104h]
  int v216; // [rsp+208h] [rbp+108h]
  __int64 v217; // [rsp+20Ch] [rbp+10Ch] BYREF
  int v218; // [rsp+214h] [rbp+114h]
  struct DXGALLOCATION *v219; // [rsp+218h] [rbp+118h]
  struct DXGALLOCATION *v220; // [rsp+220h] [rbp+120h]
  _QWORD v221[12]; // [rsp+230h] [rbp+130h] BYREF

  v9 = a7;
  v10 = 1;
  v11 = a9;
  v13 = a5;
  v14 = 1;
  Value = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)a6->Flags.Value;
  v189 = a4;
  v195 = a3;
  v193 = a5;
  v187 = a7;
  v198 = a9;
  v184 = 0;
  v190 = 0LL;
  v185 = 0;
  v186 = 1;
  a6->MultipassOffset = 0;
  if ( (*(_BYTE *)&Value & 4) != 0 && !a4 )
  {
    v116 = WdLogNewEntry5_WdError(a5, a9);
    *(_QWORD *)(v116 + 24) = 8655LL;
LABEL_126:
    WdLogEvent5_WdError(v116);
    v29 = 0;
    LODWORD(v28) = -1073741823;
    goto LABEL_232;
  }
  if ( (*((_DWORD *)this + 105) & 0x10) != 0 && !a3 )
  {
    v116 = WdLogNewEntry5_WdError(a5, a9);
    *(_QWORD *)(v116 + 24) = 8665LL;
    goto LABEL_126;
  }
  v16 = a7;
  while ( 1 )
  {
    if ( !v16 )
    {
      LODWORD(v28) = DXGCONTEXT::AcquireDmaBuffer(this, &v187, v11, 0);
      if ( (int)v28 < 0 )
      {
        v172 = WdLogNewEntry5_WdError(v118, v117);
        *(_QWORD *)(v172 + 24) = this;
        WdLogEvent5_WdError(v172);
LABEL_231:
        v29 = 0;
        v184 = 0;
        goto LABEL_232;
      }
      v9 = v187;
      if ( !v187 )
      {
        v119 = WdLogNewEntry5_WdAssertion(v118, v117);
        *(_QWORD *)(v119 + 24) = 8685LL;
        WdLogEvent5_WdAssertion(v119);
        v9 = v187;
      }
      a4 = v189;
      v13 = v193;
    }
    v213 &= 2u;
    v212 = 0;
    if ( a4 )
      v17 = *((_DWORD *)a4 + 4);
    else
      v17 = 0;
    v215 &= 2u;
    v214 = v17;
    if ( v13 )
      v18 = *((_DWORD *)v13 + 4);
    else
      v18 = 0;
    v216 = v18;
    v218 = 0;
    v219 = a4;
    v217 = v217 & 2 | 1;
    v19 = *((_QWORD *)this + 2);
    v220 = v13;
    v191 = 0;
    v197.QuadPart = 0LL;
    v194 = 0LL;
    v204 = 0LL;
    v20 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL)) == 0;
    v22 = (char *)&v217 + 4;
    if ( v20 )
      v22 = 0LL;
    v23 = &v194;
    if ( !*((_BYTE *)this + 454) )
      v23 = 0LL;
    LODWORD(v183) = 1;
    v24 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, int *, __int64, _QWORD, __int64, UINT *, LARGE_INTEGER *, D3DGPU_VIRTUAL_ADDRESS *, __int64 *, char *, char *))(v21 + 576))(
            v9,
            &v212,
            3LL,
            v10,
            v183,
            &v191,
            &v197,
            v23,
            &v204,
            (char *)a8 + 192,
            v22);
    v28 = v24;
    if ( v24 < 0 )
    {
      v177 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(_QWORD *)(v177 + 24) = this;
      *(_QWORD *)(v177 + 32) = v28;
      WdLogEvent5_WdWarning(v177);
      goto LABEL_231;
    }
    v29 = 1;
    v184 = 1;
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 640LL)
                                                                            + 8LL)
                                                                + 512LL))(
      v187,
      &v190);
    a6->pDmaBuffer = v190;
    a6->DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 640LL)
                                                                                    + 8LL)
                                                                        + 536LL))(v187);
    v30 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 640LL)
                                                                                    + 8LL)
                                                                        + 568LL))(v187);
    v31 = v191;
    a6->pDmaBufferPrivateData = v30;
    v32 = *((_DWORD *)this + 52);
    a6->DmaBufferSegmentId = v31;
    a6->DmaBufferPhysicalAddress = v197;
    a6->DmaBufferPrivateDataSize = v32;
    if ( v185 )
    {
      v208.DmaBufferPrivateDataSize = v32;
      v208.DmaSize = a6->DmaSize;
      v208.MultipassOffset = a6->MultipassOffset;
      v208.pDmaBuffer = a6->pDmaBuffer;
      v208.DmaBufferGpuVirtualAddress = v194;
      *((_DWORD *)&v208.KernelSubmissionType + 1) = 0;
      *(&v208.DmaSize + 1) = 0;
      v120 = *((_QWORD *)this + 30);
      v208.pDmaBufferPrivateData = v30;
      v121 = (void *)*((_QWORD *)this + 23);
      v208.MonitoredFenceGpuVa = *(_QWORD *)(v120 + 48);
      v208.MonitoredFenceCpuVa = *(void **)(v120 + 64);
      v208.MonitoredFenceValue = *((_QWORD *)this + 31);
      v208.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_PRESENTBLT;
      v208.hHwQueue = (HANDLE)*((_QWORD *)v195 + 4);
      v122 = ADAPTER_RENDER::DdiSignalMonitoredFence(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v121, &v208);
      v28 = v122;
      a6->DmaBufferPrivateDataSize = v208.DmaBufferPrivateDataSize;
      a6->DmaSize = v208.DmaSize;
      a6->MultipassOffset = v208.MultipassOffset;
      a6->pDmaBuffer = v208.pDmaBuffer;
      a6->pDmaBufferPrivateData = v208.pDmaBufferPrivateData;
      if ( v122 == -1071775743 )
      {
        v173 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v123, v30);
        v173[3] = 275LL;
        v173[4] = 40LL;
        v173[5] = this;
        v173[6] = 0LL;
        v173[7] = 0LL;
        WdLogEvent5_WdCriticalError(v173);
LABEL_223:
        v174 = WdLogNewEntry5_WdWarning(v123, v30, v124);
        *(_QWORD *)(v174 + 24) = this;
        *(_QWORD *)(v174 + 32) = v28;
        WdLogEvent5_WdWarning(v174);
        goto LABEL_232;
      }
      if ( v122 < 0 )
        goto LABEL_223;
      v185 = 0;
    }
    *(_DWORD *)a8 ^= (*(_DWORD *)a8 ^ (*((unsigned __int8 *)this + 454) << 27)) & 0x8000000;
    if ( v14 )
      break;
LABEL_74:
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 616LL)
                                                                + 8LL)
                                                    + 568LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 624LL))
      && a6->pDmaBuffer <= v190 )
    {
      v149 = WdLogNewEntry5_WdAssertion(v84, v83);
      *(_QWORD *)(v149 + 24) = 9092LL;
      WdLogEvent5_WdAssertion(v149);
    }
    v85 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 640LL)
                                                                            + 8LL)
                                                                + 536LL))(v187);
    pDmaBuffer = a6->pDmaBuffer;
    v88 = v85;
    v89 = (int)v190;
    v90 = &v190[v88];
    if ( a6->pDmaBuffer > v90 )
    {
      v150 = WdLogNewEntry5_WdAssertion(v90, v86);
      *(_QWORD *)(v150 + 24) = 9093LL;
      WdLogEvent5_WdAssertion(v150);
      v89 = (int)v190;
      LODWORD(pDmaBuffer) = a6->pDmaBuffer;
    }
    v91 = (_DWORD)pDmaBuffer - v89;
    v92 = LODWORD(a6->pDmaBufferPrivateData)
        - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 640LL)
                                                                            + 8LL)
                                                                + 568LL))(v187);
    if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 640LL)
                                                                                + 8LL)
                                                                    + 536LL))(v187) < v91 )
    {
      v151 = WdLogNewEntry5_WdAssertion(v94, v93);
      *(_QWORD *)(v151 + 24) = 9100LL;
      WdLogEvent5_WdAssertion(v151);
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                               + 640LL)
                                                                   + 8LL)
                                                       + 520LL))(v187);
    v96 = 0LL;
    v190 = 0LL;
    if ( *((_BYTE *)this + 454) )
    {
      LODWORD(v97) = 0;
    }
    else
    {
      if ( a6->pPatchLocationListOut < (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 552LL))(v187) )
      {
        v152 = WdLogNewEntry5_WdAssertion(v111, v110);
        *(_QWORD *)(v152 + 24) = 9115LL;
        WdLogEvent5_WdAssertion(v152);
      }
      v112 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 640LL)
                                                                               + 8LL)
                                                                   + 552LL))(v187);
      v113 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 640LL)
                                                                                    + 8LL)
                                                                        + 544LL))(v187);
      if ( a6->pPatchLocationListOut > (D3DDDI_PATCHLOCATIONLIST *)(v112 + 24 * v113) )
      {
        v153 = WdLogNewEntry5_WdAssertion(v113, 3 * v113);
        *(_QWORD *)(v153 + 24) = 9116LL;
        WdLogEvent5_WdAssertion(v153);
      }
      v97 = ((__int64)a6->pPatchLocationListOut
           - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 640LL)
                                                                               + 8LL)
                                                                   + 552LL))(v187))
          / 24;
      if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 640LL)
                                                                                  + 8LL)
                                                                      + 544LL))(v187) < (unsigned int)v97 )
      {
        v154 = WdLogNewEntry5_WdAssertion(v115, v114);
        *(_QWORD *)(v154 + 24) = 9126LL;
        WdLogEvent5_WdAssertion(v154);
      }
      if ( (qword_1C00B19B0 & 0x10) != 0 )
      {
        v155 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 640LL)
                                                                                 + 8LL)
                                                                     + 552LL))(v187);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v187, v97, v155);
      }
      v96 = 0LL;
    }
    if ( !v91 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 616LL)
                                                                  + 8LL)
                                                      + 568LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 624LL)) )
      {
        v158 = WdLogNewEntry5_WdAssertion(v157, v156);
        *(_QWORD *)(v158 + 24) = 9141LL;
        WdLogEvent5_WdAssertion(v158);
      }
      v96 = 0LL;
    }
    v98 = *(_DWORD *)a8;
    if ( (*(_DWORD *)a8 & 0x20) != 0 )
    {
      if ( v186 || v185 )
        v99 = 64LL;
      else
        v99 = 0LL;
      v20 = bTracingEnabled == 0;
      *(_DWORD *)a8 = v99 | v98 & 0xFFFFFFBF;
      if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0q_EtwWriteTransfer(v99, &EventPerformanceWarning, v95, 1);
        v96 = 0LL;
      }
    }
    else
    {
      *(_DWORD *)a8 = v98 & 0xFFFFFFBF;
    }
    *((_QWORD *)a8 + 1) = v187;
    *((_DWORD *)a8 + 13) = v91;
    *((_DWORD *)a8 + 12) = 0;
    *((_DWORD *)a8 + 15) = 3;
    *((_DWORD *)a8 + 14) = 0;
    *((_DWORD *)a8 + 17) = v97;
    *((_DWORD *)a8 + 16) = 0;
    *((_DWORD *)a8 + 19) = v92;
    *((_DWORD *)a8 + 18) = 0;
    if ( *((_BYTE *)this + 454) )
    {
      *((_DWORD *)a8 + 20) = v92;
      *((_DWORD *)a8 + 19) = a6->DmaBufferPrivateDataSize;
    }
    v100 = (char *)*((unsigned __int8 *)a8 + 348);
    v101 = 576LL;
    if ( !(_BYTE)v100 )
      v101 = 480LL;
    v102 = (unsigned int *)((char *)a8 + v101);
    if ( (_BYTE)v100 )
      v103 = (char *)a8 + *((_DWORD *)a8 + 145) * ((8 * *((_DWORD *)a8 + 146) + 199) & 0xFFFFFFF8) + 624;
    else
      v103 = (char *)a8 + 488;
    if ( *((_DWORD *)a8 + 30) == 4 )
    {
      v159 = v189;
      if ( !v189 )
      {
        v160 = WdLogNewEntry5_WdAssertion(v100, 0LL);
        *(_QWORD *)(v160 + 24) = 9176LL;
        WdLogEvent5_WdAssertion(v160);
      }
      if ( (*(_DWORD *)a8 & 0x40) != 0 )
      {
        v161 = WdLogNewEntry5_WdAssertion(v100, v96);
        *(_QWORD *)(v161 + 24) = 9177LL;
        WdLogEvent5_WdAssertion(v161);
      }
      *v102 = *v102 & 0xFFFFFC00 | 1;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)
                                                                                 + 640LL)
                                                                     + 8LL)
                                                         + 416LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 760LL),
             *((_QWORD *)v159 + 3),
             v103) < 0 )
      {
        v164 = WdLogNewEntry5_WdAssertion(v163, v162);
        *(_QWORD *)(v164 + 24) = 9196LL;
        WdLogEvent5_WdAssertion(v164);
      }
      v188 = 0;
      if ( *((_BYTE *)a8 + 348) )
        v165 = (char *)a8 + *((_DWORD *)a8 + 145) * ((8 * *((_DWORD *)a8 + 146) + 199) & 0xFFFFFFF8) + 616;
      else
        v165 = (char *)a8 + 504;
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 640LL)
                                                                                + 8LL)
                                                                    + 224LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
        *(_QWORD *)(*((_QWORD *)v159 + 6) + 8LL),
        &v188,
        v165,
        0LL);
      v166 = (char *)a8 + 576;
      if ( *((_BYTE *)a8 + 348) )
        *(_WORD *)&v166[*((_DWORD *)a8 + 145) * ((8 * *((_DWORD *)a8 + 146) + 199) & 0xFFFFFFF8) + 32] = v188;
      else
        *((_DWORD *)a8 + 135) ^= (*((_DWORD *)a8 + 135) ^ (v188 << 17)) & 0x3E0000;
      v167 = *((_QWORD *)v159 + 5);
      if ( v167 && (*(_DWORD *)(v167 + 4) & 8) != 0 )
        v168 = *(_QWORD *)(*(_QWORD *)(v167 + 56) + 184LL);
      else
        v168 = 0LL;
      if ( *((_BYTE *)a8 + 348) )
        *(_QWORD *)&v166[*((_DWORD *)a8 + 145) * ((8 * *((_DWORD *)a8 + 146) + 199) & 0xFFFFFFF8) + 56] = v168;
      else
        *((_QWORD *)a8 + 70) = v168;
      if ( *((_BYTE *)a8 + 348) )
        v169 = (char *)a8 + *((_DWORD *)a8 + 145) * ((8 * *((_DWORD *)a8 + 146) + 199) & 0xFFFFFFF8) + 600;
      else
        v169 = (char *)a8 + 496;
      *(_QWORD *)v169 = *(_QWORD *)(*((_QWORD *)v159 + 6) + 16LL);
      if ( *((_BYTE *)a8 + 348) )
        v100 = (char *)a8 + *((_DWORD *)a8 + 145) * ((8 * *((_DWORD *)a8 + 146) + 199) & 0xFFFFFFF8) + 592;
      else
        v100 = (char *)a8 + 552;
      *(_QWORD *)v100 = *((_QWORD *)this + 23);
      if ( *((_BYTE *)a8 + 348) )
        *((_DWORD *)a8 + 154) = -1;
    }
    else if ( (*v102 & 0x3FF) != 0 )
    {
      v170 = WdLogNewEntry5_WdAssertion(v100, 0LL);
      *(_QWORD *)(v170 + 24) = 9235LL;
      WdLogEvent5_WdAssertion(v170);
    }
    if ( *((struct _KTHREAD **)this + 59) != KeGetCurrentThread() )
    {
      v104 = WdLogNewEntry5_WdAssertion(v100, 0LL);
      *(_QWORD *)(v104 + 24) = 9238LL;
      WdLogEvent5_WdAssertion(v104);
    }
    if ( (*((_DWORD *)this + 105) & 0x10) != 0 )
    {
      *((_QWORD *)a8 + 60) = *((_QWORD *)this + 31);
      *((_DWORD *)a8 + 122) = 0;
      *((_QWORD *)a8 + 63) = *(_QWORD *)(*((_QWORD *)this + 30) + 64LL);
      v171 = v195;
      *((_QWORD *)a8 + 62) = *(_QWORD *)(*((_QWORD *)this + 30) + 48LL);
      v105 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL)
                                                                                             + 8LL)
                                                                                 + 432LL))(
               *((_QWORD *)v171 + 5),
               a8);
    }
    else
    {
      v105 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL)
                                                                                             + 8LL)
                                                                                 + 424LL))(
               *((_QWORD *)this + 34),
               a8);
    }
    v106 = v105;
    if ( v105 < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL)
                                                         + 8LL)
                                             + 440LL))(
        *((_QWORD *)this + 34),
        0LL);
      if ( (*v102 & 0x3FF) != 0 && *(_QWORD *)v103 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 640LL)
                                                                           + 8LL)
                                                               + 432LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
          *((unsigned int *)a8 + 34),
          *(_QWORD *)v103,
          0LL);
      v29 = 1;
      LODWORD(v28) = v106;
      goto LABEL_232;
    }
    v14 = v186;
    v9 = 0LL;
    v13 = v193;
    v10 = 0;
    a4 = v189;
    v16 = 0LL;
    v11 = v198;
    v187 = 0LL;
    if ( !v185 && !v186 )
      return (unsigned int)v28;
  }
  v33 = *((_QWORD *)this + 2);
  if ( *((_BYTE *)this + 454) )
  {
    memset(v221, 0, sizeof(v221));
    v34 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 640LL)
                                                                            + 8LL)
                                                                + 560LL))(v187);
    v36 = v189;
    v37 = v34;
    v38 = *(_QWORD *)(v34 + 24);
    v221[4] = v38;
    if ( v189 )
    {
      v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 640LL)
                                                                                  + 8LL)
                                                                      + 256LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
              *((_QWORD *)v189 + 3),
              *((unsigned __int8 *)this + 455),
              *((unsigned int *)this + 104));
      v36 = v189;
      v221[5] = v39;
    }
    if ( (a6->Flags.Value & 4) != 0 )
    {
      v125 = *((_QWORD *)this + 2);
      v126 = *((_QWORD *)v36 + 6);
      v192 = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, _QWORD *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v125 + 16)
                                                                                              + 640LL)
                                                                                  + 8LL)
                                                                      + 224LL))(
        *(_QWORD *)(*(_QWORD *)(v125 + 16) + 648LL),
        *(_QWORD *)(v126 + 8),
        &v192,
        &v221[6],
        0LL);
      LOWORD(v221[7]) = v192;
    }
    else if ( v193 )
    {
      v40 = *((unsigned __int8 *)this + 455);
      v41 = *((unsigned int *)this + 104);
      v221[8] = *(_QWORD *)(v37 + 48);
      v221[9] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                                                        + 8LL)
                                                                            + 256LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
                  *((_QWORD *)v193 + 3),
                  v40,
                  v41);
      if ( !v221[9] )
      {
        v175 = (_QWORD *)WdLogNewEntry5_WdError(v38, v42);
        LODWORD(v28) = -1073741811;
        v175[3] = this;
        v175[4] = -1073741811LL;
        v175[5] = 8883LL;
        WdLogEvent5_WdError(v175);
        goto LABEL_232;
      }
    }
    a6->DmaBufferGpuVirtualAddress = v194;
    a6->pAllocationList = (DXGK_ALLOCATIONLIST *)v221;
    v43 = 0;
    a6->pPatchLocationListOut = 0LL;
  }
  else
  {
    a6->pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 640LL) + 8LL) + 560LL))(
                                                   v187,
                                                   v30);
    a6->pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 552LL))(v187);
    v43 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 640LL)
                                                                            + 8LL)
                                                                + 544LL))(v187);
  }
  a6->PatchLocationListOutSize = v43;
  if ( (*((_DWORD *)this + 105) & 0x10) != 0 )
  {
    v38 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 216LL) + 64LL) + 40LL) + 28LL) >= 0xA002u )
    {
      v82 = v195;
      LODWORD(v28) = ADAPTER_RENDER::DdiPresentToHwQueue((ADAPTER_RENDER *)v38, *((void **)v195 + 4), a6);
      if ( (_DWORD)v28 == -1073741822 )
        LODWORD(v28) = ADAPTER_RENDER::DdiPresent(
                         *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                         *((void **)this + 23),
                         a6);
      goto LABEL_66;
    }
  }
  v44 = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)a6->Flags.Value;
  v45 = *((_QWORD *)this + 2);
  v196 = 0LL;
  if ( (*(_BYTE *)&v44 & 1) != 0 || (v38 = *(_QWORD *)(*(_QWORD *)(v45 + 16) + 16LL), !*(_BYTE *)(v38 + 2650)) )
    v196 = *((_QWORD *)this + 23);
  v46 = *(_QWORD *)(v45 + 16);
  v205 = v46;
  v201 = -1;
  v202 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v203 = 1;
    v201 = 5031;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerEnter, v35, 5031);
  }
  else
  {
    v203 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v201, 5031LL);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v50 = ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
    && (Current = DXGTHREAD::GetCurrent()) != 0LL
    && (v51 = *((_QWORD *)Current + 1)) != 0
    || (v51 = v50) != 0 )
  {
    v52 = v51 + 112;
  }
  else
  {
    v52 = 0LL;
  }
  v199 = v52;
  v200 = 0;
  if ( v52 && *(struct _KTHREAD **)(v52 + 8) == KeGetCurrentThread() )
  {
    v128 = WdLogNewEntry5_WdAssertion(v52, v49);
    *(_QWORD *)(v128 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v128);
  }
  if ( v51 )
  {
    v53 = v199;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v53, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v129 = *(_DWORD *)(v53 + 24);
        if ( v129 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v54, &EventBlockThread, v55, v129);
      }
      ExAcquirePushLockExclusiveEx(v53, 0LL);
    }
    *(_QWORD *)(v53 + 8) = KeGetCurrentThread();
    v200 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v46 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v46 + 16) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  ThreadProperty = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_159;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v130 = WdLogNewEntry5_WdAssertion(v57, v56);
    *(_QWORD *)(v130 + 24) = 507LL;
    WdLogEvent5_WdAssertion(v130);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  v62 = PsGetCurrentProcess();
  v63 = PsGetProcessDxgProcess(v62);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && v63
    && (v64 = *(void **)(v63 + 88)) != 0LL
    && v64 != &gDxgkWin32kEngInterface
    && (!(unsigned __int8)KeIsAttachedProcess()
     || (v131 = PsGetCurrentProcess(),
         ProcessSessionId = PsGetProcessSessionIdEx(v131),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    ThreadProperty = *(struct DXGTHREAD **)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    ThreadProperty = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
    if ( !ThreadProperty )
    {
      ThreadProperty = DxgkThreadObjectCreateDxgThread();
      if ( !ThreadProperty )
        goto LABEL_159;
    }
    ObfDereferenceObject(ThreadProperty);
  }
  if ( ThreadProperty )
  {
    v66 = *((_DWORD *)ThreadProperty + 8);
    goto LABEL_52;
  }
LABEL_159:
  v66 = 0;
LABEL_52:
  v67 = v205;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v210,
    *(struct DXGADAPTER **)(v205 + 16));
  LODWORD(v206) = (*(__int64 (__fastcall **)(__int64, struct _DXGKARG_PRESENT *))(*(_QWORD *)(v67 + 16) + 648LL))(
                    v196,
                    a6);
  if ( v210[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v134 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v69, v68);
    v134[3] = 275LL;
    v134[4] = 16LL;
    v134[5] = v67;
    v134[6] = CurrentIrql;
    v135 = KeGetCurrentIrql();
    v134[7] = v135;
    WdLogEvent5_WdCriticalError(v134);
  }
  if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v66 )
  {
    v136 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v69, v68);
    v136[3] = 275LL;
    v136[4] = 38LL;
    v136[5] = *((int *)ThreadProperty + 8);
    v136[6] = v66;
    v136[7] = 0LL;
    WdLogEvent5_WdCriticalError(v136);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v67 + 16) + 4364LL));
  v72 = (_QWORD *)WdLogNewEntry5_WdTrace(v69, v68, v70, v71);
  LODWORD(v28) = v206;
  v74 = v196;
  v75 = (int)v206;
  v72[3] = (int)v206;
  v72[4] = v74;
  v72[5] = a6->SubRectCnt;
  v72[6] = a6->pDmaBuffer;
  DmaSize = a6->DmaSize;
  v72[7] = DmaSize;
  if ( (_DWORD)v28 )
  {
    if ( (int)v28 > -1073741670 )
    {
      if ( (_DWORD)v28 == -1071775743 || (_DWORD)v28 == -1071775736 || (_DWORD)v28 == -1071775232 )
        goto LABEL_60;
    }
    else if ( (_DWORD)v28 == -1073741670
           || (_DWORD)v28 == -1073741816
           || (_DWORD)v28 == -1073741801
           || (_DWORD)v28 == -1073741795
           || (_DWORD)v28 == -1073741674 )
    {
      goto LABEL_60;
    }
    v137 = WdLogNewEntry5_WdError(DmaSize, v73);
    *(_QWORD *)(v137 + 24) = v75;
    WdLogEvent5_WdError(v137);
  }
LABEL_60:
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v67 + 16));
  if ( v200 == 1 )
  {
    v200 = 0;
    ExReleasePushLockSharedEx(v199, 0LL);
  }
  else
  {
    if ( v200 != 2 )
      goto LABEL_64;
    v78 = v199;
    v200 = 0;
    *(_QWORD *)(v199 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v78, 0LL);
  }
  KeLeaveCriticalRegion();
LABEL_64:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v201, v77);
  if ( v203 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v80, &EventProfilerExit, v81, v201);
  v29 = 1;
  v82 = v195;
LABEL_66:
  if ( *((_BYTE *)this + 454) && (a6->pPatchLocationListOut || a6->PatchLocationListOutSize) )
  {
    v138 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v80, v79);
    v138[3] = 275LL;
    v138[4] = 9LL;
    v138[5] = a6;
    v138[6] = 0LL;
    v138[7] = 0LL;
    WdLogEvent5_WdCriticalError(v138);
  }
  if ( (_DWORD)v28 != -1071775743 )
  {
    if ( (int)v28 < 0 )
      goto LABEL_177;
LABEL_71:
    if ( *((_BYTE *)this + 454) )
    {
      if ( a6->pAllocationList == (DXGK_ALLOCATIONLIST *)v221 )
      {
LABEL_73:
        v186 = (_DWORD)v28 == -1071775743;
        if ( (*((_DWORD *)this + 105) & 0x10) != 0 )
        {
          if ( !*((_QWORD *)this + 31) )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v207,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 30) + 32LL) + 32LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v207);
            VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                                 *(DXGSYNCOBJECT **)(*((_QWORD *)this + 30) + 32LL),
                                 *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 30) + 16LL) + 16LL));
            (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL)
                                                                                             + 8LL)
                                                                                 + 272LL))(
              *((_QWORD *)v82 + 5),
              VidSchSyncObject,
              0LL);
            if ( v207[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v207, v143);
          }
          v144 = *((_QWORD *)this + 31) + 1LL;
          v20 = *((_BYTE *)this + 312) == 0;
          *((_QWORD *)this + 31) = v144;
          if ( v20 )
          {
            v145 = *((_QWORD *)this + 30);
            v209.DmaBufferPrivateDataSize = a6->DmaBufferPrivateDataSize;
            v209.DmaSize = a6->DmaSize;
            v209.MultipassOffset = a6->MultipassOffset;
            v209.pDmaBuffer = a6->pDmaBuffer;
            v209.pDmaBufferPrivateData = a6->pDmaBufferPrivateData;
            v209.DmaBufferGpuVirtualAddress = v194;
            *((_DWORD *)&v209.KernelSubmissionType + 1) = 0;
            *(&v209.DmaSize + 1) = 0;
            v209.MonitoredFenceGpuVa = *(_QWORD *)(v145 + 48);
            v209.MonitoredFenceCpuVa = *(void **)(v145 + 64);
            v209.hHwQueue = (HANDLE)*((_QWORD *)v82 + 4);
            v146 = *((_QWORD *)this + 2);
            v209.MonitoredFenceValue = v144;
            v147 = (void *)*((_QWORD *)this + 23);
            v209.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_PRESENTBLT;
            v148 = ADAPTER_RENDER::DdiSignalMonitoredFence(*(ADAPTER_RENDER **)(v146 + 16), v147, &v209);
            v28 = v148;
            a6->DmaBufferPrivateDataSize = v209.DmaBufferPrivateDataSize;
            a6->DmaSize = v209.DmaSize;
            a6->MultipassOffset = v209.MultipassOffset;
            a6->pDmaBuffer = v209.pDmaBuffer;
            a6->pDmaBufferPrivateData = v209.pDmaBufferPrivateData;
            if ( v148 == -1071775743 )
            {
              v185 = 1;
            }
            else if ( v148 < 0 )
            {
              goto LABEL_223;
            }
          }
        }
        goto LABEL_74;
      }
      v141 = WdLogNewEntry5_WdAssertion(v80, v79);
      *(_QWORD *)(v141 + 24) = 9006LL;
    }
    else
    {
      if ( a6->pAllocationList == (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 560LL))(v187) )
        goto LABEL_73;
      v141 = WdLogNewEntry5_WdAssertion(v109, v108);
      *(_QWORD *)(v141 + 24) = 9010LL;
    }
    WdLogEvent5_WdAssertion(v141);
    goto LABEL_73;
  }
  if ( (a6->Flags.Value & 4) == 0 )
    goto LABEL_71;
  v139 = WdLogNewEntry5_WdError(v80, v79);
  *(_QWORD *)(v139 + 24) = this;
  WdLogEvent5_WdError(v139);
  LODWORD(v28) = -1073741823;
LABEL_177:
  if ( (_DWORD)v28 == -1071775736 )
  {
    v140 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v140 + 24) = this;
    *(_QWORD *)(v140 + 32) = -1071775736LL;
    WdLogEvent5_WdEvent(v140);
  }
  else
  {
    v176 = WdLogNewEntry5_WdError(v80, v79);
    *(_QWORD *)(v176 + 24) = this;
    *(_QWORD *)(v176 + 32) = (int)v28;
    WdLogEvent5_WdError(v176);
  }
LABEL_232:
  if ( v187 )
  {
    if ( v190 )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 520LL))();
      if ( (*((_DWORD *)this + 105) & 0x10) == 0 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 616LL)
                                                           + 8LL)
                                               + 440LL))(
          *((_QWORD *)this + 34),
          0LL);
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      v179 = 0LL;
      if ( *((_DWORD *)a8 + 48) )
      {
        do
        {
          v180 = (char *)a8 + 8 * v179;
          v181 = *((_QWORD *)v180 + 25);
          if ( v181 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 640LL)
                                                                                + 8LL)
                                                                    + 432LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
              0LL,
              v181,
              0LL);
            *((_QWORD *)v180 + 25) = 0LL;
          }
          v179 = (unsigned int)(v179 + 1);
        }
        while ( (unsigned int)v179 < *((_DWORD *)a8 + 48) );
        v178 = *((_QWORD *)this + 2);
        v29 = v184;
      }
    }
    if ( v29 )
    {
      v182 = *(_QWORD *)(v178 + 16);
      LOBYTE(v178) = 1;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, __int64))(*(_QWORD *)(*(_QWORD *)(v182 + 640) + 8LL) + 584LL))(
        v187,
        v178);
      v178 = *((_QWORD *)this + 2);
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v178 + 16) + 640LL)
                                                                           + 8LL)
                                                               + 504LL))(
      v187,
      0LL);
  }
  return (unsigned int)v28;
}
