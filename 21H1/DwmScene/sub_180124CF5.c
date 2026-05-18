/*
 * XREFs of sub_180124CF5 @ 0x180124CF5
 * Callers:
 *     <none>
 * Callees:
 *     sub_180065704 @ 0x180065704 (sub_180065704.c)
 */

__int64 __fastcall sub_180124CF5(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180065704();
  }
  return result;
}
