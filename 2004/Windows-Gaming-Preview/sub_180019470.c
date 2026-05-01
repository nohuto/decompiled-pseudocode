/*
 * XREFs of sub_180019470 @ 0x180019470
 * Callers:
 *     sub_1800195B0 @ 0x1800195B0 (sub_1800195B0.c)
 *     sub_18001ABB0 @ 0x18001ABB0 (sub_18001ABB0.c)
 *     sub_18001ACB0 @ 0x18001ACB0 (sub_18001ACB0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180019470(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120)
    && (*a2 != -1350114592 || a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915) )
  {
    if ( *a2 == 789823494 && a2[1] == 1600757818 && a2[2] == -1535799120 && a2[3] == 1044525886
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
