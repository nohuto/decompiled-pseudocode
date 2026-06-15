/*
 * XREFs of sub_180009BB0 @ 0x180009BB0
 * Callers:
 *     sub_180009B60 @ 0x180009B60 (sub_180009B60.c)
 *     sub_180009B90 @ 0x180009B90 (sub_180009B90.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180009BB0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120 )
  {
    if ( *a2 == -1104187591 && a2[1] == 1137829216 && a2[2] == -2094898262 && a2[3] == -501381298
      || (a1 += 8LL, *a2 == -1500859031) && a2[1] == 1127266595 && a2[2] == 890722466 && a2[3] == 775499073 )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      if ( *a2 == -1072434747 && a2[1] == 1310278746 && a2[2] == -1913073012 && a2[3] == -287262234 )
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
