/*
 * XREFs of sub_180025A50 @ 0x180025A50
 * Callers:
 *     sub_180025970 @ 0x180025970 (sub_180025970.c)
 *     sub_180025990 @ 0x180025990 (sub_180025990.c)
 *     sub_180025B20 @ 0x180025B20 (sub_180025B20.c)
 * Callees:
 *     sub_180011C3C @ 0x180011C3C (sub_180011C3C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180025A50(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    goto LABEL_9;
  if ( *a2 != -1350114592 )
    goto LABEL_15;
  if ( a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915 )
  {
    if ( *a2 == -1350114592 && a2[1] == 1282060589 && a2[2] == -1428727140 && a2[3] == -1877077915 )
    {
      *a3 = a1;
      v4 = 0;
      goto LABEL_16;
    }
LABEL_15:
    v4 = sub_180011C3C(a1 + 8, a2, a3);
    if ( v4 < 0 )
      return (unsigned int)v4;
LABEL_16:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
LABEL_9:
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
