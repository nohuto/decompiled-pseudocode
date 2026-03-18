/*
 * XREFs of ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C028A21C
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00F4170 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000A8F8 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0016FF4 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0038290 (McTemplateK0p_EtwWriteTransfer.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C011BAB0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C015D374 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x1C021915C (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1C028AE9C (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
 */

__int64 __fastcall DXGCONTEXT::RenderKmLda(
        struct _D3DKMT_RENDER *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGCONTEXT **a3,
        struct DXGALLOCATION **a4,
        struct DXGHWQUEUE **a5)
{
  struct _D3DKMT_RENDER *v5; // rdi
  struct DXGCONTEXT *v7; // rax
  __int64 v8; // r10
  struct DXGPROCESS *Current; // rax
  unsigned int AllocationCount; // esi
  ULONG BroadcastContextCount; // r15d
  int v12; // r15d
  _BYTE *PoolWithTag; // rax
  char *v14; // r14
  unsigned int v15; // esi
  _BYTE *v16; // r12
  char *v17; // rbx
  struct DXGHWQUEUE **v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // r13
  D3DKMT_HANDLE hAllocation; // esi
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rax
  struct _EX_RUNDOWN_REF *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  struct _SLIST_ENTRY *v38; // rbx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  const EVENT_DESCRIPTOR *v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  struct _SLIST_ENTRY *v48; // r13
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  char v53; // si
  void *pDmaBufferPrivateData; // r8
  __int64 DmaBufferPrivateDataSize; // r9
  int v56; // eax
  __int64 AllocationListSize; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  void *pDmaBuffer; // rcx
  void *v61; // rdx
  int v62; // eax
  bool v63; // zf
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  struct DXGHWQUEUE **v65; // rdi
  int v66; // eax
  int v67; // esi
  int v68; // edi
  int v69; // eax
  int v70; // eax
  struct _SLIST_ENTRY *v71; // rcx
  struct DXGHWQUEUE **v72; // rsi
  int v73; // eax
  __int64 v74; // rdx
  struct DXGCONTEXT *v75; // rcx
  __int64 v76; // r8
  int v77; // edi
  char *v78; // rbx
  __int64 v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rdx
  int v84; // esi
  __int64 v85; // r15
  struct DXGCONTEXT **v86; // rbx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  struct _VIDMM_DMA_BUFFER *v91; // rcx
  __int64 v92; // rbx
  char v94; // [rsp+60h] [rbp-A0h]
  char v95; // [rsp+61h] [rbp-9Fh]
  struct _VIDMM_DMA_BUFFER *v96; // [rsp+68h] [rbp-98h] BYREF
  __int64 v97; // [rsp+70h] [rbp-90h]
  int v98; // [rsp+78h] [rbp-88h]
  UINT v99; // [rsp+7Ch] [rbp-84h]
  struct DXGHWQUEUE **v100; // [rsp+80h] [rbp-80h]
  UINT v101; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v102; // [rsp+90h] [rbp-70h] BYREF
  void *v103; // [rsp+98h] [rbp-68h] BYREF
  struct _SLIST_ENTRY *v104[2]; // [rsp+A0h] [rbp-60h] BYREF
  char *v105; // [rsp+B0h] [rbp-50h]
  struct _EX_RUNDOWN_REF *v106; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v107; // [rsp+C0h] [rbp-40h]
  __int64 v108; // [rsp+C8h] [rbp-38h]
  _QWORD *v109; // [rsp+D0h] [rbp-30h]
  __int64 v110; // [rsp+D8h] [rbp-28h] BYREF
  struct _D3DKMT_RENDER *v111; // [rsp+E0h] [rbp-20h]
  struct DXGHWQUEUE **v112; // [rsp+E8h] [rbp-18h]
  LARGE_INTEGER v113; // [rsp+F0h] [rbp-10h] BYREF
  ADAPTER_RENDER *v114; // [rsp+F8h] [rbp-8h]
  struct DXGPROCESS *v115; // [rsp+100h] [rbp+0h]
  _DXGKARG_RENDERGDI v116; // [rsp+110h] [rbp+10h] BYREF
  struct COREDEVICEACCESS *v117; // [rsp+160h] [rbp+60h]
  __int64 v118; // [rsp+168h] [rbp+68h]
  char *v119; // [rsp+170h] [rbp+70h]
  struct DXGCONTEXT **v120; // [rsp+178h] [rbp+78h]
  __int64 v121; // [rsp+180h] [rbp+80h]
  struct DXGALLOCATION **v122; // [rsp+188h] [rbp+88h]
  _BYTE v123[16]; // [rsp+190h] [rbp+90h] BYREF
  _DXGKARG_RENDER v124; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE *v125; // [rsp+210h] [rbp+110h]
  _BYTE v126[128]; // [rsp+218h] [rbp+118h] BYREF
  unsigned int v127; // [rsp+298h] [rbp+198h]
  PVOID P; // [rsp+2A0h] [rbp+1A0h]
  _BYTE v129[128]; // [rsp+2A8h] [rbp+1A8h] BYREF
  unsigned int v130; // [rsp+328h] [rbp+228h]

