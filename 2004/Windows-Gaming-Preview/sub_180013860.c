/*
 * XREFs of sub_180013860 @ 0x180013860
 * Callers:
 *     sub_1800125A0 @ 0x1800125A0 (sub_1800125A0.c)
 *     sub_180015C90 @ 0x180015C90 (sub_180015C90.c)
 *     sub_180015D10 @ 0x180015D10 (sub_180015D10.c)
 *     sub_180015D90 @ 0x180015D90 (sub_180015D90.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180013860(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int v4; // ebx
  __int64 v5; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120)
    && (*a2 != -1350114592 || a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915) )
  {
    if ( *a2 == -995787682 && a2[1] == 1437807280 && a2[2] == 483267501 && a2[3] == -702675933
      || (a1 += 8LL, *a2 == 56) && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      v5 = a1 + 8;
      if ( *a2 == 54 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120
        || (v5 += 8LL, *a2 == -1796592748) && a2[1] == 1239476684 && a2[2] == 1693384640 && a2[3] == -1873047606
        || *a2 == 3 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
      {
        *a3 = v5;
        v4 = 0;
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
