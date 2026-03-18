/*
 * XREFs of _DesktopFromDesktopWindow@4 @ 0xAD7D0
 * Callers:
 *     _CreateOrGetRedirectionBitmap@16 @ 0x20722 (_CreateOrGetRedirectionBitmap@16.c)
 * Callees:
 *     <none>
 */

int __thiscall DesktopFromDesktopWindow(_DWORD *this)
{
  int v2; // esi
  int v3; // eax
  int i; // eax
  int v5; // ecx

  v2 = 0;
  if ( (*(_WORD *)(this[5] + 30) & 0x3FFF) == 0x29D )
  {
    v3 = *(_DWORD *)(PsGetCurrentProcessWin32Process() + 356);
    if ( v3 )
    {
      for ( i = *(_DWORD *)(v3 + 8); i; i = *(_DWORD *)(i + 16) )
      {
        v5 = *(_DWORD *)(i + 4);
        if ( v5 && *(_DWORD **)(v5 + 12) == this )
          return i;
      }
    }
  }
  return v2;
}
