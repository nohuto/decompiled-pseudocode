/*
 * XREFs of sub_1800B51A8 @ 0x1800B51A8
 * Callers:
 *     sub_180069484 @ 0x180069484 (sub_180069484.c)
 *     sub_1800B52D0 @ 0x1800B52D0 (sub_1800B52D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

char sub_1800B51A8()
{
  char v0; // bl

  v0 = 0;
  if ( byte_18019FA00 )
    return 1;
  if ( qword_18019E3B8 ? qword_18019E3B8() : 0 )
    return 1;
  return v0;
}
