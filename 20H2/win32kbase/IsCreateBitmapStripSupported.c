/*
 * XREFs of IsCreateBitmapStripSupported @ 0x1C006F774
 * Callers:
 *     xxxSetSysColors @ 0x1C001BB80 (xxxSetSysColors.c)
 *     xxxResetDisplayDevice @ 0x1C006F460 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCreateBitmapStripSupported()
{
  if ( qword_1C0250A58 )
    return qword_1C0250A58();
  else
    return 3221225659LL;
}
