/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C005E718
 * Callers:
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C005E5E0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C005E6D8 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00B15B0 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00C52A4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DEVLOCKOBJ::bPrepareTrgDco(DEVLOCKOBJ *this, struct XDCOBJ *a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( qword_1C024F210 )
    v5 = qword_1C024F210();
  else
    v5 = -1073741637;
  if ( v5 < 0 )
    return 0LL;
  if ( qword_1C024F218 )
    return (unsigned int)qword_1C024F218(this, a2);
  return v2;
}
