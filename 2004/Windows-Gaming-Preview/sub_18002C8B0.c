/*
 * XREFs of sub_18002C8B0 @ 0x18002C8B0
 * Callers:
 *     sub_18002C990 @ 0x18002C990 (sub_18002C990.c)
 *     sub_180037160 @ 0x180037160 (sub_180037160.c)
 *     sub_180037310 @ 0x180037310 (sub_180037310.c)
 *     sub_180037500 @ 0x180037500 (sub_180037500.c)
 * Callees:
 *     sub_18002FDE8 @ 0x18002FDE8 (sub_18002FDE8.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002C8B0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120)
    && (*a2 != -1350114592 || a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915) )
  {
    if ( *a2 == 1211000685 && a2[1] == 1589754131 && a2[2] == -1772115793 && a2[3] == -1366020462 )
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
