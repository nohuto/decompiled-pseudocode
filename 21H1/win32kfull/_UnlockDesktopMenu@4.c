/*
 * XREFs of _UnlockDesktopMenu@4 @ 0xD65B8
 * Callers:
 *     ?DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0x7CC38 (-DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     ??9?$SharedPointerBase@UtagWND@@@@QBEEH@Z @ 0x2A4F2 (--9-$SharedPointerBase@UtagWND@@@@QBEEH@Z.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

void __thiscall UnlockDesktopMenu(int *this, int a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  int v6; // eax

  v3 = *this;
  if ( (*(_BYTE *)(*(_DWORD *)(v3 + 20) + 20) & 0x40) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v3 = *this;
  }
  *(_DWORD *)(*(_DWORD *)(v3 + 20) + 20) &= ~0x40u;
  if ( *(_DWORD *)(*(_DWORD *)(*this + 20) + 24)
    && SharedPointerBase<tagWND>::operator!=((_DWORD *)(*(_DWORD *)(*this + 56) + 8), *(_DWORD *)(*this + 56) + 8) )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v5 + 20) + 20) & 0x40) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v4 = *this;
    }
    v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 56) + 8) + 20);
    *(_DWORD *)(v6 + 20) &= ~0x40u;
  }
  JUMPOUT(0x24F900);
}
