/*
 * XREFs of sub_1C0035E78 @ 0x1C0035E78
 * Callers:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 * Callees:
 *     sub_1C00015A0 @ 0x1C00015A0 (sub_1C00015A0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001518C @ 0x1C001518C (sub_1C001518C.c)
 *     sub_1C0017FEC @ 0x1C0017FEC (sub_1C0017FEC.c)
 *     sub_1C001AE80 @ 0x1C001AE80 (sub_1C001AE80.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 *     sub_1C0034E5C @ 0x1C0034E5C (sub_1C0034E5C.c)
 *     sub_1C0034EEC @ 0x1C0034EEC (sub_1C0034EEC.c)
 */

void __fastcall sub_1C0035E78(__int64 a1, __int64 a2, __int64 a3, int a4, KIRQL a5, __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+28h] [rbp-20h]

  a5 = 0;
  sub_1C000F050(a1);
  sub_1C000FD80(a1, 512, 842231856, a2, *(unsigned __int16 *)(a2 + 4));
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v13 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E55C((__int64)DeviceObject->DeviceExtension, v10, v11, 0x2Eu, (__int64)&unk_1C0062098, v13, a3);
  }
  sub_1C001AE80(a1, a2, 23, &a5, 0);
  sub_1C0034EEC(a1, a2, a5);
  if ( (a4 & 0x100000) != 0 )
    sub_1C00015A0(a1, a2);
  if ( (a4 & 0x40000) != 0 )
    sub_1C0034E5C(a1, a2);
  if ( (a4 & 0x20000) != 0 )
  {
    sub_1C000FD80(a1, 512, 842231857, a6, *(unsigned __int16 *)(a2 + 4));
    sub_1C001518C(a1, v12, -1073741810);
    sub_1C0017FEC(a1, a2);
  }
}
