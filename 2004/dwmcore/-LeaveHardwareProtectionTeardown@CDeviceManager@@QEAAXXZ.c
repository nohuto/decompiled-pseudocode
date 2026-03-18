/*
 * XREFs of ?LeaveHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ @ 0x180237010
 * Callers:
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800D72FC (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18009EB7C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180154254 (McTemplateU0q_EventWriteTransfer.c)
 */

void __fastcall CDeviceManager::LeaveHardwareProtectionTeardown(CDeviceManager *this)
{
  __int64 v1; // rcx
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = &stru_180349580;
  EnterCriticalSection(&stru_180349580);
  byte_1803495C0 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0q_EventWriteTransfer(v1, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 0LL);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v2);
}
