/*
 * XREFs of ?DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QAEJPAK@Z @ 0x1CF6BD
 * Callers:
 *     ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QAEJPAXPAK@Z @ 0x1CF66F (-DdcciGetCapabilitiesStringLength@CMonitorAPI@@QAEJPAXPAK@Z.c)
 * Callees:
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AAEJXZ @ 0x1CF5FC (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AAEJXZ.c)
 */

NTSTATUS __thiscall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringLength(
        CPhysicalMonitorHandle *this,
        unsigned int *a2)
{
  NTSTATUS CapabilitiesStringInternal; // edi
  unsigned int v4; // ecx
  _BYTE v6[4]; // [esp+8h] [ebp-4h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(CPhysicalMonitorHandle *))(*(_DWORD *)this + 8))(this) )
    return -1071774323;
  CapabilitiesStringInternal = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringInternal(this);
  if ( CapabilitiesStringInternal >= 0 )
  {
    OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v6, (CPhysicalMonitorHandle *)((char *)this + 40));
    v4 = *((_DWORD *)this + 12);
    if ( v4 && *((_DWORD *)this + 11) )
      *a2 = v4;
    else
      CapabilitiesStringInternal = -1071774323;
    OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v6);
  }
  return CapabilitiesStringInternal;
}
