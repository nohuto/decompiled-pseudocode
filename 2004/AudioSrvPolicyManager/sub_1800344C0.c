/*
 * XREFs of sub_1800344C0 @ 0x1800344C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800344C0(__int64 a1)
{
  return GetLengthSid((PSID)(a1 + 16)) + 8;
}
