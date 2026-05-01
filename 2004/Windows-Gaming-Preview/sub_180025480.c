/*
 * XREFs of sub_180025480 @ 0x180025480
 * Callers:
 *     sub_180024FA0 @ 0x180024FA0 (sub_180024FA0.c)
 *     sub_1800252F0 @ 0x1800252F0 (sub_1800252F0.c)
 *     sub_180025340 @ 0x180025340 (sub_180025340.c)
 *     sub_180025520 @ 0x180025520 (sub_180025520.c)
 * Callees:
 *     sub_18002650C @ 0x18002650C (sub_18002650C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180025480(__int64 a1, _DWORD *a2, _QWORD *a3)
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
    v4 = sub_18002650C(a1, a2, a3);
    if ( v4 >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
    return (unsigned int)v4;
  }
  return v3;
}
