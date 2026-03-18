/*
 * XREFs of ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C033DA14
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C016F940 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 * Callees:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C00019F8 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0001B60 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0044948 (McTemplateK0p_EtwWriteTransfer.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01EBD10 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x1C0223396 (-EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1C0225456 (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x1C02CAFE4 (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::RenderKmLda(
        struct _D3DKMT_RENDER *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGCONTEXT **a3,
        struct DXGALLOCATION **a4,
        struct DXGHWQUEUE **a5)
{
  struct DXGCONTEXT *v5; // rax
  struct _D3DKMT_RENDER *v6; // rdi
  struct DXGHWQUEUE **v7; // r13
  __int64 v9; // r10
  struct DXGPROCESS *Current; // rax
  __int64 v11; // r9
  unsigned __int64 AllocationCount; // rbx
  int v13; // esi
  char *v14; // r14
  unsigned __int64 v15; // rbx
  _BYTE *Pool2; // r12
  signed __int64 v17; // rbx
  struct DXGHWQUEUE **v18; // rsi
  __int64 v19; // r15
  char v20; // si
  int v21; // r13d
  D3DKMT_HANDLE hAllocation; // esi
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // ecx
  struct _EX_RUNDOWN_REF *v29; // rdx
  __int64 v30; // rcx
  struct _SLIST_ENTRY *v31; // rbx
  int v32; // eax
  __int64 v33; // r8
  const EVENT_DESCRIPTOR *v34; // rdx
  __int64 v35; // r9
  struct _SLIST_ENTRY *v36; // r13
  int v37; // eax
  void *pDmaBufferPrivateData; // r8
  __int64 DmaBufferPrivateDataSize; // r9
  int v40; // eax
  __int64 AllocationListSize; // rdx
  void *pDmaBuffer; // rcx
  void *v43; // rdx
  int v44; // eax
  struct DXGHWQUEUE **v45; // rdi
  int v46; // eax
  int v47; // esi
  int v48; // edi
  int v49; // eax
  int v50; // eax
  __int64 *v51; // rcx
  struct DXGHWQUEUE **v52; // rsi
  struct _SLIST_ENTRY *v53; // rcx
  int v54; // eax
  int v55; // edi
  char *v56; // rbx
  int v57; // esi
  __int64 v58; // r15
  struct DXGCONTEXT **v59; // rbx
  __int64 v60; // rdx
  struct _VIDMM_DMA_BUFFER *v61; // rcx
  __int64 v62; // rbx
  char v64; // [rsp+60h] [rbp-A0h]
  char v65; // [rsp+61h] [rbp-9Fh]
  struct _VIDMM_DMA_BUFFER *v66; // [rsp+68h] [rbp-98h] BYREF
  __int64 v67; // [rsp+70h] [rbp-90h]
  int v68; // [rsp+78h] [rbp-88h]
  UINT v69; // [rsp+7Ch] [rbp-84h]
  UINT v70; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v71; // [rsp+88h] [rbp-78h] BYREF
  struct DXGHWQUEUE **v72; // [rsp+90h] [rbp-70h]
  void *v73; // [rsp+98h] [rbp-68h] BYREF
  struct _SLIST_ENTRY *v74[2]; // [rsp+A0h] [rbp-60h] BYREF
  char *v75; // [rsp+B0h] [rbp-50h]
  struct _EX_RUNDOWN_REF *v76; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v77; // [rsp+C0h] [rbp-40h]
  struct _D3DKMT_RENDER *v78; // [rsp+C8h] [rbp-38h]
  __int64 v79; // [rsp+D0h] [rbp-30h]
  _QWORD *v80; // [rsp+D8h] [rbp-28h]
  __int64 v81; // [rsp+E0h] [rbp-20h] BYREF
  LARGE_INTEGER v82; // [rsp+E8h] [rbp-18h] BYREF
  ADAPTER_RENDER *v83; // [rsp+F0h] [rbp-10h]
  struct DXGPROCESS *v84; // [rsp+F8h] [rbp-8h]
  _DXGKARG_RENDERGDI v85; // [rsp+100h] [rbp+0h] BYREF
  struct DXGALLOCATION **v86; // [rsp+150h] [rbp+50h]
  struct COREDEVICEACCESS *v87; // [rsp+158h] [rbp+58h]
  __int64 v88; // [rsp+160h] [rbp+60h]
  signed __int64 v89; // [rsp+168h] [rbp+68h]
  struct DXGHWQUEUE **v90; // [rsp+170h] [rbp+70h]
  struct DXGCONTEXT **v91; // [rsp+178h] [rbp+78h]
  __int64 v92; // [rsp+180h] [rbp+80h]
  _DXGKARG_RENDER v93; // [rsp+190h] [rbp+90h] BYREF
  _BYTE *v94; // [rsp+200h] [rbp+100h]
  _BYTE v95[128]; // [rsp+208h] [rbp+108h] BYREF
  int v96; // [rsp+288h] [rbp+188h]
  PVOID P; // [rsp+290h] [rbp+190h]
  _BYTE v98[128]; // [rsp+298h] [rbp+198h] BYREF
  int v99; // [rsp+318h] [rbp+218h]

  v5 = *a3;
  v6 = a1;
  v7 = a5;
  v78 = a1;
  v86 = a4;
  v9 = *((_QWORD *)v5 + 2);
  v91 = a3;
  v87 = a2;
  v90 = a5;
  v83 = *(ADAPTER_RENDER **)(v9 + 16);
  v67 = *((_QWORD *)v83 + 81);
  v79 = *((_QWORD *)v83 + 78);
  Current = DXGPROCESS::GetCurrent((__int64)v83, (__int64)a2, (__int64)a3, (__int64)a4);
  AllocationCount = v6->AllocationCount;
  v13 = v6->BroadcastContextCount + 1;
  P = 0LL;
  v99 = 0;
  v84 = Current;
  if ( (unsigned int)AllocationCount <= 0x10 )
  {
    P = v98;
    if ( (_DWORD)AllocationCount )
      memset(v98, 0, 8 * AllocationCount);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
      goto LABEL_7;
    P = (PVOID)ExAllocatePool2(256LL, 8 * AllocationCount, 1265072196LL, v11);
  }
  v99 = AllocationCount;
LABEL_7:
  v80 = P;
  if ( !P )
  {
    LODWORD(v14) = -1073741801;
    goto LABEL_113;
  }
  v15 = v6->AllocationCount;
  Pool2 = 0LL;
  v96 = 0;
  v94 = 0LL;
  if ( (unsigned int)v15 <= 0x10 )
  {
    Pool2 = v95;
    v94 = v95;
    if ( (_DWORD)v15 )
    {
      memset(v95, 0, 8 * v15);
      Pool2 = v94;
    }
    goto LABEL_14;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v15 >= 8 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v15, 1265072196LL, v11);
    v94 = Pool2;
LABEL_14:
    v96 = v15;
  }
  if ( !Pool2 )
  {
    LODWORD(v14) = -1073741801;
    goto LABEL_109;
  }
  v14 = 0LL;
  v68 = 0;
  v88 = v13;
  if ( v13 <= 0 )
    goto LABEL_109;
  v75 = 0LL;
  v17 = (char *)a3 - (char *)a5;
  v72 = a5;
  v89 = (char *)a3 - (char *)a5;
  v18 = a5;
LABEL_19:
  v77 = ((*(_DWORD *)&v6->Flags & 8u) << 12) | 0x100LL;
  v93.pCommand = (char *)v6->pNewCommandBuffer + v6->CommandOffset;
  v93.CommandLength = v6->CommandLength;
  memset(&v93.CommandLength + 1, 0, 0x64uLL);
  v19 = *(__int64 *)((char *)v18 + v17);
  v20 = 0;
  v92 = v19;
  if ( (*(_DWORD *)(v19 + 404) & 0x10) != 0 && !v7 )
  {
    WdLogSingleEntry1(2LL, 1195LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Hardware context LDA render is not provided with hardware queue array",
      1195LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v14) = -1073741823;
    goto LABEL_108;
  }
  v21 = 0;
  v69 = *(_DWORD *)(v19 + 400);
  if ( !v6->AllocationCount )
  {
LABEL_47:
    v31 = (struct _SLIST_ENTRY *)v77;
    v73 = 0LL;
    v64 = 0;
    v65 = 1;
    v66 = 0LL;
    while ( 1 )
    {
      v32 = DXGCONTEXT::AcquireDmaBuffer((DXGCONTEXT *)v19, &v66, v87, 0);
      LODWORD(v14) = v32;
      if ( v32 < 0 )
      {
        WdLogSingleEntry2(4LL, v19, v32);
        goto LABEL_102;
      }
      if ( bTracingEnabled )
      {
        if ( (*(_DWORD *)&v6->Flags & 0x20) != 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
            goto LABEL_57;
          v34 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
        }
        else
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
            goto LABEL_57;
          v34 = &EventRender;
        }
        McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v34, v33, v66);
      }
LABEL_57:
      v74[1] = (struct _SLIST_ENTRY *)v83;
      v70 = 0;
      v82.QuadPart = 0LL;
      v71 = 0LL;
      v81 = 0LL;
      v74[0] = 0LL;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v74);
      v36 = v74[0];
      if ( !v74[0] )
      {
        WdLogSingleEntry1(6LL, 1296LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate VidSchSubmitData",
          1296LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v14) = -1073741801;
        goto LABEL_100;
      }
      LOBYTE(v35) = 1;
      v37 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD *, _QWORD, __int64, int, UINT *, LARGE_INTEGER *, unsigned __int64 *, __int64 *, struct _SLIST_ENTRY **, _BYTE *))(*(_QWORD *)(v67 + 8) + 584LL))(
              v66,
              v80,
              v6->AllocationCount,
              v35,
              1,
              &v70,
              &v82,
              &v71,
              &v81,
              &v74[0][12].Next + 1,
              Pool2);
      v14 = (char *)v37;
      if ( v37 < 0 )
        goto LABEL_91;
      v20 = 1;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **))(*(_QWORD *)(v67 + 8) + 520LL))(v66, &v73);
      v77 = (__int64)v73;
      v93.pDmaBuffer = v73;
      v93.DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v67 + 8) + 544LL))(v66);
      v93.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v67 + 8) + 568LL))(v66);
      v69 = v6->AllocationCount;
      v93.AllocationListSize = v69;
      pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v67 + 8)
                                                                                            + 576LL))(v66);
      DmaBufferPrivateDataSize = *(unsigned int *)(v19 + 208);
      v93.DmaBufferSegmentId = v70;
      v93.DmaBufferPhysicalAddress = v82;
      v93.pDmaBufferPrivateData = pDmaBufferPrivateData;
      v93.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
      if ( v64 )
      {
        v40 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v93, (struct DXGCONTEXT *)v19, *v72, v71);
        v14 = (char *)v40;
        if ( v40 == -1071775743 )
        {
          WdLogSingleEntry5(0LL, 275LL, 40LL, v19, 0LL, 0LL);
LABEL_91:
          WdLogSingleEntry2(3LL, v19, v14);
LABEL_100:
          CVidSchSubmitData::~CVidSchSubmitData(v74);
LABEL_102:
          v61 = v66;
          if ( v66 )
          {
            v62 = v67;
            if ( v73 )
            {
              (*(void (**)(void))(*(_QWORD *)(v67 + 8) + 528LL))();
              v61 = v66;
            }
            if ( v20 )
            {
              LOBYTE(v60) = 1;
              (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, __int64))(*(_QWORD *)(v62 + 8) + 592LL))(v61, v60);
              v61 = v66;
            }
            (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(v62 + 8) + 512LL))(v61, 0LL);
          }
          goto LABEL_108;
        }
        if ( v40 < 0 )
          goto LABEL_91;
        AllocationListSize = v93.AllocationListSize;
        DmaBufferPrivateDataSize = v93.DmaBufferPrivateDataSize;
        pDmaBufferPrivateData = v93.pDmaBufferPrivateData;
        pDmaBuffer = v93.pDmaBuffer;
        v64 = 0;
      }
      else
      {
        pDmaBuffer = (void *)v77;
        AllocationListSize = v69;
      }
      if ( v65 )
      {
        v85.pCommand = (char *)v6->pNewCommandBuffer + v6->CommandOffset;
        v85.CommandLength = v6->CommandLength;
        HIDWORD(v85.pAllocationList) = 0;
        *(_OWORD *)((char *)&v85.DmaBufferGpuVirtualAddress + 4) = 0LL;
        v85.AllocationListSize = AllocationListSize;
        v43 = *(void **)(v19 + 184);
        *(&v85.DmaBufferPrivateDataSize + 1) = 0;
        v85.pDmaBufferPrivateData = pDmaBufferPrivateData;
        *(&v85.CommandLength + 1) = 0;
        v85.DmaBufferGpuVirtualAddress = v71;
        v85.DmaSize = v93.DmaSize;
        v85.pAllocationList = v93.pAllocationList;
        v85.pDmaBuffer = pDmaBuffer;
        v85.MultipassOffset = v93.MultipassOffset;
        v85.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
        v44 = ADAPTER_RENDER::DdiRenderGdi(v83, v43, &v85);
        v14 = (char *)v44;
        if ( v44 == -1071775743 )
        {
          v65 = 1;
        }
        else
        {
          if ( v44 < 0 )
            goto LABEL_91;
          v65 = 0;
        }
        v93.pDmaBuffer = v85.pDmaBuffer;
        v93.pDmaBufferPrivateData = v85.pDmaBufferPrivateData;
        v93.MultipassOffset = v85.MultipassOffset;
        if ( (*(_DWORD *)(v19 + 404) & 0x10) != 0 )
        {
          v45 = v72;
          v93.DmaBufferPrivateDataSize = v85.DmaBufferPrivateDataSize;
          v93.DmaSize = v85.DmaSize;
          LODWORD(v14) = DXGHWQUEUE::EnsureKmSubmissionProgressSyncObject(*v72);
          if ( (int)v14 < 0 )
            goto LABEL_100;
          ++*((_QWORD *)*v45 + 12);
          if ( !*(_BYTE *)(v19 + 296) )
          {
            v46 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v93, (struct DXGCONTEXT *)v19, *v45, v71);
            v14 = (char *)v46;
            if ( v46 == -1071775743 )
            {
              v64 = 1;
            }
            else if ( v46 < 0 )
            {
              goto LABEL_91;
            }
          }
        }
      }
      v47 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, __int64, void *, __int64))(*(_QWORD *)(v67 + 8)
                                                                                            + 576LL))(
              v66,
              AllocationListSize,
              pDmaBufferPrivateData,
              DmaBufferPrivateDataSize);
      v48 = LODWORD(v93.pDmaBuffer) - (_DWORD)v73;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v67 + 8) + 528LL))(v66);
      v73 = 0LL;
      v36->Next = v31;
      LODWORD(v36->Next) |= 0x8000000u;
      *((_QWORD *)&v36[2].Next + 1) = v71;
      *((_QWORD *)&v36->Next + 1) = v66;
      v49 = LODWORD(v93.pDmaBufferPrivateData) - v47;
      HIDWORD(v36[3].Next) = v48;
      *((_DWORD *)&v36[4].Next + 3) = v49;
      LODWORD(v36[3].Next) = 0;
      *((_QWORD *)&v36[3].Next + 1) = 0LL;
      v36[4].Next = 0LL;
      *((_DWORD *)&v36[4].Next + 2) = 0;
      if ( v81 )
      {
        v50 = 1;
        v51 = &v81;
      }
      else
      {
        v50 = 0;
        v51 = 0LL;
      }
      *((_QWORD *)&v36[21].Next + 1) = v51;
      LODWORD(v36[22].Next) = v50;
      if ( (*(_DWORD *)(v19 + 404) & 0x10) != 0 )
      {
        v52 = v72;
        v53 = (struct _SLIST_ENTRY *)*((_QWORD *)*v72 + 12);
        *((_DWORD *)&v36[31].Next + 2) = 0;
        v36[31].Next = v53;
        *((_QWORD *)&v36[32].Next + 1) = *(_QWORD *)(*((_QWORD *)*v52 + 11) + 64LL);
        v36[32].Next = *(struct _SLIST_ENTRY **)(*((_QWORD *)*v52 + 11) + 48LL);
        v54 = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *))(*(_QWORD *)(v79 + 8) + 432LL))(
                *((_QWORD *)*v52 + 5),
                v36);
      }
      else
      {
        v54 = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *))(*(_QWORD *)(v79 + 8) + 424LL))(
                *(_QWORD *)(v19 + 256),
                v36);
        v52 = v72;
      }
      v55 = v54;
      if ( v54 < 0 )
      {
        v57 = v68;
        if ( v68 >= 0 )
        {
          v58 = v79;
          v59 = &v91[v68];
          do
          {
            if ( (*((_DWORD *)*v59 + 101) & 0x10) == 0 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v58 + 8) + 440LL))(*((_QWORD *)*v59 + 32), 0LL);
            --v59;
            --v57;
          }
          while ( v57 >= 0 );
          v19 = v92;
        }
        WdLogSingleEntry2(3LL, v19, v55);
        LODWORD(v14) = v55;
        CVidSchSubmitData::~CVidSchSubmitData(v74);
        v20 = 1;
        goto LABEL_102;
      }
      v66 = 0LL;
      CVidSchSubmitData::~CVidSchSubmitData(v74);
      v6 = v78;
      if ( !v64 && !v65 )
      {
        v18 = v52 + 1;
        ++v68;
        v56 = v75 + 1;
        v75 = v56;
        v72 = v18;
        if ( (__int64)v56 >= v88 )
          goto LABEL_108;
        v7 = v90;
        v14 = v56;
        v17 = v89;
        goto LABEL_19;
      }
      v20 = 0;
    }
  }
  while ( 1 )
  {
    v80[v21] = v6->pNewAllocationList[v21];
    *(_QWORD *)&Pool2[8 * v21] = v86[v21];
    if ( !v14 )
      goto LABEL_46;
    v14 = (char *)v84 + 248;
    hAllocation = v6->pNewAllocationList[v21].hAllocation;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v25 = *((_DWORD *)v14 + 6);
        if ( v25 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v23, (const EVENT_DESCRIPTOR *)"g", v24, v25);
      }
      ExAcquirePushLockSharedEx(v14, 0LL);
    }
    v26 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *((_DWORD *)v84 + 74)
      && (v27 = *((_QWORD *)v84 + 35),
          v28 = *(_DWORD *)(v27 + 16 * v26 + 8),
          ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v27 + 16 * v26 + 8) & 0x60))
      && (v28 & 0x2000) == 0
      && (v28 & 0x1F) != 0 )
    {
      if ( (v28 & 0x1F) == 5 )
      {
        v29 = *(struct _EX_RUNDOWN_REF **)(v27 + 16LL * (unsigned int)v26);
        v20 = 0;
        goto LABEL_38;
      }
      WdLogSingleEntry1(2LL, 267LL);
      v20 = 0;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      v20 = 0;
    }
    v29 = 0LL;
LABEL_38:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v76, v29);
    ExReleasePushLockSharedEx(v14, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v14) = -1073741811;
    if ( !v76 )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(v76[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL)
                                                                         + 16LL) )
    {
      WdLogSingleEntry3(2LL, *(_QWORD *)(v19 + 16), v76, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        *(_QWORD *)(v19 + 16),
        (__int64)v76,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_89;
    }
    v30 = *(_QWORD *)(v76[5].Count + 24);
    if ( v30 )
    {
      while ( ((*(_DWORD *)(v30 + 72) >> 12) & 0x3F) != v69 )
      {
        v30 = *(_QWORD *)(v30 + 64);
        if ( !v30 )
          goto LABEL_45;
      }
      LODWORD(v80[v21]) = *(_DWORD *)(v30 + 16);
      *(_QWORD *)&Pool2[8 * v21] = v30;
    }
LABEL_45:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v76);
    v14 = v75;
LABEL_46:
    if ( ++v21 >= v6->AllocationCount )
      goto LABEL_47;
  }
  WdLogSingleEntry1(2LL, 1218LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"The allocation handle is invalid", 1218LL, 0LL, 0LL, 0LL, 0LL);
LABEL_89:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v76);
LABEL_108:
  Pool2 = v94;
LABEL_109:
  if ( Pool2 != v95 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  v94 = 0LL;
  v96 = 0;
LABEL_113:
  if ( P != v98 && P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v14;
}
