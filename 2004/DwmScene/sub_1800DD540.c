/*
 * XREFs of sub_1800DD540 @ 0x1800DD540
 * Callers:
 *     sub_1800762B0 @ 0x1800762B0 (sub_1800762B0.c)
 *     sub_18007AC40 @ 0x18007AC40 (sub_18007AC40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800DD540(__int64 a1)
{
  while ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 48), 0) )
    ;
  *(_DWORD *)(a1 + 48) = 0;
  return a1;
}
