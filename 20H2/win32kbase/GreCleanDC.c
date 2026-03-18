/*
 * XREFs of GreCleanDC @ 0x1C009B4F0
 * Callers:
 *     UserThreadCallout @ 0x1C004EA50 (UserThreadCallout.c)
 * Callees:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003DE00 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00409E8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

_BOOL8 __fastcall GreCleanDC(HDC a1)
{
  BOOL v1; // ebx
  DC *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = XDCOBJ::bCleanDC(v3) != 0;
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v3);
  return v1;
}
