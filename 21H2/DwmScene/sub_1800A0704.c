/*
 * XREFs of sub_1800A0704 @ 0x1800A0704
 * Callers:
 *     sub_18003D340 @ 0x18003D340 (sub_18003D340.c)
 *     sub_1800D0528 @ 0x1800D0528 (sub_1800D0528.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A0704(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 112);
  result = 0LL;
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0LL;
  if ( v3 )
    return *(unsigned int *)(v3 + 24);
  return result;
}
