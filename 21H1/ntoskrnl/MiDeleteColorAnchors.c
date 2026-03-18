/*
 * XREFs of MiDeleteColorAnchors @ 0x1403432AC
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x140345564 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiAllocateLargeZeroPages @ 0x140557F6C (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x1408D5794 (MiFindLargePageMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteColorAnchors(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 8) = 0;
}
