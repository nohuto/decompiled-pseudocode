/*
 * XREFs of sub_1800B3B14 @ 0x1800B3B14
 * Callers:
 *     sub_1800BE670 @ 0x1800BE670 (sub_1800BE670.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B3B14(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  a1[23] = *a2;
  a1[24] = a2[1];
  a1[25] = a2[2];
  result = (unsigned int)a2[3];
  a1[26] = result;
  return result;
}
