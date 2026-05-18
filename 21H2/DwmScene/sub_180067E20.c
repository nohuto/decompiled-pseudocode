/*
 * XREFs of sub_180067E20 @ 0x180067E20
 * Callers:
 *     sub_180068E78 @ 0x180068E78 (sub_180068E78.c)
 *     sub_180091EE0 @ 0x180091EE0 (sub_180091EE0.c)
 *     sub_1800971B0 @ 0x1800971B0 (sub_1800971B0.c)
 *     sub_18009F380 @ 0x18009F380 (sub_18009F380.c)
 *     sub_1800A0F1C @ 0x1800A0F1C (sub_1800A0F1C.c)
 *     sub_1800CC860 @ 0x1800CC860 (sub_1800CC860.c)
 *     sub_1800CE7D0 @ 0x1800CE7D0 (sub_1800CE7D0.c)
 *     sub_1800D08D0 @ 0x1800D08D0 (sub_1800D08D0.c)
 *     sub_1800D1F50 @ 0x1800D1F50 (sub_1800D1F50.c)
 *     sub_1800D2C78 @ 0x1800D2C78 (sub_1800D2C78.c)
 * Callees:
 *     sub_180067924 @ 0x180067924 (sub_180067924.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 */

__int64 __fastcall sub_180067E20(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v5[6]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = sub_18007040C(*a2);
  sub_180067924((__int64 **)(a1 + 80), (__int64)&v4, v5);
  result = v4;
  *(_BYTE *)(v4 + 32) = 0;
  return result;
}