  v5 = a1;
  v112 = a5;
  v7 = *a3;
  v111 = a1;
  v122 = a4;
  v120 = a3;
  v8 = *((_QWORD *)v7 + 2);
  v117 = a2;
  v114 = *(ADAPTER_RENDER **)(v8 + 16);
  v97 = *((_QWORD *)v114 + 80);
  v107 = *((_QWORD *)v114 + 77);
  Current = DXGPROCESS::GetCurrent((__int64)v114, (__int64)a2);
  AllocationCount = v5->AllocationCount;
  BroadcastContextCount = v5->BroadcastContextCount;
  P = 0LL;
  v12 = BroadcastContextCount + 1;
  v130 = 0;
  v115 = Current;
  if ( AllocationCount <= 0x10 )
  {
    PoolWithTag = v129;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
      goto LABEL_7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * AllocationCount, 0x4B677844u);
  }
  P = PoolWithTag;
  v130 = AllocationCount;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 8LL * AllocationCount);
LABEL_7:
  v109 = P;
  if ( !P )
  {
    LODWORD(v14) = -1073741801;
    goto LABEL_116;
  }
  v15 = v5->AllocationCount;
  v16 = 0LL;
  v127 = 0;
  v125 = 0LL;
  if ( v15 <= 0x10 )
  {
    v16 = v126;
    v125 = v126;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v15 < 8 )
      goto LABEL_15;
    v16 = ExAllocatePoolWithTag(PagedPool, 8LL * v15, 0x4B677844u);
    v125 = v16;
  }
  v127 = v15;
  if ( !v16 )
  {
LABEL_16:
    LODWORD(v14) = -1073741801;
    goto LABEL_112;
  }
  memset(v16, 0, 8LL * v15);
  v16 = v125;
LABEL_15:
  if ( !v16 )
    goto LABEL_16;
  v14 = 0LL;
  v98 = 0;
  v118 = v12;
  if ( v12 <= 0 )
    goto LABEL_112;
  v17 = (char *)((char *)a3 - (char *)v112);
  v105 = 0LL;
  v119 = (char *)((char *)a3 - (char *)v112);
  v18 = v112;
  v100 = v112;
LABEL_19:
  v108 = ((*(_DWORD *)&v5->Flags & 8u) << 12) | 0x100LL;
  v124.pCommand = (char *)v5->pNewCommandBuffer + v5->CommandOffset;
  v124.CommandLength = v5->CommandLength;
  memset(&v124.CommandLength + 1, 0, 0x64uLL);
  v21 = *(__int64 *)((char *)v18 + (_QWORD)v17);
  v121 = v21;
  if ( (*(_DWORD *)(v21 + 420) & 0x10) != 0 && !v112 )
  {
    v79 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v79 + 24) = 1202LL;
    WdLogEvent5_WdError(v79);
    LODWORD(v14) = -1073741823;
    goto LABEL_111;
  }
  v22 = 0LL;
  v99 = *(_DWORD *)(v21 + 416);
  if ( !v5->AllocationCount )
  {
LABEL_45:
    v103 = 0LL;
    v96 = 0LL;
    v38 = (struct _SLIST_ENTRY *)v108;
    v94 = 0;
    v95 = 1;
    while ( 1 )
    {
      v39 = DXGCONTEXT::AcquireDmaBuffer((DXGCONTEXT *)v21, &v96, v117, 0);
      v14 = (char *)v39;
      if ( v39 < 0 )
      {
        v90 = WdLogNewEntry5_WdEvent(v41, v40);
        *(_QWORD *)(v90 + 24) = v21;
        *(_QWORD *)(v90 + 32) = v14;
        WdLogEvent5_WdEvent(v90);
        goto LABEL_104;
      }
      if ( bTracingEnabled )
      {
        if ( (*(_DWORD *)&v5->Flags & 0x20) != 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_55;
          v43 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
        }
        else
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_55;
          v43 = &EventRender;
        }
        McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v43, v42, v96);
      }
