/*
 * XREFs of ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C008BF20
 * Callers:
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C008BE38 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00C4300 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 *     ?ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z @ 0x1C00CA37C (-ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0001D6C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001D90 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C0001E5C (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C0024430 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006802C (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C0074048 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00755C4 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00757A0 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0075C78 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C008C090 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00B16F8 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B5FB0 (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C00B9FFC (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        void **a3,
        SIZE_T a4,
        char *a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        union _LARGE_INTEGER *a10,
        struct _MDL *a11,
        DXGK_TRANSFERFLAGS a12)
{
  unsigned int v13; // r15d
  char *v16; // rsi
  LONGLONG QuadPart; // rdx
  LONGLONG v18; // rcx
  __int64 v19; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rax
  struct VIDMM_SEGMENT *v24; // rsi
  _QWORD *v25; // rax
  UINT Value; // eax
  D3DGPU_VIRTUAL_ADDRESS v27; // rax
  _QWORD *v28; // rax
  struct _MDL *v29; // rax
  struct _MDL *v30; // rax
  BOOL v31; // ecx
  int v32; // eax
  ADAPTER_RENDER *v33; // rcx
  __int64 v34; // rcx
  int v35; // eax
  int v36; // esi
  __int64 v37; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  struct VIDMM_SEGMENT *v41; // [rsp+48h] [rbp-C0h]
  struct _DXGK_TRANSFERFLAGS v42; // [rsp+68h] [rbp-A0h]
  __int64 v43; // [rsp+78h] [rbp-90h]
  struct _DXGKARG_BUILDPAGINGBUFFER v44; // [rsp+88h] [rbp-80h] BYREF
  int v45; // [rsp+1F8h] [rbp+F0h]

  v13 = a2;
  v43 = a2;
  if ( (*(_BYTE *)(1584LL * a2 + *((_QWORD *)this + 5027) + 436) & 4) == 0 )
  {
    memset(&v44, 0, sizeof(v44));
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v19) + 24) = a3;
      v22 = WdLogNewEntry5_WdTrace(v21);
      *(_QWORD *)(v22 + 24) = a4;
      *(_QWORD *)(v22 + 32) = a5;
      v23 = (_QWORD *)WdLogNewEntry5_WdTrace(a5);
      v24 = a6;
      v23[4] = a7;
      v23[5] = a8;
      v23[3] = a6;
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(a8);
      v25[4] = a10;
      v25[5] = a11;
      v25[3] = a9;
    }
    else
    {
      v24 = a6;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v13, v20, &v44);
    Value = a12.Value;
    v44.Transfer.Flags = a12;
    if ( a3 )
    {
      if ( !a5 )
      {
        Value = a12.Value | 8;
        v44.Transfer.Flags.Value = a12.Value | 8;
      }
      if ( &a5[a4] == a3[2] )
        v44.Transfer.Flags.Value = Value | 0x10;
    }
    while ( 1 )
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v13, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v44);
      if ( a3 )
      {
        v28 = a3[5];
        if ( v28 )
          v27 = v28[2];
        else
          v27 = (D3DGPU_VIRTUAL_ADDRESS)a3[6];
      }
      else
      {
        v27 = 0LL;
      }
      v44.Operation = DXGK_OPERATION_TRANSFER;
      v44.Transfer.MdlOffset = 0;
      v44.UpdateContextAllocation.ContextAllocation = v27;
      v44.Transfer.TransferOffset = (unsigned int)a5;
      v44.Transfer.TransferSize = a4;
      if ( v24 )
      {
        v44.Transfer.Source.SegmentId = VIDMM_SEGMENT::DriverId(v24);
        v29 = (struct _MDL *)(a7->QuadPart + *((_QWORD *)v24 + 3));
      }
      else
      {
        v44.Transfer.Source.SegmentId = 0;
        v29 = a8;
      }
      v44.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v29;
      if ( a9 )
      {
        v44.Transfer.Destination.SegmentId = VIDMM_SEGMENT::DriverId(a9);
        v30 = (struct _MDL *)(a10->QuadPart + *((_QWORD *)a9 + 3));
      }
      else
      {
        v44.Transfer.Destination.SegmentId = 0;
        v30 = a11;
      }
      v44.Transfer.Destination.SegmentAddress.QuadPart = (LONGLONG)v30;
      if ( a3 )
        v31 = !VIDMM_GLOBAL::IsPagingOperationPending(this, (struct _VIDMM_GLOBAL_ALLOC *)a3, 0);
      else
        v31 = 1;
      v44.Transfer.Flags.Value = v44.Transfer.Flags.Value & 0xFFFFFFFB | (4 * v31);
      v32 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v44);
      v45 = v32;
      if ( a3 && v32 == -1071775486 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct _VIDMM_GLOBAL_ALLOC *)a3);
        VIDMM_GLOBAL::VerifyAllocationIsIdle(this, (struct _VIDMM_GLOBAL_ALLOC *)a3);
        v33 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v44.Transfer.Flags.Value |= 4u;
        v45 = ADAPTER_RENDER::DdiBuildPagingBuffer(v33, &v44);
      }
      v34 = *((_QWORD *)this + 878);
      if ( v34 && (!a9 || (*((_DWORD *)a9 + 20) & 0x1001) != 0) )
        VIDMM_PROCESS::ChargeEvictionTransfer(
          *(VIDMM_PROCESS **)(v34 + 8),
          *(_DWORD *)(*((_QWORD *)this + 3) + 232LL),
          a4);
      _InterlockedExchangeAdd64((volatile signed __int64 *)this + 986, a4);
      if ( !bTracingEnabled )
        goto LABEL_52;
      if ( !v24 )
        goto LABEL_48;
      v35 = *((_DWORD *)v24 + 20);
      if ( (v35 & 0x1001) == 0 )
      {
        if ( a9 && (*((_DWORD *)a9 + 20) & 2) != 0 )
          v36 = 4;
        else
          v36 = 2;
        goto LABEL_49;
      }
      v36 = 3;
      if ( (v35 & 2) == 0 )
LABEL_48:
        v36 = 1;
LABEL_49:
      v37 = *((_QWORD *)this + v43 + 143);
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        LODWORD(v41) = v36;
        McTemplateK0pppxxq_EtwWriteTransfer((__int64)a5, v39, v40, CurrentProcessId, a3, v37, a5, a4, v41);
      }
      VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7176), a4, v36);
      v13 = a2;
LABEL_52:
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v13, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v44, v45, 0, 0LL);
      v24 = a6;
      if ( v45 >= 0 )
        return;
    }
  }
  v16 = (char *)(a3 + 43);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v16, 0LL);
  *((_QWORD *)v16 + 1) = KeGetCurrentThread();
  if ( a3[23] == a3 + 23 )
  {
    a3[44] = 0LL;
    ExReleasePushLockExclusiveEx(a3 + 43, 0LL);
    KeLeaveCriticalRegion();
    if ( a10 )
      QuadPart = a10->QuadPart;
    else
      QuadPart = 0LL;
    if ( a7 )
      v18 = a7->QuadPart;
    else
      v18 = 0LL;
    VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
      this,
      v13,
      (struct _VIDMM_GLOBAL_ALLOC *)a3,
      a4,
      (unsigned __int64)a5,
      a6,
      v18,
      a8,
      a9,
      QuadPart,
      a11,
      0LL,
      v42,
      0LL);
  }
  else
  {
    VIDMM_GLOBAL::MemoryTransferUsingGpuVa(
      this,
      v13,
      (struct _VIDMM_GLOBAL_ALLOC *)a3,
      a4,
      (unsigned __int64)a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12);
    *((_QWORD *)v16 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
  }
}
