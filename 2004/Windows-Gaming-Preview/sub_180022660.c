/*
 * XREFs of sub_180022660 @ 0x180022660
 * Callers:
 *     sub_180024B80 @ 0x180024B80 (sub_180024B80.c)
 *     sub_180024DE0 @ 0x180024DE0 (sub_180024DE0.c)
 *     sub_180024E20 @ 0x180024E20 (sub_180024E20.c)
 *     sub_180024F20 @ 0x180024F20 (sub_180024F20.c)
 *     sub_180025020 @ 0x180025020 (sub_180025020.c)
 *     sub_180025070 @ 0x180025070 (sub_180025070.c)
 *     sub_180025210 @ 0x180025210 (sub_180025210.c)
 * Callees:
 *     sub_180024450 @ 0x180024450 (sub_180024450.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180022660(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  _QWORD *v5; // r8

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120
    || *a2 == -1350114592 && a2[1] == 1282060589 && a2[2] == -1428727140 && a2[3] == -1877077915 )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    v4 = sub_180024450();
    if ( v4 >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
    return (unsigned int)v4;
  }
  return v3;
}
