/*
 * XREFs of ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00D71F0
 * Callers:
 *     VidMmFreeDeferredMapping @ 0x1C001E3F0 (VidMmFreeDeferredMapping.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C002D7E0 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C007C570 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FreeDeferredMapping(struct _VIDMM_LOCAL_ALLOC *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  bool v6; // di
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  if ( *((_DWORD *)a1 + 9) || (v5 = *(_QWORD *)a1, *(_DWORD *)(v5 + 288)) )
  {
    WdLogSingleEntry5(0LL, 270LL, 7LL, a1, 0LL, 0LL);
    v5 = *(_QWORD *)a1;
  }
  v6 = (*(_DWORD *)(v5 + 72) & 0x40000) != 0;
  v7 = **(_DWORD **)(v5 + 528);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 396), 0xFFFFFFFF) == 1 )
  {
    if ( (v7 & 0x4000000) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v5, a2, a3, a4);
      MmUnmapViewInSystemSpace(*(PVOID *)(*(_QWORD *)a1 + 384LL));
      VidMmDereferenceObjectAsync(*(PVOID *)(*(_QWORD *)a1 + 376LL));
      *(_DWORD *)(*(_QWORD *)a1 + 72LL) &= ~0x1000000u;
    }
    operator delete(*(void **)(*(_QWORD *)a1 + 528LL));
    *(_DWORD *)(*(_QWORD *)a1 + 68LL) |= 0x400000u;
    if ( *(_QWORD *)a1 )
      _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(*(_VIDMM_GLOBAL_ALLOC **)a1);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 18, 0xFFFFFFFF) <= 1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( v6 )
    {
      v8 = *((_QWORD *)a1 + 2);
      v9 = **((_QWORD **)a1 + 1);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(v9, v8);
    }
    else if ( (v7 & 8) == 0 && (v7 & 0x10) == 0 && (v7 & 0x20) == 0 )
    {
      if ( *((_QWORD *)a1 + 3) )
      {
        (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 24LL) + 24LL))(
          *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL),
          a1);
        *((_QWORD *)a1 + 3) = 0LL;
        *((_QWORD *)a1 + 2) = 0LL;
      }
    }
    *((_BYTE *)a1 + 32) |= 4u;
    operator delete(a1);
  }
}
