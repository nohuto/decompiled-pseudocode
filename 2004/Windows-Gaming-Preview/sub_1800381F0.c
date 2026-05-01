/*
 * XREFs of sub_1800381F0 @ 0x1800381F0
 * Callers:
 *     sub_18002F700 @ 0x18002F700 (sub_18002F700.c)
 *     sub_1800378D0 @ 0x1800378D0 (sub_1800378D0.c)
 *     sub_180037900 @ 0x180037900 (sub_180037900.c)
 *     sub_180037920 @ 0x180037920 (sub_180037920.c)
 *     sub_180037940 @ 0x180037940 (sub_180037940.c)
 *     sub_180037960 @ 0x180037960 (sub_180037960.c)
 *     sub_180037980 @ 0x180037980 (sub_180037980.c)
 *     sub_1800379A0 @ 0x1800379A0 (sub_1800379A0.c)
 * Callees:
 *     sub_1800380EC @ 0x1800380EC (sub_1800380EC.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800381F0(__int64 a1, _DWORD *a2, _QWORD *a3)
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
    v4 = sub_1800380EC(a1 + 8, a2, a3);
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
