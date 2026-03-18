/*
 * XREFs of HalpErrataInitSystem @ 0x140A54AB0
 * Callers:
 *     <none>
 * Callees:
 *     HalpUsbLegacyScanBusForHandoff @ 0x1403B822C (HalpUsbLegacyScanBusForHandoff.c)
 *     HalpErrataApplyPerProcessor @ 0x140A536C8 (HalpErrataApplyPerProcessor.c)
 *     HalpErrataInitDiscard @ 0x140AF3260 (HalpErrataInitDiscard.c)
 *     HalpInitChipHacks @ 0x140AF6E6C (HalpInitChipHacks.c)
 */

__int64 __fastcall HalpErrataInitSystem(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  switch ( a1 )
  {
    case 19:
      goto LABEL_9;
    case 2:
      HalpMaxPciBus = *(_DWORD *)(*(_QWORD *)(a3 + 240) + 3488LL);
      return v3;
    case 7:
      HalpErrataInitDiscard();
      return v3;
    case 17:
      qword_140C4A1A8 = (__int64)&HalpUsbControllerList;
      HalpUsbControllerList = (__int64)&HalpUsbControllerList;
      HalpUsbLegacyScanBusForHandoff();
LABEL_9:
      HalpErrataApplyPerProcessor();
      return v3;
    case 27:
      return (unsigned int)HalpInitChipHacks();
  }
  return v3;
}
