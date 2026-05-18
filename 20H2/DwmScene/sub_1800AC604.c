/*
 * XREFs of sub_1800AC604 @ 0x1800AC604
 * Callers:
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800C1360 @ 0x1800C1360 (sub_1800C1360.c)
 *     sub_1800F9464 @ 0x1800F9464 (sub_1800F9464.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800AC604(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 440);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_DWORD *)(a1 + 440) = result;
  return result;
}
