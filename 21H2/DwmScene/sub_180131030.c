/*
 * XREFs of sub_180131030 @ 0x180131030
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006F6B0 @ 0x18006F6B0 (sub_18006F6B0.c)
 */

__int64 __fastcall sub_180131030(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_18006F6B0();
  }
  return result;
}
