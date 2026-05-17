/*
 * XREFs of _RtlValidProcessProtection@4 @ 0x4B342020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall RtlValidProcessProtection(unsigned __int8 a1)
{
  if ( a1 > 0x41u )
  {
    if ( a1 < 0x51u || a1 > 0x52u && (a1 <= 0x60u || a1 > 0x62u && a1 != 114 && a1 != 0x81) )
      return 0;
  }
  else if ( a1 != 65 && a1 && a1 != 8 && a1 != 18 && a1 != 33 && a1 != 49 )
  {
    return 0;
  }
  return 1;
}
