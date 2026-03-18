/*
 * XREFs of KeRestoreProcessorSpecificFeatures @ 0x1403811BC
 * Callers:
 *     PopHandleNextState @ 0x14098F3C0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AA6C0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiRestoreFeatureBits @ 0x140381220 (KiRestoreFeatureBits.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiDisableCacheErrataSource @ 0x14051C714 (KiDisableCacheErrataSource.c)
 *     KiRestoreXSaveSupport @ 0x140990A9C (KiRestoreXSaveSupport.c)
 *     KiSetPageAttributesTable @ 0x140994CDC (KiSetPageAttributesTable.c)
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
