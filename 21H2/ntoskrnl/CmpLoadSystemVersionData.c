/*
 * XREFs of CmpLoadSystemVersionData @ 0x140836AA4
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 *     CmpLoadLayerVersions @ 0x140836CC8 (CmpLoadLayerVersions.c)
 *     CmpMergeVersionDescriptors @ 0x140837574 (CmpMergeVersionDescriptors.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS CmpLoadSystemVersionData()
{
  __int64 *v0; // rsi
  NTSTATUS result; // eax
  int LayerVersions; // edi
  int i; // r15d
  HANDLE KeyHandle; // [rsp+40h] [rbp-51h] BYREF
  PVOID P[16]; // [rsp+48h] [rbp-49h] BYREF

  KeyHandle = 0LL;
  v0 = CmpLayerVersions;
  CmpEditionVersion = 0LL;
  memset(CmpLayerVersions, 0, 0x80uLL);
  CmpLayerVersionCount = 0;
  memset(P, 0, sizeof(P));
  result = ZwOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&stru_140005FB0);
  if ( result >= 0 )
  {
    LayerVersions = CmpLoadLayerVersions(CmpLayerVersions, (__int64)&CmpBuildLayersString, 4088);
    if ( LayerVersions >= 0 )
    {
      CmpLoadLayerVersions(P, (__int64)&CmpServicingLayersString, 64);
      if ( CmpLayerVersions[0] && (*(_DWORD *)(CmpLayerVersions[0] + 800) & 1) != 0 )
        CmpEditionVersion = CmpLayerVersions[0];
      for ( i = 0; i < CmpLayerVersionCount; ++v0 )
        ++i;
      if ( CmpEditionVersion )
      {
        NtBuildNumber = *(_DWORD *)(CmpEditionVersion + 8) | 0xF0000000;
        MEMORY[0xFFFFF78000000260] = *(_DWORD *)(CmpEditionVersion + 8);
        NtBuildQfe = *(_DWORD *)(CmpEditionVersion + 12);
      }
      LayerVersions = 0;
    }
    ZwClose(KeyHandle);
    return LayerVersions;
  }
  return result;
}
