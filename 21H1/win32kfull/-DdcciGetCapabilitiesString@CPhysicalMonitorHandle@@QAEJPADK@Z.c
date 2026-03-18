/*
 * XREFs of ?DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QAEJPADK@Z @ 0x1CF151
 * Callers:
 *     ?DdcciGetCapabilitiesString@CMonitorAPI@@QAEJPAXPADK@Z @ 0x1CF100 (-DdcciGetCapabilitiesString@CMonitorAPI@@QAEJPAXPADK@Z.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AAEJXZ @ 0x1CF5FC (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AAEJXZ.c)
 *     ?RtlStringCbCopyA@@YGJPADIPBD@Z @ 0x1CFE94 (-RtlStringCbCopyA@@YGJPADIPBD@Z.c)
 */

int __thiscall CPhysicalMonitorHandle::DdcciGetCapabilitiesString(
        CPhysicalMonitorHandle *this,
        char *Address,
        SIZE_T Length)
{
  int CapabilitiesStringInternal; // esi
  bool v5; // zf
  SIZE_T v6; // eax
  unsigned int v8; // [esp+0h] [ebp-30h]
  const char *v9; // [esp+4h] [ebp-2Ch]
  _BYTE v10[7]; // [esp+10h] [ebp-20h] BYREF
  char v11; // [esp+17h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  CapabilitiesStringInternal = 0;
  if ( (*(unsigned __int8 (__thiscall **)(CPhysicalMonitorHandle *))(*(_DWORD *)this + 8))(this) )
    return -1071774323;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v10, (CPhysicalMonitorHandle *)((char *)this + 40));
  if ( !*((_DWORD *)this + 12) || (v5 = *((_DWORD *)this + 11) == 0, v11 = 1, v5) )
    v11 = 0;
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v10);
  if ( v11
    || (CapabilitiesStringInternal = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringInternal(this),
        CapabilitiesStringInternal >= 0) )
  {
    OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v10, (CPhysicalMonitorHandle *)((char *)this + 40));
    v6 = *((_DWORD *)this + 12);
    if ( v6 && *((_DWORD *)this + 11) )
    {
      if ( Length >= v6 )
      {
        ms_exc.registration.TryLevel = 0;
        ProbeForWrite(Address, Length, 1u);
        RtlStringCbCopyA(*((_DWORD *)this + 11), v8, v9);
        ms_exc.registration.TryLevel = -2;
      }
      else
      {
        CapabilitiesStringInternal = -1073741789;
      }
    }
    else
    {
      CapabilitiesStringInternal = -1071774323;
    }
    OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v10);
  }
  return CapabilitiesStringInternal;
}
