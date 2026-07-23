/*
 * XREFs of Amd64GetCounterResolution @ 0x1404DDCD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Amd64GetCounterResolution(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  result = a1 >= 4 ? 0xC000000D : 0;
  *a2 = a1 < 4 ? 0x30 : 0;
  return result;
}
