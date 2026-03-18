/*
 * XREFs of ?EnterHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ @ 0x180235EDC
 * Callers:
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800D6DEC (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800688AC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152344 (McTemplateU0q_EventWriteTransfer.c)
 */

void __fastcall CDeviceManager::EnterHardwareProtectionTeardown(CDeviceManager *this)
{
  __int64 v1; // rcx
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = &stru_180348570;
  EnterCriticalSection(&stru_180348570);
  byte_1803485B0 = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0q_EventWriteTransfer(v1, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 1LL);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v2);
}
