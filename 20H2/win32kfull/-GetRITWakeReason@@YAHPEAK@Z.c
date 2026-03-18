/*
 * XREFs of ?GetRITWakeReason@@YAHPEAK@Z @ 0x1C000A9C8
 * Callers:
 *     RawInputThread @ 0x1C0009A30 (RawInputThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRITWakeReason(unsigned int *a1)
{
  unsigned int v1; // edx
  int v3; // ecx

  v1 = 0;
  if ( a1 )
  {
    v3 = gdwRITWakeReason & -gdwRITWakeReason;
    if ( v3 )
    {
      _InterlockedAnd(&gdwRITWakeReason, ~v3);
      *a1 = v3;
      return 1;
    }
  }
  else
  {
    LOBYTE(v1) = gdwRITWakeReason != 0;
  }
  return v1;
}
