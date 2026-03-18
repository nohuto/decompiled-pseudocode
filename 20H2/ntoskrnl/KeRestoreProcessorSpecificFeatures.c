/*
 * XREFs of KeRestoreProcessorSpecificFeatures @ 0x1403836DC
 * Callers:
 *     PopHandleNextState @ 0x1409960D0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1409B1490 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiRestoreFeatureBits @ 0x140383740 (KiRestoreFeatureBits.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiDisableCacheErrataSource @ 0x140520734 (KiDisableCacheErrataSource.c)
 *     KiRestoreXSaveSupport @ 0x14099785C (KiRestoreXSaveSupport.c)
 *     KiSetPageAttributesTable @ 0x14099C0F0 (KiSetPageAttributesTable.c)
 */

__int64 KeRestoreProcessorSpecificFeatures()
{
  unsigned __int64 v6; // rax

  KiSetPageAttributesTable();
  if ( KiTLBCOverride )
    KiDisableCacheErrataSource();
  _RAX = 2147483649LL;
  __asm { cpuid }
  if ( (_RDX & 0x2000000) != 0 )
  {
    _RCX = 3221225600LL;
    v6 = __readmsr(0xC0000080) | 0x4000;
    _RDX = HIDWORD(v6);
    __writemsr(0xC0000080, v6);
  }
  KiRestoreXSaveSupport(_RCX, _RDX);
  return KiRestoreFeatureBits();
}
