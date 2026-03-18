/*
 * XREFs of ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00B3854
 * Callers:
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00C6740 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z @ 0x1C00C960C (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067E30 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A6C8 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgeAllocation(VIDMM_GLOBAL *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r14
  char v5; // bl
  char v8; // si
  VIDMM_GLOBAL *v9; // rcx

  v4 = a4;
  v5 = a3;
  v8 = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
  if ( !*(_DWORD *)(a2 + 152) )
  {
    v9 = *(VIDMM_GLOBAL **)(a2 + 128);
    if ( v9 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v9);
        v9 = *(VIDMM_GLOBAL **)(a2 + 128);
      }
      if ( (v5 & 2) != 0 || (v5 & 4) != 0 || (LOBYTE(a4) = 0, (v5 & 0x20) != 0) )
        LOBYTE(a4) = 1;
      LOBYTE(a3) = v5 & 1;
      (*(void (__fastcall **)(VIDMM_GLOBAL *, __int64, __int64, _QWORD *, _BYTE, _QWORD))(*(_QWORD *)v9 + 48LL))(
        v9,
        a2,
        a3,
        a4,
        0,
        0LL);
      v8 = 1;
    }
    if ( *(_QWORD *)(a2 + 256) )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v9);
      if ( v8 == 1 )
        VIDMM_GLOBAL::FlushPagingBufferInternal(a1, *(_DWORD *)(a2 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
      VIDMM_GLOBAL::EvictTemporaryAllocation(v9, (struct _VIDMM_GLOBAL_ALLOC *)a2);
      v8 = 1;
    }
    if ( v8 == 1 )
    {
      VIDMM_GLOBAL::FlushPagingBufferInternal(a1, *(_DWORD *)(a2 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
      *v4 += *(_QWORD *)(a2 + 16);
    }
  }
}
