/*
 * XREFs of IsGetDesktopViewSupported @ 0x1C009D568
 * Callers:
 *     ValidateHwndEx @ 0x1C008BD80 (ValidateHwndEx.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C009D130 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetDesktopViewSupported()
{
  if ( qword_1C0257C20 )
    return qword_1C0257C20();
  else
    return 3221225659LL;
}
