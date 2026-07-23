/*
 * XREFs of ExpReadLeapSecondData @ 0x1407A93B8
 * Callers:
 *     ExInitializeLeapSecondData @ 0x1407A90AC (ExInitializeLeapSecondData.c)
 *     ExpLeapSecondDataRegistryNotifyHandler @ 0x14094BAB0 (ExpLeapSecondDataRegistryNotifyHandler.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x1403FC8C0 (ZwNotifyChangeKey.c)
 *     ExReleaseTimeRefreshLock @ 0x1406B2FD0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406B2FF4 (ExAcquireTimeRefreshLock.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x1407A968C (EtwTraceLeapSecondDataUpdate.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 *     ExpParseAndUpdateLeapSecondData @ 0x1407AAB88 (ExpParseAndUpdateLeapSecondData.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x1407AAC2C (ExpGetLeapSecondDataRegistryKeyHandle.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x140936714 (EtwTraceLeapSecondDataParseFailure.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG ResultLength; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-28h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+64h] [rbp-1Ch]
  int v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+6Ch] [rbp-14h]

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
      goto LABEL_22;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6453704Cu);
    if ( !PoolWithTag )
      goto LABEL_22;
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
    goto LABEL_22;
  v8 = 1;
  if ( ZwQueryValueKey(
         v7,
         (PUNICODE_STRING)&ExpLeapSecondRegkeyValueEnabled,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x14u,
         &ResultLength) >= 0
    && v18 == 4
    && v19 == 4 )
  {
    v8 = v20 != 0;
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
  if ( a2 )
  {
    ExAcquireTimeRefreshLock(1u);
    ExpRefreshTimeZoneInformation(0LL);
    ExReleaseTimeRefreshLock();
  }
  EtwTraceLeapSecondDataUpdate(1LL, *a1, *((unsigned int *)a1 + 1), v9);
  if ( !ExpLeapSecondDataRegistryNotify )
  {
    ExpLeapSecondDataRegistryNotify = (__int64)PoolWithTag;
    *(_QWORD *)PoolWithTag = v7;
  }
  PoolWithTag = 0LL;
  KeyHandle = 0LL;
LABEL_22:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpLeapSecondDataLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpLeapSecondDataLock);
  KeAbPostRelease((ULONG_PTR)&ExpLeapSecondDataLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
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
