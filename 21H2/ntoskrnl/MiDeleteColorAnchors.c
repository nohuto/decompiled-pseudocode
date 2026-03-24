/*
 * XREFs of MiDeleteColorAnchors @ 0x1402E40AC
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402E3D24 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiAllocateLargeZeroPages @ 0x14055DA5C (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x1408DA0E4 (MiFindLargePageMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
