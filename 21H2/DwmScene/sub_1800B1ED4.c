/*
 * XREFs of sub_1800B1ED4 @ 0x1800B1ED4
 * Callers:
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 *     sub_1800C6C30 @ 0x1800C6C30 (sub_1800C6C30.c)
 *     sub_1800FED34 @ 0x1800FED34 (sub_1800FED34.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B1ED4(__int64 a1, int a2, char a3)
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
