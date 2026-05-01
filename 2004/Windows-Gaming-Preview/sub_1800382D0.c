/*
 * XREFs of sub_1800382D0 @ 0x1800382D0
 * Callers:
 *     sub_180028B34 @ 0x180028B34 (sub_180028B34.c)
 *     sub_18002CF54 @ 0x18002CF54 (sub_18002CF54.c)
 *     sub_180037CA0 @ 0x180037CA0 (sub_180037CA0.c)
 *     sub_180037CC0 @ 0x180037CC0 (sub_180037CC0.c)
 *     sub_1800382C0 @ 0x1800382C0 (sub_1800382C0.c)
 * Callees:
 *     sub_180011C3C @ 0x180011C3C (sub_180011C3C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800382D0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120)
    && (*a2 != -1350114592 || a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915) )
  {
    if ( *a2 == 451612931 && a2[1] == 1101718740 && a2[2] == -1564150108 && a2[3] == -1398872202 )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      v4 = sub_180011C3C(a1 + 8, a2, a3);
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
