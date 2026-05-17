/*
 * XREFs of __allshl @ 0x4B2F65F0
 * Callers:
 *     _EtwpEventApiCallback@8 @ 0x4B2B1011 (_EtwpEventApiCallback@8.c)
 *     _TppPrepareDirectParams@24 @ 0x4B2B64B0 (_TppPrepareDirectParams@24.c)
 *     _GetLCIDFromLangListNodeWithLICCheck@20 @ 0x4B2BA710 (_GetLCIDFromLangListNodeWithLICCheck@20.c)
 *     _RtlpMUIRegPatchLicenseInfortmation@4 @ 0x4B2D427F (_RtlpMUIRegPatchLicenseInfortmation@4.c)
 *     _RtlGetSystemTimePrecise@0 @ 0x4B2DBB10 (_RtlGetSystemTimePrecise@0.c)
 *     _VerSetConditionMask@16 @ 0x4B2E60B0 (_VerSetConditionMask@16.c)
 *     _RtlGetInterruptTimePrecise@4 @ 0x4B3448C0 (_RtlGetInterruptTimePrecise@4.c)
 *     _RtlGetMultiTimePrecise@12 @ 0x4B3449D0 (_RtlGetMultiTimePrecise@12.c)
 *     _RtlRemovePrivileges@12 @ 0x4B346D90 (_RtlRemovePrivileges@12.c)
 *     _RtlLocateExtendedFeature2@16 @ 0x4B35BA70 (_RtlLocateExtendedFeature2@16.c)
 *     _RtlpCopyXStateChunk@20 @ 0x4B35C23D (_RtlpCopyXStateChunk@20.c)
 *     _RtlpGetEntireXStateAreaLength@8 @ 0x4B35C44C (_RtlpGetEntireXStateAreaLength@8.c)
 *     _RtlpHpLfhBucketInitialize@12 @ 0x4B376136 (_RtlpHpLfhBucketInitialize@12.c)
 *     _RtlpHpVsChunkComputeCost@16 @ 0x4B37E9EC (_RtlpHpVsChunkComputeCost@16.c)
 *     _RtlpHpVsChunkSplit@24 @ 0x4B37EE0F (_RtlpHpVsChunkSplit@24.c)
 *     _RtlpHpVsSubsegmentCommitPages@24 @ 0x4B37FC3B (_RtlpHpVsSubsegmentCommitPages@24.c)
 * Callees:
 *     <none>
 */

int __usercall _allshl@<eax>(__int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  __int64 v2; // rax

  if ( a2 >= 0x40u )
  {
    LODWORD(v2) = 0;
  }
  else if ( a2 >= 0x20u )
  {
    LODWORD(v2) = 0;
  }
  else
  {
    return a1 << (a2 & 0x1F);
  }
  return v2;
}
