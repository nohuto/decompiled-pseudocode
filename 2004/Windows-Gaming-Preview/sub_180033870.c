/*
 * XREFs of sub_180033870 @ 0x180033870
 * Callers:
 *     sub_180037130 @ 0x180037130 (sub_180037130.c)
 *     sub_1800372E0 @ 0x1800372E0 (sub_1800372E0.c)
 *     sub_1800374B0 @ 0x1800374B0 (sub_1800374B0.c)
 *     sub_1800374E0 @ 0x1800374E0 (sub_1800374E0.c)
 *     sub_180037620 @ 0x180037620 (sub_180037620.c)
 *     sub_180037680 @ 0x180037680 (sub_180037680.c)
 *     sub_1800376D0 @ 0x1800376D0 (sub_1800376D0.c)
 * Callees:
 *     sub_180036378 @ 0x180036378 (sub_180036378.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033870(__int64 a1, _DWORD *a2, _QWORD *a3)
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
    v4 = sub_180036378();
    if ( v4 >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
    return (unsigned int)v4;
  }
  return v3;
}
