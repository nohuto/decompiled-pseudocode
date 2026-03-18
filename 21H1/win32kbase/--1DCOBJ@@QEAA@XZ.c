/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C007F524
 * Callers:
 *     hdcOpenDCW @ 0x1C0069E20 (hdcOpenDCW.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0080370 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  XDCOBJ::vUnlockNoNullSet(this);
}
