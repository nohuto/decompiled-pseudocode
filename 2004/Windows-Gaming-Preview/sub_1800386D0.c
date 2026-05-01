/*
 * XREFs of sub_1800386D0 @ 0x1800386D0
 * Callers:
 *     sub_18002C790 @ 0x18002C790 (sub_18002C790.c)
 *     sub_180037BB0 @ 0x180037BB0 (sub_180037BB0.c)
 *     sub_180037BD0 @ 0x180037BD0 (sub_180037BD0.c)
 *     sub_1800387B0 @ 0x1800387B0 (sub_1800387B0.c)
 * Callees:
 *     sub_180011C3C @ 0x180011C3C (sub_180011C3C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800386D0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120)
    && (*a2 != -1350114592 || a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915) )
  {
    if ( *a2 == 2028310959 && a2[1] == 1324396866 && a2[2] == -1135267704 && a2[3] == -352984021 )
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
