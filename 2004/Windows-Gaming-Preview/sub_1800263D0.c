/*
 * XREFs of sub_1800263D0 @ 0x1800263D0
 * Callers:
 *     sub_18001B888 @ 0x18001B888 (sub_18001B888.c)
 *     sub_180025550 @ 0x180025550 (sub_180025550.c)
 *     sub_180025570 @ 0x180025570 (sub_180025570.c)
 *     sub_180026500 @ 0x180026500 (sub_180026500.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800263D0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120)
    && (*a2 != -1350114592 || a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915) )
  {
    if ( *a2 == 769462127 && a2[1] == 1258658918 && a2[2] == -304718700 && a2[3] == -1944368776
      || (a1 += 8LL, *a2 == 56) && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      if ( *a2 == 962535576 && a2[1] == 1168828954 && a2[2] == 967338130 && a2[3] == 661612549 )
      {
        v4 = 0;
        *a3 = a1 + 8;
      }
      else
      {
        v4 = -2147467262;
      }
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
