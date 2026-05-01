/*
 * XREFs of sub_180039EA4 @ 0x180039EA4
 * Callers:
 *     sub_1800385F4 @ 0x1800385F4 (sub_1800385F4.c)
 *     sub_1800392EC @ 0x1800392EC (sub_1800392EC.c)
 *     sub_180039B04 @ 0x180039B04 (sub_180039B04.c)
 *     sub_180044860 @ 0x180044860 (sub_180044860.c)
 *     sub_1800448B8 @ 0x1800448B8 (sub_1800448B8.c)
 *     sub_180064A2C @ 0x180064A2C (sub_180064A2C.c)
 *     sub_180065A10 @ 0x180065A10 (sub_180065A10.c)
 *     sub_180065BE0 @ 0x180065BE0 (sub_180065BE0.c)
 *     sub_180065C70 @ 0x180065C70 (sub_180065C70.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

char sub_180039EA4()
{
  char v0; // bl

  v0 = 0;
  if ( byte_1800B4F90 )
    return 1;
  if ( qword_1800B4ED0 ? qword_1800B4ED0() : 0 )
    return 1;
  return v0;
}
