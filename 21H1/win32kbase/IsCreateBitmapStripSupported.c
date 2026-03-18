/*
 * XREFs of IsCreateBitmapStripSupported @ 0x1C00AB48C
 * Callers:
 *     xxxSetSysColors @ 0x1C00A8604 (xxxSetSysColors.c)
 *     xxxResetDisplayDevice @ 0x1C00AB4F0 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCreateBitmapStripSupported()
{
  if ( qword_1C0258A18 )
    return qword_1C0258A18();
  else
    return 3221225659LL;
}
