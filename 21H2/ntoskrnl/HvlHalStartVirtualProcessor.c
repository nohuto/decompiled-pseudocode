/*
 * XREFs of HvlHalStartVirtualProcessor @ 0x1404F5470
 * Callers:
 *     <none>
 * Callees:
 *     HvlpStartVirtualProcessor @ 0x1404F42C4 (HvlpStartVirtualProcessor.c)
 *     VslStartSecureProcessor @ 0x1408902F8 (VslStartSecureProcessor.c)
 */

__int64 __fastcall HvlHalStartVirtualProcessor(int a1, _OWORD *a2)
{
  if ( VslVsmEnabled )
    return VslStartSecureProcessor();
  else
    return HvlpStartVirtualProcessor(a1, a2);
}
