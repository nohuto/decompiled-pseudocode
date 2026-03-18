/*
 * XREFs of ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z @ 0x1CF957
 * Callers:
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AAEJXZ @ 0x1CF23A (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AAEJXZ.c)
 *     ?DdcciGetTimingReport@CPhysicalMonitorHandle@@QAEJPAU_MC_TIMING_REPORT@@@Z @ 0x1CF769 (-DdcciGetTimingReport@CPhysicalMonitorHandle@@QAEJPAU_MC_TIMING_REPORT@@@Z.c)
 *     ?DdcciGetVCPFeature@CPhysicalMonitorHandle@@QAEJKPAW4_MC_VCP_CODE_TYPE@@PAK1@Z @ 0x1CF86A (-DdcciGetVCPFeature@CPhysicalMonitorHandle@@QAEJKPAW4_MC_VCP_CODE_TYPE@@PAK1@Z.c)
 * Callees:
 *     ?DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AAEJK_JPAXK1K@Z @ 0x1CFA6C (-DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AAEJK_JPAXK1K@Z.c)
 *     ?VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CGJEPBEK@Z @ 0x1CFF33 (-VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CGJEPBEK@Z.c)
 */

int __thiscall CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(
        CPhysicalMonitorHandle *this,
        union _LARGE_INTEGER Interval,
        void *a3,
        unsigned int a4)
{
  int result; // eax
  int v5; // [esp+0h] [ebp-8h] BYREF
  unsigned int v6; // [esp+4h] [ebp-4h]

  v6 = 0;
  v5 = 111;
  result = CPhysicalMonitorHandle::DdcciSendIoctlToMonitorDevice(
             this,
             (unsigned int)nullsub_1,
             Interval,
             &v5,
             8u,
             a3,
             a4);
  if ( result >= 0 )
    return CPhysicalMonitorHandle::VerifyDDCCIMessageChecksum(a4, (const unsigned __int8 *)v5, v6);
  return result;
}
