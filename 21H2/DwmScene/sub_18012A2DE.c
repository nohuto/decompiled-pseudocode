/*
 * XREFs of sub_18012A2DE @ 0x18012A2DE
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001009C @ 0x18001009C (sub_18001009C.c)
 */

__int64 __fastcall sub_18012A2DE(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_18001009C(*(_QWORD *)(a2 + 72));
  }
  return result;
}
