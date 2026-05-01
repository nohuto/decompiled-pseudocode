/*
 * XREFs of sub_18002FA20 @ 0x18002FA20
 * Callers:
 *     sub_18002FDA0 @ 0x18002FDA0 (sub_18002FDA0.c)
 *     sub_180037150 @ 0x180037150 (sub_180037150.c)
 *     sub_1800376A0 @ 0x1800376A0 (sub_1800376A0.c)
 * Callees:
 *     sub_180011C3C @ 0x180011C3C (sub_180011C3C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002FA20(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120)
    && (*a2 != -1350114592 || a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915) )
  {
    if ( *a2 == 154359136 && a2[1] == 1512467563 && a2[2] == -1214822253 && a2[3] == 539693953 )
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