LABEL_55:
      v101 = 0;
      v113.QuadPart = 0LL;
      v102 = 0LL;
      v110 = 0LL;
      v104[0] = 0LL;
      v104[1] = (struct _SLIST_ENTRY *)v114;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v104);
      v48 = v104[0];
      if ( !v104[0] )
      {
        v89 = WdLogNewEntry5_WdLowResource(v45, v44, v46, v47);
        *(_QWORD *)(v89 + 24) = 1303LL;
        WdLogEvent5_WdLowResource(v89);
        LODWORD(v14) = -1073741801;
LABEL_101:
        CVidSchSubmitData::~CVidSchSubmitData(v104);
LABEL_104:
        v53 = 0;
LABEL_105:
        v91 = v96;
        if ( v96 )
        {
          v92 = v97;
          if ( v103 )
          {
            (*(void (**)(void))(*(_QWORD *)(v97 + 8) + 520LL))();
            v91 = v96;
          }
          if ( v53 )
          {
            LOBYTE(v83) = 1;
            (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, __int64))(*(_QWORD *)(v92 + 8) + 584LL))(v91, v83);
            v91 = v96;
          }
          (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(v92 + 8) + 504LL))(v91, 0LL);
        }
        goto LABEL_111;
      }
      LOBYTE(v47) = 1;
      v49 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD *, _QWORD, __int64, int, UINT *, LARGE_INTEGER *, unsigned __int64 *, __int64 *, struct _SLIST_ENTRY *, _BYTE *))(*(_QWORD *)(v97 + 8) + 576LL))(
              v96,
              v109,
              v5->AllocationCount,
              v47,
              1,
              &v101,
              &v113,
              &v102,
              &v110,
              v104[0] + 12,
              v16);
      v14 = (char *)v49;
      if ( v49 < 0 )
      {
        v88 = WdLogNewEntry5_WdWarning(v51, v50, v52);
        *(_QWORD *)(v88 + 24) = v21;
        *(_QWORD *)(v88 + 32) = v14;
        WdLogEvent5_WdWarning(v88);
        goto LABEL_101;
      }
      v53 = 1;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **))(*(_QWORD *)(v97 + 8) + 512LL))(v96, &v103);
      v108 = (__int64)v103;
      v124.pDmaBuffer = v103;
      v124.DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v97 + 8) + 536LL))(v96);
      v124.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v97 + 8) + 560LL))(v96);
      v99 = v5->AllocationCount;
      v124.AllocationListSize = v99;
      pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v97 + 8)
                                                                                            + 568LL))(v96);
      DmaBufferPrivateDataSize = *(unsigned int *)(v21 + 208);
      v124.DmaBufferSegmentId = v101;
      v124.DmaBufferPhysicalAddress = v113;
      v124.pDmaBufferPrivateData = pDmaBufferPrivateData;
      v124.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
      if ( v94 )
      {
        v56 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v124, (struct DXGCONTEXT *)v21, *v100, v102);
        v14 = (char *)v56;
        if ( v56 == -1071775743 )
        {
          v59 = WdLogNewEntry5_WdCriticalError(v58, AllocationListSize);
          *(_QWORD *)(v59 + 24) = 275LL;
          *(_QWORD *)(v59 + 32) = 40LL;
          *(_QWORD *)(v59 + 40) = v21;
          *(_OWORD *)(v59 + 48) = 0LL;
          WdLogEvent5_WdCriticalError(v59);
        }
        if ( (int)v14 < 0 )
        {
LABEL_92:
          v82 = WdLogNewEntry5_WdWarning(v58, AllocationListSize, pDmaBufferPrivateData);
          *(_QWORD *)(v82 + 24) = v21;
          *(_QWORD *)(v82 + 32) = v14;
          WdLogEvent5_WdWarning(v82);
          CVidSchSubmitData::~CVidSchSubmitData(v104);
          goto LABEL_105;
        }
        AllocationListSize = v124.AllocationListSize;
        DmaBufferPrivateDataSize = v124.DmaBufferPrivateDataSize;
        pDmaBufferPrivateData = v124.pDmaBufferPrivateData;
        pDmaBuffer = v124.pDmaBuffer;
        v94 = 0;
      }
      else
      {
        pDmaBuffer = (void *)v108;
        AllocationListSize = v99;
      }
      if ( v95 )
      {
        v116.pCommand = (char *)v5->pNewCommandBuffer + v5->CommandOffset;
        v116.CommandLength = v5->CommandLength;
        HIDWORD(v116.pAllocationList) = 0;
        *(_OWORD *)((char *)&v116.DmaBufferGpuVirtualAddress + 4) = 0LL;
        v116.AllocationListSize = AllocationListSize;
        v61 = *(void **)(v21 + 184);
        *(&v116.DmaBufferPrivateDataSize + 1) = 0;
        v116.pDmaBufferPrivateData = pDmaBufferPrivateData;
        *(&v116.CommandLength + 1) = 0;
        v116.DmaBufferGpuVirtualAddress = v102;
        v116.DmaSize = v124.DmaSize;
        v116.pAllocationList = v124.pAllocationList;
        v116.pDmaBuffer = pDmaBuffer;
        v116.MultipassOffset = v124.MultipassOffset;
        v116.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
        v62 = ADAPTER_RENDER::DdiRenderGdi(v114, v61, &v116);
        v14 = (char *)v62;
        if ( v62 == -1071775743 )
        {
          v95 = 1;
        }
        else
        {
          if ( v62 < 0 )
            goto LABEL_92;
          v95 = 0;
        }
        v124.pDmaBuffer = v116.pDmaBuffer;
        v124.pDmaBufferPrivateData = v116.pDmaBufferPrivateData;
        v124.MultipassOffset = v116.MultipassOffset;
        if ( (*(_DWORD *)(v21 + 420) & 0x10) != 0 )
        {
          v63 = *(_QWORD *)(v21 + 248) == 0LL;
          v124.DmaBufferPrivateDataSize = v116.DmaBufferPrivateDataSize;
          v124.DmaSize = v116.DmaSize;
          if ( v63 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v123,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(v21 + 240) + 32LL) + 32LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v123);
            VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                                 *(DXGSYNCOBJECT **)(*(_QWORD *)(v21 + 240) + 32LL),
                                 *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v21 + 240) + 16LL) + 16LL));
            v65 = v100;
            (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(v107 + 8) + 272LL))(
              *((_QWORD *)*v100 + 5),
              VidSchSyncObject,
              0LL);
            if ( v123[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v123, AllocationListSize);
          }
          else
          {
            v65 = v100;
          }
          ++*(_QWORD *)(v21 + 248);
          if ( !*(_BYTE *)(v21 + 312) )
          {
            v66 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v124, (struct DXGCONTEXT *)v21, *v65, v102);
            v14 = (char *)v66;
            if ( v66 == -1071775743 )
            {
              v94 = 1;
            }
            else if ( v66 < 0 )
            {
              goto LABEL_92;
            }
          }
        }
      }
      v67 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, __int64, void *, __int64))(*(_QWORD *)(v97 + 8)
                                                                                            + 568LL))(
              v96,
              AllocationListSize,
              pDmaBufferPrivateData,
              DmaBufferPrivateDataSize);
      v68 = LODWORD(v124.pDmaBuffer) - (_DWORD)v103;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v97 + 8) + 520LL))(v96);
      v103 = 0LL;
      v48->Next = v38;
      LODWORD(v48->Next) |= 0x8000000u;
      *((_QWORD *)&v48[2].Next + 1) = v102;
      *((_QWORD *)&v48->Next + 1) = v96;
      v69 = LODWORD(v124.pDmaBufferPrivateData) - v67;
      HIDWORD(v48[3].Next) = v68;
      *((_DWORD *)&v48[4].Next + 3) = v69;
      LODWORD(v48[3].Next) = 0;
      *((_QWORD *)&v48[3].Next + 1) = 0LL;
      v48[4].Next = 0LL;
      *((_DWORD *)&v48[4].Next + 2) = 0;
      if ( v110 )
      {
        v70 = 1;
        v71 = (struct _SLIST_ENTRY *)&v110;
      }
      else
      {
        v70 = 0;
        v71 = 0LL;
      }
      v48[21].Next = v71;
      *((_DWORD *)&v48[21].Next + 2) = v70;
      if ( (*(_DWORD *)(v21 + 420) & 0x10) != 0 )
      {
        v72 = v100;
        v48[30].Next = *(struct _SLIST_ENTRY **)(v21 + 248);
        *((_DWORD *)&v48[30].Next + 2) = 0;
        *((_QWORD *)&v48[31].Next + 1) = *(_QWORD *)(*(_QWORD *)(v21 + 240) + 64LL);
        v48[31].Next = *(struct _SLIST_ENTRY **)(*(_QWORD *)(v21 + 240) + 48LL);
        v73 = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *))(*(_QWORD *)(v107 + 8) + 432LL))(
                *((_QWORD *)*v72 + 5),
                v48);
      }
      else
      {
        v73 = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *))(*(_QWORD *)(v107 + 8) + 424LL))(
                *(_QWORD *)(v21 + 272),
                v48);
        v72 = v100;
      }
      v77 = v73;
      if ( v73 < 0 )
      {
        v84 = v98;
        if ( v98 >= 0 )
        {
          v85 = v107;
          v86 = &v120[v98];
          do
          {
            v75 = *v86;
            if ( (*((_DWORD *)*v86 + 105) & 0x10) == 0 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v85 + 8) + 440LL))(*((_QWORD *)v75 + 34), 0LL);
            --v86;
            --v84;
          }
          while ( v84 >= 0 );
          v21 = v121;
        }
        v87 = WdLogNewEntry5_WdWarning(v75, v74, v76);
        *(_QWORD *)(v87 + 32) = v77;
        *(_QWORD *)(v87 + 24) = v21;
        WdLogEvent5_WdWarning(v87);
        LODWORD(v14) = v77;
        CVidSchSubmitData::~CVidSchSubmitData(v104);
        v53 = 1;
        goto LABEL_105;
      }
      v96 = 0LL;
      CVidSchSubmitData::~CVidSchSubmitData(v104);
      v5 = v111;
      if ( !v94 && !v95 )
      {
        v18 = v72 + 1;
        ++v98;
        v78 = v105 + 1;
        v105 = v78;
        v100 = v18;
        if ( (__int64)v78 >= v118 )
          goto LABEL_111;
        v14 = v78;
        v17 = v119;
        goto LABEL_19;
      }
    }
  }
  while ( 1 )
  {
    v109[v22] = v5->pNewAllocationList[v22];
    *(_QWORD *)&v16[8 * v22] = v122[v22];
    if ( !v14 )
      goto LABEL_44;
    v14 = (char *)v115 + 208;
    hAllocation = v5->pNewAllocationList[v22].hAllocation;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v26 = *((_DWORD *)v14 + 6);
        if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, &EventBlockThread, v25, v26);
      }
      ExAcquirePushLockSharedEx(v14, 0LL);
    }
    v27 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v27 >= *((_DWORD *)v115 + 64) )
      goto LABEL_35;
    v28 = *((_QWORD *)v115 + 30);
    v29 = *(_DWORD *)(v28 + 16 * v27 + 8);
    if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60)
      || (v29 & 0x2000) != 0
      || (v29 & 0x1F) == 0 )
    {
      goto LABEL_35;
    }
    v30 = v29 & 0x1F;
    if ( (_BYTE)v30 != 5 )
    {
      v31 = WdLogNewEntry5_WdError(v30, 2LL * (unsigned int)v27);
      *(_QWORD *)(v31 + 24) = 267LL;
      WdLogEvent5_WdError(v31);
LABEL_35:
      v32 = 0LL;
      goto LABEL_36;
    }
    v32 = *(struct _EX_RUNDOWN_REF **)(v28 + 16LL * (unsigned int)v27);
