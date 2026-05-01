/*
 * XREFs of sub_18004675C @ 0x18004675C
 * Callers:
 *     sub_18001E9C0 @ 0x18001E9C0 (sub_18001E9C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004675C(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)a1;
  v2 = 0;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    if ( v1 )
      v1 ^= a1;
    else
      v1 = 0LL;
  }
  LOBYTE(v2) = v1 == 0;
  return v2;
}
