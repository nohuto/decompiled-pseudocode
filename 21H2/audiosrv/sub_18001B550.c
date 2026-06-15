/*
 * XREFs of sub_18001B550 @ 0x18001B550
 * Callers:
 *     sub_18000543C @ 0x18000543C (sub_18000543C.c)
 *     sub_1800055B0 @ 0x1800055B0 (sub_1800055B0.c)
 *     sub_180017B10 @ 0x180017B10 (sub_180017B10.c)
 *     sub_1800183C0 @ 0x1800183C0 (sub_1800183C0.c)
 *     sub_1800184B0 @ 0x1800184B0 (sub_1800184B0.c)
 *     sub_1800188D0 @ 0x1800188D0 (sub_1800188D0.c)
 *     sub_180018FA0 @ 0x180018FA0 (sub_180018FA0.c)
 *     sub_1800192D0 @ 0x1800192D0 (sub_1800192D0.c)
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 *     sub_18001B4A0 @ 0x18001B4A0 (sub_18001B4A0.c)
 *     sub_18001C620 @ 0x18001C620 (sub_18001C620.c)
 *     sub_18002B0A0 @ 0x18002B0A0 (sub_18002B0A0.c)
 *     sub_18002B430 @ 0x18002B430 (sub_18002B430.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_1800C63BC @ 0x1800C63BC (sub_1800C63BC.c)
 *     sub_1800C8E8C @ 0x1800C8E8C (sub_1800C8E8C.c)
 * Callees:
 *     sub_180045FE4 @ 0x180045FE4 (sub_180045FE4.c)
 */

__int64 __fastcall sub_18001B550(__int64 *a1, int a2)
{
  __int64 result; // rax
  int v3; // r8d
  int v4; // r9d
  int v5; // eax
  int v6; // r9d

  result = *a1;
  v3 = a2;
  if ( *(_DWORD *)(*a1 - 16) > a2 )
    v3 = *(_DWORD *)(*a1 - 16);
  if ( *(int *)(result - 8) > 1 )
    return sub_18001B5C0(a1, (unsigned int)v3);
  v4 = *(_DWORD *)(result - 12);
  if ( v4 < v3 )
  {
    if ( v4 > 0x40000000 )
      v5 = 0x100000;
    else
      v5 = v4 / 2;
    v6 = v5 + v4;
    if ( v6 < v3 )
      v6 = v3;
    return sub_180045FE4(a1, (unsigned int)v6);
  }
  return result;
}
