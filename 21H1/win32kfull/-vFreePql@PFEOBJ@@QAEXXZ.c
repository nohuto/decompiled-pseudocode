/*
 * XREFs of ?vFreePql@PFEOBJ@@QAEXXZ @ 0xCD998
 * Callers:
 *     bUnloadEudcFont @ 0xCD8F6 (bUnloadEudcFont.c)
 * Callees:
 *     <none>
 */

void __thiscall PFEOBJ::vFreePql(PFEOBJ *this)
{
  *(_DWORD *)(*(_DWORD *)this + 8) &= ~0x200u;
  if ( *(_DWORD *)(*(_DWORD *)this + 72) )
  {
    Win32FreePool(*(_DWORD *)(*(_DWORD *)this + 72));
    *(_DWORD *)(*(_DWORD *)this + 72) = 0;
  }
}
