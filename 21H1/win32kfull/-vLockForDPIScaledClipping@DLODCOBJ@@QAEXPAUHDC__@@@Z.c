/*
 * XREFs of ?vLockForDPIScaledClipping@DLODCOBJ@@QAEXPAUHDC__@@@Z @ 0xBDADA
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@H@Z @ 0xBD6B8 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 */

void __thiscall DLODCOBJ::vLockForDPIScaledClipping(DLODCOBJ *this, HDC a2)
{
  int v3; // eax

  v3 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
    goto LABEL_2;
  XDCOBJ::vLock(this, a2);
  v3 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    *((_BYTE *)this + 13) = 0;
LABEL_2:
    *(_DWORD *)(v3 + 28) |= 2u;
    *((_BYTE *)this + 12) = 1;
  }
}
