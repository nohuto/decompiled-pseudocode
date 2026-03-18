/*
 * XREFs of sub_1C0046AF0 @ 0x1C0046AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00469A4 @ 0x1C00469A4 (sub_1C00469A4.c)
 */

__int64 __fastcall sub_1C0046AF0(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  int Data; // [rsp+50h] [rbp+18h] BYREF

  Data = 1;
  return sub_1C00469A4(a3, L"DeviceSelectiveSuspended", 4u, &Data, 4u);
}
