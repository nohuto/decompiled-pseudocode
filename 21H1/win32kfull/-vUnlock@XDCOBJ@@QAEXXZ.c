/*
 * XREFs of ?vUnlock@XDCOBJ@@QAEXXZ @ 0xF5D31
 * Callers:
 *     _NtGdiSetPixel@16 @ 0xC0162 (_NtGdiSetPixel@16.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

void __thiscall XDCOBJ::vUnlock(XDCOBJ *this)
{
  if ( *(_DWORD *)this )
    XDCOBJ::vUnlockFast(this);
  *(_DWORD *)this = 0;
}
