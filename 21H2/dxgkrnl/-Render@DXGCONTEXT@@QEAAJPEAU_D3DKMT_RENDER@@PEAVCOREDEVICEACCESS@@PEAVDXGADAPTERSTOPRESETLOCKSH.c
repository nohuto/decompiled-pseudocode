/*
 * XREFs of ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0171830
 * Callers:
 *     DxgkRender @ 0x1C01592B0 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C016F940 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0001B60 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ @ 0x1C000A8C4 (-DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000A8F8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0044948 (McTemplateK0p_EtwWriteTransfer.c)
 *     TraceDxgkPatchLocationList @ 0x1C00510B8 (TraceDxgkPatchLocationList.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1C00574F4 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0ppqx_EtwWriteTransfer @ 0x1C00597A4 (McTemplateK0ppqx_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C005983C (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ?DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C015B1B0 (-DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C015CC10 (-DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01752C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0179A80 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x1C0223396 (-EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1C0225456 (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
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
  int v9; // eax
  D3DKMT_RENDERFLAGS Flags; // eax
  ULONG BroadcastContextCount; // edx
  char *pNewCommandBuffer; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 AllocationCount; // r8
  unsigned __int64 v16; // rbx
  __int64 v17; // r9
  unsigned int v18; // esi
  __int64 v19; // rdi
  int v20; // r12d
  int v21; // eax
  __int64 v22; // r12
  D3DKMT_RENDERFLAGS v23; // eax
  __int64 v24; // rax
  __int64 v25; // r12
  PSLIST_ENTRY v26; // rsi
  __int64 v27; // rax
  int v28; // edx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // r8d
  int v32; // edx
  int v33; // ecx
  int v34; // edx
  unsigned int v35; // eax
  __int64 v36; // rdx
  D3DKMT_RENDERFLAGS v37; // r8d
  unsigned __int64 *v38; // rcx
  __int64 v39; // rax
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // rdx
  int v41; // eax
  char v42; // di
  __int64 v43; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 AllocationListSize; // rcx
  unsigned int v46; // edi
  struct DXGALLOCATION **v47; // rbx
  __int64 v48; // rax
  __int64 v49; // r12
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // r8
  struct DXGTHREAD *v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdi
  _QWORD *v63; // rax
  __int64 v64; // rcx
  PSLIST_ENTRY v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // r8
  bool v68; // di
  unsigned __int64 v69; // rdi
  int v70; // eax
  int v71; // ecx
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // r9d
  int v75; // eax
  struct DXGCONTEXT **v76; // rdi
  struct DXGCONTEXT *v77; // r8
  int v78; // eax
  struct _SLIST_ENTRY *v79; // rsi
  __int64 v80; // rdi
  union _SLIST_HEADER *v81; // rcx
  int v83; // eax
  int v84; // eax
  unsigned int v85; // ebx
  __int64 v86; // rax
  __int64 v88; // rdx
  COREDEVICEACCESS *v89; // rsi
  int v90; // eax
  int v91; // edi
  char *v92; // rdx
  const EVENT_DESCRIPTOR *v93; // rdx
  int v94; // eax
  size_t v95; // r8
  void *v96; // rcx
  DXGK_ALLOCATIONLIST *v97; // rdx
  struct DXGTHREAD *Current; // rax
  __int64 v99; // rax
  int v100; // r9d
  KIRQL v101; // al
  struct DXGHWQUEUE **v102; // rcx
  int v103; // eax
  __int64 v104; // rax
  int v105; // eax
  unsigned int v106; // ecx
  int v107; // eax
  unsigned int v108; // ecx
  struct DXGHWQUEUE **v109; // rdx
  __int64 v110; // rbx
  struct DXGCONTEXT **v111; // rdi
  int v112; // esi
  __int64 v113; // rbx
  UINT64 PresentHistoryToken; // rax
  int v115; // eax
  __int64 v116; // rbx
  __int64 v117; // rbx
  int v118[2]; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v119; // [rsp+28h] [rbp-F8h]
  struct DXGK_PRESENT_PARAMS *v120; // [rsp+30h] [rbp-F0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v121; // [rsp+38h] [rbp-E8h]
  bool v122; // [rsp+A0h] [rbp-80h]
  KIRQL CurrentIrql; // [rsp+A0h] [rbp-80h]
  unsigned __int8 v124; // [rsp+A1h] [rbp-7Fh]
  char v125; // [rsp+A1h] [rbp-7Fh]
  char v126; // [rsp+A2h] [rbp-7Eh]
  int v127; // [rsp+A4h] [rbp-7Ch]
  UINT v128; // [rsp+A4h] [rbp-7Ch]
  unsigned int v129; // [rsp+A4h] [rbp-7Ch]
  int v130; // [rsp+A8h] [rbp-78h]
  __int64 v131; // [rsp+B0h] [rbp-70h] BYREF
  int v132; // [rsp+B8h] [rbp-68h]
  unsigned __int64 v133; // [rsp+C0h] [rbp-60h] BYREF
  PSLIST_ENTRY v134; // [rsp+C8h] [rbp-58h]
  __int64 v135; // [rsp+D0h] [rbp-50h]
  PSLIST_ENTRY ListEntry; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v137; // [rsp+E0h] [rbp-40h]
  UINT v138; // [rsp+E8h] [rbp-38h] BYREF
  int v139; // [rsp+ECh] [rbp-34h]
  void *v140; // [rsp+F0h] [rbp-30h] BYREF
  struct DXGHWQUEUE **v141; // [rsp+F8h] [rbp-28h]
  struct DXGTHREAD *DxgThread; // [rsp+100h] [rbp-20h] BYREF
  __int64 v143; // [rsp+108h] [rbp-18h] BYREF
  struct _DXGKARG_RENDER Src; // [rsp+110h] [rbp-10h] BYREF
  LARGE_INTEGER v145; // [rsp+180h] [rbp+60h] BYREF
  struct DXGALLOCATION **v146; // [rsp+188h] [rbp+68h]
  __int64 v147; // [rsp+190h] [rbp+70h]
  struct DXGCONTEXT **v148; // [rsp+198h] [rbp+78h]
  COREDEVICEACCESS *v149; // [rsp+1A0h] [rbp+80h]
  int v150; // [rsp+1A8h] [rbp+88h] BYREF
  __int64 v151; // [rsp+1B0h] [rbp+90h]
  char v152; // [rsp+1B8h] [rbp+98h]
  char *v153; // [rsp+1C0h] [rbp+A0h] BYREF
  UINT CommandLength; // [rsp+1C8h] [rbp+A8h]
  int v155; // [rsp+1CCh] [rbp+ACh]
  void *pDmaBuffer; // [rsp+1D0h] [rbp+B0h]
  unsigned __int64 v157; // [rsp+1D8h] [rbp+B8h]
  __int64 DmaSize; // [rsp+1E0h] [rbp+C0h]
  void *pDmaBufferPrivateData; // [rsp+1E8h] [rbp+C8h]
  __int64 DmaBufferPrivateDataSize; // [rsp+1F0h] [rbp+D0h]
  DXGK_ALLOCATIONLIST *pAllocationList; // [rsp+1F8h] [rbp+D8h]
  int v162; // [rsp+200h] [rbp+E0h]
  UINT MultipassOffset; // [rsp+204h] [rbp+E4h]
  unsigned __int64 v164; // [rsp+210h] [rbp+F0h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v165; // [rsp+218h] [rbp+F8h]
  char v166[8]; // [rsp+238h] [rbp+118h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+240h] [rbp+120h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v168; // [rsp+270h] [rbp+150h] BYREF

  v148 = a5;
  v146 = a6;
  v9 = *((_DWORD *)this + 101);
  v165 = a4;
  v149 = a3;
  v141 = a7;
  if ( (v9 & 0x10) != 0 && !a7 )
  {
    WdLogSingleEntry1(2LL, 470LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Hardware context render is not provided with hardware queue array",
      470LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  if ( (v9 & 8) != 0 )
  {
    WdLogSingleEntry1(3LL, 477LL);
    return 3221225485LL;
  }
  Flags = a2->Flags;
  BroadcastContextCount = a2->BroadcastContextCount;
  v124 = 1;
  v139 = ((*(_BYTE *)&Flags & 8) << 12) | 0x100;
  v133 = ((unsigned __int8)(*(_BYTE *)&Flags & 8) << 12) | 0x100LL;
  v130 = BroadcastContextCount + 1;
  if ( (*(_BYTE *)&Flags & 0x10) != 0 )
  {
    v139 = ((*(_BYTE *)&Flags & 8) << 12) | 0x1A0;
    LODWORD(v133) = v139;
    v84 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1u, a3);
    v85 = v84;
    if ( v84 < 0 )
    {
      WdLogSingleEntry2(4LL, this, v84);
      return v85;
    }
  }
  if ( (*(_DWORD *)&a2->Flags & 0x20) != 0 )
    pNewCommandBuffer = (char *)a2->pNewCommandBuffer;
  else
    pNewCommandBuffer = (char *)*((_QWORD *)this + 7);
  Src.pCommand = &pNewCommandBuffer[a2->CommandOffset];
  Src.CommandLength = a2->CommandLength;
  memset(&Src.CommandLength + 1, 0, 0x64uLL);
  v16 = v133;
  v164 = v133;
  v140 = 0LL;
  v126 = 0;
  v122 = 1;
  while ( 1 )
  {
    v17 = 0LL;
    v131 = 0LL;
    if ( *((_BYTE *)this + 441) )
      goto LABEL_16;
    v18 = *((_DWORD *)this + 18);
    if ( v18 <= 3 )
      v18 = 3;
    v19 = *((_QWORD *)this + 29);
    v20 = *((_DWORD *)this + 26);
    v132 = v20;
    if ( !v19 )
    {
      LODWORD(v121) = v20;
      LODWORD(v120) = v18;
      LOBYTE(v118[0]) = 1;
      v86 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, int, _DWORD, struct DXGK_PRESENT_PARAMS *, struct VIDSCH_SUBMIT_DATA_BASE *, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL) + 448LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 656LL),
              *((unsigned int *)this + 100),
              *(_QWORD *)(*((_QWORD *)this + 2) + 760LL),
              this,
              v118[0],
              *((_DWORD *)this + 50),
              v120,
              v121,
              *((_DWORD *)this + 51),
              *((_DWORD *)this + 52));
      *((_QWORD *)this + 29) = v86;
      if ( !v86 )
      {
        WdLogSingleEntry2(3LL, this, -1073741801LL);
        LODWORD(v22) = -1073741801;
LABEL_136:
        if ( *((_QWORD *)this + 29) )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL)
                                                     + 8LL)
                                         + 464LL))(*((_QWORD *)this + 29));
          *((_QWORD *)this + 29) = 0LL;
        }
        WdLogSingleEntry1(3LL, this);
        goto LABEL_139;
      }
      LODWORD(v22) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                                + 648LL)
                                                                    + 8LL)
                                                        + 456LL))(v86);
      if ( (int)v22 < 0 )
        goto LABEL_136;
      v19 = *((_QWORD *)this + 29);
      *((_DWORD *)this + 54) = v132;
      *((_DWORD *)this + 53) = v18;
    }
    LOBYTE(v13) = 1;
    v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                 + 648LL)
                                                                                     + 8LL)
                                                                         + 504LL))(
            v19,
            v13,
            0LL,
            &v131);
    LODWORD(v22) = v21;
    if ( v21 != -1071775486 )
    {
      if ( v21 < 0 )
        WdLogSingleEntry2(4LL, this, v21);
      goto LABEL_14;
    }
    v89 = v149;
    if ( v149 )
    {
      COREDEVICEACCESS::Release(v149);
      LODWORD(v22) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL)
                                                                                               + 8LL)
                                                                                   + 504LL))(
                       v19,
                       0LL,
                       0LL,
                       &v131);
      v90 = COREDEVICEACCESS::AcquireShared(v89, 0LL);
      v91 = v90;
      if ( v90 < 0 )
      {
        WdLogSingleEntry2(4LL, this, v90);
        COREDEVICEACCESS::AcquireSharedUncheck(v89, v92);
        LODWORD(v22) = v91;
LABEL_139:
        WdLogSingleEntry2(4LL, this, (int)v22);
        goto LABEL_213;
      }
    }
LABEL_14:
    if ( (int)v22 < 0 )
      goto LABEL_139;
    v17 = v131;
LABEL_16:
    if ( !bTracingEnabled )
      goto LABEL_20;
    v23 = a2->Flags;
    if ( (*(_BYTE *)&v23 & 0x10) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
      {
        HIDWORD(v121) = 0;
        HIDWORD(v120) = 0;
        McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(v14, v13, AllocationCount, 0LL, v17);
      }
    }
    else
    {
      if ( (*(_BYTE *)&v23 & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
          goto LABEL_20;
        v93 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
          goto LABEL_20;
        v93 = (const EVENT_DESCRIPTOR *)&EventRender;
      }
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v93, AllocationCount, v17);
    }
LABEL_20:
    v24 = *((_QWORD *)this + 2);
    v138 = 0;
    v145.QuadPart = 0LL;
    v133 = 0LL;
    v143 = 0LL;
    v25 = *(_QWORD *)(v24 + 16);
    v137 = v25;
    ++*(_DWORD *)(v25 + 1300);
    v26 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v25 + 1280));
    if ( !v26 )
    {
      ++*(_DWORD *)(v25 + 1304);
      v26 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v25 + 1328))(
                            *(unsigned int *)(v25 + 1316),
                            *(unsigned int *)(v25 + 1324),
                            *(unsigned int *)(v25 + 1320),
                            v25 + 1280);
    }
    v134 = v26;
    ListEntry = v26;
    if ( !v26 )
    {
      WdLogSingleEntry1(6LL, 589LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate VidSchSubmitData",
        589LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v22) = -1073741801;
LABEL_212:
      CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
LABEL_213:
      v42 = 0;
LABEL_214:
      v112 = v130;
      goto LABEL_215;
    }
    v27 = *(_QWORD *)(v25 + 16);
    if ( *(int *)(v27 + 2424) >= 0x2000 )
    {
      v28 = *(_DWORD *)(v27 + 288);
LABEL_25:
      v29 = *(_DWORD *)(v27 + 2632) * ((v28 << 6) + ((8 * v28 + 231) & 0xFFFFFFF8)) + 8 * (v28 + 77);
      goto LABEL_26;
    }
    v28 = 1;
    if ( *(_BYTE *)(v27 + 2724) )
      goto LABEL_25;
    v29 = 1304;
LABEL_26:
    memset(v26, 0, v29);
    v30 = *(_QWORD *)(v137 + 16);
    v31 = *(_DWORD *)(v30 + 2632);
    if ( *(int *)(v30 + 2424) < 0x2000 )
    {
      v32 = 1;
      if ( !*(_BYTE *)(v30 + 2724) )
      {
        BYTE4(v26[22].Next) = 0;
        goto LABEL_29;
      }
    }
    else
    {
      v32 = *(_DWORD *)(v30 + 288);
    }
    v33 = 8 * v32;
    BYTE4(v26[22].Next) = 1;
    LODWORD(v26[38].Next) = v32;
    v34 = v32 << 6;
    *((_DWORD *)&v26[37].Next + 3) = v31;
    HIDWORD(v26[38].Next) = v31 * (v34 + ((v33 + 231) & 0xFFFFFFF8)) + 16;
    v35 = v31 * (v34 + ((v33 + 231) & 0xFFFFFFF8)) + 616;
    *((_DWORD *)&v26[34].Next + 2) = v35;
    *((_DWORD *)&v26[34].Next + 3) = v33 + v35;
LABEL_29:
    if ( (*((_DWORD *)this + 56) & 1) != 0
      && (v36 = *((_QWORD *)this + 2), (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) + 2720LL) & 2) != 0) )
    {
      v37 = a2->Flags;
      if ( (*(_BYTE *)&v37 & 0x20) == 0 )
      {
        LODWORD(v22) = 0;
        v42 = 0;
        goto LABEL_37;
      }
    }
    else
    {
      v36 = *((_QWORD *)this + 2);
      v37 = a2->Flags;
    }
    v38 = &v133;
    if ( !*((_BYTE *)this + 438) )
      v38 = 0LL;
    v39 = *(_QWORD *)(*(_QWORD *)(v36 + 16) + 648LL);
    if ( (*(_BYTE *)&v37 & 0x20) != 0 )
      pNewAllocationList = a2->pNewAllocationList;
    else
      pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)this + 11);
    v118[0] = v130;
    v41 = (*(__int64 (__fastcall **)(__int64, D3DDDI_ALLOCATIONLIST *, _QWORD, _QWORD, int *, UINT *, LARGE_INTEGER *, unsigned __int64 *, __int64 *, struct _SLIST_ENTRY **, struct DXGALLOCATION **))(*(_QWORD *)(v39 + 8) + 584LL))(
            v131,
            pNewAllocationList,
            a2->AllocationCount,
            v124,
            *(int **)v118,
            &v138,
            &v145,
            v38,
            &v143,
            &v26[12].Next + 1,
            v146);
    LODWORD(v22) = v41;
    if ( v41 < 0 )
    {
      WdLogSingleEntry2(3LL, this, v41);
      goto LABEL_212;
    }
    v36 = *((_QWORD *)this + 2);
    v42 = 1;
LABEL_37:
    v125 = v42;
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 648LL) + 8LL) + 520LL))(
      v131,
      &v140);
    Src.pDmaBuffer = v140;
    Src.DmaSize = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                             + 648LL)
                                                                 + 8LL)
                                                     + 544LL))(v131);
    Src.pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL)
                                                                                       + 8LL)
                                                                           + 576LL))(v131);
    Src.DmaBufferPrivateDataSize = *((_DWORD *)this + 52);
    if ( v126 )
    {
      v94 = DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v141, v133);
      v22 = v94;
      if ( v94 == -1071775743 )
      {
        WdLogSingleEntry5(0LL, 275LL, 40LL, this, 0LL, 0LL);
LABEL_199:
        WdLogSingleEntry2(3LL, this, v22);
        CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
        goto LABEL_214;
      }
      if ( v94 < 0 )
        goto LABEL_199;
      v126 = 0;
    }
    if ( v122 )
    {
      if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) || (*(_DWORD *)&a2->Flags & 0x20) != 0 )
      {
        Src.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL)
                                                                                        + 568LL))(v131);
        Src.AllocationListSize = a2->AllocationCount;
        Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 15);
        Src.PatchLocationListInSize = a2->PatchLocationCount;
        Src.pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL) + 560LL))(v131);
        Src.PatchLocationListOutSize = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                  + 648LL)
                                                                                      + 8LL)
                                                                          + 552LL))(v131);
        Global = DXGGLOBAL_GetGlobal();
        if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
               (struct DXGGLOBAL *)((char *)Global + 1716),
               *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
        {
          memmove(*((void **)this + 8), Src.pCommand, *((_QWORD *)this + 6));
          v95 = *((_QWORD *)this + 14);
          v96 = (void *)*((_QWORD *)this + 16);
          Src.pCommand = (const void *)*((_QWORD *)this + 8);
          memmove(v96, Src.pPatchLocationListIn, v95);
          Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 16);
        }
        AllocationListSize = Src.AllocationListSize;
      }
      else
      {
        AllocationListSize = 0LL;
        Src.pAllocationList = 0LL;
        Src.AllocationListSize = 0;
        Src.pPatchLocationListIn = 0LL;
        Src.PatchLocationListInSize = 0;
        Src.pPatchLocationListOut = 0LL;
        Src.PatchLocationListOutSize = 0;
      }
      Src.DmaBufferSegmentId = v138;
      Src.DmaBufferPhysicalAddress = v145;
      if ( (*(_DWORD *)&a2->Flags & 0x20) != 0 )
      {
        if ( *((_BYTE *)this + 438) )
        {
          v153 = (char *)a2->pNewCommandBuffer + a2->CommandOffset;
          CommandLength = a2->CommandLength;
          v162 = AllocationListSize;
          v155 = 0;
          pDmaBuffer = Src.pDmaBuffer;
          DmaSize = Src.DmaSize;
          pDmaBufferPrivateData = Src.pDmaBufferPrivateData;
          DmaBufferPrivateDataSize = Src.DmaBufferPrivateDataSize;
          pAllocationList = Src.pAllocationList;
          MultipassOffset = Src.MultipassOffset;
          v157 = v133;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              LODWORD(v119) = AllocationListSize;
              McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &RenderGdi, v43, this, v133, v119);
              AllocationListSize = Src.AllocationListSize;
            }
            v46 = 0;
            if ( (_DWORD)AllocationListSize )
            {
              v47 = v146;
              do
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                {
                  v97 = &Src.pAllocationList[v46];
                  LODWORD(v119) = *(_DWORD *)&v97->8 & 1;
                  McTemplateK0ppqx_EtwWriteTransfer(
                    (REGHANDLE *)&DxgkControlGuid_Context,
                    (__int64)v97,
                    v43,
                    v47[v46],
                    v97->hDeviceSpecificAllocation,
                    v119,
                    v97->PhysicalAddress.QuadPart);
                  AllocationListSize = Src.AllocationListSize;
                }
                ++v46;
              }
              while ( v46 < (unsigned int)AllocationListSize );
              v16 = v164;
            }
          }
          v48 = *((_QWORD *)this + 2);
          v150 = -1;
          v151 = 0LL;
          v49 = *(_QWORD *)(v48 + 16);
          v147 = *((_QWORD *)this + 23);
          v135 = v49;
          if ( (qword_1C012F870 & 2) != 0 )
          {
            v152 = 1;
            v150 = 5066;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
              McTemplateK0q_EtwWriteTransfer(AllocationListSize, &EventProfilerEnter, v43, 5066);
          }
          else
          {
            v152 = 0;
          }
          DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v150, 5066);
          CurrentProcess = PsGetCurrentProcess(v51, v50, v52, v53);
          ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
          v56 = ProcessDxgProcess;
          if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0 )
          {
            Current = DXGTHREAD::GetCurrent();
            if ( Current )
            {
              v99 = *((_QWORD *)Current + 3);
              if ( v99 )
              {
                v56 = v99;
                goto LABEL_59;
              }
            }
          }
          if ( v56 )
          {
LABEL_59:
            v134 = (PSLIST_ENTRY)(v56 + 152);
            if ( v56 != -152 && *(struct _KTHREAD **)(v56 + 160) == KeGetCurrentThread() )
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
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v56 + 152, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v100 = *(_DWORD *)(v56 + 176);
                if ( v100 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v57, (const EVENT_DESCRIPTOR *)"g", v58, v100);
              }
              ExAcquirePushLockExclusiveEx(v56 + 152, 0LL);
            }
            *(_QWORD *)(v56 + 160) = KeGetCurrentThread();
            v127 = 2;
            v49 = v135;
          }
          else
          {
            v134 = 0LL;
            v127 = 0;
          }
          DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v49 + 16), 1);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v49 + 16) + 4484LL));
          CurrentIrql = KeGetCurrentIrql();
          v59 = 0LL;
          if ( CurrentIrql < 2u
            && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
            && ((v59 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v59 = DxgThread) != 0LL)) )
          {
            v132 = *((_DWORD *)v59 + 12);
          }
          else
          {
            v132 = 0;
          }
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v166,
            *(struct DXGADAPTER **)(v49 + 16));
          v22 = (*(int (__fastcall **)(__int64, char **))(*(_QWORD *)(v49 + 16) + 920LL))(v147, &v153);
          if ( v166[0] )
            KeUnstackDetachProcess(&ApcState);
          if ( CurrentIrql != KeGetCurrentIrql() )
          {
            v101 = KeGetCurrentIrql();
            WdLogSingleEntry5(0LL, 275LL, 16LL, v135, CurrentIrql, v101);
          }
          if ( v59 )
          {
            v61 = *((int *)v59 + 12);
            if ( (_DWORD)v61 != v132 )
              WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v59 + 12), v132, 0LL);
          }
          v62 = v135;
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v135 + 16) + 4484LL));
          v63 = (_QWORD *)WdLogNewEntry5_WdTrace(v61, v60);
          v64 = v147;
          v63[3] = v22;
          v63[4] = v64;
          v63[5] = pDmaBuffer;
          v63[6] = (unsigned int)DmaSize;
          v63[7] = pAllocationList;
          if ( (_DWORD)v22 )
          {
            if ( (int)v22 <= -1073741592 )
            {
              if ( (_DWORD)v22 == -1073741592
                || (_DWORD)v22 == -1073741816
                || (_DWORD)v22 == -1073741811
                || (_DWORD)v22 == -1073741801 )
              {
                goto LABEL_76;
              }
            }
            else if ( (_DWORD)v22 == -1071775743 || (_DWORD)v22 == -1071775232 )
            {
              goto LABEL_76;
            }
            WdLogSingleEntry1(2LL, v22);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
              v22,
              0LL,
              0LL,
              0LL,
              0LL);
          }
LABEL_76:
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v62 + 16));
          if ( v127 == 2 )
          {
            v65 = v134;
            *((_QWORD *)&v134->Next + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v65, 0LL);
            KeLeaveCriticalRegion();
          }
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v150);
          if ( v152 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v66, &EventProfilerExit, v67, v150);
          Src.pDmaBuffer = pDmaBuffer;
          Src.pDmaBufferPrivateData = pDmaBufferPrivateData;
          Src.MultipassOffset = MultipassOffset;
          if ( (*((_DWORD *)this + 101) & 0x10) != 0 )
          {
            Src.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
            Src.DmaSize = DmaSize;
          }
          v134 = ListEntry;
LABEL_82:
          if ( (int)(v22 + 0x80000000) >= 0 && (_DWORD)v22 != -1071775743 )
          {
            WdLogSingleEntry2(3LL, this, (int)v22);
LABEL_200:
            CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
            v42 = v125;
            goto LABEL_214;
          }
LABEL_83:
          v68 = (_DWORD)v22 == -1071775743;
          v122 = v68;
          if ( (*((_DWORD *)this + 101) & 0x10) != 0 )
          {
            LODWORD(v22) = DXGHWQUEUE::EnsureKmSubmissionProgressSyncObject(*v141);
            if ( (int)v22 < 0 )
              goto LABEL_200;
            v102 = v141;
            ++*((_QWORD *)*v141 + 12);
            if ( !*((_BYTE *)this + 296) )
            {
              v103 = DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v102, v133);
              LODWORD(v22) = v103;
              v122 = v68;
              if ( v103 == -1071775743 )
              {
                v126 = 1;
              }
              else if ( v103 < 0 )
              {
                WdLogSingleEntry2(3LL, this, v103);
                CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
                v42 = v125;
                goto LABEL_214;
              }
            }
          }
          else
          {
            v122 = (_DWORD)v22 == -1071775743;
          }
          goto LABEL_85;
        }
        v83 = ADAPTER_RENDER::DdiRenderKm(
                *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                *((void **)this + 23),
                &Src);
      }
      else
      {
        if ( (*((_DWORD *)this + 56) & 1) != 0
          && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2720LL) & 4) != 0 )
        {
          LODWORD(v22) = 0;
          goto LABEL_83;
        }
        v83 = ADAPTER_RENDER::DdiRender(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), *((void **)this + 23), &Src);
      }
      LODWORD(v22) = v83;
      goto LABEL_82;
    }
LABEL_85:
    LODWORD(v69) = 0;
    v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL)
                                                         + 8LL)
                                             + 576LL))(v131);
    v71 = LODWORD(Src.pDmaBufferPrivateData) - v70;
    v132 = LODWORD(Src.pDmaBuffer) - (_DWORD)v140;
    v72 = *((_QWORD *)this + 2);
    LODWORD(v135) = v71;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v72 + 16) + 648LL) + 8LL) + 528LL))(v131);
    v140 = 0LL;
    if ( DXGCONTEXT::DisableDdiRenderAllocationList(this) )
    {
      AllocationCount = 0LL;
    }
    else
    {
      v73 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 648LL)
                                                           + 8LL)
                                               + 560LL))(v131);
      AllocationCount = a2->AllocationCount;
      v69 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)Src.pPatchLocationListOut - v73) >> 3);
      v128 = a2->AllocationCount;
      if ( (qword_1C012F870 & 0x10) != 0 )
      {
        v104 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 648LL)
                                                              + 8LL)
                                                  + 560LL))(v131);
        TraceDxgkPatchLocationList((__int64)this, v131, v69, v104);
        AllocationCount = v128;
      }
    }
    v26->Next = (struct _SLIST_ENTRY *)v16;
    if ( *((_BYTE *)this + 438) )
    {
      LODWORD(v26->Next) |= 0x8000000u;
      *((_QWORD *)&v26[2].Next + 1) = v133;
    }
    if ( (v139 & 0x20) != 0 )
    {
      if ( v122 || (v105 = 0, v126) )
        v105 = 64;
      v74 = v130;
      v106 = v105 | (__int64)v26->Next & 0xFFFFFFBF;
      v107 = 2048;
      v108 = v106 & 0xFFFFFBFF;
      if ( v130 > 1 )
        v107 = 3072;
      LODWORD(v26->Next) = v107 | v108;
      v13 = *((_QWORD *)this + 2);
      if ( *(_QWORD *)(v13 + 1848) != *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) )
        HIDWORD(v26[7].Next) = 0;
    }
    else
    {
      v74 = v130;
    }
    *((_QWORD *)&v26->Next + 1) = v131;
    HIDWORD(v26[3].Next) = v132;
    *((_DWORD *)&v26[4].Next + 3) = v135;
    LODWORD(v26[3].Next) = 0;
    *((_DWORD *)&v26[3].Next + 3) = AllocationCount;
    *((_DWORD *)&v26[3].Next + 2) = 0;
    HIDWORD(v26[4].Next) = v69;
    LODWORD(v26[4].Next) = 0;
    *((_DWORD *)&v26[4].Next + 2) = 0;
    if ( v143 )
    {
      v75 = 1;
      v14 = (__int64)&v143;
    }
    else
    {
      v75 = 0;
      v14 = 0LL;
    }
    *((_QWORD *)&v26[21].Next + 1) = v14;
    LODWORD(v26[22].Next) = v75;
    v129 = 0;
    if ( v74 > 0 )
      break;
    v79 = v134;
LABEL_103:
    v131 = 0LL;
    v124 = 0;
    if ( v79 )
    {
      v80 = v137 + 1280;
      v81 = (union _SLIST_HEADER *)(v137 + 1280);
      ++*(_DWORD *)(v137 + 1308);
      if ( ExQueryDepthSList(v81) >= *(_WORD *)(v80 + 16) )
      {
        ++*(_DWORD *)(v80 + 32);
        (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v80 + 56))(v79, v80);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v80, v79);
      }
    }
    if ( !v122 && !v126 )
    {
      if ( (*(_DWORD *)&a2->Flags & 0x10) != 0 )
      {
        memset(&v168, 0, sizeof(v168));
        PresentHistoryToken = a2->PresentHistoryToken;
        v168.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
        v168.Token.Flip.FenceValue = PresentHistoryToken;
        v115 = SubmitPresentHistoryToken(&v168, v149, v165, 0LL, 0, 0LL, 0LL, 0LL, this, 0LL, 0LL);
        LODWORD(v22) = v115;
        if ( (int)(v115 + 0x80000000) >= 0 && v115 != -1073741130 )
        {
          WdLogSingleEntry2(3LL, this, v115);
          LODWORD(v22) = 0;
        }
      }
      return (unsigned int)v22;
    }
  }
  v76 = v148;
  while ( 1 )
  {
    v77 = *v76;
    if ( *((struct _KTHREAD **)*v76 + 57) != KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 917LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
        917LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v77 = *v76;
    }
    if ( (*((_DWORD *)v77 + 101) & 0x10) != 0 )
    {
      v109 = v141;
      v26[31].Next = (struct _SLIST_ENTRY *)*((_QWORD *)*v141 + 12);
      *((_DWORD *)&v26[31].Next + 2) = 0;
      *((_QWORD *)&v26[32].Next + 1) = *(_QWORD *)(*((_QWORD *)*v109 + 11) + 64LL);
      v26[32].Next = *(struct _SLIST_ENTRY **)(*((_QWORD *)*v109 + 11) + 48LL);
      v78 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                    + 624LL)
                                                                        + 8LL)
                                                            + 432LL))(
              *((_QWORD *)*v109 + 5),
              v26);
    }
    else
    {
      v78 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                    + 624LL)
                                                                        + 8LL)
                                                            + 424LL))(
              *((_QWORD *)v77 + 32),
              v26);
    }
    v132 = v78;
    if ( v78 < 0 )
      break;
    ++v76;
    LODWORD(v26->Next) &= ~0x800u;
    v14 = v129 + 1;
    v129 = v14;
    if ( (int)v14 >= v130 )
    {
      v79 = ListEntry;
      goto LABEL_103;
    }
  }
  if ( (*((_DWORD *)this + 101) & 0x10) == 0 )
  {
    v110 = v129;
    v111 = v148;
    do
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL)
                                                         + 8LL)
                                             + 440LL))(
        *((_QWORD *)v111[v110--] + 32),
        0LL);
    while ( v110 >= 0 );
  }
  v112 = v130;
  v113 = v130 - v129;
  do
  {
    LOBYTE(v13) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL)
                                                         + 8LL)
                                             + 592LL))(
      v131,
      v13);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL)
                                                        + 8LL)
                                            + 512LL))(
      v131,
      0LL);
    --v113;
  }
  while ( v113 );
  v42 = 0;
  v131 = 0LL;
  WdLogSingleEntry2(3LL, this, v132);
  CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
LABEL_215:
  if ( !v131 )
    return (unsigned int)v22;
  if ( v140 )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL) + 528LL))();
  if ( v42 )
  {
    if ( v112 <= 0 )
      return (unsigned int)v22;
    v116 = (unsigned int)v112;
    do
    {
      LOBYTE(v88) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 648LL)
                                                           + 8LL)
                                               + 592LL))(
        v131,
        v88);
      --v116;
    }
    while ( v116 );
  }
  if ( v112 > 0 )
  {
    v117 = (unsigned int)v112;
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL)
                                                          + 8LL)
                                              + 512LL))(
        v131,
        0LL);
      --v117;
    }
    while ( v117 );
  }
  return (unsigned int)v22;
}
