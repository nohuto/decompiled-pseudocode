/*
 * XREFs of PopEnableHiberFile @ 0x1407910F0
 * Callers:
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 *     PoInitHiberServices @ 0x140790C78 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x1407C42E0 (PopNotifyPolicyDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     PopOpenPowerKey @ 0x1403A7C8C (PopOpenPowerKey.c)
 *     PopDisableS4Reason @ 0x1403A8428 (PopDisableS4Reason.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403FA680 (ZwQueryValueKey.c)
 *     memset @ 0x140414200 (memset.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x14067B62C (PopRemoveReasonRecordByReasonCode.c)
 *     MmReleaseDumpHibernateResources @ 0x1407771A0 (MmReleaseDumpHibernateResources.c)
 *     PopLogSleepDisabled @ 0x14077EC0C (PopLogSleepDisabled.c)
 *     PopCalculateHiberFileSize @ 0x14078D808 (PopCalculateHiberFileSize.c)
 *     PopClearHiberFileSignature @ 0x14078E694 (PopClearHiberFileSignature.c)
 *     MmAllocateDumpHibernateResources @ 0x14078EB9C (MmAllocateDumpHibernateResources.c)
 *     PopCheckDisabledReason @ 0x140791604 (PopCheckDisabledReason.c)
 *     PopPreallocateHibernateMemory @ 0x14079163C (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x1407919C0 (PopCreateHiberFile.c)
 *     PopResetCurrentPolicies @ 0x1407928E8 (PopResetCurrentPolicies.c)
 *     MmZeroPageFileAtShutdown @ 0x1408C4BF4 (MmZeroPageFileAtShutdown.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C84E0 (MmReturnChargesToLockPagedPool.c)
 *     PopSaveHibernateEnabled @ 0x1408E1624 (PopSaveHibernateEnabled.c)
 *     PopZeroHiberFile @ 0x1408E74C4 (PopZeroHiberFile.c)
 *     EmClientQueryRuleState @ 0x14098F620 (EmClientQueryRuleState.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  HANDLE v15; // rbx
  ULONG_PTR DumpHibernateResources; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  PVOID PoolWithTag; // rax
  void *v20; // rbx
  char v22[8]; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  __int64 v25; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-9h] BYREF
  UNICODE_STRING v28; // [rsp+78h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+17h] BYREF
  int v30; // [rsp+98h] [rbp+27h]

  v25 = 0LL;
  v22[0] = 0;
  ResultLength = 0;
  v30 = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v4 = 0;
  v28 = 0LL;
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
    dword_140C23884 = 1;
    dword_140C23864 = 1601;
    byte_140C23881 = 0;
    dword_140C23908 = 0;
    if ( (int)PopOpenPowerKey((__int64)&KeyHandle) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MaxHuffRatio");
      v15 = KeyHandle;
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_140C23884 = HIDWORD(KeyValueInformation);
        if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
          dword_140C23884 = 1;
      }
      RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
      v30 = 0;
      KeyValueInformation = 0LL;
      if ( ZwQueryValueKey(v15, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_140C23864 = HIDWORD(KeyValueInformation);
      }
      RtlInitUnicodeString(&v28, L"MultiPhaseResumeDisabled");
      v30 = 0;
      KeyValueInformation = 0LL;
      if ( ZwQueryValueKey(v15, &v28, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        byte_140C23881 = HIDWORD(KeyValueInformation) == 1;
        dword_140C23908 |= 0x20u;
      }
      ZwClose(v15);
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
    DumpHibernateResources = MmAllocateDumpHibernateResources(0x13000uLL, v12, v13, v14);
    v17 = DumpHibernateResources;
    if ( !DumpHibernateResources )
      goto LABEL_35;
    v18 = DumpHibernateResources + 0x200000;
    if ( (DumpHibernateResources & 0x1FFFFF) != 0 )
      v18 = (DumpHibernateResources + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
    if ( v18 - DumpHibernateResources >= 0xA000 )
      v18 = DumpHibernateResources;
    PopCalculateHiberFileSize(&v25, (unsigned __int8 *)v22);
    LODWORD(KeyHandle) = PopCreateHiberFile(v25);
    if ( (int)KeyHandle >= 0 )
    {
      qword_140C23868 = v17;
      qword_140C23870 = v18;
      v17 = 0LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1C8uLL, 0x70616D48u);
      v20 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_35:
        v6 = -1073741670;
        goto LABEL_57;
      }
      memset(PoolWithTag, 0, 0x1C8uLL);
      MemoryMap = v20;
      v6 = PopPreallocateHibernateMemory();
      if ( v6 < 0 )
        goto LABEL_57;
      LODWORD(KeyHandle) = 1;
      EmClientQueryRuleState(EM_RULE_DISABLE_MULTI_PHASE_RESUME, &KeyHandle);
      if ( (_DWORD)KeyHandle == 2 )
      {
        dword_140C23908 |= 0x10u;
        byte_140C23881 = 1;
      }
      byte_140C24076 = v22[0];
      BYTE8(PopCapabilities) = 1;
      if ( !(_DWORD)InitSafeBootMode )
        byte_140C24072 = 1;
      if ( (BYTE8(PopBsdPowerTransitionAtBoot) & 1) == 0 )
        PopClearHiberFileSignature();
      v6 = 0;
    }
    else
    {
      PopLogSleepDisabled(6, 8, &KeyHandle, 4uLL);
      v6 = (int)KeyHandle;
    }
    if ( !v17 )
      goto LABEL_57;
    MmReleaseDumpHibernateResources(v17);
    v11 = 0LL;
    v10 = 0LL;
LABEL_53:
    if ( v10 )
    {
      MmReturnChargesToLockPagedPool(v10, Length);
      ExFreePoolWithTag(v10, 0);
      memset(&qword_140C23890, 0, 0x78uLL);
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
    ExFreePoolWithTag(qword_140C23858, 0x72626968u);
    memset(&PopHiberInfo, 0, 0xD8uLL);
    v10 = qword_140C23890;
    v11 = MemoryMap;
    BYTE8(PopCapabilities) = 0;
    byte_140C24076 = 0;
    byte_140C24072 = 0;
    v6 = PopResetCurrentPolicies();
    goto LABEL_53;
  }
  v6 = 0;
LABEL_58:
  if ( a2 )
    PopSaveHibernateEnabled();
  return (unsigned int)v6;
}
