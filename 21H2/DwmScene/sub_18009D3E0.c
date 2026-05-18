/*
 * XREFs of sub_18009D3E0 @ 0x18009D3E0
 * Callers:
 *     sub_1800F9F20 @ 0x1800F9F20 (sub_1800F9F20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009D3E0(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  a1[43] = *a2;
  a1[44] = a2[1];
  a1[45] = a2[2];
  result = (unsigned int)a2[3];
  a1[46] = result;
  return result;
}
