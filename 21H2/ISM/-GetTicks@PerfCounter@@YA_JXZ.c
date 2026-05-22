/*
 * XREFs of ?GetTicks@PerfCounter@@YA_JXZ @ 0x18007DDCC
 * Callers:
 *     ?BeginInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x18016ABD0 (-BeginInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJX.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall PerfCounter::GetTicks(PerfCounter *this)
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  return PerformanceCount;
}
