/*
 * XREFs of IsGetDesktopViewSupported @ 0x1C00B0738
 * Callers:
 *     ValidateHwndEx @ 0x1C0091FF0 (ValidateHwndEx.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00B0300 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetDesktopViewSupported()
{
  if ( qword_1C0251C60 )
    return qword_1C0251C60();
  else
    return 3221225659LL;
}
