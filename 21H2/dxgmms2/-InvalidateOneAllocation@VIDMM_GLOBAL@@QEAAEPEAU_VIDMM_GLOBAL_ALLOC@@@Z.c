/*
 * XREFs of ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D77D0
 * Callers:
 *     ?InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00D77A8 (-InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z @ 0x1C00EBD94 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C009BAE4 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D5758 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_GLOBAL::InvalidateOneAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  VIDMM_GLOBAL *CurrentThread; // rcx
  int v8; // eax
  signed __int32 v9[8]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v10[12]; // [rsp+20h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  if ( *((_BYTE *)a2 + 81) == 1 )
  {
    WdLogSingleEntry1(4LL, a2);
  }
  else
  {
    DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
    *((_BYTE *)a2 + 81) = 1;
    _InterlockedOr(v9, 0);
    DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
    if ( (**((_DWORD **)a2 + 66) & 0x40000000) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread == *(VIDMM_GLOBAL **)(*(_QWORD *)this + 8LL) )
        return VIDMM_GLOBAL::CleanupPrimaryAllocation(CurrentThread, a2);
      memset(v10, 0, 0x58uLL);
      v8 = *((_DWORD *)a2 + 17) & 0x3F;
      LODWORD(v10[0]) = 103;
      HIDWORD(v10[0]) = v8;
      v10[5] = a2;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v10);
    }
  }
  return 0;
}
