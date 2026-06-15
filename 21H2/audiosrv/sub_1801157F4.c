/*
 * XREFs of sub_1801157F4 @ 0x1801157F4
 * Callers:
 *     sub_180115240 @ 0x180115240 (sub_180115240.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180105170 @ 0x180105170 (sub_180105170.c)
 *     sub_180115B84 @ 0x180115B84 (sub_180115B84.c)
 */

void sub_1801157F4()
{
  bool v0; // bl
  __int64 v1; // rcx
  HANDLE v2; // rax

  v0 = CoInitializeEx(0LL, 0) >= 0;
  (*(void (**)(void))(*(_QWORD *)qword_18019E678 + 24LL))();
  v1 = qword_18019E678;
  if ( *(_QWORD *)(qword_18019E678 + 8) )
  {
    CM_Unregister_Notification(*(_QWORD *)(qword_18019E678 + 8));
    v1 = qword_18019E678;
    *(_QWORD *)(qword_18019E678 + 8) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 16) )
  {
    CM_Unregister_Notification(*(_QWORD *)(v1 + 16));
    v1 = qword_18019E678;
    *(_QWORD *)(qword_18019E678 + 16) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 24) )
  {
    CM_Unregister_Notification(*(_QWORD *)(v1 + 24));
    v1 = qword_18019E678;
    *(_QWORD *)(qword_18019E678 + 24) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 40) )
  {
    PowerSettingUnregisterNotification(*(HPOWERNOTIFY *)(v1 + 40));
    v1 = qword_18019E678;
    *(_QWORD *)(qword_18019E678 + 40) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 32) )
  {
    PowerSettingUnregisterNotification(*(HPOWERNOTIFY *)(v1 + 32));
    v1 = qword_18019E678;
    *(_QWORD *)(qword_18019E678 + 32) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 48) )
  {
    PowerSettingUnregisterNotification(*(HPOWERNOTIFY *)(v1 + 48));
    v1 = qword_18019E678;
    *(_QWORD *)(qword_18019E678 + 48) = 0LL;
  }
  v2 = qword_18019E798;
  if ( qword_18019E798 )
  {
    if ( CompletionPort )
    {
      PostQueuedCompletionStatus(CompletionPort, 0xFFFFFFFF, 0LL, 0LL);
      v2 = qword_18019E798;
    }
    WaitForSingleObject(v2, 0xFFFFFFFF);
    if ( (char *)qword_18019E798 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      CloseHandle(qword_18019E798);
      qword_18019E798 = 0LL;
    }
    v1 = qword_18019E678;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
  if ( *(_QWORD *)&dwCreationFlags )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&dwCreationFlags + 16LL))(*(_QWORD *)&dwCreationFlags);
    *(_QWORD *)&dwCreationFlags = 0LL;
  }
  MMDevAPI_2();
  if ( qword_18019E640 )
  {
    sub_180105170();
    if ( qword_18019E640 )
      (**(void (__fastcall ***)(__int64, __int64))qword_18019E640)(qword_18019E640, 1LL);
  }
  qword_18019E640 = 0LL;
  if ( (char *)CompletionPort - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(CompletionPort);
    CompletionPort = 0LL;
  }
  if ( qword_18019E678 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_18019E678 + 112LL))(qword_18019E678, 1LL);
  qword_18019E678 = 0LL;
  sub_180115B84();
  if ( v0 )
    CoUninitialize();
}
