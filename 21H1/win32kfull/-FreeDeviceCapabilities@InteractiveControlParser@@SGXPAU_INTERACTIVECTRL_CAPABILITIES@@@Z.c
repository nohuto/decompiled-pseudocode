/*
 * XREFs of ?FreeDeviceCapabilities@InteractiveControlParser@@SGXPAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1B5DA9
 * Callers:
 *     ?Deinitialize@InteractiveControlDevice@@QAEXXZ @ 0x1B1A87 (-Deinitialize@InteractiveControlDevice@@QAEXXZ.c)
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAVInteractiveControlDevice@@@Z @ 0x1B5930 (-BuildDeviceCapabilities@InteractiveControlParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAVInteractiveCon.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?FreeComponentInformation@InteractiveControlParser@@CGXPAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1B5D65 (-FreeComponentInformation@InteractiveControlParser@@CGXPAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 */

void __thiscall InteractiveControlParser::FreeDeviceCapabilities(_DWORD *this)
{
  if ( this )
  {
    InteractiveControlParser::FreeComponentInformation(this);
    if ( this[37] )
      RawInputManagerDeviceObjectDereference(this[37]);
    memset(this, 0, 0x9Cu);
  }
}
