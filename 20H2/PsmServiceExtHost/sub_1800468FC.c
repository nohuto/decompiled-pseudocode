/*
 * XREFs of sub_1800468FC @ 0x1800468FC
 * Callers:
 *     sub_180005030 @ 0x180005030 (sub_180005030.c)
 *     sub_180006158 @ 0x180006158 (sub_180006158.c)
 *     sub_1800067F0 @ 0x1800067F0 (sub_1800067F0.c)
 *     sub_180018A60 @ 0x180018A60 (sub_180018A60.c)
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 *     sub_180019CB0 @ 0x180019CB0 (sub_180019CB0.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_18001D590 @ 0x18001D590 (sub_18001D590.c)
 *     sub_180023288 @ 0x180023288 (sub_180023288.c)
 *     sub_18003569C @ 0x18003569C (sub_18003569C.c)
 *     sub_18007CF6C @ 0x18007CF6C (sub_18007CF6C.c)
 *     sub_18007D71C @ 0x18007D71C (sub_18007D71C.c)
 * Callees:
 *     sub_180073438 @ 0x180073438 (sub_180073438.c)
 */

_DWORD *__fastcall sub_1800468FC(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h]

  v4 = sub_180073438(a1);
  result = a2;
  *a2 = *(_DWORD *)(v4 + 1244);
  if ( a3 )
  {
    result = a3;
    *a3 = *(_DWORD *)(v4 + 1248);
  }
  return result;
}
