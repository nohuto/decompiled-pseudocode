/*
 * XREFs of sub_18002F020 @ 0x18002F020
 * Callers:
 *     sub_18002F520 @ 0x18002F520 (sub_18002F520.c)
 *     sub_180037340 @ 0x180037340 (sub_180037340.c)
 *     sub_180037530 @ 0x180037530 (sub_180037530.c)
 * Callees:
 *     sub_180011C3C @ 0x180011C3C (sub_180011C3C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002F020(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120)
    && (*a2 != -1350114592 || a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915) )
  {
    if ( *a2 == 1572207154 && a2[1] == 1481207932 && a2[2] == -929993824 && a2[3] == -401564181 )
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
