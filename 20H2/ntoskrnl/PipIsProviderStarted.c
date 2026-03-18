/*
 * XREFs of PipIsProviderStarted @ 0x1408A0748
 * Callers:
 *     IoResolveDependency @ 0x1403BEC50 (IoResolveDependency.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140736154 (PipCheckForUnsatisfiedDependencies.c)
 * Callees:
 *     <none>
 */

bool __fastcall PipIsProviderStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 >= 776 && (v1 == 776 || v1 > 779 && v1 <= 781);
}
