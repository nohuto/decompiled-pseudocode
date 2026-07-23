/*
 * XREFs of PopEnableHiberFile @ 0x140791980
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x14078B0F0 (PopNotifyPolicyDevice.c)
 *     PoInitHiberServices @ 0x140791508 (PoInitHiberServices.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PopOpenPowerKey @ 0x1403A7834 (PopOpenPowerKey.c)
 *     PopDisableS4Reason @ 0x1403AE478 (PopDisableS4Reason.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403F8450 (ZwQueryValueKey.c)
 *     memset @ 0x140411300 (memset.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x14071F0FC (PopRemoveReasonRecordByReasonCode.c)
 *     MmReleaseDumpHibernateResources @ 0x140773334 (MmReleaseDumpHibernateResources.c)
 *     PopLogSleepDisabled @ 0x14077AE28 (PopLogSleepDisabled.c)
 *     PopCalculateHiberFileSize @ 0x140789A28 (PopCalculateHiberFileSize.c)
 *     PopClearHiberFileSignature @ 0x14078A8C4 (PopClearHiberFileSignature.c)
 *     MmAllocateDumpHibernateResources @ 0x14078ADCC (MmAllocateDumpHibernateResources.c)
 *     PopCheckDisabledReason @ 0x140791E94 (PopCheckDisabledReason.c)
 *     PopPreallocateHibernateMemory @ 0x140791ECC (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x140792250 (PopCreateHiberFile.c)
 *     PopResetCurrentPolicies @ 0x140793178 (PopResetCurrentPolicies.c)
 *     MmZeroPageFileAtShutdown @ 0x1408C7434 (MmZeroPageFileAtShutdown.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408CAD20 (MmReturnChargesToLockPagedPool.c)
 *     PopSaveHibernateEnabled @ 0x1408E3E64 (PopSaveHibernateEnabled.c)
 *     PopZeroHiberFile @ 0x1408E9CC4 (PopZeroHiberFile.c)
 *     EmClientQueryRuleState @ 0x1409930E0 (EmClientQueryRuleState.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEnableHiberFile(char a1, char a2)
{
  char v4; // r14
  int v5; // eax
  int v6; // ebx
  char v7; // al
  char v8; // r11
  char v9; // di
  PVOID v10; // rdi
  PVOID v11; // rsi
  HANDLE v12; // rbx
  ULONG_PTR DumpHibernateResources; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  PVOID PoolWithTag; // rax
  void *v17; // rbx
  char v19[8]; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  __int64 v22; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-9h] BYREF
  UNICODE_STRING v25; // [rsp+78h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+17h] BYREF
  int v27; // [rsp+98h] [rbp+27h]

  v22 = 0LL;
  v19[0] = 0;
  ResultLength = 0;
  v27 = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v4 = 0;
  v25 = 0LL;
  KeyValueInformation = 0LL;
  ValueName = 0LL;
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  v5 = PopDisableS4Reason();
  if ( v5 )
    PopLogSleepDisabled(v5, 8, 0LL, 0LL);
  if ( !(unsigned __int8)PopCheckDisabledReason(2LL) && !(unsigned __int8)PopCheckDisabledReason(1LL) )
    PopCheckDisabledReason(15LL);
  if ( (unsigned __int8)PopCheckDisabledReason(16LL) )
    return (unsigned int)-1073741637;
  v7 = PopCheckDisabledReason(13LL);
  v9 = v8;
  if ( v7 )
    v9 = 1;
  if ( a1 )
  {
    if ( FileObject )
      return 0;
    dword_140C23524 = 1;
    dword_140C23504 = 1601;
    byte_140C23521 = 0;
    dword_140C235A8 = 0;
    if ( (int)PopOpenPowerKey((__int64)&KeyHandle) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MaxHuffRatio");
      v12 = KeyHandle;
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_140C23524 = HIDWORD(KeyValueInformation);
        if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
          dword_140C23524 = 1;
      }
      RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
      v27 = 0;
      KeyValueInformation = 0LL;
      if ( ZwQueryValueKey(v12, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_140C23504 = HIDWORD(KeyValueInformation);
      }
      RtlInitUnicodeString(&v25, L"MultiPhaseResumeDisabled");
      v27 = 0;
      KeyValueInformation = 0LL;
      if ( ZwQueryValueKey(v12, &v25, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        byte_140C23521 = HIDWORD(KeyValueInformation) == 1;
        dword_140C235A8 |= 0x20u;
      }
      ZwClose(v12);
    }
    if ( !PopHiberEnabled )
    {
      PopHiberEnabled = 1;
      v4 = 1;
    }
    if ( v9 )
    {
      v6 = -1073741637;
      goto LABEL_57;
    }
    DumpHibernateResources = MmAllocateDumpHibernateResources(0x13000uLL);
    v14 = DumpHibernateResources;
    if ( !DumpHibernateResources )
      goto LABEL_35;
    v15 = DumpHibernateResources + 0x200000;
    if ( (DumpHibernateResources & 0x1FFFFF) != 0 )
      v15 = (DumpHibernateResources + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
    if ( v15 - DumpHibernateResources >= 0xA000 )
      v15 = DumpHibernateResources;
    PopCalculateHiberFileSize(&v22, (unsigned __int8 *)v19);
    LODWORD(KeyHandle) = PopCreateHiberFile(v22);
    if ( (int)KeyHandle >= 0 )
    {
      qword_140C23508 = v14;
      qword_140C23510 = v15;
      v14 = 0LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1C8uLL, 0x70616D48u);
      v17 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_35:
        v6 = -1073741670;
        goto LABEL_57;
      }
      memset(PoolWithTag, 0, 0x1C8uLL);
      MemoryMap = v17;
      v6 = PopPreallocateHibernateMemory();
      if ( v6 < 0 )
        goto LABEL_57;
      LODWORD(KeyHandle) = 1;
      EmClientQueryRuleState(EM_RULE_DISABLE_MULTI_PHASE_RESUME, &KeyHandle);
      if ( (_DWORD)KeyHandle == 2 )
      {
        dword_140C235A8 |= 0x10u;
        byte_140C23521 = 1;
      }
      byte_140C23EF6 = v19[0];
      BYTE8(PopCapabilities) = 1;
      if ( !InitSafeBootMode )
        byte_140C23EF2 = 1;
      if ( (BYTE8(PopBsdPowerTransitionAtBoot) & 1) == 0 )
        PopClearHiberFileSignature();
      v6 = 0;
    }
    else
    {
      PopLogSleepDisabled(6, 8, &KeyHandle, 4uLL);
      v6 = (int)KeyHandle;
    }
    if ( !v14 )
      goto LABEL_57;
    MmReleaseDumpHibernateResources(v14);
    v11 = 0LL;
    v10 = 0LL;
LABEL_53:
    if ( v10 )
    {
      MmReturnChargesToLockPagedPool(v10, Length);
      ExFreePoolWithTag(v10, 0);
      memset(&qword_140C23530, 0, 0x78uLL);
    }
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0x70616D48u);
      MemoryMap = 0LL;
    }
LABEL_57:
    if ( !v4 )
      return (unsigned int)v6;
    goto LABEL_58;
  }
  v4 = 1;
  PopHiberEnabled = 0;
  if ( FileObject )
  {
    if ( (unsigned int)MmZeroPageFileAtShutdown() )
      PopZeroHiberFile(*(HANDLE *)&PopHiberInfo);
    ObfDereferenceObjectWithTag(FileObject, 0x62486F50u);
    ZwClose(*(HANDLE *)&PopHiberInfo);
    ExFreePoolWithTag(qword_140C234F8, 0x72626968u);
    memset(&PopHiberInfo, 0, 0xD8uLL);
    v10 = qword_140C23530;
    v11 = MemoryMap;
    BYTE8(PopCapabilities) = 0;
    byte_140C23EF6 = 0;
    byte_140C23EF2 = 0;
    v6 = PopResetCurrentPolicies();
    goto LABEL_53;
  }
  v6 = 0;
LABEL_58:
  if ( a2 )
    PopSaveHibernateEnabled();
  return (unsigned int)v6;
}
