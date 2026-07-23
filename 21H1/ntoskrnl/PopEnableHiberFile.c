/*
 * XREFs of PopEnableHiberFile @ 0x14077B590
 * Callers:
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PoInitHiberServices @ 0x14077B118 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x1407AEE40 (PopNotifyPolicyDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     MmGetHighestPhysicalPage @ 0x1402E4F70 (MmGetHighestPhysicalPage.c)
 *     PopOpenPowerKey @ 0x1403A484C (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403F2610 (ZwQueryValueKey.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x14070FD6C (PopRemoveReasonRecordByReasonCode.c)
 *     MmReleaseDumpHibernateResources @ 0x14075FB64 (MmReleaseDumpHibernateResources.c)
 *     PopLogSleepDisabled @ 0x140769C88 (PopLogSleepDisabled.c)
 *     PopCalculateHiberFileSize @ 0x140779018 (PopCalculateHiberFileSize.c)
 *     PopClearHiberFileSignature @ 0x140779EB4 (PopClearHiberFileSignature.c)
 *     MmAllocateDumpHibernateResources @ 0x14077A3BC (MmAllocateDumpHibernateResources.c)
 *     PopCheckDisabledReason @ 0x14077B934 (PopCheckDisabledReason.c)
 *     PopPreallocateHibernateMemory @ 0x14077B96C (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x14077BCF0 (PopCreateHiberFile.c)
 *     PopResetCurrentPolicies @ 0x14077CA28 (PopResetCurrentPolicies.c)
 *     MmZeroPageFileAtShutdown @ 0x1408C02A4 (MmZeroPageFileAtShutdown.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C3B90 (MmReturnChargesToLockPagedPool.c)
 *     PopSaveHibernateEnabled @ 0x1408DCCB4 (PopSaveHibernateEnabled.c)
 *     PopDeleteHiberFile @ 0x1408E262C (PopDeleteHiberFile.c)
 *     PopZeroHiberFile @ 0x1408E2E30 (PopZeroHiberFile.c)
 *     EmClientQueryRuleState @ 0x14098C0F0 (EmClientQueryRuleState.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopEnableHiberFile(char a1, char a2)
{
  char v4; // r14
  char v5; // al
  char v6; // r11
  char v7; // di
  HANDLE v8; // rbx
  ULONG_PTR DumpHibernateResources; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  PVOID PoolWithTag; // rax
  void *v13; // rbx
  int v14; // ebx
  PVOID v16; // rdi
  PVOID v17; // rsi
  char v18[8]; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  __int64 v21; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-9h] BYREF
  UNICODE_STRING v24; // [rsp+78h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+17h] BYREF
  int v26; // [rsp+98h] [rbp+27h]

  v21 = 0LL;
  v18[0] = 0;
  ResultLength = 0;
  v26 = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v4 = 0;
  v24 = 0LL;
  KeyValueInformation = 0LL;
  ValueName = 0LL;
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  if ( (unsigned __int64)MmGetHighestPhysicalPage(0) >= 0x100000000LL )
    PopLogSleepDisabled(8, 8, 0LL, 0LL);
  if ( !(unsigned __int8)PopCheckDisabledReason(2LL) && !(unsigned __int8)PopCheckDisabledReason(1LL) )
    PopCheckDisabledReason(15LL);
  if ( (unsigned __int8)PopCheckDisabledReason(16LL) )
    return (unsigned int)-1073741637;
  v5 = PopCheckDisabledReason(13LL);
  v7 = v6;
  if ( v5 )
    v7 = 1;
  if ( a1 )
  {
    if ( !FileObject )
    {
      dword_140C23624 = 1;
      dword_140C23604 = 1601;
      byte_140C23621 = 0;
      dword_140C236A8 = 0;
      if ( (int)PopOpenPowerKey((__int64)&KeyHandle) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MaxHuffRatio");
        v8 = KeyHandle;
        if ( ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &ResultLength) >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
        {
          dword_140C23624 = HIDWORD(KeyValueInformation);
          if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
            dword_140C23624 = 1;
        }
        RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
        v26 = 0;
        KeyValueInformation = 0LL;
        if ( ZwQueryValueKey(v8, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
        {
          dword_140C23604 = HIDWORD(KeyValueInformation);
        }
        RtlInitUnicodeString(&v24, L"MultiPhaseResumeDisabled");
        v26 = 0;
        KeyValueInformation = 0LL;
        if ( ZwQueryValueKey(v8, &v24, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
        {
          byte_140C23621 = HIDWORD(KeyValueInformation) == 1;
          dword_140C236A8 |= 0x20u;
        }
        ZwClose(v8);
      }
      if ( !PopHiberEnabled )
      {
        PopHiberEnabled = 1;
        v4 = 1;
      }
      if ( v7 )
      {
        v14 = -1073741637;
        goto LABEL_35;
      }
      DumpHibernateResources = MmAllocateDumpHibernateResources(0x13000uLL);
      v10 = DumpHibernateResources;
      if ( DumpHibernateResources )
      {
        v11 = DumpHibernateResources + 0x200000;
        if ( (DumpHibernateResources & 0x1FFFFF) != 0 )
          v11 = (DumpHibernateResources + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
        if ( v11 - DumpHibernateResources >= 0xA000 )
          v11 = DumpHibernateResources;
        PopCalculateHiberFileSize(&v21, (unsigned __int8 *)v18);
        LODWORD(KeyHandle) = PopCreateHiberFile(v21);
        if ( (int)KeyHandle < 0 )
        {
          PopLogSleepDisabled(6, 8, &KeyHandle, 4uLL);
          v14 = (int)KeyHandle;
LABEL_34:
          if ( !v10 )
            goto LABEL_35;
          MmReleaseDumpHibernateResources(v10);
          v17 = 0LL;
          v16 = 0LL;
          goto LABEL_60;
        }
        qword_140C23608 = v10;
        qword_140C23610 = v11;
        v10 = 0LL;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1C8uLL, 0x70616D48u);
        v13 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x1C8uLL);
          MemoryMap = v13;
          v14 = PopPreallocateHibernateMemory();
          if ( v14 < 0 )
            goto LABEL_35;
          LODWORD(KeyHandle) = 1;
          EmClientQueryRuleState(EM_RULE_DISABLE_MULTI_PHASE_RESUME, &KeyHandle);
          if ( (_DWORD)KeyHandle == 2 )
          {
            dword_140C236A8 |= 0x10u;
            byte_140C23621 = 1;
          }
          byte_140C24016 = v18[0];
          BYTE8(PopCapabilities) = 1;
          if ( !InitSafeBootMode )
            byte_140C24012 = 1;
          if ( (BYTE8(PopBsdPowerTransitionAtBoot) & 1) == 0 )
            PopClearHiberFileSignature();
          v14 = 0;
          goto LABEL_34;
        }
      }
      v14 = -1073741670;
      goto LABEL_35;
    }
    return 0;
  }
  if ( !PopHiberEnabled )
  {
    PopDeleteHiberFile(0LL);
    return 0;
  }
  v4 = 1;
  PopHiberEnabled = 0;
  if ( FileObject )
  {
    if ( (unsigned int)MmZeroPageFileAtShutdown() )
      PopZeroHiberFile(*(HANDLE *)&PopHiberInfo);
    ObfDereferenceObjectWithTag(FileObject, 0x62486F50u);
    ZwClose(*(HANDLE *)&PopHiberInfo);
    ExFreePoolWithTag(qword_140C235F8, 0x72626968u);
    memset(&PopHiberInfo, 0, 0xD8uLL);
    v16 = qword_140C23630;
    v17 = MemoryMap;
    BYTE8(PopCapabilities) = 0;
    byte_140C24016 = 0;
    byte_140C24012 = 0;
    v14 = PopResetCurrentPolicies();
LABEL_60:
    if ( v16 )
    {
      MmReturnChargesToLockPagedPool(v16, Length);
      ExFreePoolWithTag(v16, 0);
      memset(&qword_140C23630, 0, 0x78uLL);
    }
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x70616D48u);
      MemoryMap = 0LL;
    }
LABEL_35:
    if ( !v4 )
      return (unsigned int)v14;
    goto LABEL_36;
  }
  v14 = 0;
LABEL_36:
  if ( a2 )
    PopSaveHibernateEnabled();
  return (unsigned int)v14;
}
