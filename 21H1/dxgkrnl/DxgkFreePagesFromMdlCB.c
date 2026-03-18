/*
 * XREFs of DxgkFreePagesFromMdlCB @ 0x1C0040FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkFreeMemoryTracker@@YAXQEAXPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z @ 0x1C00407F8 (-DxgkFreeMemoryTracker@@YAXQEAXPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z.c)
 */

__int64 __fastcall DxgkFreePagesFromMdlCB(void *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  v2 = *a2;
  if ( *(_DWORD *)(*a2 + 16) != 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v4 + 24) = 1097LL;
    WdLogEvent5_WdAssertion(v4);
  }
  MmFreePagesFromMdl(*(PMDL *)(v2 + 24));
  DxgkFreeMemoryTracker(a1, (struct DXG_DRIVER_MEMORY_TRACKER *)v2);
  return 0LL;
}
