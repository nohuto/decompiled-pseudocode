/*
 * XREFs of _NtGdiDDCCIGetCapabilitiesStringLength@8 @ 0x1D002E
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QAEJPAXPAK@Z @ 0x1CF66F (-DdcciGetCapabilitiesStringLength@CMonitorAPI@@QAEJPAXPAK@Z.c)
 */

int __thiscall NtGdiDDCCIGetCapabilitiesStringLength(CMonitorAPI *this, void *a2, unsigned int *Address)
{
  int CapabilitiesStringLength; // edi
  unsigned int v5; // [esp+10h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+14h] [ebp-18h]

  v5 = 0;
  CapabilitiesStringLength = CMonitorAPI::DdcciGetCapabilitiesStringLength(this, a2, &v5);
  if ( CapabilitiesStringLength >= 0 )
  {
    ms_exc.registration.TryLevel = 0;
    ProbeForWrite(Address, 4u, 1u);
    *Address = v5;
    ms_exc.registration.TryLevel = -2;
  }
  return CapabilitiesStringLength;
}
