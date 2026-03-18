/*
 * XREFs of ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B61D0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066220 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001194 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001D40 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007440 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0012368 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015C74 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0015C98 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C0022FFC (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0023B48 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E00 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchGetPagingContext @ 0x1C0034EA0 (VidSchGetPagingContext.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C003A400 (VidSchSubmitSignalToHwQueue.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067E30 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C006F908 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0071174 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C00718C8 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0086880 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C00BDB6C (-BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C00BFCA0 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C00BFE24 (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        char *P,
        struct VIDMM_ALLOC **a3)
{
  unsigned __int64 v3; // r15
  VIDMM_GLOBAL *v5; // r12
  struct _KTHREAD ***v6; // rax
  int v7; // edi
  struct _KTHREAD **v8; // r13
  __int64 v9; // rdx
  VIDMM_GLOBAL *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  VIDMM_GLOBAL *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r14
  unsigned __int64 v17; // rdx
  struct _LIST_ENTRY *v18; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // r14
  unsigned int v21; // ecx
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v22; // rsi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  char *v24; // r14
  _QWORD *v25; // r12
  _QWORD *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  unsigned __int64 v33; // rax
  __int64 *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  char *v38; // r14
  _QWORD *v39; // r12
  _QWORD *v40; // rsi
  __int64 **v41; // rcx
  __int64 v42; // r13
  VIDMM_SEGMENT *v43; // rcx
  int v44; // edi
  struct _MDL *v45; // rax
  unsigned __int64 v46; // rcx
  int v47; // r8d
  __int64 v48; // rdx
  __int64 v49; // rcx
  _QWORD *v50; // rax
  bool v51; // zf
  unsigned __int64 v52; // rax
  struct VIDMM_MAPPED_VA_RANGE *v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rcx
  struct VIDMM_ALLOC *v67; // r8
  struct _VIDMM_GLOBAL_ALLOC *v68; // r10
  __int64 v69; // r11
  char v70; // al
  unsigned __int64 AllocationOffsetInBytes; // r9
  VIDMM_SEGMENT *v72; // rcx
  struct _MDL *FullMDL; // rax
  int v74; // eax
  __int64 v75; // r10
  __int64 v76; // rax
  unsigned int v77; // ecx
  char *v78; // r12
  struct VIDMM_MAPPED_VA_RANGE *v79; // rsi
  struct VIDMM_MAPPED_VA_RANGE *v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rcx
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  unsigned __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // rcx
  _QWORD *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  unsigned int v106; // ebx
  __int64 v107; // rcx
  __int64 v108; // r8
  char v110; // [rsp+50h] [rbp-B0h] BYREF
  char v111; // [rsp+51h] [rbp-AFh] BYREF
  char v112[2]; // [rsp+52h] [rbp-AEh] BYREF
  unsigned int v113; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v114; // [rsp+58h] [rbp-A8h]
  int v115; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY v116; // [rsp+68h] [rbp-98h] BYREF
  struct _LIST_ENTRY v117; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v118; // [rsp+88h] [rbp-78h]
  struct VIDMM_ALLOC *v119; // [rsp+90h] [rbp-70h]
  __int64 v120; // [rsp+98h] [rbp-68h]
  __int64 v121; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v122; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v123; // [rsp+B0h] [rbp-50h] BYREF
  CVirtualAddressAllocator *v124; // [rsp+B8h] [rbp-48h]
  struct _VIDMM_GLOBAL_ALLOC *v125; // [rsp+C0h] [rbp-40h]
  int v126; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v127; // [rsp+D0h] [rbp-30h]
  char v128; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v129; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v130; // [rsp+E8h] [rbp-18h] BYREF
  __int64 PagingContext; // [rsp+F0h] [rbp-10h] BYREF
  char v132[8]; // [rsp+F8h] [rbp-8h] BYREF
  DXGPUSHLOCK *v133; // [rsp+100h] [rbp+0h]
  int v134; // [rsp+108h] [rbp+8h]
  unsigned int v136; // [rsp+168h] [rbp+68h] BYREF
  struct VIDMM_ALLOC **v137; // [rsp+170h] [rbp+70h]
  char v138; // [rsp+178h] [rbp+78h]

  v137 = a3;
  v3 = -1LL;
  v5 = this;
  v126 = -1;
  v127 = 0LL;
  if ( (qword_1C0051010 & 2) != 0 )
  {
    v128 = 1;
    v126 = 8011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 8011);
  }
  else
  {
    v128 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v6 = (struct _KTHREAD ***)*((_QWORD *)P + 11);
  v138 = 0;
  v7 = 0;
  v8 = *v6;
  v124 = (CVirtualAddressAllocator *)v8;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v132, v8 + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v133);
  v134 = 2;
  if ( !*((_QWORD *)P + 14) )
  {
    v11 = WdLogNewEntry5_WdEvent(v10, v9);
    WdLogEvent5_WdEvent(v11);
    v7 = -1073741823;
    v138 = 1;
  }
  VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v10, (struct _LIST_ENTRY *)P + 8);
  if ( P[176] )
  {
    if ( !*((_QWORD *)P + 15) )
    {
      v14 = WdLogNewEntry5_WdEvent(v13, v12);
      WdLogEvent5_WdEvent(v14);
      v7 = -1073741823;
      v138 = 1;
    }
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v13, (struct _LIST_ENTRY *)(P + 152));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v132);
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 11) + 16LL) + 32LL);
  if ( *(_BYTE *)(v15 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 200), 0, 0) )
    v7 = -1073741823;
  if ( v7 < 0 )
  {
    v21 = v136;
    goto LABEL_127;
  }
  v16 = *((_QWORD *)P + 14);
  v17 = *((unsigned int *)P + 4);
  v123 = v17;
  v114 = 0LL;
  v121 = 3 * (v17 + 4);
  v18 = (struct _LIST_ENTRY *)(v16 + 24 * (v17 + 4));
  Flink = v18->Flink;
  v117.Blink = v18;
  if ( Flink == v18 )
  {
    Blink = (struct _LIST_ENTRY *)(v16 + 24 * (v123 + 4));
  }
  else
  {
    Blink = *(struct _LIST_ENTRY **)(v16 + 24 * v17 + 112);
    if ( !Blink )
      Blink = Flink;
  }
  v116.Flink = Blink;
  if ( *((_QWORD *)v5 + 5123) )
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      v5,
      0,
      v8[12],
      *(struct _VIDSCH_CONTEXT **)P,
      *((_DWORD *)P + 5),
      *((struct _VIDSCH_SYNC_OBJECT **)P + 9),
      *((_QWORD *)P + 10));
  v21 = *((_DWORD *)P + 9);
  v113 = v21;
  if ( v21 < *((_DWORD *)P + 5) )
  {
    while ( 1 )
    {
      v22 = (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)P + 3) + ((unsigned __int64)v21 << 6));
      OperationType = v22->OperationType;
      if ( v22->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
        || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
      {
        v67 = *(struct VIDMM_ALLOC **)(*((_QWORD *)P + 8) + 8LL * v22->Map.hAllocation);
        v119 = v67;
        v68 = **(struct _VIDMM_GLOBAL_ALLOC ***)v67;
        v125 = v68;
        if ( *((_QWORD *)v5 + 5123) )
        {
          VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v5, v8[12], *(struct _VIDSCH_CONTEXT **)P, v67, v22);
          v67 = v119;
          v68 = v125;
        }
        v69 = 0LL;
        v70 = *((_DWORD *)v67 + 7) & 3;
        v120 = 0LL;
        v118 = 0LL;
        AllocationOffsetInBytes = 0LL;
        v115 = 0;
        if ( v70 == 2 )
        {
          v72 = (VIDMM_SEGMENT *)*((_QWORD *)v68 + 16);
          if ( (*((_DWORD *)v72 + 20) & 0x1001) != 0 )
          {
            v115 = 0;
            FullMDL = VidMmGetFullMDL(v68, 0LL);
            AllocationOffsetInBytes = v22->Map.AllocationOffsetInBytes;
            v69 = (__int64)FullMDL;
            v67 = v119;
          }
          else
          {
            v74 = VIDMM_SEGMENT::DriverId(v72);
            AllocationOffsetInBytes = v22->Map.AllocationOffsetInBytes + *(_QWORD *)(v75 + 136);
            v115 = v74;
          }
          v118 = AllocationOffsetInBytes;
          v120 = v69;
        }
        if ( (*((_BYTE *)v5 + 40937) & 4) != 0 )
          v76 = 1LL;
        else
          v76 = v22->Map.SizeInBytes / v22->Map.AllocationSizeInBytes;
        v77 = *((_DWORD *)P + 10);
        v117.Flink = (struct _LIST_ENTRY *)v76;
        LODWORD(v116.Blink) = v77;
        if ( v77 < (unsigned int)v76 )
        {
          v78 = P + 96;
          while ( 1 )
          {
            v122 = *(_QWORD **)v78;
            v79 = (struct VIDMM_MAPPED_VA_RANGE *)(v122 - 1);
            v80 = (struct VIDMM_MAPPED_VA_RANGE *)(v122 - 1);
            if ( (*((_DWORD *)v67 + 7) & 3) == 2 )
            {
              v112[0] = 0;
              v7 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                     (__int64)v8,
                     (__int64)v80,
                     *((_DWORD *)v125 + 19) & 0x3F,
                     v115,
                     AllocationOffsetInBytes,
                     v69,
                     2,
                     v137,
                     v112);
              if ( v112[0] )
              {
                v88 = *((_QWORD *)v79 + 12);
                if ( v3 < v88 )
                  v88 = v3;
                v3 = v88;
                if ( v114 <= *((_QWORD *)v79 + 13) )
                  v114 = *((_QWORD *)v79 + 13);
              }
              if ( v7 < 0 )
              {
                v95 = (_QWORD *)WdLogNewEntry5_WdWarning(v87, v86);
                v95[3] = *((_QWORD *)v79 + 12);
                v95[4] = *((_QWORD *)v79 + 13);
                v95[5] = 24828LL;
                WdLogEvent5_WdWarning(v95);
                break;
              }
            }
            else
            {
              v7 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v8, v80, v137, 0);
              v83 = *((_QWORD *)v79 + 12);
              if ( v3 < v83 )
                v83 = v3;
              v3 = v83;
              v84 = *((_QWORD *)v79 + 13);
              if ( v114 > v84 )
                v84 = v114;
              v114 = v84;
              if ( v7 < 0 )
              {
                v85 = WdLogNewEntry5_WdWarning(v82, v81);
                *(_QWORD *)(v85 + 24) = *((_QWORD *)v79 + 12);
                *(_QWORD *)(v85 + 32) = *((_QWORD *)v79 + 13);
                WdLogEvent5_WdWarning(v85);
                break;
              }
            }
            if ( v117.Blink->Flink != v117.Blink )
            {
              if ( (struct _LIST_ENTRY *)*((_QWORD *)v79 + 12) < Blink[5].Blink )
                Blink = v117.Blink->Flink;
              v116.Flink = Blink;
            }
            v89 = *(_QWORD **)v78;
            if ( *(char **)(*(_QWORD *)v78 + 8LL) != v78 )
              goto LABEL_129;
            v90 = *v89;
            if ( *(_QWORD **)(*v89 + 8LL) != v89 )
              goto LABEL_129;
            v91 = v122;
            *(_QWORD *)v78 = v90;
            *(_QWORD *)(v90 + 8) = v78;
            *((_QWORD *)v79 + 2) = 0LL;
            *v91 = 0LL;
            v7 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                   v8,
                   *((struct VIDMM_VAD **)P + 14),
                   *((_DWORD *)P + 4),
                   &v116,
                   v79);
            if ( v7 < 0 )
            {
              v94 = WdLogNewEntry5_WdWarning(v93, v92);
              WdLogEvent5_WdWarning(v94);
              VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v79);
              Blink = v116.Flink;
              break;
            }
            Blink = v116.Flink->Blink;
            v116.Flink = Blink;
            *(_QWORD *)(*((_QWORD *)P + 14) + 24 * v123 + 112) = Blink;
            if ( ++LODWORD(v116.Blink) >= LODWORD(v117.Flink) )
              break;
            AllocationOffsetInBytes = v118;
            v67 = v119;
            v69 = v120;
          }
        }
LABEL_118:
        v21 = v113;
      }
      else
      {
        if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
        {
          if ( *((_QWORD *)v5 + 5123) )
            VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v5, v8[12], *(struct _VIDSCH_CONTEXT **)P, 0LL, v22);
          v24 = P + 96;
          LOBYTE(v136) = 0;
          v25 = (_QWORD *)*((_QWORD *)P + 12);
          v26 = v25 - 1;
          if ( (v25[10] & 8) != 0 )
          {
            v7 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
                   (CVirtualAddressAllocator *)v8,
                   (struct VIDMM_MAPPED_VA_RANGE *)(v25 - 1),
                   v137,
                   0);
            if ( v7 < 0 )
            {
              v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27);
              v29[3] = v26[12];
              v29[4] = v26[13];
              v29[5] = 24891LL;
              WdLogEvent5_WdWarning(v29);
            }
            LOBYTE(v136) = 1;
            goto LABEL_34;
          }
          v7 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                 (__int64)v8,
                 (__int64)(v25 - 1),
                 0LL,
                 -2,
                 0LL,
                 0LL,
                 2,
                 v137,
                 &v136);
          if ( v7 < 0 )
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30);
            v32[3] = v26[12];
            v32[4] = v26[13];
            v32[5] = 24905LL;
            WdLogEvent5_WdWarning(v32);
          }
          if ( (_BYTE)v136 )
          {
LABEL_34:
            v33 = v26[12];
            if ( v3 < v33 )
              v33 = v3;
            v3 = v33;
            if ( v114 <= v26[13] )
              v114 = v26[13];
          }
          if ( v7 >= 0 )
          {
            v34 = *(__int64 **)v24;
            if ( *(char **)(*(_QWORD *)v24 + 8LL) != v24 || (v35 = *v34, *(__int64 **)(*v34 + 8) != v34) )
LABEL_129:
              __fastfail(3u);
            *(_QWORD *)v24 = v35;
            *(_QWORD *)(v35 + 8) = v24;
            *v25 = 0LL;
            v26[2] = 0LL;
            v7 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                   v8,
                   *((struct VIDMM_VAD **)P + 14),
                   *((_DWORD *)P + 4),
                   0LL,
                   (struct VIDMM_MAPPED_VA_RANGE *)(v25 - 1));
            if ( v7 >= 0 )
              goto LABEL_42;
            v96 = WdLogNewEntry5_WdWarning(v37, v36);
            WdLogEvent5_WdWarning(v96);
          }
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(v25 - 1));
LABEL_124:
          if ( v3 < v114 )
            CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)v8, *((_DWORD *)P + 4), v3, v114);
          v21 = v113;
          v5 = this;
          break;
        }
        if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
        {
          if ( *((_QWORD *)v5 + 5123) )
            VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v5, v8[12], *(struct _VIDSCH_CONTEXT **)P, 0LL, v22);
          v38 = P + 48;
          if ( *(char **)v38 == v38 )
            v7 = CVirtualAddressAllocator::BuildVaRangeList(
                   (CVirtualAddressAllocator *)v8,
                   *((struct VIDMM_VAD **)P + 15),
                   *((struct VIDMM_VAD **)P + 14),
                   *((_DWORD *)P + 4),
                   (struct _LIST_ENTRY *)P + 3,
                   v22->Map.BaseAddress,
                   v22->Map.BaseAddress + v22->Map.SizeInBytes,
                   v22->Unmap.Protection.Value);
          if ( v7 < 0 )
          {
LABEL_77:
            if ( v7 != -1073741267 )
            {
              while ( 1 )
              {
                v65 = *(_QWORD **)v38;
                if ( *(char **)v38 == v38 )
                  break;
                if ( (char *)v65[1] != v38 )
                  goto LABEL_129;
                v66 = *v65;
                if ( *(_QWORD **)(*v65 + 8LL) != v65 )
                  goto LABEL_129;
                *(_QWORD *)v38 = v66;
                *(_QWORD *)(v66 + 8) = v38;
                v65[1] = 0LL;
                *v65 = 0LL;
                VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(v65 - 1));
              }
            }
LABEL_42:
            Blink = v117.Blink->Flink;
            v116.Flink = v117.Blink->Flink;
            goto LABEL_118;
          }
          v117.Flink = *(struct _LIST_ENTRY **)(*((_QWORD *)P + 14) + 8 * v121);
          while ( 2 )
          {
            v39 = *(_QWORD **)v38;
            if ( *(char **)v38 == v38 || v7 < 0 )
              goto LABEL_77;
            v40 = v39 - 1;
            v41 = (__int64 **)v39[6];
            if ( v41 )
            {
              v42 = **v41;
              if ( (*((_DWORD *)v41 + 7) & 3) == 2 )
              {
                v43 = *(VIDMM_SEGMENT **)(v42 + 128);
                if ( (*((_DWORD *)v43 + 20) & 0x1001) != 0 )
                {
                  v44 = 0;
                  v45 = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v42, 0LL);
                  v46 = v40[9];
                }
                else
                {
                  v44 = VIDMM_SEGMENT::DriverId(v43);
                  v45 = 0LL;
                  v46 = v40[9] + *(_QWORD *)(v42 + 136);
                }
                v47 = *(_DWORD *)(v42 + 76);
                v8 = (struct _KTHREAD **)v124;
                v110 = 0;
                v7 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                       (__int64)v124,
                       (__int64)(v39 - 1),
                       v47 & 0x3F,
                       v44,
                       v46,
                       (__int64)v45,
                       2,
                       v137,
                       &v110);
                if ( v7 < 0 )
                {
                  v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v49, v48);
                  v50[3] = v40[12];
                  v50[4] = v40[13];
                  v50[5] = 25004LL;
                  WdLogEvent5_WdWarning(v50);
                }
                v51 = v110 == 0;
                goto LABEL_60;
              }
              v8 = (struct _KTHREAD **)v124;
LABEL_72:
              if ( v7 >= 0 )
              {
                v60 = *(_QWORD **)v38;
                if ( *(char **)(*(_QWORD *)v38 + 8LL) != v38 )
                  goto LABEL_129;
                v61 = *v60;
                if ( *(_QWORD **)(*v60 + 8LL) != v60 )
                  goto LABEL_129;
                *(_QWORD *)v38 = v61;
                *(_QWORD *)(v61 + 8) = v38;
                *v39 = 0LL;
                v40[2] = 0LL;
                v7 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                       v8,
                       *((struct VIDMM_VAD **)P + 14),
                       *((_DWORD *)P + 4),
                       &v117,
                       (struct VIDMM_MAPPED_VA_RANGE *)(v39 - 1));
                if ( v7 < 0 )
                {
                  v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v63, v62);
                  v64[3] = v40[12];
                  v64[4] = v40[13];
                  v64[5] = 25054LL;
                  WdLogEvent5_WdWarning(v64);
                  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(v39 - 1));
                }
              }
              continue;
            }
            break;
          }
          v51 = (v40[11] & 8) == 0;
          v53 = (struct VIDMM_MAPPED_VA_RANGE *)(v39 - 1);
          v111 = 0;
          if ( v51 )
          {
            v7 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                   (__int64)v8,
                   (__int64)v53,
                   0LL,
                   -2,
                   0LL,
                   0LL,
                   2,
                   v137,
                   &v111);
            if ( v7 < 0 )
            {
              v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v57);
              v59[3] = v40[12];
              v59[4] = v40[13];
              v59[5] = 25037LL;
              WdLogEvent5_WdWarning(v59);
            }
            v51 = v111 == 0;
LABEL_60:
            if ( v51 )
              goto LABEL_72;
          }
          else
          {
            v7 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v8, v53, v137, 0);
            if ( v7 < 0 )
            {
              v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v54);
              v56[3] = v40[12];
              v56[4] = v40[13];
              v56[5] = 25022LL;
              WdLogEvent5_WdWarning(v56);
            }
          }
          v52 = v40[12];
          if ( v3 < v52 )
            v52 = v3;
          v3 = v52;
          if ( v114 <= v40[13] )
            v114 = v40[13];
          goto LABEL_72;
        }
      }
      if ( v7 < 0 )
        goto LABEL_124;
      ++v21;
      *((_DWORD *)P + 10) = 0;
      v113 = v21;
      if ( v21 >= *((_DWORD *)P + 5) )
        goto LABEL_124;
      v5 = this;
    }
  }
LABEL_127:
  if ( v7 == -1073741267 )
  {
    *((_DWORD *)P + 9) = v21;
    goto LABEL_139;
  }
  if ( *((_QWORD *)P + 9) )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v5, *((_DWORD *)P + 4), 0, 0LL, 0LL, 0, 0);
    v97 = *((unsigned int *)P + 4);
    v98 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 624LL);
    v121 = *(_QWORD *)(*(_QWORD *)(v98 + 272) + 8 * v97);
    if ( v121 )
    {
      v122 = (_QWORD *)*((_QWORD *)P + 9);
      v123 = *((_QWORD *)P + 10);
      if ( (int)VidSchSubmitSignalToHwQueue(1u, (__int64)&v121, 1u, (__int64)&v122, 0x80000000, &v123) < 0 )
      {
        v102 = WdLogNewEntry5_WdAssertion(v100, v99, v101);
        *(_QWORD *)(v102 + 24) = 25142LL;
LABEL_137:
        WdLogEvent5_WdAssertion(v102);
      }
    }
    else
    {
      PagingContext = VidSchGetPagingContext(v98, v97);
      v130 = *((_QWORD *)P + 9);
      v129 = *((_QWORD *)P + 10);
      if ( (int)VidSchSignalSyncObjectsFromGpu(0LL, 0LL, 1LL, &PagingContext, 1u, (__int64)&v130, 0x80000000, &v129) < 0 )
      {
        v102 = WdLogNewEntry5_WdAssertion(v104, v103, v105);
        *(_QWORD *)(v102 + 24) = 25170LL;
        goto LABEL_137;
      }
    }
  }
  VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'((VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)P);
LABEL_139:
  v106 = 0;
  if ( !v138 )
    v106 = v7;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v126);
  if ( v128 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v107, &EventProfilerExit, v108, v126);
  return v106;
}
