/*
 * XREFs of NtGdiGetDeviceGammaRamp @ 0x1C02B5800
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDeviceGammaRamp @ 0x1C0115164 (GreGetDeviceGammaRamp.c)
 */

__int64 __fastcall NtGdiGetDeviceGammaRamp(HDC a1, ULONG64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx

  v2 = a2;
  v3 = 0;
  if ( a2 )
  {
    if ( (a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    *(_BYTE *)a2 = *(_BYTE *)a2;
    *(_BYTE *)(a2 + 1535) = *(_BYTE *)(a2 + 1535);
    return (unsigned int)GreGetDeviceGammaRamp(a1, v2);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v3;
}
