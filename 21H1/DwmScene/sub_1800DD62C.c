/*
 * XREFs of sub_1800DD62C @ 0x1800DD62C
 * Callers:
 *     sub_1800C1DC0 @ 0x1800C1DC0 (sub_1800C1DC0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800DD62C(__int64 a1)
{
  bool result; // al

  while ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 48), 0) )
    ;
  result = *(_DWORD *)(a1 + 40) == 0;
  *(_DWORD *)(a1 + 48) = 0;
  return result;
}
