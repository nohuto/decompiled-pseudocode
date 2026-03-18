/*
 * XREFs of MiInitializeTbFlushList @ 0x14027FCE4
 * Callers:
 *     MiEliminateZeroPages @ 0x1406F5BB0 (MiEliminateZeroPages.c)
 *     MiProtectLargeKernelHalRange @ 0x14082B4E0 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x140978B04 (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x14097FA08 (MmUnmapProtectedKernelPageRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeTbFlushList(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 12) = 0;
  *(_WORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 8) = a3;
  return result;
}
