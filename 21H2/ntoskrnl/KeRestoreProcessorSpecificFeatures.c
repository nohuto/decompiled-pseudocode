/*
 * XREFs of KeRestoreProcessorSpecificFeatures @ 0x14038D0F4
 * Callers:
 *     PopHandleNextState @ 0x140A4B5A0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x140A687F0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiRestoreFeatureBits @ 0x14038D164 (KiRestoreFeatureBits.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiDisableCacheErrataSource @ 0x140577C84 (KiDisableCacheErrataSource.c)
 *     KiRestoreXSaveSupport @ 0x140A4DC5C (KiRestoreXSaveSupport.c)
 *     KiSetPageAttributesTable @ 0x140A53954 (KiSetPageAttributesTable.c)
 */

__int64 __fastcall KeRestoreProcessorSpecificFeatures(__int64 a1)
{
  unsigned __int64 v8; // rax

  KiSetPageAttributesTable();
  if ( KiTLBCOverride )
    KiDisableCacheErrataSource();
  _RAX = 2147483649LL;
  __asm { cpuid }
  if ( (_RDX & 0x2000000) != 0 )
  {
    v8 = __readmsr(0xC0000080) | 0x4000;
    _RDX = HIDWORD(v8);
    __writemsr(0xC0000080, v8);
  }
  KiRestoreXSaveSupport(a1, _RDX);
  return KiRestoreFeatureBits();
}
