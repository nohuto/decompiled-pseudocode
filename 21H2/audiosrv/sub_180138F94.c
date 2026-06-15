/*
 * XREFs of sub_180138F94 @ 0x180138F94
 * Callers:
 *     sub_18013933C @ 0x18013933C (sub_18013933C.c)
 *     sub_18013B2C8 @ 0x18013B2C8 (sub_18013B2C8.c)
 *     sub_18013B62C @ 0x18013B62C (sub_18013B62C.c)
 * Callees:
 *     sub_180139C70 @ 0x180139C70 (sub_180139C70.c)
 */

__int64 __fastcall sub_180138F94(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rcx

  result = sub_180139C70(a1, a2, a1[1]);
  v4 = (__int64 *)a1[1];
  if ( v4 )
    *v4 = result;
  else
    *a1 = result;
  a1[1] = result;
  return result;
}
