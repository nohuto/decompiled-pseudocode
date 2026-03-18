/*
 * XREFs of ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00B10AC
 * Callers:
 *     VidMmFreeDeferredMapping @ 0x1C00229A0 (VidMmFreeDeferredMapping.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C0023154 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0060ECC (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FreeDeferredMapping(struct _VIDMM_LOCAL_ALLOC *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  bool v5; // si
  int v6; // ebx

  if ( *((_DWORD *)a1 + 9) || *(_DWORD *)(*(_QWORD *)a1 + 304LL) )
  {
    v3 = WdLogNewEntry5_WdCriticalError(a1, a2);
    *(_QWORD *)(v3 + 24) = 270LL;
    *(_QWORD *)(v3 + 32) = 7LL;
    *(_QWORD *)(v3 + 40) = a1;
    *(_OWORD *)(v3 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v3);
  }
  v4 = *(_QWORD *)a1;
  v5 = (*(_DWORD *)(*(_QWORD *)a1 + 80LL) & 0x40000) != 0;
  v6 = **(_DWORD **)(*(_QWORD *)a1 + 496LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)a1 + 372LL), 0xFFFFFFFF) == 1 )
  {
    if ( (v6 & 0x4000000) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v4);
      MmUnmapViewInSystemSpace(*(PVOID *)(*(_QWORD *)a1 + 360LL));
      VidMmDereferenceObjectAsync(*(PVOID *)(*(_QWORD *)a1 + 352LL));
    }
    operator delete(*(void **)(*(_QWORD *)a1 + 496LL));
    *(_DWORD *)(*(_QWORD *)a1 + 76LL) |= 0x200000u;
    if ( *(_QWORD *)a1 )
      _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(*(_VIDMM_GLOBAL_ALLOC **)a1);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 18, 0xFFFFFFFF) <= 1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( v5 )
    {
      MmUnmapViewOfSection(**((_QWORD **)a1 + 1), *((_QWORD *)a1 + 2));
    }
    else if ( (v6 & 0x38) == 0 )
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
