/*
 * XREFs of GreCleanDC @ 0x1C00691F0
 * Callers:
 *     UserThreadCallout @ 0x1C00672B0 (UserThreadCallout.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C006923C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0080370 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00829C0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 */

_BOOL8 __fastcall GreCleanDC(HDC a1)
{
  BOOL v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = XDCOBJ::bCleanDC((XDCOBJ *)v3, 0) != 0;
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v3);
  return v1;
}
