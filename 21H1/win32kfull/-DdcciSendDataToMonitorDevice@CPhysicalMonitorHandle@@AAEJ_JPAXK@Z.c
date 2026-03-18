/*
 * XREFs of ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z @ 0x1CFA1C
 * Callers:
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AAEJXZ @ 0x1CF23A (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AAEJXZ.c)
 *     ?DdcciGetTimingReport@CPhysicalMonitorHandle@@QAEJPAU_MC_TIMING_REPORT@@@Z @ 0x1CF769 (-DdcciGetTimingReport@CPhysicalMonitorHandle@@QAEJPAU_MC_TIMING_REPORT@@@Z.c)
 *     ?DdcciGetVCPFeature@CPhysicalMonitorHandle@@QAEJKPAW4_MC_VCP_CODE_TYPE@@PAK1@Z @ 0x1CF86A (-DdcciGetVCPFeature@CPhysicalMonitorHandle@@QAEJKPAW4_MC_VCP_CODE_TYPE@@PAK1@Z.c)
 *     ?DdcciSaveCurrentSettings@CPhysicalMonitorHandle@@QAEJXZ @ 0x1CF9E3 (-DdcciSaveCurrentSettings@CPhysicalMonitorHandle@@QAEJXZ.c)
 *     ?DdcciSetVCPFeature@CPhysicalMonitorHandle@@QAEJKK@Z @ 0x1CFB53 (-DdcciSetVCPFeature@CPhysicalMonitorHandle@@QAEJKK@Z.c)
 * Callees:
 *     ?ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CGEEPBEK@Z @ 0x1CEFF9 (-ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CGEEPBEK@Z.c)
 *     ?DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AAEJK_JPAXK1K@Z @ 0x1CFA6C (-DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AAEJK_JPAXK1K@Z.c)
 */

int __thiscall CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(
        CPhysicalMonitorHandle *this,
        union _LARGE_INTEGER Interval,
        void *a3,
        unsigned int a4)
{
  char v5; // al
  int v6; // edx
  const unsigned __int8 *v8; // [esp+0h] [ebp-14h]
  unsigned int v9; // [esp+4h] [ebp-10h]
  _DWORD v10[3]; // [esp+8h] [ebp-Ch] BYREF

  v5 = CPhysicalMonitorHandle::ComputeDDCCIMessageChecksum((int)a3, 110, a4 - 1, v8, v9);
  *(_BYTE *)(v6 + a4 - 1) = v5;
  v10[0] = 110;
  v10[1] = a4;
  v10[2] = v6;
  return CPhysicalMonitorHandle::DdcciSendIoctlToMonitorDevice(
           this,
           (unsigned int)&loc_232443,
           Interval,
           v10,
           0xCu,
           0,
           0);
}
