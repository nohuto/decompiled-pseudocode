/*
 * XREFs of sub_1800D7A8C @ 0x1800D7A8C
 * Callers:
 *     sub_1800D4D18 @ 0x1800D4D18 (sub_1800D4D18.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800D7A8C(__int64 a1)
{
  return *(_BYTE *)(a1 + 76) && IsValidSid((PSID)(a1 + 8));
}
