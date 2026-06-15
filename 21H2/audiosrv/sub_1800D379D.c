/*
 * XREFs of sub_1800D379D @ 0x1800D379D
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B7A3C @ 0x1800B7A3C (sub_1800B7A3C.c)
 */

__int64 __fastcall sub_1800D379D(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    return sub_1800B7A3C((_QWORD *)(a2 + 72));
  }
  return result;
}
