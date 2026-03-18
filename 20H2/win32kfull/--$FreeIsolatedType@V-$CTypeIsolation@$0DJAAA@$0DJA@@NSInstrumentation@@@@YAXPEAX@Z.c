/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00645EC
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0062FD8 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00642D4 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C02A7DD0 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00F8514 (-Free@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

unsigned __int8 **__fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(__int64 a1)
{
  unsigned __int8 **result; // rax
  unsigned __int8 *v3; // rcx

  result = gpTypeIsolation;
  v3 = gpTypeIsolation[5];
  if ( v3 )
    return (unsigned __int8 **)NSInstrumentation::CTypeIsolation<233472,912>::Free(v3, a1);
  return result;
}
