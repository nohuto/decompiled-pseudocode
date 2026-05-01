/*
 * XREFs of sub_180033EC0 @ 0x180033EC0
 * Callers:
 *     sub_180037300 @ 0x180037300 (sub_180037300.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033EC0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int v4; // ebx
  __int64 v5; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120 )
  {
    if ( *a2 == 1858445930 && a2[1] == 1373312900 && a2[2] == -808992353 && a2[3] == 894719705 )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      v5 = a1 + 8;
      if ( *a2 == -1796592748 && a2[1] == 1239476684 && a2[2] == 1693384640 && a2[3] == -1873047606
        || *a2 == 3 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
      {
        *a3 = v5;
        v4 = 0;
      }
      else
      {
        v4 = -2147467262;
      }
      if ( v4 == -2147467262 )
        v4 = -2147467262;
    }
    if ( v4 >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  else
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  return v3;
}
