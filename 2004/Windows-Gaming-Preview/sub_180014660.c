/*
 * XREFs of sub_180014660 @ 0x180014660
 * Callers:
 *     sub_180014740 @ 0x180014740 (sub_180014740.c)
 *     sub_180015C60 @ 0x180015C60 (sub_180015C60.c)
 *     sub_180015D40 @ 0x180015D40 (sub_180015D40.c)
 *     sub_180015DF0 @ 0x180015DF0 (sub_180015DF0.c)
 * Callees:
 *     sub_180014928 @ 0x180014928 (sub_180014928.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180014660(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120)
    && (*a2 != -1350114592 || a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915) )
  {
    if ( *a2 == 789823494 && a2[1] == 1600757818 && a2[2] == -1535799120 && a2[3] == 1044525886 )
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
