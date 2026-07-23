/*
 * XREFs of PopEnableHiberFile @ 0x140783F90
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x14077DB50 (PopNotifyPolicyDevice.c)
 *     PoInitHiberServices @ 0x140783B18 (PoInitHiberServices.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     MmGetHighestPhysicalPage @ 0x1403019A8 (MmGetHighestPhysicalPage.c)
 *     PopOpenPowerKey @ 0x1403A5434 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403F38A0 (ZwQueryValueKey.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1406A5434 (PopRemoveReasonRecordByReasonCode.c)
 *     MmReleaseDumpHibernateResources @ 0x140767C5C (MmReleaseDumpHibernateResources.c)
 *     PopLogSleepDisabled @ 0x14076C3F8 (PopLogSleepDisabled.c)
 *     PopCalculateHiberFileSize @ 0x14077B428 (PopCalculateHiberFileSize.c)
 *     PopClearHiberFileSignature @ 0x14077C2C4 (PopClearHiberFileSignature.c)
 *     MmAllocateDumpHibernateResources @ 0x14077C7CC (MmAllocateDumpHibernateResources.c)
 *     PopCheckDisabledReason @ 0x140784334 (PopCheckDisabledReason.c)
 *     PopPreallocateHibernateMemory @ 0x14078436C (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x1407846F0 (PopCreateHiberFile.c)
 *     PopResetCurrentPolicies @ 0x140785428 (PopResetCurrentPolicies.c)
 *     MmZeroPageFileAtShutdown @ 0x1408C15F4 (MmZeroPageFileAtShutdown.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C4EE0 (MmReturnChargesToLockPagedPool.c)
 *     PopSaveHibernateEnabled @ 0x1408DE024 (PopSaveHibernateEnabled.c)
 *     PopDeleteHiberFile @ 0x1408E38AC (PopDeleteHiberFile.c)
 *     PopZeroHiberFile @ 0x1408E40B0 (PopZeroHiberFile.c)
 *     EmClientQueryRuleState @ 0x14098C2E0 (EmClientQueryRuleState.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopEnableHiberFile(char a1, char a2)
{
  char v4; // r14
  char v5; // al
  char v6; // r11
  char v7; // di
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  HANDLE v11; // rbx
  ULONG_PTR DumpHibernateResources; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  PVOID PoolWithTag; // rax
  void *v16; // rbx
  int v17; // ebx
  PVOID v19; // rdi
  PVOID v20; // rsi
  char v21[8]; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  __int64 v24; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-9h] BYREF
  UNICODE_STRING v27; // [rsp+78h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+17h] BYREF
  int v29; // [rsp+98h] [rbp+27h]

  v24 = 0LL;
  v21[0] = 0;
  ResultLength = 0;
  v29 = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v4 = 0;
  v27 = 0LL;
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
      dword_140C23064 = 1;
      dword_140C23044 = 1601;
      byte_140C23061 = 0;
      dword_140C230E8 = 0;
      if ( (int)PopOpenPowerKey((__int64)&KeyHandle) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MaxHuffRatio");
        v11 = KeyHandle;
        if ( ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &ResultLength) >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
        {
          dword_140C23064 = HIDWORD(KeyValueInformation);
          if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
            dword_140C23064 = 1;
        }
        RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
        v29 = 0;
        KeyValueInformation = 0LL;
        if ( ZwQueryValueKey(v11, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
        {
          dword_140C23044 = HIDWORD(KeyValueInformation);
        }
        RtlInitUnicodeString(&v27, L"MultiPhaseResumeDisabled");
        v29 = 0;
        KeyValueInformation = 0LL;
        if ( ZwQueryValueKey(v11, &v27, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
        {
          byte_140C23061 = HIDWORD(KeyValueInformation) == 1;
          dword_140C230E8 |= 0x20u;
        }
        ZwClose(v11);
      }
      if ( !PopHiberEnabled )
      {
        PopHiberEnabled = 1;
        v4 = 1;
      }
      if ( v7 )
      {
        v17 = -1073741637;
        goto LABEL_35;
      }
      DumpHibernateResources = MmAllocateDumpHibernateResources(0x13000uLL, v8, v9, v10);
      v13 = DumpHibernateResources;
      if ( DumpHibernateResources )
      {
        v14 = DumpHibernateResources + 0x200000;
        if ( (DumpHibernateResources & 0x1FFFFF) != 0 )
          v14 = (DumpHibernateResources + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
        if ( v14 - DumpHibernateResources >= 0xA000 )
          v14 = DumpHibernateResources;
        PopCalculateHiberFileSize(&v24, (unsigned __int8 *)v21);
        LODWORD(KeyHandle) = PopCreateHiberFile(v24);
        if ( (int)KeyHandle < 0 )
        {
          PopLogSleepDisabled(6, 8, &KeyHandle, 4uLL);
          v17 = (int)KeyHandle;
LABEL_34:
          if ( !v13 )
            goto LABEL_35;
          MmReleaseDumpHibernateResources(v13);
          v20 = 0LL;
          v19 = 0LL;
          goto LABEL_60;
        }
        qword_140C23048 = v13;
        qword_140C23050 = v14;
        v13 = 0LL;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1C8uLL, 0x70616D48u);
        v16 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x1C8uLL);
          MemoryMap = v16;
          v17 = PopPreallocateHibernateMemory();
          if ( v17 < 0 )
            goto LABEL_35;
          LODWORD(KeyHandle) = 1;
          EmClientQueryRuleState(EM_RULE_DISABLE_MULTI_PHASE_RESUME, &KeyHandle);
          if ( (_DWORD)KeyHandle == 2 )
          {
            dword_140C230E8 |= 0x10u;
            byte_140C23061 = 1;
          }
          byte_140C23A76 = v21[0];
          BYTE8(PopCapabilities) = 1;
          if ( !InitSafeBootMode )
            byte_140C23A72 = 1;
          if ( (BYTE8(PopBsdPowerTransitionAtBoot) & 1) == 0 )
            PopClearHiberFileSignature();
          v17 = 0;
          goto LABEL_34;
        }
      }
      v17 = -1073741670;
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
    ExFreePoolWithTag(qword_140C23038, 0x72626968u);
    memset(&PopHiberInfo, 0, 0xD8uLL);
    v19 = qword_140C23070;
    v20 = MemoryMap;
    BYTE8(PopCapabilities) = 0;
    byte_140C23A76 = 0;
    byte_140C23A72 = 0;
    v17 = PopResetCurrentPolicies();
LABEL_60:
    if ( v19 )
    {
      MmReturnChargesToLockPagedPool(v19, Length);
      ExFreePoolWithTag(v19, 0);
      memset(&qword_140C23070, 0, 0x78uLL);
    }
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0x70616D48u);
      MemoryMap = 0LL;
    }
LABEL_35:
    if ( !v4 )
      return (unsigned int)v17;
    goto LABEL_36;
  }
  v17 = 0;
LABEL_36:
  if ( a2 )
    PopSaveHibernateEnabled();
  return (unsigned int)v17;
}
