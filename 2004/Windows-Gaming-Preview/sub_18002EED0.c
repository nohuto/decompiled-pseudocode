/*
 * XREFs of sub_18002EED0 @ 0x18002EED0
 * Callers:
 *     sub_18002F6B0 @ 0x18002F6B0 (sub_18002F6B0.c)
 *     sub_180037100 @ 0x180037100 (sub_180037100.c)
 *     sub_180037490 @ 0x180037490 (sub_180037490.c)
 *     sub_180037670 @ 0x180037670 (sub_180037670.c)
 * Callees:
 *     sub_18002FEA4 @ 0x18002FEA4 (sub_18002FEA4.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002EED0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120)
    && (*a2 != -1350114592 || a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915) )
  {
    if ( *a2 == -1149743062 && a2[1] == 1425733533 && a2[2] == -980366958 && a2[3] == 2128584451 )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      v4 = sub_18002FEA4(a1 + 8);
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