LABEL_36:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v106, v32);
    ExReleasePushLockSharedEx(v14, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v14) = -1073741811;
    if ( !v106 )
      break;
    v35 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
    v36 = *(_QWORD *)(v35 + 16);
    if ( *(_QWORD *)(*(_QWORD *)(v106[1].Count + 16) + 16LL) != v36 )
    {
      v80 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
      v80[3] = *(_QWORD *)(v21 + 16);
      v80[4] = v106;
      v80[5] = -1073741811LL;
      goto LABEL_91;
    }
    v37 = *(_QWORD *)(v106[5].Count + 24);
    if ( v37 )
    {
      do
      {
        if ( ((*(_DWORD *)(v37 + 72) >> 12) & 0x3F) == v99 )
          break;
        v37 = *(_QWORD *)(v37 + 64);
      }
      while ( v37 );
      if ( v37 )
      {
        LODWORD(v109[v22]) = *(_DWORD *)(v37 + 16);
        *(_QWORD *)&v16[8 * v22] = v37;
      }
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v106, v37);
    v14 = v105;
LABEL_44:
    v22 = (unsigned int)(v22 + 1);
    if ( (unsigned int)v22 >= v5->AllocationCount )
      goto LABEL_45;
  }
  v80 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
  v80[3] = 1225LL;
LABEL_91:
  WdLogEvent5_WdError(v80);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v106, v81);
LABEL_111:
  v16 = v125;
LABEL_112:
  if ( v16 != v126 && v16 )
    ExFreePoolWithTag(v16, 0);
  v125 = 0LL;
  v127 = 0;
LABEL_116:
  if ( P != v129 && P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v14;
}
