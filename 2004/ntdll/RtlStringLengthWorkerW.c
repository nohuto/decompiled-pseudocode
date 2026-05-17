/*
 * XREFs of RtlStringLengthWorkerW @ 0x18007BAEC
 * Callers:
 *     RtlpGetPolicyValueForSystemCapability @ 0x1800792F8 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x18007B8B0 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlStringCbCatW @ 0x18007BA1C (RtlStringCbCatW.c)
 *     RtlpGetVolumeHandle @ 0x18008B35C (RtlpGetVolumeHandle.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800CB9D4 (LdrpAppxGetRemediationRegistryKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EF8D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180117E38 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringLengthWorkerW(_WORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // r9
  __int64 result; // rax

  for ( i = a2; a2; --a2 )
  {
    if ( !*a1 )
      break;
    ++a1;
  }
  result = a2 == 0 ? 0xC000000D : 0;
  if ( a3 )
  {
    if ( a2 )
      *a3 = i - a2;
    else
      *a3 = 0LL;
  }
  return result;
}
