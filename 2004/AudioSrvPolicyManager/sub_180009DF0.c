/*
 * XREFs of sub_180009DF0 @ 0x180009DF0
 * Callers:
 *     sub_180006740 @ 0x180006740 (sub_180006740.c)
 *     sub_180009CE0 @ 0x180009CE0 (sub_180009CE0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180009DF0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120)
    && (*a2 != -1500859031 || a2[1] != 1127266595 || a2[2] != 890722466 || a2[3] != 775499073) )
  {
    if ( *a2 != 1803915720 || a2[1] != 1163769814 || a2[2] != 729940864 || a2[3] != 2043034109 )
      return (unsigned int)-2147467262;
    a1 += 8LL;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
