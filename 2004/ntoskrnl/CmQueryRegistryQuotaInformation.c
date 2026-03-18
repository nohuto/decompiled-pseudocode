/*
 * XREFs of CmQueryRegistryQuotaInformation @ 0x14076A3DC
 * Callers:
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 * Callees:
 *     CmpUpdateGlobalQuotaAllowed @ 0x14063B768 (CmpUpdateGlobalQuotaAllowed.c)
 */

__int64 CmQueryRegistryQuotaInformation()
{
  __int64 v0; // r8

  CmpUpdateGlobalQuotaAllowed();
  *(_DWORD *)v0 = CmpGlobalQuota;
  *(_DWORD *)(v0 + 4) = CmpGlobalQuotaUsed;
  *(_QWORD *)(v0 + 8) = CmpSizeOfPagedPoolInBytes;
  return 0LL;
}
