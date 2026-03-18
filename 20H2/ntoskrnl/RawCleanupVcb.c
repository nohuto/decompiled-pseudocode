/*
 * XREFs of RawCleanupVcb @ 0x1405D8310
 * Callers:
 *     RawInitiateDeleteVolume @ 0x140202FEC (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x140394DD4 (RawCheckForDeleteVolume.c)
 *     RawMountVolume @ 0x1405D9E90 (RawMountVolume.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x140202C10 (ExFreeCacheAwareRundownProtection.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1405D8390 (FsRtlTeardownPerStreamContexts.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall RawCleanupVcb(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  void *Oplock; // rcx
  _ERESOURCE *Resource; // rcx

  Oplock = AdvancedHeader[1].Oplock;
  if ( Oplock )
  {
    ExFreePoolWithTag(Oplock, 0);
    AdvancedHeader[1].Oplock = 0LL;
  }
  else if ( (*(_DWORD *)&AdvancedHeader[1].NodeTypeCode & 8) != 0 )
  {
    ExFreePoolWithTag(AdvancedHeader[1].FileContextSupportPointer, 0);
    AdvancedHeader[1].FileContextSupportPointer = 0LL;
  }
  if ( (*(_DWORD *)&AdvancedHeader[1].NodeTypeCode & 0x10) != 0 )
    FsRtlTeardownPerStreamContexts(AdvancedHeader);
  Resource = AdvancedHeader[2].Resource;
  if ( Resource )
    ExFreeCacheAwareRundownProtection((PEX_RUNDOWN_REF_CACHE_AWARE)Resource);
  AdvancedHeader[2].Resource = 0LL;
}
