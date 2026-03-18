/*
 * XREFs of sub_1C005C04C @ 0x1C005C04C
 * Callers:
 *     sub_1C000E9B0 @ 0x1C000E9B0 (sub_1C000E9B0.c)
 *     sub_1C0019484 @ 0x1C0019484 (sub_1C0019484.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C005C04C(__int64 a1, __int64 a2)
{
  if ( a1 && qword_1C006B3A0 )
    return qword_1C006B3A0(a1, a2);
  else
    return 3221225473LL;
}
