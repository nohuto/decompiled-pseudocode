/*
 * XREFs of sub_180019660 @ 0x180019660
 * Callers:
 *     sub_180019770 @ 0x180019770 (sub_180019770.c)
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180019660(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120)
    && (*a2 != -1350114592 || a2[1] != 1282060589 || a2[2] != -1428727140 || a2[3] != -1877077915)
    && (*a2 != -1942991173 || a2[1] != 1352951317 || a2[2] != -1635309176 || a2[3] != 909264077) )
  {
    if ( *a2 != 56 || a2[1] || a2[2] != 192 || a2[3] != 1174405120 )
      return (unsigned int)-2147467262;
    a1 += 8LL;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
