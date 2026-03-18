/*
 * XREFs of MiDeleteColorAnchors @ 0x140313F6C
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x140316224 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiAllocateLargeZeroPages @ 0x1405585BC (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x1408D6AE4 (MiFindLargePageMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
