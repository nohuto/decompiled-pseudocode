/*
 * XREFs of FsRtlHeatUninit @ 0x140889FC0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpHeatUnregisterVolume @ 0x14088A170 (FsRtlpHeatUnregisterVolume.c)
 */

__int64 __fastcall FsRtlHeatUninit(__int64 a1, __int64 a2)
{
  return FsRtlpHeatUnregisterVolume(a2);
}
