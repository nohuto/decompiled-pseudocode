/*
 * XREFs of ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00F0340
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C001CDF8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C001CE1C (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ExFreeToPagedLookasideList @ 0x1C001E5D2 (ExFreeToPagedLookasideList.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C0030178 (ExAllocateFromPagedLookasideList.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x1C0032564 (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C003260C (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00F10A4 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Allocate(
        __int64 a1,
        SIZE_T a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        PPAGED_LOOKASIDE_LIST Lookaside,
        __int64 a7,
        _BYTE *a8,
        char a9)
{
  __int64 v10; // rdi
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // r12
  PPAGED_LOOKASIDE_LIST v17; // r13
  _BYTE *v18; // r15
  SIZE_T v19; // rdx
  _DWORD *v20; // rax
  _DWORD *v21; // r14
  __int64 v22; // rcx
  int v23; // eax
  int v24; // edi
  int v25; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v26; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rcx
  int v30; // ecx
  NTSTATUS inserted; // eax
  __int64 v32; // rdx
  NTSTATUS v33; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  PVOID v35; // rcx
  HANDLE v36; // rax
  PVOID v37; // rax
  _QWORD *v38; // rcx
  PVOID v39; // rcx
  PVOID v40; // rdx
  PVOID v41; // r9
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 NewObject; // [rsp+20h] [rbp-69h]
  PHANDLE Handle; // [rsp+28h] [rbp-61h]
  PHANDLE Handlea; // [rsp+28h] [rbp-61h]
  __int64 v49; // [rsp+30h] [rbp-59h]
  __int64 v50; // [rsp+38h] [rbp-51h]
  int v51; // [rsp+50h] [rbp-39h]
  PVOID Address; // [rsp+58h] [rbp-31h] BYREF
  PVOID Object; // [rsp+60h] [rbp-29h] BYREF
  HANDLE v54; // [rsp+68h] [rbp-21h] BYREF
  HANDLE v55; // [rsp+70h] [rbp-19h]
  int v56; // [rsp+78h] [rbp-11h] BYREF
  __int64 v57; // [rsp+80h] [rbp-9h]
  char v58; // [rsp+88h] [rbp-1h]
  int v59; // [rsp+D0h] [rbp+47h]
  SIZE_T Size; // [rsp+D8h] [rbp+4Fh] BYREF

  Size = a2;
  v56 = -1;
  v10 = (unsigned int)a3;
  v57 = 0LL;
  if ( (qword_1C006E010 & 2) != 0 )
  {
    v58 = 1;
    v56 = 8004;
    if ( byte_1C006E941 < 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 8004);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  Address = 0LL;
  Object = 0LL;
  v54 = 0LL;
  v59 = 0;
  v51 = 0;
  v55 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v13[3] = Size;
    v13[4] = v10;
    v13[5] = a1;
  }
  if ( PsGetCurrentProcess(v13, v12, v14, v15) != **(_QWORD **)(a1 + 8) )
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
  v16 = a5;
  v17 = Lookaside;
  v18 = a8;
  v19 = Size;
  *a5 = 0LL;
  v17->L.ListHead.Alignment = 0LL;
  *v18 = 0;
  if ( v19 < (unsigned int)dword_1C006E3A8 )
  {
    LODWORD(v10) = VIDMM_PROCESS_HEAP::AllocateSmallAllocation(a1, v19, (unsigned int)v10, a4, v16, v17, v18, a9);
    goto LABEL_68;
  }
  Lookaside = (PPAGED_LOOKASIDE_LIST)(a1 + 64);
  v20 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v21 = v20;
  if ( !v20 )
  {
    LODWORD(v10) = -1073741801;
    _InterlockedIncrement(&dword_1C006E784);
    WdLogSingleEntry1(6LL, 321LL);
    Handle = 0LL;
    NewObject = 321LL;
LABEL_37:
    v32 = 262145LL;
    goto LABEL_38;
  }
  memset(v20, 0, 0x70uLL);
  if ( a4 == 3 )
    goto LABEL_28;
  if ( a4 == 4 )
    goto LABEL_29;
  if ( a4 - 5 <= 1 )
  {
LABEL_28:
    v30 = 1208221696;
    if ( a4 != 6 )
    {
LABEL_30:
      a5 = (_QWORD *)Size;
      LODWORD(v10) = MmCreateSection(&Object, 0LL, 0LL, &a5, 4, v30, -1LL, 0LL);
      if ( (int)v10 < 0 )
      {
        Object = 0LL;
        _InterlockedIncrement(&dword_1C006E838);
        WdLogSingleEntry1(6LL, 359LL);
        Handle = 0LL;
        NewObject = 359LL;
        goto LABEL_37;
      }
      ObfReferenceObject(Object);
      inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &v54);
      v10 = inserted;
      if ( inserted < 0 )
      {
        WdLogSingleEntry2(1LL, Object, inserted);
        v32 = 0x40000LL;
        Handle = (PHANDLE)v10;
        NewObject = (__int64)Object;
LABEL_38:
        DxgkLogInternalTriageEvent(v22, v32);
        if ( a4 != 3 && a4 != 4 )
        {
          if ( a4 != 5 && a4 != 6 )
          {
LABEL_42:
            if ( Address )
            {
              VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
              (*((void (__fastcall **)(__int64, PVOID *, SIZE_T *, __int64, __int64, PHANDLE, _QWORD, _QWORD))VirtualMemoryInterface
               + 2))(
                -1LL,
                &Address,
                &Size,
                0x8000LL,
                NewObject,
                Handle,
                0LL,
                0LL);
            }
LABEL_50:
            if ( v21 )
              ExFreeToPagedLookasideList(Lookaside, v21);
            goto LABEL_68;
          }
          if ( Address )
            MmUnmapViewInSystemSpace(Address);
        }
        v35 = Object;
        if ( Object )
        {
          if ( v54 )
          {
            ObCloseHandle(v54, ((unsigned __int64)v54 & 0xFFFFFFFF80000000uLL) == 0);
            v35 = Object;
          }
          ObfDereferenceObject(v35);
        }
        goto LABEL_50;
      }
      if ( a4 - 5 <= 1 )
      {
        v33 = MmMapViewInSystemSpace(Object, &Address, &Size);
        v10 = v33;
        if ( v33 < 0 )
        {
          _InterlockedIncrement(&dword_1C006E834);
          WdLogSingleEntry1(6LL, v33);
          Handle = 0LL;
          NewObject = v10;
          goto LABEL_37;
        }
      }
      goto LABEL_52;
    }
LABEL_29:
    v30 = 134479872;
    goto LABEL_30;
  }
  v23 = 4;
  v24 = 8400896;
  if ( a4 != 2 )
    v23 = 1028;
  v59 = v23;
  v25 = 12288;
  if ( a4 != 2 )
    v25 = 8400896;
  if ( !a9 )
    v24 = v25;
  v51 = v24;
  v26 = DxgkGetVirtualMemoryInterface();
  if ( (*(int (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, int, int))v26)(-1LL, &Address, 0LL, &Size, v24, v59) < 0 )
  {
    v51 = 12288;
    v27 = DxgkGetVirtualMemoryInterface();
    LODWORD(v10) = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, int, int))v27)(
                     -1LL,
                     &Address,
                     0LL,
                     &Size,
                     12288,
                     v59);
    if ( (int)v10 < 0 )
    {
      Address = 0LL;
      _InterlockedIncrement(&dword_1C006E810);
      v28 = 439LL;
      WdLogSingleEntry1(6LL, 439LL);
LABEL_27:
      Handle = 0LL;
      NewObject = v28;
      DxgkLogInternalTriageEvent(v29, 262145LL);
      goto LABEL_42;
    }
  }
  v55 = MmSecureVirtualMemory(Address, Size, 4u);
  if ( !v55 )
  {
    LODWORD(v10) = -1073741801;
    _InterlockedIncrement(&dword_1C006E810);
    v28 = 457LL;
    WdLogSingleEntry1(6LL, 457LL);
    goto LABEL_27;
  }
LABEL_52:
  *v21 |= 1u;
  *((_QWORD *)v21 + 7) = Size;
  *((_QWORD *)v21 + 6) = v55;
  *((_BYTE *)v21 + 72) = 0;
  *((_QWORD *)v21 + 1) = Address;
  v21[4] = v59;
  v21[5] = v51;
  *((_QWORD *)v21 + 4) = Object;
  v36 = v54;
  *((_QWORD *)v21 + 10) = 0LL;
  *((_QWORD *)v21 + 5) = v36;
  v21[6] = a4;
  v37 = Address;
  *v16 = v21;
  v17->L.ListHead.Alignment = (ULONGLONG)v37;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) += Size;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) += Size;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 156LL);
  v38 = *(_QWORD **)(a1 + 8);
  if ( a4 == 1 )
  {
    v38[20] += Size;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) += Size;
  }
  else if ( a4 == 2 )
  {
    v38[22] += Size;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) += Size;
  }
  else
  {
    v38[24] += Size;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 200LL) += Size;
  }
  if ( bTracingEnabled )
  {
    v39 = Address;
    v40 = Object;
    v41 = Address;
    v42 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 8LL);
    if ( a4 - 3 <= 3 )
      v41 = Object;
    if ( (byte_1C006E942 & 2) != 0 )
    {
      LODWORD(v50) = 0;
      LODWORD(v49) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      LODWORD(Handlea) = a4;
      McTemplateK0pxqqt_EtwWriteTransfer(
        (__int64)Address,
        &EventCreateProcessAllocation,
        v42,
        v41,
        Size,
        Handlea,
        v49,
        v50);
      v39 = Address;
      v40 = Object;
    }
    if ( bTracingEnabled )
    {
      if ( a4 - 3 <= 3 )
        v39 = v40;
      if ( (byte_1C006E941 & 8) != 0 )
        McTemplateK0qxxx_EtwWriteTransfer(
          (__int64)v39,
          &EventCreateProcessAllocationDetails,
          v42,
          *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
          (char)v21,
          Size,
          (char)v39);
    }
  }
  *v18 = 1;
  LODWORD(v10) = 0;
LABEL_68:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
  if ( v58 )
  {
    LOBYTE(v43) = byte_1C006E941;
    if ( byte_1C006E941 < 0 )
      McTemplateK0q_EtwWriteTransfer(v43, (__int64)&EventProfilerExit, v44, v56);
  }
  return (unsigned int)v10;
}
