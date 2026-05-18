/*
 * XREFs of sub_18012D264 @ 0x18012D264
 * Callers:
 *     <none>
 * Callees:
 *     j_unknown_libname_103 @ 0x18001141C (j_unknown_libname_103.c)
 */

__int64 __fastcall sub_18012D264(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    return j_unknown_libname_103();
  }
  return result;
}
