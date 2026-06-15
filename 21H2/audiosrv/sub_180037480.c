/*
 * XREFs of sub_180037480 @ 0x180037480
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_180037480(__int64 a1, unsigned int a2)
{
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 32) )
    sub_1800B8610(2147942487LL);
  return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * a2);
}
