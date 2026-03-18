/*
 * XREFs of sub_1C0046960 @ 0x1C0046960
 * Callers:
 *     sub_1C0049BA0 @ 0x1C0049BA0 (sub_1C0049BA0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C00469A4 @ 0x1C00469A4 (sub_1C00469A4.c)
 */

__int64 __fastcall sub_1C0046960(__int64 a1, char a2)
{
  PDEVICE_OBJECT *v2; // rax
  BOOL Data; // [rsp+48h] [rbp+10h] BYREF

  Data = a2 != 0;
  v2 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
  return sub_1C00469A4(v2[149], L"EnableSelectiveSuspend", 4u, &Data, 4u);
}
