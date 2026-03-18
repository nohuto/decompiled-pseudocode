/*
 * XREFs of RtlWriteReleaseTickLock @ 0x1403A3FB4
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140990BE0 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x1409994A0 (KiCreateCpuSetForProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWriteReleaseTickLock(__int64 *a1)
{
  __int64 result; // rax

  result = *a1 + 1;
  *a1 = result;
  return result;
}
