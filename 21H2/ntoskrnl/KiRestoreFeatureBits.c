/*
 * XREFs of KiRestoreFeatureBits @ 0x14038D164
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x14038D0F4 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KeInitializeCatRegisters @ 0x1403B6CE8 (KeInitializeCatRegisters.c)
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 *     KiSetVirtualMitigationControl @ 0x140418DB8 (KiSetVirtualMitigationControl.c)
 *     KiCheckMicrocode @ 0x140A54238 (KiCheckMicrocode.c)
 */

__int64 KiRestoreFeatureBits()
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned __int64 MsrIa32TsxCtrl; // rax
  unsigned __int64 v4; // rdx
  char CpuType; // al
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor == 2 )
    __writemsr(0x1A0u, KiIa32MiscEnable);
  if ( _bittest64((const signed __int64 *)&CurrentPrcb->FeatureBits, 0x22u) )
    __writemsr(0xC0000103, CurrentPrcb->GroupIndex | ((unsigned __int64)CurrentPrcb->Group << 8));
  if ( CurrentPrcb->BpbCurrentSpecCtrl || (KeFeatureBits2 & 0x600) != 0 )
    __writemsr(0x48u, CurrentPrcb->BpbCurrentSpecCtrl);
  KiSetVirtualMitigationControl(CurrentPrcb);
  if ( (KeFeatureBits2 & 0x8000) != 0 )
  {
    MsrIa32TsxCtrl = CurrentPrcb->MsrIa32TsxCtrl;
    v1 = HIDWORD(MsrIa32TsxCtrl);
    v2 = 290LL;
    __writemsr(0x122u, MsrIa32TsxCtrl);
  }
  KeInitializeCatRegisters(v2, v1);
  v4 = 0LL;
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( CurrentPrcb->CpuVendor == 1 )
  {
    CpuType = CurrentPrcb->CpuType;
    if ( CpuType > 15 && CpuType != 17 && !(unsigned __int8)HviIsAnyHypervisorPresent(373LL, 0LL) )
    {
      v6 = __readmsr(0xC0011029) | 2;
      v4 = HIDWORD(v6);
      __writemsr(0xC0011029, v6);
    }
  }
  if ( KiFlushPcid && !VslVsmEnabled )
  {
    v7 = __readcr3();
    __writecr3(v7 | 2);
  }
  KiCheckMicrocode(CurrentPrcb, v4);
  if ( KiUserCetAllowed )
  {
    v8 = __readcr4();
    __writecr4(v8 | 0x800000);
  }
  result = (unsigned int)KiHresetMask;
  if ( (_DWORD)KiHresetMask )
    __writemsr(0x17DAu, (unsigned int)KiHresetMask);
  return result;
}
