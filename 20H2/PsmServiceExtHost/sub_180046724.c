/*
 * XREFs of sub_180046724 @ 0x180046724
 * Callers:
 *     sub_1800779E0 @ 0x1800779E0 (sub_1800779E0.c)
 *     sub_1800779EC @ 0x1800779EC (sub_1800779EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180046724(volatile signed __int32 *a1)
{
  signed __int32 v1; // r8d
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 == 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  do
  {
    if ( v1 == _InterlockedCompareExchange(a1, v1 + 1, v1) )
      break;
    v1 = *a1;
  }
  while ( *a1 != 0x7FFFFFFF );
  result = (unsigned int)(v1 + 1);
  if ( v1 == 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  return result;
}
