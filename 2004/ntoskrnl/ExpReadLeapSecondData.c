/*
 * XREFs of ExpReadLeapSecondData @ 0x140792864
 * Callers:
 *     ExInitializeLeapSecondData @ 0x14079254C (ExInitializeLeapSecondData.c)
 *     ExpLeapSecondDataRegistryNotifyHandler @ 0x140948350 (ExpLeapSecondDataRegistryNotifyHandler.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled @ 0x1403EC714 (Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403F38A0 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x1403F58E0 (ZwNotifyChangeKey.c)
 *     ExAcquireTimeRefreshLock @ 0x1406AA348 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1406ABD00 (ExReleaseTimeRefreshLock.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x140792B48 (EtwTraceLeapSecondDataUpdate.c)
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 *     ExpParseAndUpdateLeapSecondData @ 0x14079413C (ExpParseAndUpdateLeapSecondData.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x1407941E0 (ExpGetLeapSecondDataRegistryKeyHandle.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x140932F44 (EtwTraceLeapSecondDataParseFailure.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __fastcall ExpReadLeapSecondData(bool *a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *PoolWithTag; // rdi
  PVOID v6; // r14
  HANDLE v7; // rsi
  bool v8; // r15
  unsigned int v9; // r15d
  NTSTATUS v10; // eax
  unsigned int updated; // eax
  ULONG ResultLength; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-28h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+60h] [rbp-20h] BYREF
  int v15; // [rsp+64h] [rbp-1Ch]
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]

  ResultLength = 0;
  CurrentThread = KeGetCurrentThread();
  KeyHandle = 0LL;
  PoolWithTag = 0LL;
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpLeapSecondDataLock, 0LL);
  if ( ExpLeapSecondDataRegistryNotify )
  {
    v7 = *(HANDLE *)ExpLeapSecondDataRegistryNotify;
    PoolWithTag = (char *)ExpLeapSecondDataRegistryNotify;
    KeyHandle = *(HANDLE *)ExpLeapSecondDataRegistryNotify;
  }
  else
  {
    if ( (int)ExpGetLeapSecondDataRegistryKeyHandle(&KeyHandle) < 0 )
      goto LABEL_24;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6453704Cu);
    if ( !PoolWithTag )
      goto LABEL_24;
    v7 = KeyHandle;
  }
  *((_QWORD *)PoolWithTag + 3) = ExpLeapSecondDataRegistryNotifyHandler;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  if ( ZwNotifyChangeKey(
         v7,
         0LL,
         (PIO_APC_ROUTINE)(PoolWithTag + 8),
         (PVOID)1,
         (PIO_STATUS_BLOCK)(PoolWithTag + 40),
         4u,
         0,
         0LL,
         0,
         1u) < 0 )
    goto LABEL_24;
  v8 = 1;
  if ( ZwQueryValueKey(
         v7,
         (PUNICODE_STRING)&ExpLeapSecondRegkeyValueEnabled,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x14u,
         &ResultLength) >= 0
    && v15 == 4
    && v16 == 4 )
  {
    v8 = v17 != 0;
  }
  *a1 = v8;
  v9 = *((_DWORD *)a1 + 1);
  v10 = ZwQueryValueKey(
          v7,
          (PUNICODE_STRING)&ExpLeapSecondRegkeyValueLeapSeconds,
          KeyValuePartialInformation,
          0LL,
          0,
          &ResultLength);
  if ( v10 != -1073741789 )
    goto LABEL_14;
  v6 = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6453704Cu);
  if ( v6 )
  {
    v10 = ZwQueryValueKey(
            v7,
            (PUNICODE_STRING)&ExpLeapSecondRegkeyValueLeapSeconds,
            KeyValuePartialInformation,
            v6,
            ResultLength,
            &ResultLength);
LABEL_14:
    if ( v10 >= 0 )
    {
      updated = ExpParseAndUpdateLeapSecondData(v6, a1);
      ExLeapSecondDataLastParseResult = updated;
      if ( updated )
        EtwTraceLeapSecondDataParseFailure(updated);
    }
  }
  if ( (unsigned int)Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled() )
  {
    if ( a2 )
    {
      ExAcquireTimeRefreshLock(1u);
      ExpRefreshTimeZoneInformation(0LL);
      ExReleaseTimeRefreshLock();
    }
  }
  else
  {
    ExpRefreshTimeZoneInformation(0LL);
  }
  EtwTraceLeapSecondDataUpdate(1LL, *a1, *((unsigned int *)a1 + 1), v9);
  if ( !ExpLeapSecondDataRegistryNotify )
  {
    ExpLeapSecondDataRegistryNotify = (__int64)PoolWithTag;
    *(_QWORD *)PoolWithTag = v7;
  }
  PoolWithTag = 0LL;
  KeyHandle = 0LL;
LABEL_24:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpLeapSecondDataLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpLeapSecondDataLock);
  KeAbPostRelease((ULONG_PTR)&ExpLeapSecondDataLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6453704Cu);
  if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6453704Cu);
    ExpLeapSecondDataRegistryNotify = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
