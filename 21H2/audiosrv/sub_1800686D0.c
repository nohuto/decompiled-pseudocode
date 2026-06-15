/*
 * XREFs of sub_1800686D0 @ 0x1800686D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800686F8 @ 0x1800686F8 (sub_1800686F8.c)
 */

__int64 __fastcall sub_1800686D0(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = sub_1800686F8(a1, a1 + 24);
  v2 = v1;
  if ( v1 < 0 )
    sub_18005E8F8((__int64)"CMuteHardware::GetLevelData", 308, v1);
  return v2;
}
