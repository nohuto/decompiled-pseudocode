/*
 * XREFs of WheapLoadPolicy @ 0x140A5A298
 * Callers:
 *     WheaInitialize @ 0x140A5A6DC (WheaInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     HalWheaUpdateCmciPolicy @ 0x1403B75E0 (HalWheaUpdateCmciPolicy.c)
 *     ZwQueryLicenseValue @ 0x1403F6020 (ZwQueryLicenseValue.c)
 */

LONGLONG WheapLoadPolicy()
{
  bool v0; // zf
  int v1; // ecx
  int v2; // ecx
  LONGLONG result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG Type; // [rsp+50h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+58h] [rbp+18h] BYREF
  int Data; // [rsp+60h] [rbp+20h] BYREF

  ResultDataSize = 0;
  Type = 0;
  Data = 0;
  DestinationString = 0LL;
  if ( WheaRegPolicyDisableOffline != -1 )
    WheapPolicyDisableOffline = WheaRegPolicyDisableOffline != 0;
  if ( WheaRegPolicyMemPersistOffline != -1 )
  {
    v0 = WheaRegPolicyMemPersistOffline == 0;
    goto LABEL_8;
  }
  RtlInitUnicodeString(&DestinationString, L"Kernel-PersistDefectiveMemoryList");
  if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) >= 0
    && Type == 4
    && ResultDataSize == 4 )
  {
    v0 = Data == 0;
LABEL_8:
    WheapPolicyMemPersistOffline = !v0;
  }
  if ( WheaRegPolicyMemPfaDisable != -1 )
    WheapPolicyMemPfaDisable = WheaRegPolicyMemPfaDisable != 0;
  v1 = WheaRegPolicyMemPfaPageCount;
  if ( (unsigned int)(WheaRegPolicyMemPfaPageCount - 1) <= 0xFFFF
    || (v1 = WheapMaxCorrectedMCEOutstanding, (unsigned int)(WheapMaxCorrectedMCEOutstanding - 1) <= 0xFFFF) )
  {
    WheapPolicyMemPfaPageCount = v1;
  }
  v2 = WheaRegPolicyMemPfaThreshold;
  if ( (unsigned int)(WheaRegPolicyMemPfaThreshold - 1) <= 0xFFFF
    || (v2 = WheapSingleBitEccErrorThreshold, (unsigned int)(WheapSingleBitEccErrorThreshold - 1) <= 0xFFFF) )
  {
    WheapPolicyMemPfaThreshold = v2;
  }
  if ( (unsigned int)WheaRegPolicyMemPfaTimeout <= 0x93A80 )
    WheapPolicyMemPfaTimeout = 10000000LL * (unsigned int)WheaRegPolicyMemPfaTimeout;
  if ( !WheapPolicyMemPfaPageCount || !WheapPolicyMemPfaThreshold )
    WheapPolicyMemPfaDisable = 1;
  if ( WheaRegPolicyIgnoreDummyWrite != -1 )
    WheapPolicyIgnoreDummyWrite = WheaRegPolicyIgnoreDummyWrite != 0;
  if ( WheapRegPolicyRestoreCmciEnabled != -1 )
    WheapPolicyRestoreCmciEnabled = WheapRegPolicyRestoreCmciEnabled != 0;
  HalWheaUpdateCmciPolicy(7, (unsigned __int8)WheapPolicyRestoreCmciEnabled);
  if ( WheapRegPolicyRestoreCmciMaxAttempts != -1 )
    WheapPolicyRestoreCmciMaxAttempts = WheapRegPolicyRestoreCmciMaxAttempts;
  HalWheaUpdateCmciPolicy(8, WheapPolicyRestoreCmciMaxAttempts);
  if ( WheapRegPolicyRestoreCmciErrorLimit != -1 )
    WheapPolicyRestoreCmciErrorLimit = WheapRegPolicyRestoreCmciErrorLimit;
  result = HalWheaUpdateCmciPolicy(9, WheapPolicyRestoreCmciErrorLimit);
  if ( WheapRegPolicyCmciThresholdCount != -1 )
  {
    WheapPolicyCmciThresholdCount = WheapRegPolicyCmciThresholdCount;
    result = HalWheaUpdateCmciPolicy(10, WheapRegPolicyCmciThresholdCount);
  }
  if ( WheapRegPolicyCmciThresholdTime != -1 )
  {
    WheapPolicyCmciThresholdTime = WheapRegPolicyCmciThresholdTime;
    result = HalWheaUpdateCmciPolicy(11, WheapRegPolicyCmciThresholdTime);
  }
  if ( WheapRegPolicyCmciThresholdPollCount != -1 )
  {
    WheapPolicyCmciThresholdPollCount = WheapRegPolicyCmciThresholdPollCount;
    result = HalWheaUpdateCmciPolicy(12, WheapRegPolicyCmciThresholdPollCount);
  }
  if ( WheaRegPolicyDisableOffline != -1 )
    WheaRegistryKeysPresent |= 1u;
  if ( WheaRegPolicyMemPersistOffline != -1 )
    WheaRegistryKeysPresent |= 2u;
  if ( WheaRegPolicyMemPfaDisable != -1 )
    WheaRegistryKeysPresent |= 4u;
  if ( WheaRegPolicyMemPfaPageCount != -1 )
    WheaRegistryKeysPresent |= 8u;
  if ( WheaRegPolicyMemPfaThreshold != -1 )
    WheaRegistryKeysPresent |= 0x10u;
  if ( WheaRegPolicyMemPfaTimeout != -1 )
    WheaRegistryKeysPresent |= 0x20u;
  if ( WheapSingleBitEccErrorThreshold != -1 )
    WheaRegistryKeysPresent |= 0x40u;
  if ( WheapMaxCorrectedMCEOutstanding != -1 )
    WheaRegistryKeysPresent |= 0x80u;
  if ( WheaRegPolicyIgnoreDummyWrite != -1 )
    WheaRegistryKeysPresent |= 0x100u;
  if ( WheapRegPolicyRestoreCmciEnabled != -1 )
    WheaRegistryKeysPresent |= 0x200u;
  if ( WheapRegPolicyRestoreCmciMaxAttempts != -1 )
    WheaRegistryKeysPresent |= 0x400u;
  if ( WheapRegPolicyRestoreCmciErrorLimit != -1 )
    WheaRegistryKeysPresent |= 0x800u;
  if ( WheapRegPolicyCmciThresholdCount != -1 )
    WheaRegistryKeysPresent |= 0x1000u;
  if ( WheapRegPolicyCmciThresholdTime != -1 )
    WheaRegistryKeysPresent |= 0x2000u;
  if ( WheapRegPolicyCmciThresholdPollCount != -1 )
    WheaRegistryKeysPresent |= 0x4000u;
  return result;
}
