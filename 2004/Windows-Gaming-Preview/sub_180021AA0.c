/*
 * XREFs of sub_180021AA0 @ 0x180021AA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023854 @ 0x180023854 (sub_180023854.c)
 */

__int64 __fastcall sub_180021AA0(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 260));
  if ( (_DWORD)result == 1 )
    return sub_180023854(a1 + 272);
  return result;
}
