/*
 * XREFs of sub_1800720A4 @ 0x1800720A4
 * Callers:
 *     sub_180072084 @ 0x180072084 (sub_180072084.c)
 * Callees:
 *     sub_1800483B0 @ 0x1800483B0 (sub_1800483B0.c)
 *     sub_18004C264 @ 0x18004C264 (sub_18004C264.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_18011F15C @ 0x18011F15C (sub_18011F15C.c)
 */

__int64 __fastcall sub_1800720A4(__int64 *a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = sub_1800483B0(*a1, *(_QWORD *)a1[1], *(_QWORD *)a1[2]);
  if ( v2 < 0 )
    sub_18006D26C(
      (int)retaddr,
      8826,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v2);
  v3 = sub_18004C264(*a1, 0, 0, *(_QWORD *)a1[2]);
  if ( v3 < 0 )
    sub_18006D26C(
      (int)retaddr,
      8827,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v3);
  if ( *(_DWORD *)a1[3] )
  {
    v4 = sub_18011F15C(*a1, *(_QWORD *)a1[2]);
    if ( v4 < 0 )
      sub_18006D26C(
        (int)retaddr,
        8832,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        v4);
  }
  return sub_180047FDC(*a1, 0);
}
