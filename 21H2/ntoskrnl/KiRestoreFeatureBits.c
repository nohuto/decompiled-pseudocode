/*
 * XREFs of KiRestoreFeatureBits @ 0x140383EE0
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140383E7C (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KeInitializeCatRegisters @ 0x1403A7C68 (KeInitializeCatRegisters.c)
 *     KiSetVirtualMitigationControl @ 0x1403F3520 (KiSetVirtualMitigationControl.c)
 *     KiApplyProcessorErrata @ 0x1403F3594 (KiApplyProcessorErrata.c)
 *     KiCheckMicrocode @ 0x14099C100 (KiCheckMicrocode.c)
 */

unsigned __int64 KiRestoreFeatureBits()
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned __int64 MsrIa32TsxCtrl; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor == 2 )
    __writemsr(0x1A0u, KiIa32MiscEnable);
  if ( (CurrentPrcb->FeatureBits & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, CurrentPrcb->GroupIndex | ((unsigned __int64)CurrentPrcb->Group << 8));
  if ( CurrentPrcb->BpbCurrentSpecCtrl || (KeFeatureBits2 & 0x600) != 0 )
    __writemsr(0x48u, CurrentPrcb->BpbCurrentSpecCtrl);
  KiSetVirtualMitigationControl(CurrentPrcb);
  if ( (KeFeatureBits2 & 0x8000) != 0 )
  {
    v2 = 290LL;
    MsrIa32TsxCtrl = CurrentPrcb->MsrIa32TsxCtrl;
    v1 = HIDWORD(MsrIa32TsxCtrl);
    __writemsr(0x122u, MsrIa32TsxCtrl);
  }
  KeInitializeCatRegisters(v2, v1);
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  KiApplyProcessorErrata(CurrentPrcb, 0LL);
  if ( KiFlushPcid && !VslVsmEnabled )
  {
    v4 = __readcr3();
    __writecr3(v4 | 2);
  }
  result = KiCheckMicrocode(CurrentPrcb);
  if ( KiUserCetAllowed )
  {
    v6 = __readcr4();
    result = v6 | 0x800000;
    __writecr4(result);
  }
  return result;
}
