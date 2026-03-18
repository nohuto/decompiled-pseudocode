/*
 * XREFs of ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00D8ECC
 * Callers:
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00E914C (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z @ 0x1C00EBD94 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A8ADC (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PurgeAllocation(VIDMM_GLOBAL *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD *v5; // r14
  char v6; // bl
  char v9; // si
  VIDMM_GLOBAL *v10; // rcx

  result = *(_QWORD *)&g_IsInternalReleaseOrDbg;
  v5 = (_QWORD *)a4;
  v6 = a3;
  v9 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    result = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
    *(_QWORD *)(result + 24) = a2;
  }
  if ( !*(_DWORD *)(a2 + 144) )
  {
    v10 = *(VIDMM_GLOBAL **)(a2 + 120);
    if ( v10 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v10, a2, a3, a4);
        v10 = *(VIDMM_GLOBAL **)(a2 + 120);
      }
      if ( (v6 & 2) != 0 || (v6 & 4) != 0 || (LOBYTE(a4) = 0, (v6 & 0x20) != 0) )
        LOBYTE(a4) = 1;
      LOBYTE(a3) = v6 & 1;
      result = (*(__int64 (__fastcall **)(VIDMM_GLOBAL *, __int64, __int64, __int64, _BYTE, _QWORD))(*(_QWORD *)v10 + 48LL))(
                 v10,
                 a2,
                 a3,
                 a4,
                 0,
                 0LL);
      v9 = 1;
    }
    if ( *(_QWORD *)(a2 + 240) )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v10, a2, a3, a4);
      if ( v9 == 1 )
        VIDMM_GLOBAL::FlushPagingBufferInternal(a1, *(_DWORD *)(a2 + 68) & 0x3F, 0, 0LL, 0LL, 0, 0);
      VIDMM_GLOBAL::EvictTemporaryAllocation(v10, (struct _VIDMM_GLOBAL_ALLOC *)a2, a3, a4);
    }
    else if ( v9 != 1 )
    {
      return result;
    }
    VIDMM_GLOBAL::FlushPagingBufferInternal(a1, *(_DWORD *)(a2 + 68) & 0x3F, 0, 0LL, 0LL, 0, 0);
    result = *(_QWORD *)(a2 + 16);
    *v5 += result;
  }
  return result;
}
