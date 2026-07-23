/*
 * XREFs of EmInitSystem @ 0x140A4628C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140A4D104 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1403FA640 (ZwReadFile.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1403FA7A0 (ZwQueryInformationFile.c)
 *     ZwEnumerateValueKey @ 0x1403FA7E0 (ZwEnumerateValueKey.c)
 *     ZwQueryKey @ 0x1403FA840 (ZwQueryKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     ZwCreateFile @ 0x1403FB020 (ZwCreateFile.c)
 *     RtlAppendStringToString @ 0x14076DD80 (RtlAppendStringToString.c)
 *     EmpProviderRegister @ 0x14079D1E0 (EmpProviderRegister.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     HalRegisterErrataCallbacks @ 0x140A465B0 (HalRegisterErrataCallbacks.c)
 *     EmpParseInfDatabase @ 0x140A465E8 (EmpParseInfDatabase.c)
 *     EmpCacheBiosDate @ 0x140A4868C (EmpCacheBiosDate.c)
 */

__int64 __fastcall EmInitSystem(int a1, __int64 a2)
{
  _DWORD *PoolWithTag; // r14
  WCHAR *v3; // rdi
  int v4; // ebx
  NTSTATUS Key; // eax
  ULONG v6; // r15d
  ULONG v7; // r13d
  NTSTATUS i; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  ULONG v12; // r12d
  PVOID v13; // rax
  PVOID v14; // rsi
  void *v15; // rcx
  ULONG ResultLength[2]; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  HANDLE DestinationString[3]; // [rsp+78h] [rbp-90h] BYREF
  STRING Destination; // [rsp+90h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-38h] BYREF
  __int128 FileInformation; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-18h]
  char v24; // [rsp+F8h] [rbp-10h] BYREF

  ResultLength[0] = 0;
  v23 = 0LL;
  PoolWithTag = 0LL;
  DestinationString[0] = (HANDLE)-1LL;
  v3 = 0LL;
  Handle = (HANDLE)-1LL;
  FileInformation = 0LL;
  Destination = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( !a1 )
  {
    dword_140C47928 |= 0x80000000;
    EmpRuleUpdateWorker.WorkerRoutine = (void (__fastcall *)(void *))EmpRuleUpdateWorkerThread;
    EmpParseLock = 0LL;
    EmpDatabaseLock = 0LL;
    EmpEvaluationQueueLock = 0LL;
    EmpPagingLock = 0LL;
    EmpEntryListHead = 0LL;
    EmpCallbackListHead = 0LL;
    EmpRuleListHead = 0LL;
    EmpTargetRuleListHead = 0LL;
    EmpRuleUpdateQueue = 0LL;
    EmpWorkerBusy = 0;
    EmpRuleUpdateWorker.Parameter = 0LL;
    EmpRuleUpdateWorker.List.Flink = 0LL;
    v10 = *(_QWORD *)(a2 + 240);
    EmpStringTable = 0LL;
    EmpNumberOfEntryTypes = 0;
    EmpNumberOfCallbacks = 0;
    v11 = *(_QWORD *)(v10 + 24);
    EmpNumberOfRules = 0;
    EmpNumberOfStrings = 0;
    EmpNumberOfTargetRules = 0;
    if ( v11 )
    {
      if ( *(_DWORD *)(v10 + 32) )
      {
        v4 = ((__int64 (*)(void))EmpParseInfDatabase)();
        if ( v4 < 0 )
          goto LABEL_11;
      }
    }
    EmpCacheBiosDate();
    HalRegisterErrataCallbacks();
    v4 = EmpProviderRegister(0LL, 0LL, 0, (__int64)&BuiltinCallbackReg, 6u, &EmBuiltinProviderHandle);
    if ( v4 < 0 )
      goto LABEL_11;
LABEL_10:
    v4 = 0;
    goto LABEL_11;
  }
  if ( a1 != 1 )
    goto LABEL_10;
  RtlInitUnicodeString(
    (PUNICODE_STRING)&DestinationString[1],
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Errata\\Dynamic");
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwCreateKey(DestinationString, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v4 < 0 )
    goto LABEL_11;
  Key = ZwQueryKey(DestinationString[0], KeyFullInformation, 0LL, 0, ResultLength);
  v4 = Key;
  if ( Key == -1073741789 || Key == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x74694D45u);
    if ( !PoolWithTag )
      goto LABEL_29;
    v4 = ZwQueryKey(DestinationString[0], KeyFullInformation, PoolWithTag, ResultLength[0], ResultLength);
    if ( v4 < 0 )
      goto LABEL_11;
    v6 = PoolWithTag[10] + 16;
    v3 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v6, 0x74694D45u);
    if ( !v3 )
    {
LABEL_29:
      v4 = -1073741670;
      goto LABEL_11;
    }
    v7 = 0;
    for ( i = ZwEnumerateValueKey(DestinationString[0], 0, KeyValuePartialInformation, v3, v6, ResultLength);
          ;
          i = ZwEnumerateValueKey(DestinationString[0], v7, KeyValuePartialInformation, v3, v6, ResultLength) )
    {
      v4 = i;
      if ( i == -2147483622 )
        break;
      if ( i < 0 )
        goto LABEL_11;
      *(_DWORD *)&Destination.Length = 0x1000000;
      Destination.Buffer = &v24;
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"\\SystemRoot\\inf\\");
      RtlAppendStringToString(&Destination, (const STRING *)&DestinationString[1]);
      *((_BYTE *)v3 + *((unsigned int *)v3 + 2) + 12) = 0;
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], v3 + 6);
      RtlAppendStringToString(&Destination, (const STRING *)&DestinationString[1]);
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&Destination;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwCreateFile(&Handle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 1u, 1u, 0x20u, 0LL, 0);
      if ( v4 < 0 )
        goto LABEL_11;
      v4 = ZwQueryInformationFile(Handle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
      if ( v4 < 0 )
      {
        ZwClose(Handle);
        goto LABEL_11;
      }
      if ( HIDWORD(FileInformation) )
      {
        ZwClose(Handle);
        goto LABEL_27;
      }
      v12 = DWORD2(FileInformation);
      v13 = ExAllocatePoolWithTag(PagedPool, DWORD2(FileInformation), 0x74694D45u);
      v14 = v13;
      if ( !v13 )
      {
        ZwClose(Handle);
        goto LABEL_29;
      }
      v4 = ZwReadFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, v13, v12, 0LL, 0LL);
      ZwClose(Handle);
      v15 = v14;
      if ( v4 < 0 )
        goto LABEL_39;
      v4 = EmpParseInfDatabase(v14, v12);
      if ( v4 < 0 )
      {
        v15 = v14;
LABEL_39:
        ExFreePoolWithTag(v15, 0x74694D45u);
        goto LABEL_11;
      }
      ++v7;
    }
    goto LABEL_10;
  }
  if ( !Key )
LABEL_27:
    v4 = -1073741823;
LABEL_11:
  if ( DestinationString[0] != (HANDLE)-1LL )
    ZwClose(DestinationString[0]);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x74694D45u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x74694D45u);
  return (unsigned int)v4;
}
