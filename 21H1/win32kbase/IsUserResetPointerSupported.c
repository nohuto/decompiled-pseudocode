/*
 * XREFs of IsUserResetPointerSupported @ 0x1C0047B38
 * Callers:
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C0047760 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     DxgkEngResetPointer @ 0x1C0154560 (DxgkEngResetPointer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUserResetPointerSupported()
{
  if ( qword_1C0256EF0 )
    return qword_1C0256EF0();
  else
    return 3221225659LL;
}
