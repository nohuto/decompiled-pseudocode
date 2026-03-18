/*
 * XREFs of HvlHalStartVirtualProcessor @ 0x1404F38D0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpStartVirtualProcessor @ 0x1404F2724 (HvlpStartVirtualProcessor.c)
 *     VslStartSecureProcessor @ 0x140892D28 (VslStartSecureProcessor.c)
 */

__int64 __fastcall HvlHalStartVirtualProcessor(int a1, _OWORD *a2)
{
  if ( VslVsmEnabled )
    return VslStartSecureProcessor();
  else
    return HvlpStartVirtualProcessor(a1, a2);
}
