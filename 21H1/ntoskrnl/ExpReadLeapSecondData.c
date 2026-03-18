/*
 * XREFs of ExpReadLeapSecondData @ 0x1407901D4
 * Callers:
 *     ExpLeapSecondDataRegistryNotifyHandler @ 0x140947060 (ExpLeapSecondDataRegistryNotifyHandler.c)
 *     ExInitializeLeapSecondData @ 0x140A535D4 (ExInitializeLeapSecondData.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403F2610 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x1403F4650 (ZwNotifyChangeKey.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x14079046C (EtwTraceLeapSecondDataUpdate.c)
 *     ExpRefreshTimeZoneInformation @ 0x140790534 (ExpRefreshTimeZoneInformation.c)
 *     ExpParseAndUpdateLeapSecondData @ 0x1407915EC (ExpParseAndUpdateLeapSecondData.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x140791690 (ExpGetLeapSecondDataRegistryKeyHandle.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x140931C94 (EtwTraceLeapSecondDataParseFailure.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __fastcall ExpReadLeapSecondData(bool *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *PoolWithTag; // rbx
  PVOID v4; // r14
  HANDLE v5; // rdi
  bool v6; // r15
  unsigned int v7; // r15d
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int updated; // eax
  char v12; // si
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG ResultLength; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-28h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+60h] [rbp-20h] BYREF
  int v19; // [rsp+64h] [rbp-1Ch]
  int v20; // [rsp+68h] [rbp-18h]
  int v21; // [rsp+6Ch] [rbp-14h]

  ResultLength = 0;
  CurrentThread = KeGetCurrentThread();
  PoolWithTag = 0LL;
  KeyHandle = 0LL;
  v4 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpLeapSecondDataLock, 0LL);
  if ( ExpLeapSecondDataRegistryNotify )
  {
    v5 = *(HANDLE *)ExpLeapSecondDataRegistryNotify;
    PoolWithTag = (char *)ExpLeapSecondDataRegistryNotify;
    KeyHandle = *(HANDLE *)ExpLeapSecondDataRegistryNotify;
  }
  else
  {
    if ( (int)ExpGetLeapSecondDataRegistryKeyHandle(&KeyHandle) < 0 )
      goto LABEL_19;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6453704Cu);
    if ( !PoolWithTag )
      goto LABEL_19;
    v5 = KeyHandle;
  }
  *((_QWORD *)PoolWithTag + 3) = ExpLeapSecondDataRegistryNotifyHandler;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  if ( ZwNotifyChangeKey(
         v5,
         0LL,
         (PIO_APC_ROUTINE)(PoolWithTag + 8),
         (PVOID)1,
         (PIO_STATUS_BLOCK)(PoolWithTag + 40),
         4u,
         0,
         0LL,
         0,
         1u) < 0 )
    goto LABEL_19;
  v6 = 1;
  if ( ZwQueryValueKey(
         v5,
         (PUNICODE_STRING)&ExpLeapSecondRegkeyValueEnabled,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x14u,
         &ResultLength) >= 0
    && v19 == 4
    && v20 == 4 )
  {
    v6 = v21 != 0;
  }
  *a1 = v6;
  v7 = *((_DWORD *)a1 + 1);
  v8 = ZwQueryValueKey(
         v5,
         (PUNICODE_STRING)&ExpLeapSecondRegkeyValueLeapSeconds,
         KeyValuePartialInformation,
         0LL,
         0,
         &ResultLength);
  if ( v8 != -1073741789 )
    goto LABEL_13;
  v4 = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6453704Cu);
  if ( v4 )
  {
    v8 = ZwQueryValueKey(
           v5,
           (PUNICODE_STRING)&ExpLeapSecondRegkeyValueLeapSeconds,
           KeyValuePartialInformation,
           v4,
           ResultLength,
           &ResultLength);
LABEL_13:
    if ( v8 >= 0 )
    {
      updated = ExpParseAndUpdateLeapSecondData(v4, a1);
      ExLeapSecondDataLastParseResult = updated;
      if ( updated )
        EtwTraceLeapSecondDataParseFailure(updated);
    }
  }
  ExpRefreshTimeZoneInformation(v10, v9);
  EtwTraceLeapSecondDataUpdate(1LL, *a1, *((unsigned int *)a1 + 1), v7);
  if ( !ExpLeapSecondDataRegistryNotify )
  {
    ExpLeapSecondDataRegistryNotify = (__int64)PoolWithTag;
    *(_QWORD *)PoolWithTag = v5;
  }
  PoolWithTag = 0LL;
  KeyHandle = 0LL;
LABEL_19:
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpLeapSecondDataLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock(&ExpLeapSecondDataLock);
  KeAbPostRelease((ULONG_PTR)&ExpLeapSecondDataLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x6453704Cu);
  if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6453704Cu);
    ExpLeapSecondDataRegistryNotify = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
