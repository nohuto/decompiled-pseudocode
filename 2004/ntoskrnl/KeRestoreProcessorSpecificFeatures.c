/*
 * XREFs of KeRestoreProcessorSpecificFeatures @ 0x1403819FC
 * Callers:
 *     PopHandleNextState @ 0x140990110 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AB520 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiRestoreFeatureBits @ 0x140381A60 (KiRestoreFeatureBits.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiDisableCacheErrataSource @ 0x14051CD64 (KiDisableCacheErrataSource.c)
 *     KiRestoreXSaveSupport @ 0x1409917EC (KiRestoreXSaveSupport.c)
 *     KiSetPageAttributesTable @ 0x1409960B8 (KiSetPageAttributesTable.c)
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
