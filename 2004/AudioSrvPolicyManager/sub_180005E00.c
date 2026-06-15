/*
 * XREFs of sub_180005E00 @ 0x180005E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A300 @ 0x18000A300 (sub_18000A300.c)
 *     sub_18000AB40 @ 0x18000AB40 (sub_18000AB40.c)
 *     sub_180025BB0 @ 0x180025BB0 (sub_180025BB0.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_180005E00(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  void *v3; // rcx
  __int64 v4; // rax
  void *v5; // rbx
  __int64 v6; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  HANDLE v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbx
  int result; // eax

  v2 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  EnterCriticalSection(&CriticalSection);
  while ( 1 )
  {
    v3 = (void *)qword_18004FF98;
    if ( !qword_18004FF98 )
      break;
    v4 = *(_QWORD *)qword_18004FF98;
    v5 = *(void **)(qword_18004FF98 + 16);
    qword_18004FF98 = v4;
    if ( v4 )
      *(_QWORD *)(v4 + 8) = 0LL;
    else
      qword_18004FFA0 = 0LL;
    sub_180039D98(v3);
    --dword_18004FFA8;
    if ( v5 )
    {
      sub_180025BB0(v5);
      sub_180039D98(v5);
    }
  }
  LeaveCriticalSection(&CriticalSection);
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( RegistrationHandle )
  {
    PowerSettingUnregisterNotification(RegistrationHandle);
    RegistrationHandle = 0LL;
  }
  dword_18004FE60 = 0;
  dword_18004FE5C = 0;
  dword_18004FE58 = 0;
  sub_18000AB40(qword_18004FE80 + 8);
  v6 = qword_18004FE78;
  v7 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  *(_DWORD *)(v6 + 24) = 1;
  if ( v7 )
    LeaveCriticalSection(v7);
  v8 = hObject;
  if ( hObject )
  {
    if ( CompletionPort )
    {
      PostQueuedCompletionStatus(CompletionPort, 0xFFFFFFFF, 0LL, 0LL);
      v8 = hObject;
    }
    WaitForSingleObject(v8, 0xFFFFFFFF);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      CloseHandle(hObject);
      hObject = 0LL;
    }
  }
  v9 = qword_18004FEE8;
  qword_18004FEE8 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *(_QWORD *)(a1 + 32);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v11 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( v11 )
    sub_18000A300();
  v12 = qword_18004FE78;
  if ( qword_18004FE78 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(qword_18004FE78 + 8), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 8LL))(v12, 1LL);
    }
    qword_18004FE78 = 0LL;
  }
  result = (_DWORD)CompletionPort - 1;
  if ( (char *)CompletionPort - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    result = CloseHandle(CompletionPort);
    CompletionPort = 0LL;
  }
  if ( ppv )
  {
    result = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    ppv = 0LL;
  }
  return result;
}
