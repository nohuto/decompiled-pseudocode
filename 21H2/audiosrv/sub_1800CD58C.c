/*
 * XREFs of sub_1800CD58C @ 0x1800CD58C
 * Callers:
 *     sub_1800135B8 @ 0x1800135B8 (sub_1800135B8.c)
 *     sub_180021130 @ 0x180021130 (sub_180021130.c)
 *     sub_18002C2A0 @ 0x18002C2A0 (sub_18002C2A0.c)
 *     sub_18002C550 @ 0x18002C550 (sub_18002C550.c)
 *     sub_18006F250 @ 0x18006F250 (sub_18006F250.c)
 *     sub_1800701E0 @ 0x1800701E0 (sub_1800701E0.c)
 *     sub_1800CD6EE @ 0x1800CD6EE (sub_1800CD6EE.c)
 *     sub_1800CD72C @ 0x1800CD72C (sub_1800CD72C.c)
 *     sub_1800CDB54 @ 0x1800CDB54 (sub_1800CDB54.c)
 *     sub_1800D021C @ 0x1800D021C (sub_1800D021C.c)
 *     sub_1800DE2A0 @ 0x1800DE2A0 (sub_1800DE2A0.c)
 *     sub_1800E2D20 @ 0x1800E2D20 (sub_1800E2D20.c)
 *     sub_1800E3758 @ 0x1800E3758 (sub_1800E3758.c)
 *     sub_1800E8030 @ 0x1800E8030 (sub_1800E8030.c)
 *     sub_1800E8450 @ 0x1800E8450 (sub_1800E8450.c)
 *     sub_1800E87A0 @ 0x1800E87A0 (sub_1800E87A0.c)
 *     sub_1800EA6C0 @ 0x1800EA6C0 (sub_1800EA6C0.c)
 *     sub_1800EC88C @ 0x1800EC88C (sub_1800EC88C.c)
 *     sub_1800ED0E0 @ 0x1800ED0E0 (sub_1800ED0E0.c)
 *     sub_1800ED858 @ 0x1800ED858 (sub_1800ED858.c)
 *     sub_1800EE200 @ 0x1800EE200 (sub_1800EE200.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 */

__int64 __fastcall sub_1800CD58C(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = sub_1800461B8(v3++);
    while ( v3 != a2 );
  }
  return result;
}
