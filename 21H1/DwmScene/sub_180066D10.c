/*
 * XREFs of sub_180066D10 @ 0x180066D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180066D10(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = a2;
  *(_DWORD *)(a1 + 4LL * a2 + 224) = a3;
  return result;
}
