/*
 * XREFs of sub_18013B948 @ 0x18013B948
 * Callers:
 *     sub_18013B06C @ 0x18013B06C (sub_18013B06C.c)
 *     sub_18013B508 @ 0x18013B508 (sub_18013B508.c)
 *     sub_18013B9B4 @ 0x18013B9B4 (sub_18013B9B4.c)
 *     sub_18013BAA8 @ 0x18013BAA8 (sub_18013BAA8.c)
 * Callees:
 *     sub_18013A830 @ 0x18013A830 (sub_18013A830.c)
 *     sub_18013A8AC @ 0x18013A8AC (sub_18013A8AC.c)
 *     sub_18013BD54 @ 0x18013BD54 (sub_18013BD54.c)
 */

__int64 __fastcall sub_18013B948(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  result = sub_18013A8AC(a1, a2, a3);
  if ( (int)result >= 0 )
  {
    result = sub_18013BD54(a1, a2, a4, a5);
    if ( (int)result >= 0 )
      return sub_18013A830(a1, a2, a3);
  }
  return result;
}
