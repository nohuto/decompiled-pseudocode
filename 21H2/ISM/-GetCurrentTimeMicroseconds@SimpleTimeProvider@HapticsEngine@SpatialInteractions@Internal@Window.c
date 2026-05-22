/*
 * XREFs of ?GetCurrentTimeMicroseconds@SimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJPEA_J@Z @ 0x18016C9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider::GetCurrentTimeMicroseconds(
        Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *this,
        __int64 *a2)
{
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  *a2 = 1000000 * PerformanceCount.QuadPart / qword_180209328;
  return 0LL;
}
