/*
 * XREFs of sub_1800446A0 @ 0x1800446A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800446A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)(a4 + 20) = *(_DWORD *)(a4 + 20) & 0xFFFFFFEF | (*a5 != 0 ? 0x10 : 0);
  return result;
}
