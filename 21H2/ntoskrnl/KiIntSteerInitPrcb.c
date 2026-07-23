/*
 * XREFs of KiIntSteerInitPrcb @ 0x1402520C4
 * Callers:
 *     KiInitPrcb @ 0x14099D788 (KiInitPrcb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIntSteerInitPrcb(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 11672) = 0;
  result = 0LL;
  *(_QWORD *)(a1 + 11664) = 1LL;
  return result;
}
