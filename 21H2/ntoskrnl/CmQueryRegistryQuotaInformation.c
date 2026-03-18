/*
 * XREFs of CmQueryRegistryQuotaInformation @ 0x14080B5A8
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     CmpUpdateGlobalQuotaAllowed @ 0x14068B198 (CmpUpdateGlobalQuotaAllowed.c)
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
