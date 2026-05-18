/*
 * XREFs of sub_1800FDE60 @ 0x1800FDE60
 * Callers:
 *     sub_1800C8214 @ 0x1800C8214 (sub_1800C8214.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FDE60(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  a1[450] = *a2;
  a1[451] = a2[1];
  result = (unsigned int)a2[2];
  a1[452] = result;
  return result;
}
