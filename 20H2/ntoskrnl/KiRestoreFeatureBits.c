/*
 * XREFs of KiRestoreFeatureBits @ 0x140383740
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x1403836DC (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A5150 (HviIsAnyHypervisorPresent.c)
 *     KeInitializeCatRegisters @ 0x1403A7258 (KeInitializeCatRegisters.c)
 *     KiCheckMicrocode @ 0x14099DB80 (KiCheckMicrocode.c)
 */

unsigned __int64 KiRestoreFeatureBits()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 BpbCurrentSpecCtrl; // rcx
  unsigned __int64 v2; // rdx
  char CpuType; // al
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor == 2 )
    __writemsr(0x1A0u, KiIa32MiscEnable);
  if ( (CurrentPrcb->FeatureBits & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, CurrentPrcb->GroupIndex | ((unsigned __int64)CurrentPrcb->Group << 8));
  BpbCurrentSpecCtrl = CurrentPrcb->BpbCurrentSpecCtrl;
  if ( (_BYTE)BpbCurrentSpecCtrl || (KeFeatureBits2 & 0x600) != 0 )
  {
    BpbCurrentSpecCtrl = 72LL;
    __writemsr(0x48u, CurrentPrcb->BpbCurrentSpecCtrl);
  }
  if ( (KeFeatureBits2 & 0x8000) != 0 )
  {
    BpbCurrentSpecCtrl = 290LL;
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  }
  KeInitializeCatRegisters(BpbCurrentSpecCtrl);
  v2 = 0LL;
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( CurrentPrcb->CpuVendor == 1 )
  {
    CpuType = CurrentPrcb->CpuType;
    if ( CpuType > 15 && CpuType != 17 && !(unsigned __int8)HviIsAnyHypervisorPresent(373LL, 0LL) )
    {
      v4 = __readmsr(0xC0011029) | 2;
      v2 = HIDWORD(v4);
      __writemsr(0xC0011029, v4);
    }
  }
  if ( KiFlushPcid && !VslVsmEnabled )
  {
    v5 = __readcr3();
    __writecr3(v5 | 2);
  }
  result = KiCheckMicrocode(CurrentPrcb, v2);
  if ( KiUserCetAllowed )
  {
    v7 = __readcr4();
    result = v7 | 0x800000;
    __writecr4(result);
  }
  return result;
}
