/*
 * XREFs of sub_18000D500 @ 0x18000D500
 * Callers:
 *     sub_18000D5F0 @ 0x18000D5F0 (sub_18000D5F0.c)
 *     sub_1800101A0 @ 0x1800101A0 (sub_1800101A0.c)
 *     sub_180010420 @ 0x180010420 (sub_180010420.c)
 *     sub_180010520 @ 0x180010520 (sub_180010520.c)
 * Callees:
 *     sub_18000DA48 @ 0x18000DA48 (sub_18000DA48.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000D500(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120)
    && (*a2 != -1350114592 || a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915) )
  {
    if ( *a2 == 250223321 && a2[1] == 1537803234 && a2[2] == -891682130 && a2[3] == 708194115 )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      v4 = sub_18000DA48(a1 + 8);
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
