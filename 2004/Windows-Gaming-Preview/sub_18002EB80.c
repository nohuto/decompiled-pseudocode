/*
 * XREFs of sub_18002EB80 @ 0x18002EB80
 * Callers:
 *     sub_18002EC60 @ 0x18002EC60 (sub_18002EC60.c)
 *     sub_1800372A0 @ 0x1800372A0 (sub_1800372A0.c)
 *     sub_180037640 @ 0x180037640 (sub_180037640.c)
 *     sub_180037780 @ 0x180037780 (sub_180037780.c)
 * Callees:
 *     sub_18002FDE8 @ 0x18002FDE8 (sub_18002FDE8.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002EB80(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120)
    && (*a2 != -1350114592 || a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915) )
  {
    if ( *a2 == -1793006005 && a2[1] == 1386616242 && a2[2] == -1858998888 && a2[3] == -1963561734 )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      v4 = sub_18002FDE8(a1 + 8);
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
