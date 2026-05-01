/*
 * XREFs of sub_180010A90 @ 0x180010A90
 * Callers:
 *     sub_180010600 @ 0x180010600 (sub_180010600.c)
 *     sub_180010620 @ 0x180010620 (sub_180010620.c)
 *     sub_180010640 @ 0x180010640 (sub_180010640.c)
 *     sub_180010660 @ 0x180010660 (sub_180010660.c)
 *     sub_1800106B0 @ 0x1800106B0 (sub_1800106B0.c)
 *     sub_1800106E0 @ 0x1800106E0 (sub_1800106E0.c)
 *     sub_180010700 @ 0x180010700 (sub_180010700.c)
 *     sub_180010B70 @ 0x180010B70 (sub_180010B70.c)
 *     sub_18001D640 @ 0x18001D640 (sub_18001D640.c)
 *     sub_180028944 @ 0x180028944 (sub_180028944.c)
 * Callees:
 *     sub_180010974 @ 0x180010974 (sub_180010974.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180010A90(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120)
    && (*a2 != -1350114592 || a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915) )
  {
    if ( *a2 == 1935221971 && a2[1] == 1150583071 && a2[2] == 1103535286 && a2[3] == 1125500576 )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      v4 = sub_180010974(a1 + 8, a2, a3);
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
