/*
 * XREFs of _IsDCCurrentPalette@4 @ 0x21E7FE
 * Callers:
 *     _xxxRealizePalette@4 @ 0xBF854 (_xxxRealizePalette@4.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __thiscall IsDCCurrentPalette(HDC this)
{
  int v1; // edi
  int v2; // esi
  unsigned int v3; // ebx
  struct _W32PROCESS *CurrentProcessWin32Process; // eax
  _DWORD v6[3]; // [esp+8h] [ebp-Ch] BYREF

  v1 = 0;
  memset(v6, 0, sizeof(v6));
  XDCOBJ::vLock((XDCOBJ *)v6, this);
  v2 = v6[0];
  if ( v6[0] )
  {
    v3 = *(_DWORD *)(v6[0] + 56);
    if ( (HPALETTE)v3 == hForePalette
      || *(_DWORD *)(*(_DWORD *)(v6[0] + 1020) + 228) == 1
      && ((unsigned __int16)v3 | (v3 >> 8) & 0xFF0000) == ((unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000)
      && (CurrentProcessWin32Process = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(),
          v2 = v6[0],
          hForePID == CurrentProcessWin32Process) )
    {
      v1 = 1;
    }
    if ( v2 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  }
  return v1;
}
