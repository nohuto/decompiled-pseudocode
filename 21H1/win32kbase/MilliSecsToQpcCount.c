/*
 * XREFs of MilliSecsToQpcCount @ 0x1C0038D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MilliSecsToQpcCount(__int64 a1)
{
  __int64 v1; // rdx

  v1 = ((unsigned __int64)(a1 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  return (v1 + ((unsigned __int64)(a1 * gliQpcFreq.QuadPart - v1) >> 1)) >> 9;
}
