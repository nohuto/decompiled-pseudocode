/*
 * XREFs of RtlULongMult @ 0x18009C548
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongMult(unsigned int a1, unsigned int a2, int *a3)
{
  unsigned __int64 v3; // r9
  int v4; // ecx

  v3 = a2 * (unsigned __int64)a1;
  v4 = -1;
  if ( v3 <= 0xFFFFFFFF )
    v4 = v3;
  *a3 = v4;
  return v3 > 0xFFFFFFFF ? 0xC0000095 : 0;
}
