/*
 * XREFs of IsUserResetPointerSupported @ 0x1C00B94C8
 * Callers:
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C00B9240 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     DxgkEngResetPointer @ 0x1C014BDC0 (DxgkEngResetPointer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUserResetPointerSupported()
{
  if ( qword_1C024EF30 )
    return qword_1C024EF30();
  else
    return 3221225659LL;
}
