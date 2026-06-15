/*
 * XREFs of sub_1800D5D94 @ 0x1800D5D94
 * Callers:
 *     sub_1800D50E8 @ 0x1800D50E8 (sub_1800D50E8.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800D5648 @ 0x1800D5648 (sub_1800D5648.c)
 */

BOOL __fastcall sub_1800D5D94(__int64 a1, void *a2)
{
  DWORD LengthSid; // eax
  BOOL result; // eax
  signed int v6; // eax

  if ( !IsValidSid(a2) || (LengthSid = GetLengthSid(a2), LengthSid > 0x44) )
    sub_1800B8610(-2147024809);
  *(_BYTE *)(a1 + 76) = 1;
  result = CopySid(LengthSid, (PSID)(a1 + 8), a2);
  if ( !result )
  {
    v6 = sub_1800D5648();
    *(_BYTE *)(a1 + 76) = 0;
    sub_1800B8610(v6);
  }
  return result;
}
