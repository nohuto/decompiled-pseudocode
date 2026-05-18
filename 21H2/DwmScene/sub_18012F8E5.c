/*
 * XREFs of sub_18012F8E5 @ 0x18012F8E5
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B52C @ 0x18008B52C (sub_18008B52C.c)
 */

__int64 __fastcall sub_18012F8E5(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return sub_18008B52C(*(__int64 **)(a2 + 80));
  }
  return result;
}
