/*
 * XREFs of ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AAEJXZ @ 0x1CF5FC
 * Callers:
 *     ?DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QAEJPADK@Z @ 0x1CF151 (-DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QAEJPADK@Z.c)
 *     ?DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QAEJPAK@Z @ 0x1CF6BD (-DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QAEJPAK@Z.c)
 * Callees:
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AAEJXZ @ 0x1CF23A (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AAEJXZ.c)
 *     ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AAEJXZ @ 0x1CF484 (-DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AAEJXZ.c)
 */

NTSTATUS __thiscall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringInternal(CPhysicalMonitorHandle *this)
{
  void *v2; // eax
  NTSTATUS CapabilitiesStringFromRegistry; // ebx
  struct OPM::CMutex *v5; // [esp-4h] [ebp-18h]
  _BYTE v6[4]; // [esp+Ch] [ebp-8h] BYREF
  _BYTE v7[4]; // [esp+10h] [ebp-4h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v6, (CPhysicalMonitorHandle *)((char *)this + 40));
  v2 = (void *)*((_DWORD *)this + 11);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x63326947u);
  v5 = (struct OPM::CMutex *)*((_DWORD *)this + 1);
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v7, v5);
  CapabilitiesStringFromRegistry = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromRegistry((PDEVICE_OBJECT *)this);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v7);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v6);
  if ( CapabilitiesStringFromRegistry == 1612644351 )
    return CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromMonitor(this);
  return CapabilitiesStringFromRegistry;
}
