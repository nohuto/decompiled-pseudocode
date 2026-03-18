/*
 * XREFs of _NtGdiSetDeviceGammaRamp@8 @ 0x21C706
 * Callers:
 *     <none>
 * Callees:
 *     _GreSetDeviceGammaRamp@16 @ 0xCEB1A (_GreSetDeviceGammaRamp@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?bIsProcessLocalSystem@@YGHPAU_EPROCESS@@@Z @ 0x1E7C30 (-bIsProcessLocalSystem@@YGHPAU_EPROCESS@@@Z.c)
 */

int __stdcall NtGdiSetDeviceGammaRamp(HDC a1, int a2)
{
  struct _KPROCESS *CurrentProcess; // eax
  int IsProcessLocalSystem; // eax
  int v5; // [esp+10h] [ebp-1Ch]

  v5 = 0;
  if ( a2 )
  {
    if ( (a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess();
    IsProcessLocalSystem = bIsProcessLocalSystem(CurrentProcess);
    return GreSetDeviceGammaRamp(a1, (HDEV)(IsProcessLocalSystem == 0), 0);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v5;
}
