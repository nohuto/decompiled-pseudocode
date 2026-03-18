/*
 * XREFs of ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0088DE0
 * Callers:
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0088CF8 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00C56D0 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 *     ?ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z @ 0x1C00CB7C0 (-ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001194 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0001E00 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C0001EDC (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C00244A0 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00661CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00753D4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0075940 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0075B1C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0075FE4 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0088F38 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00B2938 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B71EC (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C00BB410 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
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
  __int64 v18; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rax
  struct VIDMM_SEGMENT *v23; // r15
  _QWORD *v24; // rax
  UINT Value; // eax
  D3DGPU_VIRTUAL_ADDRESS v26; // rax
  __int64 v27; // rax
  struct _MDL *v28; // rax
  struct _MDL *v29; // rax
  BOOL v30; // ecx
  int v31; // eax
  ADAPTER_RENDER *v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // r14d
  __int64 v36; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  struct VIDMM_SEGMENT *v40; // [rsp+40h] [rbp-C0h]
  struct _DXGK_TRANSFERFLAGS v41; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+70h] [rbp-90h]
  struct _DXGKARG_BUILDPAGINGBUFFER v43; // [rsp+80h] [rbp-80h] BYREF
  int v44; // [rsp+200h] [rbp+100h]

  v13 = a2;
  v42 = a2;
  if ( (*(_BYTE *)(1584LL * a2 + *((_QWORD *)this + 5027) + 436) & 4) == 0 )
  {
    memset(&v43, 0, sizeof(v43));
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v18) + 24) = a3;
      v21 = WdLogNewEntry5_WdTrace(v20);
      *(_QWORD *)(v21 + 24) = a4;
      *(_QWORD *)(v21 + 32) = a5;
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(a5);
      v23 = a6;
      v22[4] = a7;
      v22[5] = a8;
      v22[3] = a6;
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(a8);
      v24[4] = a10;
      v24[5] = a11;
      v24[3] = a9;
    }
    else
    {
      v23 = a6;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v13, v19, &v43);
    Value = a12.Value;
    v43.Transfer.Flags = a12;
    if ( a3 )
    {
      if ( !a5 )
      {
        Value = a12.Value | 8;
        v43.Transfer.Flags.Value = a12.Value | 8;
      }
      if ( a4 + a5 == *((_QWORD *)a3 + 2) )
        v43.Transfer.Flags.Value = Value | 0x10;
    }
    while ( 1 )
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v13, a3, &v43);
      if ( a3 )
      {
        v27 = *((_QWORD *)a3 + 5);
        if ( v27 )
          v26 = *(_QWORD *)(v27 + 16);
        else
          v26 = *((_QWORD *)a3 + 6);
      }
      else
      {
        v26 = 0LL;
      }
      v43.UpdateContextAllocation.ContextAllocation = v26;
      v43.Transfer.TransferOffset = a5;
      v43.Transfer.TransferSize = a4;
      v43.Operation = DXGK_OPERATION_TRANSFER;
      v43.Transfer.MdlOffset = 0;
      if ( v23 )
      {
        v43.Transfer.Source.SegmentId = VIDMM_SEGMENT::DriverId(v23);
        v28 = (struct _MDL *)(a7->QuadPart + *((_QWORD *)v23 + 3));
      }
      else
      {
        v28 = a8;
        v43.Transfer.Source.SegmentId = 0;
      }
      v43.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v28;
      if ( a9 )
      {
        v43.Transfer.Destination.SegmentId = VIDMM_SEGMENT::DriverId(a9);
        v29 = (struct _MDL *)(a10->QuadPart + *((_QWORD *)a9 + 3));
      }
      else
      {
        v29 = a11;
        v43.Transfer.Destination.SegmentId = 0;
      }
      v43.Transfer.Destination.SegmentAddress.QuadPart = (LONGLONG)v29;
      if ( a3 )
        v30 = !VIDMM_GLOBAL::IsPagingOperationPending(this, a3, 0);
      else
        v30 = 1;
      v43.Transfer.Flags.Value = v43.Transfer.Flags.Value & 0xFFFFFFFB | (4 * v30);
      v31 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v43);
      v44 = v31;
      if ( a3 && v31 == -1071775486 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEngines(this, a3);
        VIDMM_GLOBAL::VerifyAllocationIsIdle(this, a3);
        v32 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v43.Transfer.Flags.Value |= 4u;
        v44 = ADAPTER_RENDER::DdiBuildPagingBuffer(v32, &v43);
      }
      v33 = *((_QWORD *)this + 878);
      if ( v33 && (!a9 || (*((_DWORD *)a9 + 20) & 0x1001) != 0) )
        VIDMM_PROCESS::ChargeEvictionTransfer(
          *(VIDMM_PROCESS **)(v33 + 8),
          *(_DWORD *)(*((_QWORD *)this + 3) + 232LL),
          a4);
      _InterlockedExchangeAdd64((volatile signed __int64 *)this + 986, a4);
      if ( !bTracingEnabled )
        goto LABEL_52;
      if ( !v23 )
        goto LABEL_48;
      v34 = *((_DWORD *)v23 + 20);
      if ( (v34 & 0x1001) == 0 )
      {
        if ( a9 && (*((_DWORD *)a9 + 20) & 2) != 0 )
          v35 = 4;
        else
          v35 = 2;
        goto LABEL_49;
      }
      v35 = 3;
      if ( (v34 & 2) == 0 )
LABEL_48:
        v35 = 1;
LABEL_49:
      v36 = *((_QWORD *)this + v42 + 143);
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        LODWORD(v40) = v35;
        McTemplateK0pppxxq_EtwWriteTransfer(a5, v38, v39, CurrentProcessId, a3, v36, a5, a4, v40);
      }
      VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7176), a4, v35);
      v23 = a6;
LABEL_52:
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, a2, a3, &v43, v44, 0, 0LL);
      v13 = a2;
      if ( v44 >= 0 )
        return;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a3 + 344, 0LL);
  if ( *((struct _VIDMM_GLOBAL_ALLOC **)a3 + 23) == (struct _VIDMM_GLOBAL_ALLOC *)((char *)a3 + 184) )
  {
    ExReleasePushLockExclusiveEx((char *)a3 + 344, 0LL);
    KeLeaveCriticalRegion();
    if ( a10 )
      QuadPart = a10->QuadPart;
    else
      QuadPart = 0LL;
    if ( a7 )
      v17 = a7->QuadPart;
    else
      v17 = 0LL;
    VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(this, v13, a3, a4, a5, a6, v17, a8, a9, QuadPart, a11, 0LL, v41, 0LL);
  }
  else
  {
    VIDMM_GLOBAL::MemoryTransferUsingGpuVa(this, v13, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    ExReleasePushLockExclusiveEx((char *)a3 + 344, 0LL);
    KeLeaveCriticalRegion();
  }
}
