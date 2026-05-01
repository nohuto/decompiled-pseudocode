/*
 * XREFs of sub_1800466F8 @ 0x1800466F8
 * Callers:
 *     sub_18003D960 @ 0x18003D960 (sub_18003D960.c)
 *     sub_180077A70 @ 0x180077A70 (sub_180077A70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800466F8(volatile signed __int32 *a1)
{
  signed __int32 v1; // r8d

  do
    v1 = *a1;
  while ( *a1 != 0x7FFFFFFF && v1 != _InterlockedCompareExchange(a1, v1 - 1, v1) );
  return (unsigned int)(v1 - 1);
}
