/*
 * XREFs of ?PostUnownedNotification@@YGXPAUtagWND@@@Z @ 0xC545E
 * Callers:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 * Callees:
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 */

void __thiscall PostUnownedNotification(int *this)
{
  if ( (*(_BYTE *)(this[5] + 23) & 0x10) != 0 )
  {
    if ( _gpqForeground && *(int **)(_gpqForeground + 64) == this )
      PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 26, *this);
    else
      PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 29, *this);
  }
}
