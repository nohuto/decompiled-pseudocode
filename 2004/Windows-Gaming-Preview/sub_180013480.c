/*
 * XREFs of sub_180013480 @ 0x180013480
 * Callers:
 *     sub_180012EF4 @ 0x180012EF4 (sub_180012EF4.c)
 *     sub_180013560 @ 0x180013560 (sub_180013560.c)
 *     sub_180015CB0 @ 0x180015CB0 (sub_180015CB0.c)
 *     sub_180015D80 @ 0x180015D80 (sub_180015D80.c)
 *     sub_180015E30 @ 0x180015E30 (sub_180015E30.c)
 * Callees:
 *     sub_180014928 @ 0x180014928 (sub_180014928.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180013480(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120)
    && (*a2 != -1350114592 || a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915) )
  {
    if ( *a2 == -1732662079 && a2[1] == 1395542870 && a2[2] == -721194068 && a2[3] == -1865802711 )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      v4 = sub_180014928(a1 + 8);
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
