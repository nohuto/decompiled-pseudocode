/*
 * XREFs of sub_18012794C @ 0x18012794C
 * Callers:
 *     <none>
 * Callees:
 *     j_unknown_libname_101 @ 0x18001133C (j_unknown_libname_101.c)
 */

__int64 __fastcall sub_18012794C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    return j_unknown_libname_101();
  }
  return result;
}
