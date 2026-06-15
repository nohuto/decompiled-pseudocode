/*
 * XREFs of sub_180009400 @ 0x180009400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180009400(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = off_18003E0A0;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  return a2;
}
