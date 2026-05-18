/*
 * XREFs of sub_180126C8D @ 0x180126C8D
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F264 @ 0x18000F264 (sub_18000F264.c)
 */

__int64 __fastcall sub_180126C8D(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 68) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 68) &= ~1u;
    return sub_18000F264((__int64 *)(a2 + 120));
  }
  return result;
}
