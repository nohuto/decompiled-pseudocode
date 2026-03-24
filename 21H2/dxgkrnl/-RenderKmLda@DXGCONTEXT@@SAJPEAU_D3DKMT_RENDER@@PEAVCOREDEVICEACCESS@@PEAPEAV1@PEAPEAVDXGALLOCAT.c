/*
 * XREFs of ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C028EC5C
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00EA370 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004534 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017134 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     Feature_253710648__private_IsEnabledDeviceUsage @ 0x1C00260E4 (Feature_253710648__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0039F4C (McTemplateK0p_EtwWriteTransfer.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FF580 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01165B0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0171324 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x1C021D0EC (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0BA@@@QEAA@XZ @ 0x1C028EBB0 (--1-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0BA@@@QEAA@XZ.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1C028F8A0 (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
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
  unsigned int AllocationCount; // r14d
  char *v11; // rsi
  ULONG BroadcastContextCount; // r15d
  int v13; // r15d
  char *PoolWithTag; // rsi
  __int64 v15; // r14
  unsigned int v16; // r14d
  _BYTE *v17; // r13
  _BYTE *v18; // r13
  char *v19; // r15
  struct DXGHWQUEUE **v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // r12
  struct DXGALLOCATION **v25; // rax
  D3DKMT_HANDLE hAllocation; // r14d
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
  ULONG_PTR Count; // r14
  __int64 v38; // rcx
  __int64 v39; // rdx
  struct _SLIST_ENTRY *v40; // rbx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  const EVENT_DESCRIPTOR *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  struct _SLIST_ENTRY *v50; // r12
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  char v55; // si
  void *pDmaBufferPrivateData; // r8
  __int64 DmaBufferPrivateDataSize; // r9
  int v58; // eax
  __int64 AllocationListSize; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  void *pDmaBuffer; // rcx
  void *v63; // rdx
  int v64; // eax
  bool v65; // zf
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  struct DXGHWQUEUE **v67; // rdi
  int v68; // eax
  int v69; // esi
  int v70; // edi
  int v71; // eax
  int v72; // eax
  struct _SLIST_ENTRY *v73; // rcx
  struct DXGHWQUEUE **v74; // rax
  int v75; // eax
  __int64 v76; // rdx
  struct DXGCONTEXT *v77; // rcx
  __int64 v78; // r8
  int v79; // edi
  __int64 v80; // r12
  __int64 v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  int v86; // esi
  __int64 v87; // r15
  struct DXGCONTEXT **v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  struct _VIDMM_DMA_BUFFER *v93; // rcx
  __int64 v94; // rbx
  char v96; // [rsp+60h] [rbp-A0h]
  char v97; // [rsp+61h] [rbp-9Fh]
  bool v98; // [rsp+62h] [rbp-9Eh]
  struct _VIDMM_DMA_BUFFER *v99; // [rsp+68h] [rbp-98h] BYREF
  __int64 v100; // [rsp+70h] [rbp-90h]
  int v101; // [rsp+78h] [rbp-88h]
  UINT v102; // [rsp+7Ch] [rbp-84h]
  struct DXGHWQUEUE **v103; // [rsp+80h] [rbp-80h]
  char *v104; // [rsp+88h] [rbp-78h]
  UINT v105; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v106; // [rsp+98h] [rbp-68h] BYREF
  void *v107; // [rsp+A0h] [rbp-60h] BYREF
  struct _SLIST_ENTRY *v108[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v109; // [rsp+B8h] [rbp-48h]
  struct _EX_RUNDOWN_REF *v110; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v111; // [rsp+C8h] [rbp-38h]
  __int64 v112; // [rsp+D0h] [rbp-30h]
  struct _D3DKMT_RENDER *v113; // [rsp+D8h] [rbp-28h]
  struct DXGPROCESS *v114; // [rsp+E0h] [rbp-20h]
  __int64 v115; // [rsp+E8h] [rbp-18h] BYREF
  LARGE_INTEGER v116; // [rsp+F0h] [rbp-10h] BYREF
  ADAPTER_RENDER *v117; // [rsp+F8h] [rbp-8h]
  struct DXGHWQUEUE **v118; // [rsp+100h] [rbp+0h]
  _DXGKARG_RENDERGDI v119; // [rsp+110h] [rbp+10h] BYREF
  struct DXGALLOCATION **v120; // [rsp+160h] [rbp+60h]
  struct COREDEVICEACCESS *v121; // [rsp+168h] [rbp+68h]
  __int64 v122; // [rsp+170h] [rbp+70h]
  char *v123; // [rsp+178h] [rbp+78h]
  struct DXGCONTEXT **v124; // [rsp+180h] [rbp+80h]
  __int64 v125; // [rsp+188h] [rbp+88h]
  _BYTE v126[16]; // [rsp+190h] [rbp+90h] BYREF
  _DXGKARG_RENDER v127; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v128[16]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE *v129; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v130[128]; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v131; // [rsp+2A8h] [rbp+1A8h]
  char *v132; // [rsp+2B0h] [rbp+1B0h] BYREF
  char v133; // [rsp+2B8h] [rbp+1B8h] BYREF
  unsigned int v134; // [rsp+338h] [rbp+238h]

  v5 = a1;
  v118 = a5;
  v7 = *a3;
  v113 = a1;
  v120 = a4;
  v124 = a3;
  v8 = *((_QWORD *)v7 + 2);
  v121 = a2;
  v117 = *(ADAPTER_RENDER **)(v8 + 16);
  v100 = *((_QWORD *)v117 + 80);
  v111 = *((_QWORD *)v117 + 77);
  Current = DXGPROCESS::GetCurrent((__int64)v117, (__int64)a2);
  AllocationCount = v5->AllocationCount;
  v11 = 0LL;
  BroadcastContextCount = v5->BroadcastContextCount;
  v134 = 0;
  v13 = BroadcastContextCount + 1;
  v114 = Current;
  v104 = 0LL;
  v132 = 0LL;
  if ( AllocationCount <= 0x10 )
  {
    PoolWithTag = &v133;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
      goto LABEL_7;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * AllocationCount, 0x4B677844u);
  }
  v132 = PoolWithTag;
  v104 = PoolWithTag;
  v134 = AllocationCount;
  if ( !PoolWithTag )
  {
LABEL_8:
    LODWORD(v15) = -1073741801;
    goto LABEL_108;
  }
  memset(PoolWithTag, 0, 8LL * AllocationCount);
  v11 = v132;
  v104 = v132;
LABEL_7:
  if ( !v11 )
    goto LABEL_8;
  v16 = v5->AllocationCount;
  v17 = 0LL;
  v131 = 0;
  v129 = 0LL;
  if ( v16 <= 0x10 )
  {
    v18 = v130;
    v129 = v130;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v16 < 8 )
      goto LABEL_15;
    v18 = ExAllocatePoolWithTag(PagedPool, 8LL * v16, 0x4B677844u);
    v129 = v18;
  }
  v131 = v16;
  if ( !v18 )
  {
LABEL_16:
    LODWORD(v15) = -1073741801;
    goto LABEL_107;
  }
  memset(v18, 0, 8LL * v16);
  v17 = v129;
LABEL_15:
  if ( !v17 )
    goto LABEL_16;
  v15 = 0LL;
  v122 = v13;
  v98 = (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() != 0;
  v101 = 0;
  if ( v13 <= 0 )
    goto LABEL_107;
  v19 = (char *)((char *)a3 - (char *)v118);
  v109 = 0LL;
  v123 = (char *)((char *)a3 - (char *)v118);
  v20 = v118;
  v103 = v118;
LABEL_19:
  v112 = ((*(_DWORD *)&v5->Flags & 8u) << 12) | 0x100LL;
  v127.pCommand = (char *)v5->pNewCommandBuffer + v5->CommandOffset;
  v127.CommandLength = v5->CommandLength;
  memset(&v127.CommandLength + 1, 0, 0x64uLL);
  v23 = *(__int64 *)((char *)v20 + (_QWORD)v19);
  v125 = v23;
  if ( (*(_DWORD *)(v23 + 420) & 0x10) != 0 && !v118 )
  {
    v81 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v81 + 24) = 1203LL;
    WdLogEvent5_WdError(v81);
    LODWORD(v15) = -1073741823;
    goto LABEL_107;
  }
  v24 = 0LL;
  v102 = *(_DWORD *)(v23 + 416);
  if ( !v5->AllocationCount )
  {
LABEL_41:
    v107 = 0LL;
    v99 = 0LL;
    v40 = (struct _SLIST_ENTRY *)v112;
    v96 = 0;
    v97 = 1;
    while ( 1 )
    {
      v41 = DXGCONTEXT::AcquireDmaBuffer((DXGCONTEXT *)v23, &v99, v121, 0);
      v15 = v41;
      if ( v41 < 0 )
      {
        v92 = WdLogNewEntry5_WdEvent(v43, v42);
        *(_QWORD *)(v92 + 24) = v23;
        *(_QWORD *)(v92 + 32) = v15;
        WdLogEvent5_WdEvent(v92);
        goto LABEL_100;
      }
      if ( bTracingEnabled )
      {
        if ( (*(_DWORD *)&v5->Flags & 0x20) != 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_51;
          v45 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
        }
        else
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_51;
          v45 = &EventRender;
        }
        McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v45, v44, v99);
      }
LABEL_51:
      v105 = 0;
      v116.QuadPart = 0LL;
      v106 = 0LL;
      v115 = 0LL;
      v108[0] = 0LL;
      v108[1] = (struct _SLIST_ENTRY *)v117;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v108);
      v50 = v108[0];
      if ( !v108[0] )
      {
        v91 = WdLogNewEntry5_WdLowResource(v47, v46, v48, v49);
        *(_QWORD *)(v91 + 24) = 1312LL;
        WdLogEvent5_WdLowResource(v91);
        LODWORD(v15) = -1073741801;
LABEL_97:
        CVidSchSubmitData::~CVidSchSubmitData(v108);
LABEL_100:
        v55 = 0;
LABEL_101:
        v93 = v99;
        if ( v99 )
        {
          v94 = v100;
          if ( v107 )
          {
            (*(void (**)(void))(*(_QWORD *)(v100 + 8) + 520LL))();
            v93 = v99;
          }
          if ( v55 )
          {
            LOBYTE(v85) = 1;
            (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, __int64))(*(_QWORD *)(v94 + 8) + 584LL))(v93, v85);
            v93 = v99;
          }
          (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(v94 + 8) + 504LL))(v93, 0LL);
        }
        goto LABEL_107;
      }
      LOBYTE(v49) = 1;
      v51 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char *, _QWORD, __int64, int, UINT *, LARGE_INTEGER *, unsigned __int64 *, __int64 *, struct _SLIST_ENTRY *, _BYTE *))(*(_QWORD *)(v100 + 8) + 576LL))(
              v99,
              v11,
              v5->AllocationCount,
              v49,
              1,
              &v105,
              &v116,
              &v106,
              &v115,
              v108[0] + 12,
              v17);
      v15 = v51;
      if ( v51 < 0 )
      {
        v90 = WdLogNewEntry5_WdWarning(v53, v52, v54);
        *(_QWORD *)(v90 + 24) = v23;
        *(_QWORD *)(v90 + 32) = v15;
        WdLogEvent5_WdWarning(v90);
        goto LABEL_97;
      }
      v55 = 1;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void **))(*(_QWORD *)(v100 + 8) + 512LL))(v99, &v107);
      v112 = (__int64)v107;
      v127.pDmaBuffer = v107;
      v127.DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v100 + 8) + 536LL))(v99);
      v127.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v100 + 8) + 560LL))(v99);
      v102 = v5->AllocationCount;
      v127.AllocationListSize = v102;
      pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v100 + 8)
                                                                                            + 568LL))(v99);
      DmaBufferPrivateDataSize = *(unsigned int *)(v23 + 208);
      v127.DmaBufferSegmentId = v105;
      v127.DmaBufferPhysicalAddress = v116;
      v127.pDmaBufferPrivateData = pDmaBufferPrivateData;
      v127.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
      if ( v96 )
      {
        v58 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v127, (struct DXGCONTEXT *)v23, *v103, v106);
        v15 = v58;
        if ( v58 == -1071775743 )
        {
          v61 = WdLogNewEntry5_WdCriticalError(v60, AllocationListSize);
          *(_QWORD *)(v61 + 24) = 275LL;
          *(_QWORD *)(v61 + 32) = 40LL;
          *(_QWORD *)(v61 + 40) = v23;
          *(_OWORD *)(v61 + 48) = 0LL;
          WdLogEvent5_WdCriticalError(v61);
        }
        if ( (int)v15 < 0 )
        {
LABEL_88:
          v84 = WdLogNewEntry5_WdWarning(v60, AllocationListSize, pDmaBufferPrivateData);
          *(_QWORD *)(v84 + 24) = v23;
          *(_QWORD *)(v84 + 32) = v15;
          WdLogEvent5_WdWarning(v84);
          CVidSchSubmitData::~CVidSchSubmitData(v108);
          goto LABEL_101;
        }
        AllocationListSize = v127.AllocationListSize;
        DmaBufferPrivateDataSize = v127.DmaBufferPrivateDataSize;
        pDmaBufferPrivateData = v127.pDmaBufferPrivateData;
        pDmaBuffer = v127.pDmaBuffer;
        v96 = 0;
      }
      else
      {
        pDmaBuffer = (void *)v112;
        AllocationListSize = v102;
      }
      if ( v97 )
      {
        v119.pCommand = (char *)v5->pNewCommandBuffer + v5->CommandOffset;
        v119.CommandLength = v5->CommandLength;
        HIDWORD(v119.pAllocationList) = 0;
        *(_OWORD *)((char *)&v119.DmaBufferGpuVirtualAddress + 4) = 0LL;
        v119.AllocationListSize = AllocationListSize;
        v63 = *(void **)(v23 + 184);
        *(&v119.DmaBufferPrivateDataSize + 1) = 0;
        v119.pDmaBufferPrivateData = pDmaBufferPrivateData;
        *(&v119.CommandLength + 1) = 0;
        v119.DmaBufferGpuVirtualAddress = v106;
        v119.DmaSize = v127.DmaSize;
        v119.pAllocationList = v127.pAllocationList;
        v119.pDmaBuffer = pDmaBuffer;
        v119.MultipassOffset = v127.MultipassOffset;
        v119.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
        v64 = ADAPTER_RENDER::DdiRenderGdi(v117, v63, &v119);
        v15 = v64;
        if ( v64 == -1071775743 )
        {
          v97 = 1;
        }
        else
        {
          if ( v64 < 0 )
            goto LABEL_88;
          v97 = 0;
        }
        v127.pDmaBuffer = v119.pDmaBuffer;
        v127.pDmaBufferPrivateData = v119.pDmaBufferPrivateData;
        v127.MultipassOffset = v119.MultipassOffset;
        if ( (*(_DWORD *)(v23 + 420) & 0x10) != 0 )
        {
          v65 = *(_QWORD *)(v23 + 248) == 0LL;
          v127.DmaBufferPrivateDataSize = v119.DmaBufferPrivateDataSize;
          v127.DmaSize = v119.DmaSize;
          if ( v65 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v126,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(v23 + 240) + 32LL) + 32LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v126);
            VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                                 *(DXGSYNCOBJECT **)(*(_QWORD *)(v23 + 240) + 32LL),
                                 *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v23 + 240) + 16LL) + 16LL));
            v67 = v103;
            (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(v111 + 8) + 272LL))(
              *((_QWORD *)*v103 + 5),
              VidSchSyncObject,
              0LL);
            if ( v126[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v126, AllocationListSize);
          }
          else
          {
            v67 = v103;
          }
          ++*(_QWORD *)(v23 + 248);
          if ( !*(_BYTE *)(v23 + 312) )
          {
            v68 = DXGCONTEXT::SignalRenderKmMonitoredFence(&v127, (struct DXGCONTEXT *)v23, *v67, v106);
            v15 = v68;
            if ( v68 == -1071775743 )
            {
              v96 = 1;
            }
            else if ( v68 < 0 )
            {
              goto LABEL_88;
            }
          }
        }
      }
      v69 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, __int64, void *, __int64))(*(_QWORD *)(v100 + 8)
                                                                                            + 568LL))(
              v99,
              AllocationListSize,
              pDmaBufferPrivateData,
              DmaBufferPrivateDataSize);
      v70 = LODWORD(v127.pDmaBuffer) - (_DWORD)v107;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v100 + 8) + 520LL))(v99);
      v107 = 0LL;
      v50->Next = v40;
      LODWORD(v50->Next) |= 0x8000000u;
      *((_QWORD *)&v50[2].Next + 1) = v106;
      *((_QWORD *)&v50->Next + 1) = v99;
      v71 = LODWORD(v127.pDmaBufferPrivateData) - v69;
      HIDWORD(v50[3].Next) = v70;
      *((_DWORD *)&v50[4].Next + 3) = v71;
      LODWORD(v50[3].Next) = 0;
      *((_QWORD *)&v50[3].Next + 1) = 0LL;
      v50[4].Next = 0LL;
      *((_DWORD *)&v50[4].Next + 2) = 0;
      if ( v115 )
      {
        v72 = 1;
        v73 = (struct _SLIST_ENTRY *)&v115;
      }
      else
      {
        v72 = 0;
        v73 = 0LL;
      }
      v50[21].Next = v73;
      *((_DWORD *)&v50[21].Next + 2) = v72;
      if ( (*(_DWORD *)(v23 + 420) & 0x10) != 0 )
      {
        v50[30].Next = *(struct _SLIST_ENTRY **)(v23 + 248);
        *((_DWORD *)&v50[30].Next + 2) = 0;
        *((_QWORD *)&v50[31].Next + 1) = *(_QWORD *)(*(_QWORD *)(v23 + 240) + 64LL);
        v74 = v103;
        v50[31].Next = *(struct _SLIST_ENTRY **)(*(_QWORD *)(v23 + 240) + 48LL);
        v75 = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *))(*(_QWORD *)(v111 + 8) + 432LL))(
                *((_QWORD *)*v74 + 5),
                v50);
      }
      else
      {
        v75 = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *))(*(_QWORD *)(v111 + 8) + 424LL))(
                *(_QWORD *)(v23 + 272),
                v50);
      }
      v79 = v75;
      if ( v75 < 0 )
      {
        v86 = v101;
        if ( v101 >= 0 )
        {
          v87 = v111;
          v88 = &v124[v101];
          do
          {
            v77 = *v88;
            if ( (*((_DWORD *)*v88 + 105) & 0x10) == 0 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v87 + 8) + 440LL))(*((_QWORD *)v77 + 34), 0LL);
            --v88;
            --v86;
          }
          while ( v86 >= 0 );
          v23 = v125;
        }
        v89 = WdLogNewEntry5_WdWarning(v77, v76, v78);
        *(_QWORD *)(v89 + 32) = v79;
        *(_QWORD *)(v89 + 24) = v23;
        WdLogEvent5_WdWarning(v89);
        LODWORD(v15) = v79;
        CVidSchSubmitData::~CVidSchSubmitData(v108);
        v55 = 1;
        goto LABEL_101;
      }
      v99 = 0LL;
      CVidSchSubmitData::~CVidSchSubmitData(v108);
      v5 = v113;
      v11 = v104;
      if ( !v96 && !v97 )
      {
        v80 = v109 + 1;
        ++v101;
        v20 = v103 + 1;
        v109 = v80;
        ++v103;
        if ( v80 >= v122 )
          goto LABEL_107;
        v19 = v123;
        v15 = v80;
        goto LABEL_19;
      }
    }
  }
  while ( 1 )
  {
    v25 = v120;
    *(D3DDDI_ALLOCATIONLIST *)&v11[8 * v24] = v5->pNewAllocationList[v24];
    *(_QWORD *)&v17[8 * v24] = v25[v24];
    if ( !v15 )
      goto LABEL_40;
    hAllocation = v5->pNewAllocationList[v24].hAllocation;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v114 + 208));
    v27 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v27 >= *((_DWORD *)v114 + 64) )
      goto LABEL_29;
    v28 = *((_QWORD *)v114 + 30);
    v29 = *(_DWORD *)(v28 + 16 * v27 + 8);
    if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60)
      || (v29 & 0x2000) != 0
      || (v29 & 0x1F) == 0 )
    {
      goto LABEL_29;
    }
    v30 = v29 & 0x1F;
    if ( (_BYTE)v30 != 5 )
    {
      v31 = WdLogNewEntry5_WdError(v30, 2LL * (unsigned int)v27);
      *(_QWORD *)(v31 + 24) = 316LL;
      WdLogEvent5_WdError(v31);
LABEL_29:
      v32 = 0LL;
      goto LABEL_30;
    }
    v32 = *(struct _EX_RUNDOWN_REF **)(v28 + 16LL * (unsigned int)v27);
LABEL_30:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v110, v32);
    ExReleasePushLockSharedEx((char *)v114 + 208, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v15) = -1073741811;
    if ( !v110 )
      break;
    v35 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL);
    v36 = *(_QWORD *)(v35 + 16);
    if ( *(_QWORD *)(*(_QWORD *)(v110[1].Count + 16) + 16LL) != v36 )
    {
      v82 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
      v82[3] = *(_QWORD *)(v23 + 16);
      v82[4] = v110;
      v82[5] = -1073741811LL;
      goto LABEL_87;
    }
    Count = v110[5].Count;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v128, (struct DXGFASTMUTEX *const)(Count + 80), 0);
    if ( v98 )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v128);
    v38 = *(_QWORD *)(Count + 24);
    if ( v38 )
    {
      do
      {
        if ( ((*(_DWORD *)(v38 + 72) >> 12) & 0x3F) == v102 )
          break;
        v38 = *(_QWORD *)(v38 + 64);
      }
      while ( v38 );
      if ( v38 )
      {
        *(_DWORD *)&v11[8 * v24] = *(_DWORD *)(v38 + 16);
        *(_QWORD *)&v17[8 * v24] = v38;
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v128);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v110, v39);
    v15 = v109;
LABEL_40:
    v24 = (unsigned int)(v24 + 1);
    if ( (unsigned int)v24 >= v5->AllocationCount )
      goto LABEL_41;
  }
  v82 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
  v82[3] = 1226LL;
LABEL_87:
  WdLogEvent5_WdError(v82);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v110, v83);
LABEL_107:
  PagedPoolZeroedArray<DXGALLOCATION *,16>::~PagedPoolZeroedArray<DXGALLOCATION *,16>((__int64)&v129);
LABEL_108:
  PagedPoolZeroedArray<DXGALLOCATION *,16>::~PagedPoolZeroedArray<DXGALLOCATION *,16>((__int64)&v132);
  return (unsigned int)v15;
}
