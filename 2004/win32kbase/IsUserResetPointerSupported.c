/*
 * XREFs of IsUserResetPointerSupported @ 0x1C0055338
 * Callers:
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C0054F60 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     DxgkEngResetPointer @ 0x1C014E210 (DxgkEngResetPointer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUserResetPointerSupported()
{
  if ( qword_1C0250F30 )
    return qword_1C0250F30();
  else
    return 3221225659LL;
}
