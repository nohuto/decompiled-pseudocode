/*
 * XREFs of sub_180009600 @ 0x180009600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180009600(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)a2 = off_18003E0D0;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a2 + 8) = v2;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a1 + 16);
  return a2;
}
