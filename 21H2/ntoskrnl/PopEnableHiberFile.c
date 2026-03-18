/*
 * XREFs of PopEnableHiberFile @ 0x140818E88
 * Callers:
 *     PopHibernateEvaluation @ 0x140818DF4 (PopHibernateEvaluation.c)
 *     PopNotifyPolicyDevice @ 0x140858C40 (PopNotifyPolicyDevice.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x14020DB30 (MmGetHighestPhysicalPage.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1403B1A2C (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x140762A68 (PopRemoveReasonRecordByReasonCode.c)
 *     MmReleaseDumpHibernateResources @ 0x14080051C (MmReleaseDumpHibernateResources.c)
 *     PopClearHiberFileSignature @ 0x1408005A0 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x140801108 (PopCreateHiberFile.c)
 *     PopCalculateHiberFileSize @ 0x140801C0C (PopCalculateHiberFileSize.c)
 *     MmAllocateDumpHibernateResources @ 0x140801D08 (MmAllocateDumpHibernateResources.c)
 *     PopPreallocateHibernateMemory @ 0x14080751C (PopPreallocateHibernateMemory.c)
 *     PopLogSleepDisabled @ 0x140810E2C (PopLogSleepDisabled.c)
 *     PopCheckDisabledReason @ 0x1408193BC (PopCheckDisabledReason.c)
 *     PopResetCurrentPolicies @ 0x1408193F4 (PopResetCurrentPolicies.c)
 *     MmZeroPageFileAtShutdown @ 0x1409681E4 (MmZeroPageFileAtShutdown.c)
 *     MmReturnChargesToLockPagedPool @ 0x14096CA90 (MmReturnChargesToLockPagedPool.c)
 *     PopZeroHiberFile @ 0x14098FBB0 (PopZeroHiberFile.c)
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopEnableHiberFile(char a1)
{
  PVOID v2; // r14
  unsigned __int64 v3; // rbx
  PVOID v4; // r15
  unsigned __int64 HighestPhysicalPage; // rax
  int v6; // edi
  bool v7; // si
  int v8; // r11d
  int v9; // r11d
  int v10; // r11d
  __int64 v11; // rcx
  int v12; // eax
  HANDLE v13; // rbx
  ULONG_PTR DumpHibernateResources; // rax
  unsigned __int64 v15; // rsi
  void *Pool2; // rax
  char v18[8]; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  LARGE_INTEGER v21; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-9h] BYREF
  UNICODE_STRING v24; // [rsp+78h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+17h] BYREF
  int v26; // [rsp+98h] [rbp+27h]

  v21.QuadPart = 0LL;
  v18[0] = 0;
  ResultLength = 0;
  DestinationString = 0LL;
  v26 = 0;
  v24 = 0LL;
  KeyHandle = 0LL;
  v2 = 0LL;
  KeyValueInformation = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  ValueName = 0LL;
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v6 = HighestPhysicalPage >= 0x100000000LL ? 8 : 0;
  v7 = HighestPhysicalPage >= 0x100000000LL;
  if ( !BYTE6(PopCapabilities) )
  {
    v6 = 22;
    v7 = 1;
  }
  if ( (unsigned __int8)PopCheckDisabledReason(2LL)
    || (unsigned __int8)PopCheckDisabledReason(1LL)
    || (unsigned __int8)PopCheckDisabledReason(15LL) )
  {
    v6 = v8;
    v7 = 1;
  }
  if ( (unsigned __int8)PopCheckDisabledReason(16LL) )
  {
    v6 = v9;
    LODWORD(KeyHandle) = -1073741637;
    goto LABEL_52;
  }
  if ( (unsigned __int8)PopCheckDisabledReason(13LL) )
  {
    v6 = v10;
    v7 = 1;
  }
  if ( !a1 )
  {
    PopHiberEnabled = 0;
    if ( FileObject )
    {
      if ( (unsigned int)MmZeroPageFileAtShutdown() )
        PopZeroHiberFile(*(HANDLE *)&PopHiberInfo);
      ObfDereferenceObjectWithTag(FileObject, 0x62486F50u);
      ZwClose(*(HANDLE *)&PopHiberInfo);
      ExFreePoolWithTag(qword_140C22BD8, 0x72626968u);
      memset(&PopHiberInfo, 0, 0xD8uLL);
      v4 = qword_140C22C10;
      v2 = MemoryMap;
      BYTE8(PopCapabilities) = 0;
      byte_140C23416 = 0;
      byte_140C23412 = 0;
      v12 = PopResetCurrentPolicies(v11);
LABEL_51:
      LODWORD(KeyHandle) = v12;
      v3 = 0LL;
      if ( !v6 )
        goto LABEL_54;
      goto LABEL_52;
    }
LABEL_50:
    v12 = 0;
    goto LABEL_51;
  }
  if ( FileObject )
    goto LABEL_50;
  dword_140C22BE4 = 1601;
  dword_140C22C04 = 1;
  byte_140C22C01 = 0;
  dword_140C22C88 = 0;
  if ( (int)PopOpenPowerKey((__int64)&KeyHandle) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"MaxHuffRatio");
    v13 = KeyHandle;
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      dword_140C22C04 = HIDWORD(KeyValueInformation);
      if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
        dword_140C22C04 = 1;
    }
    RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
    v26 = 0;
    KeyValueInformation = 0LL;
    if ( ZwQueryValueKey(v13, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      dword_140C22BE4 = HIDWORD(KeyValueInformation);
    }
    RtlInitUnicodeString(&v24, L"MultiPhaseResumeDisabled");
    v26 = 0;
    KeyValueInformation = 0LL;
    if ( ZwQueryValueKey(v13, &v24, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      byte_140C22C01 = HIDWORD(KeyValueInformation) == 1;
      dword_140C22C88 |= 0x20u;
    }
    ZwClose(v13);
  }
  PopHiberEnabled = 1;
  if ( v7 )
  {
    v12 = -1073741637;
    goto LABEL_51;
  }
  DumpHibernateResources = MmAllocateDumpHibernateResources(0x13000uLL);
  v3 = DumpHibernateResources;
  if ( !DumpHibernateResources )
  {
    v6 = 23;
LABEL_33:
    LODWORD(KeyHandle) = -1073741670;
    goto LABEL_52;
  }
  v15 = DumpHibernateResources + 0x200000;
  if ( (DumpHibernateResources & 0x1FFFFF) != 0 )
    v15 = (DumpHibernateResources + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  if ( v15 - DumpHibernateResources >= 0xA000 )
    v15 = DumpHibernateResources;
  PopCalculateHiberFileSize(&v21, (unsigned __int8 *)v18);
  LODWORD(KeyHandle) = PopCreateHiberFile(v21);
  if ( (int)KeyHandle >= 0 )
  {
    qword_140C22BE8 = v3;
    qword_140C22BF0 = v15;
    v3 = 0LL;
    Pool2 = (void *)ExAllocatePool2(64LL, 456LL, 1885433160LL);
    v2 = Pool2;
    if ( !Pool2 )
    {
      v6 = 24;
      goto LABEL_33;
    }
    MemoryMap = Pool2;
    v2 = 0LL;
    LODWORD(KeyHandle) = PopPreallocateHibernateMemory();
    if ( (int)KeyHandle >= 0 )
    {
      LODWORD(KeyHandle) = 1;
      EmClientQueryRuleState(EM_RULE_DISABLE_MULTI_PHASE_RESUME, &KeyHandle);
      if ( (_DWORD)KeyHandle == 2 )
      {
        dword_140C22C88 |= 0x10u;
        byte_140C22C01 = 1;
      }
      byte_140C23416 = v18[0];
      BYTE8(PopCapabilities) = 1;
      if ( !(_DWORD)InitSafeBootMode )
        byte_140C23412 = 1;
      if ( (BYTE8(PopBsdPowerTransitionAtBoot) & 1) == 0 )
        PopClearHiberFileSignature();
      goto LABEL_50;
    }
    v6 = 25;
  }
  else
  {
    v6 = 6;
  }
LABEL_52:
  PopLogSleepDisabled(v6, 8, &KeyHandle, 4uLL);
  if ( v3 )
    MmReleaseDumpHibernateResources(v3);
LABEL_54:
  if ( v4 )
  {
    MmReturnChargesToLockPagedPool(v4, Length);
    ExFreePoolWithTag(v4, 0);
    memset(&qword_140C22C10, 0, 0x78uLL);
  }
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x70616D48u);
    MemoryMap = 0LL;
  }
  return (unsigned int)KeyHandle;
}
