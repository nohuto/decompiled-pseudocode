/*
 * XREFs of sub_180018270 @ 0x180018270
 * Callers:
 *     sub_180018490 @ 0x180018490 (sub_180018490.c)
 *     sub_18001ABD0 @ 0x18001ABD0 (sub_18001ABD0.c)
 *     sub_18001ACC0 @ 0x18001ACC0 (sub_18001ACC0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180018270(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120)
    && (*a2 != -1350114592 || a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915) )
  {
    if ( *a2 == -1732662079 && a2[1] == 1395542870 && a2[2] == -721194068 && a2[3] == -1865802711
      || (a1 += 8LL, *a2 == 56) && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      if ( *a2 == -486750271 && a2[1] == 1510685692 && a2[2] == -411914062 && a2[3] == 2127286633 )
      {
        v4 = 0;
        *a3 = a1 + 8;
      }
      else
      {
        v4 = -2147467262;
      }
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
