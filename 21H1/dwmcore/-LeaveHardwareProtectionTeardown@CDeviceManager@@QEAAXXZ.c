/*
 * XREFs of ?LeaveHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ @ 0x1802399D0
 * Callers:
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800CF2C0 (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800386EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180155DC4 (McTemplateU0q_EventWriteTransfer.c)
 */

void __fastcall CDeviceManager::LeaveHardwareProtectionTeardown(CDeviceManager *this)
{
  __int64 v1; // rcx
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  byte_18034D620 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0q_EventWriteTransfer(v1, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 0LL);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v2);
}
