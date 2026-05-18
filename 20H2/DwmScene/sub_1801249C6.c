/*
 * XREFs of sub_1801249C6 @ 0x1801249C6
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FFBC @ 0x18000FFBC (sub_18000FFBC.c)
 */

__int64 __fastcall sub_1801249C6(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_18000FFBC(*(_QWORD *)(a2 + 72));
  }
  return result;
}
