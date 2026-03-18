/*
 * XREFs of CmpInitGlobalQuotaAllowed @ 0x140B2F008
 * Callers:
 *     CmInitSystem1 @ 0x140B15F88 (CmInitSystem1.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x1406AD260 (MmGetNumberOfPhysicalPages.c)
 */

__int64 CmpInitGlobalQuotaAllowed()
{
  char v0; // al
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rax
  __int64 result; // rax

  CmpSizeOfPagedPoolInBytes = MmSizeOfPagedPoolInBytes;
  if ( CmRegistrySizeLimitLength == 4 && CmRegistrySizeLimitType == 4 && CmRegistrySizeLimit )
  {
    v0 = 1;
  }
  else
  {
    v0 = 0;
    if ( CmRegistrySizeLimitLength == 8 && CmRegistrySizeLimitType == 11 && CmRegistrySizeLimit )
      goto LABEL_20;
  }
  if ( !v0 )
  {
    v1 = MmSizeOfPagedPoolInBytes / 3uLL;
    goto LABEL_5;
  }
LABEL_20:
  v1 = CmRegistrySizeLimit;
  CmpQuotaExplicitlySet = 1;
  if ( CmRegistrySizeLimit >= ((((unsigned __int64)MmSizeOfPagedPoolInBytes * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL) )
    v1 = (((unsigned __int64)MmSizeOfPagedPoolInBytes * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_5:
  CmpGlobalQuota = v1;
  if ( v1 > 0xFFFFFFFF )
  {
    v1 = 0xFFFFFFFFLL;
    CmpGlobalQuota = 0xFFFFFFFFLL;
  }
  if ( v1 < 0x1000000 )
  {
    v1 = 0x1000000LL;
    CmpGlobalQuota = 0x1000000LL;
  }
  CmpGlobalQuotaWarning = 95 * (v1 / 0x64);
  if ( CmSystemHiveLimitSize )
  {
    result = (unsigned int)(CmSystemHiveLimitSize << 20);
  }
  else
  {
    if ( (MmGetNumberOfPhysicalPages(0) & 0xFFFFFFFFFFFFFFFEuLL) < 0xC0000 )
      v2 = (unsigned __int64)MmGetNumberOfPhysicalPages(0) >> 1;
    else
      LODWORD(v2) = 393216;
    result = (unsigned int)((_DWORD)v2 << 12);
  }
  CmSystemHiveLimitSize = result;
  return result;
}
