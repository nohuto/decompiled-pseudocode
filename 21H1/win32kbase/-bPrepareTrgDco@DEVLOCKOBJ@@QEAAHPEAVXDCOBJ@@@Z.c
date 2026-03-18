/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C0074AE8
 * Callers:
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00433F0 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00749B0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074AA8 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00C5914 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DEVLOCKOBJ::bPrepareTrgDco(DEVLOCKOBJ *this, struct XDCOBJ *a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( qword_1C02571D0 )
    v5 = qword_1C02571D0();
  else
    v5 = -1073741637;
  if ( v5 < 0 )
    return 0LL;
  if ( qword_1C02571D8 )
    return (unsigned int)qword_1C02571D8(this, a2);
  return v2;
}
