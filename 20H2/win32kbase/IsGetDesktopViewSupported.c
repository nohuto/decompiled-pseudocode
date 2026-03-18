/*
 * XREFs of IsGetDesktopViewSupported @ 0x1C0075D38
 * Callers:
 *     ValidateHwndEx @ 0x1C004C330 (ValidateHwndEx.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C0075900 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetDesktopViewSupported()
{
  if ( qword_1C024FC60 )
    return qword_1C024FC60();
  else
    return 3221225659LL;
}
