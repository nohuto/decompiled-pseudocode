/*
 * XREFs of _RtlLargeIntegerShiftRight@12 @ 0x4B3084E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __stdcall RtlLargeIntegerShiftRight(unsigned __int64 a1, char a2)
{
  unsigned int v2; // ecx

  v2 = a2 & 0x3F;
  if ( v2 >= 0x20 )
    return (unsigned int)(HIDWORD(a1) >> v2);
  else
    return a1 >> (a2 & 0x1F);
}
