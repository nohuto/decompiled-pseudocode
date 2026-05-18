/*
 * XREFs of sub_1800E2E10 @ 0x1800E2E10
 * Callers:
 *     sub_18007BB80 @ 0x18007BB80 (sub_18007BB80.c)
 *     sub_180080510 @ 0x180080510 (sub_180080510.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E2E10(__int64 a1)
{
  while ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 48), 0) )
    ;
  *(_DWORD *)(a1 + 48) = 0;
  return a1;
}
