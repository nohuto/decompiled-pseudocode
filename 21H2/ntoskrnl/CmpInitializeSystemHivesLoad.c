/*
 * XREFs of CmpInitializeSystemHivesLoad @ 0x140790B44
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14079167C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140619CE8 (CmpQueryHiveRedirectionFileList.c)
 *     CmpCreateRegistryThread @ 0x140790D84 (CmpCreateRegistryThread.c)
 *     CmpBuildMachineHiveMountPoint @ 0x140790DEC (CmpBuildMachineHiveMountPoint.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS CmpInitializeSystemHivesLoad()
{
  unsigned int v0; // edi
  _QWORD *v1; // rbx
  __int64 v2; // r14
  PVOID PoolWithTag; // rbp
  UNICODE_STRING *v4; // rsi
  __int64 v5; // rdx
  _DWORD *v6; // rdi
  unsigned int i; // ebx
  __int64 v8; // rsi
  int v9; // eax
  NTSTATUS result; // eax
  _DWORD *v11; // rax
  __int64 v12; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-B8h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-B0h] BYREF
  char v15; // [rsp+50h] [rbp-98h] BYREF

  Handle = 0LL;
  BYTE1(NlsMbCodePageTag) = 0;
  KeInitializeEvent(&CmpLoadWorkerEvent, SynchronizationEvent, 0);
  KeInitializeEvent(&CmpLoadWorkerDebugEvent, SynchronizationEvent, 0);
  v0 = 0;
  v1 = &unk_140C00FC0;
  do
  {
    v2 = 25LL * v0;
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 8], NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 11], SynchronizationEvent, 0);
    *(_QWORD *)&ValueName.Length = 0x800000LL;
    ValueName.Buffer = (wchar_t *)&v15;
    CmpBuildMachineHiveMountPoint(v0, &ValueName);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x32364D43u);
    if ( !PoolWithTag )
      KeBugCheckEx(0x74u, 2uLL, 5uLL, v0, 0LL);
    *(_OWORD *)(v1 - 1) = 0LL;
    *v1 = PoolWithTag;
    *((_WORD *)v1 - 3) = 128;
    v4 = (UNICODE_STRING *)&CmpMachineHiveList[v2 + 23];
    if ( !CmpQueryHiveRedirectionFileList(&ValueName, v4) || *((_WORD *)v1 - 4) == 2 )
    {
      *(_OWORD *)(v1 - 1) = 0LL;
      *v1 = PoolWithTag;
      *((_WORD *)v1 - 3) = 128;
      RtlAppendUnicodeToString(v4, L"\\SystemRoot\\System32\\Config\\");
      RtlAppendUnicodeToString(v4, (PCWSTR)*(v1 - 24));
    }
    v1 += 25;
    ++v0;
  }
  while ( v0 < 7 );
  v6 = &unk_140C00F20;
  if ( BYTE4(NlsMbCodePageTag) )
  {
    v11 = &unk_140C00F20;
    v12 = 7LL;
    do
    {
      if ( *((_QWORD *)v11 - 4) )
        *v11 |= 0x8000u;
      v11 += 50;
      --v12;
    }
    while ( v12 );
  }
  CmpSpecialBootCondition = 1;
  for ( i = 0; i < 7; ++i )
  {
    if ( (*v6 & 1) != 0 || CmpInitRmLogOnLoad || CmpForceSynchronousMachineHiveLoad || ((i - 2) & 0xFFFFFFFA) == 0 )
    {
      v8 = i;
      KeSetEvent((struct _KEVENT *)((char *)&stru_140C00F40 + 200 * i), 0, 0);
    }
    else
    {
      v8 = i;
    }
    v9 = CmpCreateRegistryThread(&Handle, v5, CmpLoadHiveThread, v8);
    if ( v9 < 0 )
      KeBugCheckEx(0x74u, 2uLL, 3uLL, i, v9);
    result = ZwClose(Handle);
    v6 += 50;
  }
  return result;
}
