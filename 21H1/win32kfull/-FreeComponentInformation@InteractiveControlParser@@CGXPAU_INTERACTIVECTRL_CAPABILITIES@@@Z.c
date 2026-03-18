/*
 * XREFs of ?FreeComponentInformation@InteractiveControlParser@@CGXPAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1B5D65
 * Callers:
 *     ?BuildComponentInformation@InteractiveControlParser@@CGJPAU_HIDP_PREPARSED_DATA@@GPAVInteractiveControlDevice@@@Z @ 0x1B5646 (-BuildComponentInformation@InteractiveControlParser@@CGJPAU_HIDP_PREPARSED_DATA@@GPAVInteractive.c)
 *     ?FreeDeviceCapabilities@InteractiveControlParser@@SGXPAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1B5DA9 (-FreeDeviceCapabilities@InteractiveControlParser@@SGXPAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall InteractiveControlParser::FreeComponentInformation(_DWORD *this)
{
  _DWORD **v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // ecx

  if ( this[26] )
  {
    v2 = (_DWORD **)(this + 27);
    while ( 1 )
    {
      v3 = *v2;
      if ( *v2 == v2 )
        break;
      if ( (_DWORD **)v3[1] != v2 || (v4 = (_DWORD *)*v3, *(_DWORD **)(*v3 + 4) != v3) )
        __fastfail(3u);
      *v2 = v4;
      v4[1] = v2;
      Win32FreePool(v3);
      --this[26];
    }
  }
  memset(this + 17, 0, 0x24u);
}
