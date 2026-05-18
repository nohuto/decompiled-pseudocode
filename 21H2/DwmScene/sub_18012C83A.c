/*
 * XREFs of sub_18012C83A @ 0x18012C83A
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A467C @ 0x1800A467C (sub_1800A467C.c)
 */

__int64 __fastcall sub_18012C83A(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return sub_1800A467C(*(__int64 **)(a2 + 56));
  }
  return result;
}
