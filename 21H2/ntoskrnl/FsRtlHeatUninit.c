/*
 * XREFs of FsRtlHeatUninit @ 0x14092FB20
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpHeatUnregisterVolume @ 0x14092FCDC (FsRtlpHeatUnregisterVolume.c)
 */

__int64 __fastcall FsRtlHeatUninit(__int64 a1, __int64 a2)
{
  return FsRtlpHeatUnregisterVolume(a2);
}
