/*
 * XREFs of sub_180032D20 @ 0x180032D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A06AC @ 0x1800A06AC (sub_1800A06AC.c)
 */

__int64 __fastcall sub_180032D20(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_1800A06AC();
  return result;
}
