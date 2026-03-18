/*
 * XREFs of _NtGdiGetDeviceGammaRamp@8 @ 0x21C3C2
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetDeviceGammaRamp@8 @ 0xD0F8E (_GreGetDeviceGammaRamp@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtGdiGetDeviceGammaRamp(HDC a1, ULONG a2)
{
  int v3; // [esp+10h] [ebp-1Ch]

  v3 = 0;
  if ( a2 )
  {
    if ( (a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 >= _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *(_BYTE *)a2 = *(_BYTE *)a2;
    *(_BYTE *)(a2 + 1534) = *(_BYTE *)(a2 + 1534);
    return GreGetDeviceGammaRamp(a1, a2);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v3;
}
