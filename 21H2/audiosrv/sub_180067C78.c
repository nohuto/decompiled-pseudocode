/*
 * XREFs of sub_180067C78 @ 0x180067C78
 * Callers:
 *     sub_18006022C @ 0x18006022C (sub_18006022C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180067C78(__int64 a1)
{
  __int64 result; // rax

  *(_WORD *)a1 = 1;
  *(_BYTE *)(a1 + 2) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 4) = -2147023728;
  *(_DWORD *)(a1 + 8) = -1879048208;
  return result;
}
