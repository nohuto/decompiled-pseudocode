/*
 * XREFs of sub_18003B2C0 @ 0x18003B2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003B2C0(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)a1 = -1;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_WORD *)(a1 + 20) = 0;
  result = a1;
  *(_DWORD *)(a1 + 16) = 101;
  return result;
}
