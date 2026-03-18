/*
 * XREFs of ?GetRITWakeReason@@YGHPAK@Z @ 0xAB1D2
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall GetRITWakeReason(int *this)
{
  int v2; // edx
  int v3; // ecx

  v2 = 0;
  if ( !this )
    return gdwRITWakeReason != 0;
  v3 = gdwRITWakeReason & -gdwRITWakeReason;
  if ( v3 )
  {
    _InterlockedAnd(&gdwRITWakeReason, ~v3);
    *this = v3;
    return 1;
  }
  return v2;
}
