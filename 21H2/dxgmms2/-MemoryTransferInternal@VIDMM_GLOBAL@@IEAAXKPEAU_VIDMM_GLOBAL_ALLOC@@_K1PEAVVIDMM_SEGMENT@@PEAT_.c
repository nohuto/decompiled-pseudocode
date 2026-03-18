/*
 * XREFs of ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00A7B34
 * Callers:
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00A7A1C (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00021CC (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000277C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C002E570 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0083FB8 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C0084018 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00856F4 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00862F0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0086448 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C00A7C8C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AB07C (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00D82C0 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C00DF858 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        SIZE_T a4,
        unsigned __int64 a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        union _LARGE_INTEGER *a10,
        struct _MDL *a11,
        DXGK_TRANSFERFLAGS a12)
{
  unsigned int v13; // r14d
  LONGLONG QuadPart; // rdx
  LONGLONG v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  struct VIDMM_SEGMENT *v31; // r12
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rax
  UINT Value; // eax
  D3DGPU_VIRTUAL_ADDRESS v37; // rax
  struct _MDL *v38; // rax
  struct _MDL *v39; // rax
  BOOL v40; // ecx
  int v41; // eax
  ADAPTER_RENDER *v42; // rcx
  __int64 v43; // rcx
  int v44; // eax
  int v45; // r14d
  __int64 v46; // r12
  HANDLE CurrentProcessId; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  struct VIDMM_SEGMENT *v50; // [rsp+40h] [rbp-C0h]
  struct _DXGK_TRANSFERFLAGS v51; // [rsp+60h] [rbp-A0h]
  __int64 v52; // [rsp+70h] [rbp-90h]
  struct _DXGKARG_BUILDPAGINGBUFFER v53; // [rsp+80h] [rbp-80h] BYREF
  int v54; // [rsp+200h] [rbp+100h]

  v13 = a2;
  v52 = a2;
  if ( (*(_BYTE *)(1584LL * a2 + *((_QWORD *)this + 5028) + 436) & 4) == 0 )
  {
    memset(&v53, 0, sizeof(v53));
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18, v20, v21) + 24) = a3;
      v26 = WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
      *(_QWORD *)(v26 + 24) = a4;
      *(_QWORD *)(v26 + 32) = a5;
      v30 = (_QWORD *)WdLogNewEntry5_WdTrace(a5, v27, v28, v29);
      v31 = a6;
      v30[4] = a7;
      v30[5] = a8;
      v30[3] = a6;
      v35 = (_QWORD *)WdLogNewEntry5_WdTrace(a8, v32, v33, v34);
      v35[4] = a10;
      v35[5] = a11;
      v35[3] = a9;
    }
    else
    {
      v31 = a6;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v13, v20, &v53);
    Value = a12.Value;
    v53.Transfer.Flags = a12;
    if ( a3 )
    {
      if ( !a5 )
      {
        Value = a12.Value | 8;
        v53.Transfer.Flags.Value = a12.Value | 8;
      }
      if ( a4 + a5 == *((_QWORD *)a3 + 2) )
        v53.Transfer.Flags.Value = Value | 0x10;
    }
    while ( 1 )
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v13, a3, &v53);
      if ( a3 )
        v37 = *(_QWORD *)(*((_QWORD *)a3 + 66) + 40LL);
      else
        v37 = 0LL;
      v53.UpdateContextAllocation.ContextAllocation = v37;
      v53.Transfer.TransferOffset = a5;
      v53.Transfer.TransferSize = a4;
      v53.Operation = DXGK_OPERATION_TRANSFER;
      v53.Transfer.MdlOffset = 0;
      if ( v31 )
      {
        v53.Transfer.Source.SegmentId = VIDMM_SEGMENT::DriverId(v31);
        v38 = (struct _MDL *)(a7->QuadPart + *((_QWORD *)v31 + 3));
      }
      else
      {
        v38 = a8;
        v53.Transfer.Source.SegmentId = 0;
      }
      v53.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v38;
      if ( a9 )
      {
        v53.Transfer.Destination.SegmentId = VIDMM_SEGMENT::DriverId(a9);
        v39 = (struct _MDL *)(a10->QuadPart + *((_QWORD *)a9 + 3));
      }
      else
      {
        v39 = a11;
        v53.Transfer.Destination.SegmentId = 0;
      }
      v53.Transfer.Destination.SegmentAddress.QuadPart = (LONGLONG)v39;
      if ( a3 )
        v40 = !VIDMM_GLOBAL::IsPagingOperationPending(this, a3, 0);
      else
        v40 = 1;
      v53.Transfer.Flags.Value = v53.Transfer.Flags.Value & 0xFFFFFFFB | (4 * v40);
      v41 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v53);
      v54 = v41;
      if ( a3 && v41 == -1071775486 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEngines(this, a3);
        VIDMM_GLOBAL::VerifyAllocationIsIdle(this, a3);
        v42 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v53.Transfer.Flags.Value |= 4u;
        v54 = ADAPTER_RENDER::DdiBuildPagingBuffer(v42, &v53);
      }
      v43 = *((_QWORD *)this + 879);
      if ( v43 && (!a9 || (*((_DWORD *)a9 + 20) & 0x1001) != 0) )
        VIDMM_PROCESS::ChargeEvictionTransfer(
          *(VIDMM_PROCESS **)(v43 + 8),
          *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
          a4);
      _InterlockedExchangeAdd64((volatile signed __int64 *)this + 987, a4);
      if ( !bTracingEnabled )
        goto LABEL_50;
      if ( !v31 )
        goto LABEL_46;
      v44 = *((_DWORD *)v31 + 20);
      if ( (v44 & 0x1001) == 0 )
      {
        if ( a9 && (*((_DWORD *)a9 + 20) & 2) != 0 )
          v45 = 4;
        else
          v45 = 2;
        goto LABEL_47;
      }
      v45 = 3;
      if ( (v44 & 2) == 0 )
LABEL_46:
        v45 = 1;
LABEL_47:
      v46 = *((_QWORD *)this + v52 + 143);
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (byte_1C006E941 & 8) != 0 )
      {
        LODWORD(v50) = v45;
        McTemplateK0pppxxq_EtwWriteTransfer(a5, v48, v49, CurrentProcessId, a3, v46, a5, a4, v50);
      }
      VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7184), a4, v45);
      v31 = a6;
LABEL_50:
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, a2, a3, &v53, v54, 0, 0LL);
      v13 = a2;
      if ( v54 >= 0 )
        return;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a3 + 368, 0LL);
  if ( *((struct _VIDMM_GLOBAL_ALLOC **)a3 + 21) == (struct _VIDMM_GLOBAL_ALLOC *)((char *)a3 + 168) )
  {
    ExReleasePushLockExclusiveEx((char *)a3 + 368, 0LL);
    KeLeaveCriticalRegion();
    if ( a10 )
      QuadPart = a10->QuadPart;
    else
      QuadPart = 0LL;
    if ( a7 )
      v17 = a7->QuadPart;
    else
      v17 = 0LL;
    VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(this, v13, a3, a4, a5, a6, v17, a8, a9, QuadPart, a11, 0LL, v51, 0LL);
  }
  else
  {
    VIDMM_GLOBAL::MemoryTransferUsingGpuVa(this, v13, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    ExReleasePushLockExclusiveEx((char *)a3 + 368, 0LL);
    KeLeaveCriticalRegion();
  }
}
