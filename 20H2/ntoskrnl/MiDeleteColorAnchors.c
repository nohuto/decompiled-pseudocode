/*
 * XREFs of MiDeleteColorAnchors @ 0x140334F8C
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x140334C04 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiAllocateLargeZeroPages @ 0x14055BF8C (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x1408DC924 (MiFindLargePageMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
