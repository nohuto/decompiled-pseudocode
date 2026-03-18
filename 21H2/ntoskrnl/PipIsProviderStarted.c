/*
 * XREFs of PipIsProviderStarted @ 0x140942B10
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1407750C0 (PipCheckForUnsatisfiedDependencies.c)
 * Callees:
 *     <none>
 */

bool __fastcall PipIsProviderStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 >= 778 && (v1 == 778 || v1 > 781 && v1 <= 783);
}
