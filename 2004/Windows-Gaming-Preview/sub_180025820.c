/*
 * XREFs of sub_180025820 @ 0x180025820
 * Callers:
 *     sub_180025650 @ 0x180025650 (sub_180025650.c)
 *     sub_180025670 @ 0x180025670 (sub_180025670.c)
 *     sub_180025950 @ 0x180025950 (sub_180025950.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180025820(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    goto LABEL_9;
  if ( *a2 != -1350114592 )
  {
LABEL_15:
    a1 += 8LL;
    if ( *a2 != 636920865 || a2[1] != 1301403893 || a2[2] != -715977036 || a2[3] != 1692299240 )
    {
      if ( *a2 == 56 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
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
      goto LABEL_26;
    }
LABEL_14:
    *a3 = a1;
    v4 = 0;
LABEL_26:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  if ( a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915 )
  {
    if ( *a2 == -1350114592 && a2[1] == 1282060589 && a2[2] == -1428727140 && a2[3] == -1877077915 )
      goto LABEL_14;
    goto LABEL_15;
  }
LABEL_9:
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
