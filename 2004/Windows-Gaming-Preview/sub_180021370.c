/*
 * XREFs of sub_180021370 @ 0x180021370
 * Callers:
 *     sub_180024BD0 @ 0x180024BD0 (sub_180024BD0.c)
 *     sub_180024CD0 @ 0x180024CD0 (sub_180024CD0.c)
 *     sub_180024D00 @ 0x180024D00 (sub_180024D00.c)
 *     sub_180024F00 @ 0x180024F00 (sub_180024F00.c)
 *     sub_180025120 @ 0x180025120 (sub_180025120.c)
 *     sub_180025280 @ 0x180025280 (sub_180025280.c)
 *     sub_1800252D0 @ 0x1800252D0 (sub_1800252D0.c)
 * Callees:
 *     sub_1800240B4 @ 0x1800240B4 (sub_1800240B4.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180021370(__int64 a1, _DWORD *a2, _QWORD *a3)
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
    v4 = sub_1800240B4();
    if ( v4 >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
    return (unsigned int)v4;
  }
  return v3;
}
