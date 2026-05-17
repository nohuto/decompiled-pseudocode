/*
 * XREFs of _RtlLargeIntegerShiftLeft@12 @ 0x4B3084B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlLargeIntegerShiftLeft(__int64 a1, char a2)
{
  __int64 v2; // rax

  if ( (a2 & 0x3Fu) >= 0x20 )
    LODWORD(v2) = 0;
  else
    return a1 << (a2 & 0x1F);
  return v2;
}
