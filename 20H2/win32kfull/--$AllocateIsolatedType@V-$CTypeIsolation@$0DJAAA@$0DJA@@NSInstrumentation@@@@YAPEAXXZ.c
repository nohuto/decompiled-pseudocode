/*
 * XREFs of ??$AllocateIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C00640B4
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0062FD8 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00F87F4 (-Allocate@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 AllocateIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>()
{
  if ( gpTypeIsolation[5] )
    return NSInstrumentation::CTypeIsolation<233472,912>::Allocate();
  else
    return 0LL;
}
