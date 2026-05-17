/*
 * XREFs of _RtlLargeIntegerArithmeticShift@12 @ 0x4B308510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlLargeIntegerArithmeticShift(__int64 a1, char a2)
{
  unsigned int v2; // ecx
  __int64 v3; // rax

  v2 = a2 & 0x3F;
  if ( v2 < 0x20 )
    return a1 >> (a2 & 0x1F);
  else
    LODWORD(v3) = SHIDWORD(a1) >> v2;
  return v3;
}
