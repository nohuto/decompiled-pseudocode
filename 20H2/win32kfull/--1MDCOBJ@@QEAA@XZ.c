/*
 * XREFs of ??1MDCOBJ@@QEAA@XZ @ 0x1C02AD1A4
 * Callers:
 *     NtGdiSelectBitmap @ 0x1C00F7940 (NtGdiSelectBitmap.c)
 *     NtGdiResizePalette @ 0x1C02B6CA0 (NtGdiResizePalette.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall MDCOBJ::~MDCOBJ(MDCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
}
