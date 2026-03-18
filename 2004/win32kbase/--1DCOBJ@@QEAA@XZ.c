/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C00864D4
 * Callers:
 *     hdcOpenDCW @ 0x1C0079530 (hdcOpenDCW.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00873F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  XDCOBJ::vUnlockNoNullSet(this);
}
