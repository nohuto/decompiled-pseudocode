/*
 * XREFs of sub_1C0036A00 @ 0x1C0036A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 *     sub_1C003CAB8 @ 0x1C003CAB8 (sub_1C003CAB8.c)
 */

__int64 __fastcall sub_1C0036A00(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  sub_1C003CAB8();
  return sub_1C0002AF0(a1, a2, 3);
}
