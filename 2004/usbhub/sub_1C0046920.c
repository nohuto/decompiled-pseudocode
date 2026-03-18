/*
 * XREFs of sub_1C0046920 @ 0x1C0046920
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C00469A4 @ 0x1C00469A4 (sub_1C00469A4.c)
 */

__int64 __fastcall sub_1C0046920(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // rcx
  int Data; // [rsp+58h] [rbp+20h] BYREF

  v1 = (struct _DEVICE_OBJECT *)*((_QWORD *)sub_1C000F050(a1) + 149);
  Data = 1;
  return sub_1C00469A4(v1, L"OvercurrentDetected", 4u, &Data, 4u);
}
