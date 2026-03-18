/*
 * XREFs of ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00CCE30
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015C74 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0015C98 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E80 (McTemplateK0q_EtwWriteTransfer.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C0026128 (ExAllocateFromPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1C002616C (ExFreeToPagedLookasideList.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x1C002805C (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     McTemplateK0qpxp_EtwWriteTransfer @ 0x1C0028104 (McTemplateK0qpxp_EtwWriteTransfer.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00CDA20 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Allocate(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        ULONG a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7,
        PPAGED_LOOKASIDE_LIST Lookaside,
        char a9)
{
  __int64 v10; // r14
  _QWORD *v12; // rcx
  ULONG AllocationType; // r15d
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // r13
  _QWORD *v19; // rcx
  ULONG_PTR v20; // rdx
  PPAGED_LOOKASIDE_LIST v21; // r12
  __int64 v22; // rbx
  _DWORD *v23; // rax
  __int64 v24; // rcx
  _DWORD *v25; // r14
  __int64 v26; // rax
  ULONG v27; // ebx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rcx
  NTSTATUS inserted; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  NTSTATUS v38; // eax
  __int64 v39; // rcx
  PVOID v40; // rcx
  _QWORD *v41; // rcx
  void *v42; // rax
  PVOID v43; // rax
  _QWORD *v44; // rcx
  PVOID v45; // rcx
  PVOID v46; // rdx
  PVOID v47; // r9
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // r8
  ULONG Protect[2]; // [rsp+28h] [rbp-58h]
  __int64 v53; // [rsp+30h] [rbp-50h]
  __int64 v54; // [rsp+38h] [rbp-48h]
  PVOID BaseAddress; // [rsp+40h] [rbp-40h] BYREF
  PVOID Object; // [rsp+48h] [rbp-38h] BYREF
  void *Handle; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v58; // [rsp+58h] [rbp-28h]
  int v59; // [rsp+60h] [rbp-20h] BYREF
  __int64 v60; // [rsp+68h] [rbp-18h]
  char v61; // [rsp+70h] [rbp-10h]
  ULONG v62; // [rsp+C0h] [rbp+40h]
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp+48h] BYREF

  RegionSize = a2;
  v59 = -1;
  v10 = (unsigned int)a3;
  v60 = 0LL;
  if ( (qword_1C0051010 & 2) != 0 )
  {
    v61 = 1;
    v59 = 8004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 8004);
  }
  else
  {
    v61 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  AllocationType = 0;
  BaseAddress = 0LL;
  Object = 0LL;
  Handle = 0LL;
  v62 = 0;
  v58 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
    v12[3] = RegionSize;
    v12[4] = v10;
    v12[5] = a1;
  }
  v14 = **(_QWORD **)(a1 + 8);
  if ( PsGetCurrentProcess(v12) != v14 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15);
    v17[3] = 270LL;
    v17[4] = 30LL;
    v17[5] = 0LL;
    v17[6] = 0LL;
    v17[7] = 0LL;
    WdLogEvent5_WdCriticalError(v17);
  }
  v18 = a5;
  v19 = a6;
  v20 = RegionSize;
  *a5 = 0LL;
  *v19 = 0LL;
  v21 = Lookaside;
  LOBYTE(Lookaside->L.ListHead.Alignment) = 0;
  if ( v20 < (unsigned int)dword_1C0051338 )
  {
    LODWORD(v22) = VIDMM_PROCESS_HEAP::AllocateSmallAllocation(a1, v20, (unsigned int)v10, a4, v18, v19, v21, a9);
    goto LABEL_67;
  }
  Lookaside = (PPAGED_LOOKASIDE_LIST)(a1 + 64);
  v23 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v25 = v23;
  if ( !v23 )
  {
    LODWORD(v22) = -1073741801;
    _InterlockedIncrement(&dword_1C00516D4);
    v26 = WdLogNewEntry5_WdLowResource(v24);
    *(_QWORD *)(v26 + 24) = 340LL;
LABEL_36:
    WdLogEvent5_WdLowResource(v26);
LABEL_37:
    if ( a4 - 3 > 1 )
    {
      if ( a4 == 5 )
        goto LABEL_43;
      if ( a4 != 6 )
      {
        if ( BaseAddress )
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
LABEL_49:
        if ( v25 )
          ExFreeToPagedLookasideList(Lookaside, v25);
        goto LABEL_67;
      }
    }
    if ( a4 - 5 > 1 )
    {
LABEL_45:
      v40 = Object;
      if ( Object )
      {
        if ( Handle )
        {
          ObCloseHandle(Handle, ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0);
          v40 = Object;
        }
        ObfDereferenceObject(v40);
      }
      goto LABEL_49;
    }
LABEL_43:
    if ( BaseAddress )
      MmUnmapViewInSystemSpace(BaseAddress);
    goto LABEL_45;
  }
  memset(v23, 0, 0x70uLL);
  if ( a4 == 3 )
    goto LABEL_27;
  if ( a4 == 4 )
    goto LABEL_28;
  if ( a4 - 5 <= 1 )
  {
LABEL_27:
    v31 = 1208221696;
    if ( ((a4 - 4) & 0xFFFFFFFD) != 0 )
    {
LABEL_29:
      a5 = (_QWORD *)RegionSize;
      LODWORD(v22) = MmCreateSection(&Object, 0LL, 0LL, &a5, 4, v31, -1LL, 0LL);
      if ( (int)v22 < 0 )
      {
        Object = 0LL;
        _InterlockedIncrement(&dword_1C0051788);
        v26 = WdLogNewEntry5_WdLowResource(v32);
        *(_QWORD *)(v26 + 24) = 378LL;
        goto LABEL_36;
      }
      ObfReferenceObject(Object);
      inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &Handle);
      v22 = inserted;
      if ( inserted < 0 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v35, v34, v36);
        *(_QWORD *)(v37 + 24) = Object;
        *(_QWORD *)(v37 + 32) = v22;
        WdLogEvent5_WdAssertion(v37);
        goto LABEL_37;
      }
      if ( a4 - 5 <= 1 )
      {
        v38 = MmMapViewInSystemSpace(Object, &BaseAddress, &RegionSize);
        v22 = v38;
        if ( v38 < 0 )
        {
          _InterlockedIncrement(&dword_1C0051784);
          v26 = WdLogNewEntry5_WdLowResource(v39);
          *(_QWORD *)(v26 + 24) = v22;
          goto LABEL_36;
        }
      }
      goto LABEL_51;
    }
LABEL_28:
    v31 = 134479872;
    goto LABEL_29;
  }
  v27 = 4;
  if ( a4 != 2 )
    v27 = 1028;
  v28 = 12288;
  v62 = v27;
  if ( a4 != 2 )
    v28 = 8400896;
  AllocationType = v28 | 0x800000;
  if ( !a9 )
    AllocationType = v28;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, v27) < 0 )
  {
    AllocationType &= ~0x800000u;
    LODWORD(v22) = ZwAllocateVirtualMemory(
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     &BaseAddress,
                     0LL,
                     &RegionSize,
                     AllocationType,
                     v27);
    if ( (int)v22 < 0 )
    {
      BaseAddress = 0LL;
      _InterlockedIncrement(&dword_1C0051760);
      v26 = WdLogNewEntry5_WdLowResource(v29);
      *(_QWORD *)(v26 + 24) = 460LL;
      goto LABEL_36;
    }
  }
  v58 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
  if ( !v58 )
  {
    LODWORD(v22) = -1073741801;
    _InterlockedIncrement(&dword_1C0051760);
    v26 = WdLogNewEntry5_WdLowResource(v30);
    *(_QWORD *)(v26 + 24) = 478LL;
    goto LABEL_36;
  }
LABEL_51:
  *v25 |= 1u;
  v41 = a6;
  *((_QWORD *)v25 + 7) = RegionSize;
  *((_QWORD *)v25 + 6) = v58;
  *((_BYTE *)v25 + 72) = 0;
  *((_QWORD *)v25 + 1) = BaseAddress;
  v25[4] = v62;
  v25[5] = AllocationType;
  *((_QWORD *)v25 + 4) = Object;
  v42 = Handle;
  *((_QWORD *)v25 + 10) = 0LL;
  *((_QWORD *)v25 + 5) = v42;
  v25[6] = a4;
  v43 = BaseAddress;
  *v18 = v25;
  *v41 = v43;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) += RegionSize;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) += RegionSize;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 156LL);
  v44 = *(_QWORD **)(a1 + 8);
  if ( a4 == 1 )
  {
    v44[20] += RegionSize;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) += RegionSize;
  }
  else if ( a4 == 2 )
  {
    v44[22] += RegionSize;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) += RegionSize;
  }
  else
  {
    v44[24] += RegionSize;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 200LL) += RegionSize;
  }
  if ( bTracingEnabled )
  {
    v45 = BaseAddress;
    v46 = Object;
    v47 = BaseAddress;
    if ( a4 - 3 <= 3 )
      v47 = Object;
    v48 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      LODWORD(v54) = 0;
      LODWORD(v53) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      Protect[0] = a4;
      McTemplateK0pxqqt_EtwWriteTransfer(
        (__int64)BaseAddress,
        &EventCreateProcessAllocation,
        v48,
        v47,
        RegionSize,
        *(_QWORD *)Protect,
        v53,
        v54);
      v45 = BaseAddress;
      v46 = Object;
    }
    if ( bTracingEnabled )
    {
      if ( a4 - 3 <= 3 )
        v45 = v46;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0qpxp_EtwWriteTransfer(
          (__int64)v45,
          &EventCreateProcessAllocationDetails,
          v48,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
          (char)v25,
          RegionSize,
          (char)v45);
    }
  }
  LOBYTE(v21->L.ListHead.Alignment) = 1;
  LODWORD(v22) = 0;
LABEL_67:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59);
  if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v49, &EventProfilerExit, v50, v59);
  return (unsigned int)v22;
}
