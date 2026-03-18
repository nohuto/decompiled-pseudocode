/*
 * XREFs of IsCreateBitmapStripSupported @ 0x1C0062A54
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0062740 (xxxResetDisplayDevice.c)
 *     xxxSetSysColors @ 0x1C00A6C60 (xxxSetSysColors.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCreateBitmapStripSupported()
{
  if ( qword_1C0252A58 )
    return qword_1C0252A58();
  else
    return 3221225659LL;
}
