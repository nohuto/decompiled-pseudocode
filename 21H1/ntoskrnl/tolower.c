/*
 * XREFs of tolower @ 0x1403CF8B0
 * Callers:
 *     <none>
 * Callees:
 *     __pctype_func @ 0x1403D18F8 (__pctype_func.c)
 */

int __cdecl tolower(int C)
{
  __int64 v2; // rax
  int v3; // edx

  v2 = _pctype_func();
  v3 = (unsigned __int8)C;
  if ( C == -1 )
    v3 = -1;
  if ( (*(_BYTE *)(v2 + 2LL * v3) & 1) != 0 )
    C += 32;
  return C;
}
