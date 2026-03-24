/*
 * XREFs of ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B4F68
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006BD00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B74 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0001C48 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001CAC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001D90 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00056B0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007BD0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0012BE8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00178A8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C00233FC (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchGetPagingContext @ 0x1C0034E50 (VidSchGetPagingContext.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C003A3A0 (VidSchSubmitSignalToHwQueue.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00602F0 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C006D860 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C006FD28 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0070480 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0087208 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00898C4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C00BC76C (-BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C00BE8F0 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C00BEA74 (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned __int64 v3; // r15
  VIDMM_GLOBAL *v5; // rsi
  struct VIDMM_PROCESS ***v6; // rax
  int v7; // edi
  struct VIDMM_PROCESS **v8; // r13
  __int64 v9; // rdx
  VIDMM_GLOBAL *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  VIDMM_GLOBAL *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // rdx
  struct _LIST_ENTRY *v20; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // r14
  VIDMM_GLOBAL *v23; // r11
  unsigned int v24; // ecx
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v25; // rsi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  char *v27; // r14
  _QWORD *v28; // r12
  _QWORD *v29; // rsi
  struct VIDMM_MAPPED_VA_RANGE *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  unsigned __int64 v37; // rax
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  char *v42; // r14
  struct _LIST_ENTRY *v43; // rdx
  __int64 p_Blink; // rsi
  struct _LIST_ENTRY *v45; // rcx
  struct _LIST_ENTRY *v46; // r12
  VIDMM_SEGMENT *v47; // rcx
  int v48; // edi
  struct _MDL *FullMDL; // rax
  unsigned __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  _QWORD *v54; // rax
  unsigned __int64 v55; // rax
  bool v56; // zf
  struct VIDMM_MAPPED_VA_RANGE *v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rax
  struct _LIST_ENTRY *v64; // rax
  struct _LIST_ENTRY *v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  _QWORD *v68; // rax
  struct _LIST_ENTRY *v69; // rax
  struct _LIST_ENTRY *v70; // rcx
  struct VIDMM_ALLOC *v71; // r8
  struct _VIDMM_GLOBAL_ALLOC *v72; // r10
  int v73; // eax
  unsigned __int64 AllocationOffsetInBytes; // r9
  __int64 v75; // r11
  VIDMM_SEGMENT *v76; // rcx
  struct _MDL *v77; // rax
  int v78; // eax
  __int64 v79; // r10
  __int64 v80; // rax
  unsigned int v81; // ecx
  char *v82; // r12
  struct VIDMM_MAPPED_VA_RANGE *v83; // rsi
  struct VIDMM_MAPPED_VA_RANGE *v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rcx
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rax
  __int64 v94; // rcx
  _QWORD *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  unsigned int v111; // ebx
  __int64 v112; // rcx
  __int64 v113; // r8
  char v115; // [rsp+50h] [rbp-B0h] BYREF
  char v116; // [rsp+51h] [rbp-AFh] BYREF
  char v117[2]; // [rsp+52h] [rbp-AEh] BYREF
  int v118; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v119; // [rsp+58h] [rbp-A8h]
  struct _LIST_ENTRY *v120; // [rsp+60h] [rbp-A0h] BYREF
  int v121; // [rsp+68h] [rbp-98h]
  unsigned int v122; // [rsp+6Ch] [rbp-94h]
  struct _VIDMM_GLOBAL_ALLOC *v123; // [rsp+70h] [rbp-90h] BYREF
  __int64 v124; // [rsp+78h] [rbp-88h] BYREF
  struct _LIST_ENTRY *v125; // [rsp+80h] [rbp-80h] BYREF
  struct _LIST_ENTRY **p_Flink; // [rsp+88h] [rbp-78h]
  unsigned __int64 v127; // [rsp+90h] [rbp-70h]
  struct VIDMM_ALLOC *v128; // [rsp+98h] [rbp-68h]
  __int64 v129; // [rsp+A0h] [rbp-60h]
  _QWORD *v130; // [rsp+A8h] [rbp-58h] BYREF
  int v131; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v132; // [rsp+B8h] [rbp-48h]
  char v133; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v134; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v135; // [rsp+D0h] [rbp-30h] BYREF
  __int64 PagingContext; // [rsp+D8h] [rbp-28h] BYREF
  char v137[8]; // [rsp+E0h] [rbp-20h] BYREF
  DXGPUSHLOCK *v138; // [rsp+E8h] [rbp-18h]
  int v139; // [rsp+F0h] [rbp-10h]
  unsigned int v141; // [rsp+158h] [rbp+58h] BYREF
  struct VIDMM_ALLOC **v142; // [rsp+160h] [rbp+60h]
  char v143; // [rsp+168h] [rbp+68h]

  v142 = a3;
  v3 = -1LL;
  v5 = this;
  v131 = -1;
  v132 = 0LL;
  if ( (qword_1C0050010 & 2) != 0 )
  {
    v133 = 1;
    v131 = 8011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 8011);
  }
  else
  {
    v133 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v6 = (struct VIDMM_PROCESS ***)*((_QWORD *)a2 + 11);
  v143 = 0;
  v7 = 0;
  v8 = *v6;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v137, *v6 + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v138);
  v139 = 2;
  if ( !*((_QWORD *)a2 + 14) )
  {
    v11 = WdLogNewEntry5_WdEvent(v10, v9);
    WdLogEvent5_WdEvent(v11);
    v7 = -1073741823;
    v143 = 1;
  }
  VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v10, (struct _LIST_ENTRY *)a2 + 8);
  if ( *((_BYTE *)a2 + 176) )
  {
    if ( !*((_QWORD *)a2 + 15) )
    {
      v14 = WdLogNewEntry5_WdEvent(v13, v12);
      WdLogEvent5_WdEvent(v14);
      v7 = -1073741823;
      v143 = 1;
    }
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v13, (struct _LIST_ENTRY *)((char *)a2 + 152));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v137);
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 16LL) + 32LL);
  if ( *(_BYTE *)(v15 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 200), 0, 0) )
    v7 = -1073741823;
  if ( v7 < 0 )
  {
    v24 = v141;
    goto LABEL_130;
  }
  v16 = *((unsigned int *)a2 + 4);
  v17 = 0LL;
  v119 = 0LL;
  v18 = *((_QWORD *)a2 + 14);
  v19 = 5 * v16;
  v124 = 5 * v16;
  v20 = (struct _LIST_ENTRY *)(v18 + 96 + 40 * v16);
  Flink = v20->Flink;
  p_Flink = &v20->Flink;
  if ( Flink == v20 )
  {
    Blink = v20;
  }
  else
  {
    Blink = *(struct _LIST_ENTRY **)(v18 + 8 * v19 + 112);
    if ( !Blink )
      Blink = Flink;
  }
  v23 = this;
  v120 = Blink;
  if ( *((_QWORD *)this + 5123) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      this,
      0,
      v8[12],
      *(struct _VIDSCH_CONTEXT **)a2,
      *((_DWORD *)a2 + 5),
      *((struct _VIDSCH_SYNC_OBJECT **)a2 + 9),
      *((_QWORD *)a2 + 10));
    v23 = this;
  }
  v24 = *((_DWORD *)a2 + 9);
  v118 = v24;
  if ( v24 >= *((_DWORD *)a2 + 5) )
    goto LABEL_129;
  while ( 2 )
  {
    v25 = (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3) + ((unsigned __int64)v24 << 6));
    OperationType = v25->OperationType;
    if ( v25->OperationType && OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
    {
      if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
      {
        if ( *((_QWORD *)v23 + 5123) )
          VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v23, v8[12], *(struct _VIDSCH_CONTEXT **)a2, 0LL, v25);
        v27 = (char *)a2 + 96;
        LOBYTE(v141) = 0;
        v28 = (_QWORD *)*((_QWORD *)a2 + 12);
        v29 = v28 - 1;
        v30 = (struct VIDMM_MAPPED_VA_RANGE *)(v28 - 1);
        if ( (v28[10] & 8) != 0 )
        {
          v7 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v8, v30, v142, 0);
          if ( v7 < 0 )
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31);
            v33[3] = v29[12];
            v33[4] = v29[13];
            v33[5] = 25312LL;
            WdLogEvent5_WdWarning(v33);
          }
          LOBYTE(v141) = 1;
        }
        else
        {
          v7 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                 (__int64)v8,
                 (__int64)v30,
                 0LL,
                 -2,
                 0LL,
                 0LL,
                 2,
                 v142,
                 &v141);
          if ( v7 < 0 )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34);
            v36[3] = v29[12];
            v36[4] = v29[13];
            v36[5] = 25326LL;
            WdLogEvent5_WdWarning(v36);
          }
          if ( !(_BYTE)v141 )
          {
LABEL_38:
            if ( v7 < 0 )
            {
              VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
                (VIDMM_MAPPED_VA_RANGE *)(v28 - 1),
                (struct CVirtualAddressAllocator *)v8);
            }
            else
            {
              v38 = *(__int64 **)v27;
              if ( *(char **)(*(_QWORD *)v27 + 8LL) != v27 || (v39 = *v38, *(__int64 **)(*v38 + 8) != v38) )
LABEL_132:
                __fastfail(3u);
              *(_QWORD *)v27 = v39;
              *(_QWORD *)(v39 + 8) = v27;
              *v28 = 0LL;
              v29[2] = 0LL;
              v7 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                     v8,
                     *((struct VIDMM_VAD **)a2 + 14),
                     *((_DWORD *)a2 + 4),
                     0LL,
                     (struct VIDMM_MAPPED_VA_RANGE *)(v28 - 1));
              if ( v7 >= 0 )
              {
                Blink = *p_Flink;
                v120 = *p_Flink;
                goto LABEL_119;
              }
              v101 = WdLogNewEntry5_WdWarning(v41, v40);
              WdLogEvent5_WdWarning(v101);
              VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
                (VIDMM_MAPPED_VA_RANGE *)(v28 - 1),
                (struct CVirtualAddressAllocator *)v8);
            }
            break;
          }
        }
        v37 = v29[12];
        if ( v3 < v37 )
          v37 = v3;
        v3 = v37;
        if ( v119 <= v29[13] )
          v119 = v29[13];
        goto LABEL_38;
      }
      if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
        goto LABEL_121;
      if ( *((_QWORD *)v23 + 5123) )
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v23, v8[12], *(struct _VIDSCH_CONTEXT **)a2, 0LL, v25);
      v42 = (char *)a2 + 48;
      if ( *(char **)v42 == v42 )
        v7 = CVirtualAddressAllocator::BuildVaRangeList(
               (CVirtualAddressAllocator *)v8,
               *((struct VIDMM_VAD **)a2 + 15),
               *((struct VIDMM_VAD **)a2 + 14),
               *((_DWORD *)a2 + 4),
               (struct _LIST_ENTRY *)a2 + 3,
               v25->Map.BaseAddress,
               v25->Map.BaseAddress + v25->Map.SizeInBytes,
               v25->Unmap.Protection.Value);
      if ( v7 < 0 )
      {
LABEL_77:
        if ( v7 != -1073741267 )
        {
          while ( 1 )
          {
            v69 = *(struct _LIST_ENTRY **)v42;
            if ( *(char **)v42 == v42 )
              break;
            if ( (char *)v69->Blink != v42 )
              goto LABEL_132;
            v70 = v69->Flink;
            if ( v69->Flink->Blink != v69 )
              goto LABEL_132;
            *(_QWORD *)v42 = v70;
            v70->Blink = (struct _LIST_ENTRY *)v42;
            v69->Blink = 0LL;
            v69->Flink = 0LL;
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
              (VIDMM_MAPPED_VA_RANGE *)&v69[-1].Blink,
              (struct CVirtualAddressAllocator *)v8);
          }
        }
        Blink = *p_Flink;
        v120 = *p_Flink;
        goto LABEL_120;
      }
      v125 = *(struct _LIST_ENTRY **)(*((_QWORD *)a2 + 14) + 8 * v124 + 96);
      while ( 1 )
      {
        v43 = *(struct _LIST_ENTRY **)v42;
        v120 = v43;
        if ( v43 == (struct _LIST_ENTRY *)v42 || v7 < 0 )
          goto LABEL_77;
        p_Blink = (__int64)&v43[-1].Blink;
        v45 = v43[3].Flink;
        if ( v45 )
        {
          v46 = v45->Flink->Flink;
          if ( (HIDWORD(v45[1].Blink) & 3) != 2 )
          {
            v17 = v119;
            goto LABEL_72;
          }
          v47 = (VIDMM_SEGMENT *)v46[8].Flink;
          if ( (*((_DWORD *)v47 + 20) & 0x1001) != 0 )
          {
            v48 = 0;
            FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v46, 0LL);
            v50 = *(_QWORD *)(p_Blink + 72);
          }
          else
          {
            v48 = VIDMM_SEGMENT::DriverId(v47);
            FullMDL = 0LL;
            v50 = (unsigned __int64)v46[8].Blink + *(_QWORD *)(p_Blink + 72);
          }
          v51 = HIDWORD(v46[4].Blink) & 0x3F;
          v115 = 0;
          v7 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                 (__int64)v8,
                 p_Blink,
                 v51,
                 v48,
                 v50,
                 (__int64)FullMDL,
                 2,
                 v142,
                 &v115);
          if ( v7 < 0 )
          {
            v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v53, v52);
            v54[3] = *(_QWORD *)(p_Blink + 96);
            v54[4] = *(_QWORD *)(p_Blink + 104);
            v54[5] = 25425LL;
            WdLogEvent5_WdWarning(v54);
          }
          v17 = v119;
          if ( v115 )
            goto LABEL_60;
        }
        else
        {
          v56 = (*(_BYTE *)(p_Blink + 88) & 8) == 0;
          v57 = (struct VIDMM_MAPPED_VA_RANGE *)&v43[-1].Blink;
          v116 = 0;
          if ( !v56 )
          {
            v7 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v8, v57, v142, 0);
            if ( v7 < 0 )
            {
              v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v58);
              v60[3] = *(_QWORD *)(p_Blink + 96);
              v60[4] = *(_QWORD *)(p_Blink + 104);
              v60[5] = 25443LL;
              WdLogEvent5_WdWarning(v60);
            }
LABEL_60:
            v55 = *(_QWORD *)(p_Blink + 96);
            v43 = v120;
            if ( v3 < v55 )
              v55 = v3;
            v3 = v55;
            if ( v17 <= *(_QWORD *)(p_Blink + 104) )
            {
              v17 = *(_QWORD *)(p_Blink + 104);
              v119 = v17;
            }
            goto LABEL_72;
          }
          v7 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                 (__int64)v8,
                 (__int64)v57,
                 0LL,
                 -2,
                 0LL,
                 0LL,
                 2,
                 v142,
                 &v116);
          if ( v7 < 0 )
          {
            v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v62, v61);
            v63[3] = *(_QWORD *)(p_Blink + 96);
            v63[4] = *(_QWORD *)(p_Blink + 104);
            v63[5] = 25458LL;
            WdLogEvent5_WdWarning(v63);
          }
          if ( v116 )
            goto LABEL_60;
        }
        v43 = v120;
LABEL_72:
        if ( v7 >= 0 )
        {
          v64 = *(struct _LIST_ENTRY **)v42;
          if ( *(char **)(*(_QWORD *)v42 + 8LL) != v42 )
            goto LABEL_132;
          v65 = v64->Flink;
          if ( v64->Flink->Blink != v64 )
            goto LABEL_132;
          *(_QWORD *)v42 = v65;
          v65->Blink = (struct _LIST_ENTRY *)v42;
          v43->Flink = 0LL;
          *(_QWORD *)(p_Blink + 16) = 0LL;
          v7 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                 v8,
                 *((struct VIDMM_VAD **)a2 + 14),
                 *((_DWORD *)a2 + 4),
                 &v125,
                 (struct VIDMM_MAPPED_VA_RANGE *)p_Blink);
          if ( v7 < 0 )
          {
            v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v67, v66);
            v68[3] = *(_QWORD *)(p_Blink + 96);
            v68[4] = *(_QWORD *)(p_Blink + 104);
            v68[5] = 25475LL;
            WdLogEvent5_WdWarning(v68);
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
              (VIDMM_MAPPED_VA_RANGE *)p_Blink,
              (struct CVirtualAddressAllocator *)v8);
          }
        }
      }
    }
    v56 = *((_QWORD *)v23 + 5123) == 0LL;
    v71 = *(struct VIDMM_ALLOC **)(*((_QWORD *)a2 + 8) + 8LL * v25->Map.hAllocation);
    v128 = v71;
    v72 = **(struct _VIDMM_GLOBAL_ALLOC ***)v71;
    v123 = v72;
    if ( !v56 )
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v23, v8[12], *(struct _VIDSCH_CONTEXT **)a2, v71, v25);
      v71 = v128;
      v72 = v123;
    }
    v73 = *((_DWORD *)v71 + 7);
    AllocationOffsetInBytes = 0LL;
    v121 = 0;
    v75 = 0LL;
    v129 = 0LL;
    v127 = 0LL;
    if ( (v73 & 3) == 2 )
    {
      v76 = (VIDMM_SEGMENT *)*((_QWORD *)v72 + 16);
      if ( (*((_DWORD *)v76 + 20) & 0x1001) != 0 )
      {
        v121 = 0;
        v77 = VidMmGetFullMDL(v72, 0LL);
        AllocationOffsetInBytes = v25->Map.AllocationOffsetInBytes;
        v75 = (__int64)v77;
        v71 = v128;
        v129 = (__int64)v77;
      }
      else
      {
        v78 = VIDMM_SEGMENT::DriverId(v76);
        AllocationOffsetInBytes = v25->Map.AllocationOffsetInBytes + *(_QWORD *)(v79 + 136);
        v121 = v78;
        v129 = v75;
      }
      v127 = AllocationOffsetInBytes;
    }
    if ( (*((_BYTE *)this + 40937) & 4) != 0 )
      v80 = 1LL;
    else
      v80 = v25->Map.SizeInBytes / v25->Map.AllocationSizeInBytes;
    v81 = *((_DWORD *)a2 + 10);
    v125 = (struct _LIST_ENTRY *)v80;
    v122 = v81;
    if ( v81 >= (unsigned int)v80 )
      goto LABEL_120;
    v82 = (char *)a2 + 96;
    while ( 1 )
    {
      v130 = *(_QWORD **)v82;
      v83 = (struct VIDMM_MAPPED_VA_RANGE *)(v130 - 1);
      v84 = (struct VIDMM_MAPPED_VA_RANGE *)(v130 - 1);
      if ( (*((_DWORD *)v71 + 7) & 3) == 2 )
        break;
      v7 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v8, v84, v142, 0);
      v87 = *((_QWORD *)v83 + 12);
      if ( v3 < v87 )
        v87 = v3;
      v3 = v87;
      v88 = *((_QWORD *)v83 + 13);
      if ( v119 > v88 )
        v88 = v119;
      v119 = v88;
      if ( v7 < 0 )
      {
        v89 = WdLogNewEntry5_WdWarning(v86, v85);
        *(_QWORD *)(v89 + 24) = *((_QWORD *)v83 + 12);
        *(_QWORD *)(v89 + 32) = *((_QWORD *)v83 + 13);
        WdLogEvent5_WdWarning(v89);
        v17 = v119;
        goto LABEL_120;
      }
LABEL_108:
      if ( *p_Flink != (struct _LIST_ENTRY *)p_Flink )
      {
        if ( (struct _LIST_ENTRY *)*((_QWORD *)v83 + 12) < Blink[5].Blink )
          Blink = *p_Flink;
        v120 = Blink;
      }
      v93 = *(_QWORD *)v82;
      if ( *(char **)(*(_QWORD *)v82 + 8LL) != v82 )
        goto LABEL_132;
      v94 = *(_QWORD *)v93;
      if ( *(_QWORD *)(*(_QWORD *)v93 + 8LL) != v93 )
        goto LABEL_132;
      v95 = v130;
      *(_QWORD *)v82 = v94;
      *(_QWORD *)(v94 + 8) = v82;
      *((_QWORD *)v83 + 2) = 0LL;
      *v95 = 0LL;
      v7 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
             v8,
             *((struct VIDMM_VAD **)a2 + 14),
             *((_DWORD *)a2 + 4),
             &v120,
             v83);
      if ( v7 < 0 )
      {
        v99 = WdLogNewEntry5_WdWarning(v97, v96);
        WdLogEvent5_WdWarning(v99);
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v83, (struct CVirtualAddressAllocator *)v8);
        Blink = v120;
        goto LABEL_119;
      }
      Blink = v120->Blink;
      v98 = *((_QWORD *)a2 + 14);
      v120 = Blink;
      *(_QWORD *)(v98 + 8 * v124 + 112) = Blink;
      if ( ++v122 >= (unsigned int)v125 )
        goto LABEL_119;
      AllocationOffsetInBytes = v127;
      v71 = v128;
      v75 = v129;
    }
    v117[0] = 0;
    v7 = CVirtualAddressAllocator::CommitVirtualAddressRange(
           (__int64)v8,
           (__int64)v84,
           *((_DWORD *)v123 + 19) & 0x3F,
           v121,
           AllocationOffsetInBytes,
           v75,
           2,
           v142,
           v117);
    if ( v117[0] )
    {
      v92 = *((_QWORD *)v83 + 12);
      if ( v3 < v92 )
        v92 = v3;
      v3 = v92;
      if ( v119 <= *((_QWORD *)v83 + 13) )
        v119 = *((_QWORD *)v83 + 13);
    }
    if ( v7 >= 0 )
      goto LABEL_108;
    v100 = (_QWORD *)WdLogNewEntry5_WdWarning(v91, v90);
    v100[3] = *((_QWORD *)v83 + 12);
    v100[4] = *((_QWORD *)v83 + 13);
    v100[5] = 25249LL;
    WdLogEvent5_WdWarning(v100);
LABEL_119:
    v17 = v119;
LABEL_120:
    v24 = v118;
LABEL_121:
    if ( v7 >= 0 )
    {
      *((_DWORD *)a2 + 10) = 0;
      v118 = ++v24;
      if ( v24 < *((_DWORD *)a2 + 5) )
      {
        v23 = this;
        continue;
      }
    }
    break;
  }
  if ( v3 < v119 )
    CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)v8, *((_DWORD *)a2 + 4), v3, v119);
  v24 = v118;
LABEL_129:
  v5 = this;
LABEL_130:
  if ( v7 == -1073741267 )
  {
    *((_DWORD *)a2 + 9) = v24;
    goto LABEL_143;
  }
  if ( *((_QWORD *)a2 + 9) )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v5, *((_DWORD *)a2 + 4), 0, 0LL, 0LL, 0, 0);
    v102 = *((unsigned int *)a2 + 4);
    v103 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 624LL);
    v123 = *(struct _VIDMM_GLOBAL_ALLOC **)(*(_QWORD *)(v103 + 272) + 8 * v102);
    if ( v123 )
    {
      v124 = *((_QWORD *)a2 + 9);
      v130 = (_QWORD *)*((_QWORD *)a2 + 10);
      if ( (int)VidSchSubmitSignalToHwQueue(
                  1u,
                  (__int64)&v123,
                  1u,
                  (__int64)&v124,
                  0x80000000,
                  (unsigned __int64 *)&v130) < 0 )
      {
        v107 = WdLogNewEntry5_WdAssertion(v105, v104, v106);
        *(_QWORD *)(v107 + 24) = 25563LL;
        goto LABEL_141;
      }
    }
    else
    {
      PagingContext = VidSchGetPagingContext(v103, v102);
      v135 = *((_QWORD *)a2 + 9);
      v134 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSignalSyncObjectsFromGpu(0LL, 0LL, 1LL, &PagingContext, 1u, (__int64)&v135, 0x80000000, &v134) < 0 )
      {
        v107 = WdLogNewEntry5_WdAssertion(v109, v108, v110);
        *(_QWORD *)(v107 + 24) = 25591LL;
LABEL_141:
        WdLogEvent5_WdAssertion(v107);
      }
    }
  }
  VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(a2);
LABEL_143:
  v111 = 0;
  if ( !v143 )
    v111 = v7;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v131);
  if ( v133 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v112, &EventProfilerExit, v113, v131);
  return v111;
}
