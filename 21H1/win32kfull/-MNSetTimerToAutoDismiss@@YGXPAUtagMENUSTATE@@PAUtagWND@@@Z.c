/*
 * XREFs of ?MNSetTimerToAutoDismiss@@YGXPAUtagMENUSTATE@@PAUtagWND@@@Z @ 0x19699A
 * Callers:
 *     _xxxMNMouseMove@12 @ 0x199408 (_xxxMNMouseMove@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _InternalSetTimer@24 @ 0x2CB62 (_InternalSetTimer@24.c)
 */

void __fastcall MNSetTimerToAutoDismiss(int a1, unsigned int a2)
{
  if ( (*(_DWORD *)(a1 + 4) & 0x1800) == 0x800 )
  {
    if ( InternalSetTimer(a2, (char *)0xFFF9, 16 * gdtMNDropDown, 0, 0, 16) )
      *(_DWORD *)(a1 + 4) |= 0x1000u;
  }
}
