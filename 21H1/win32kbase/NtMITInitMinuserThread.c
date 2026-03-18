/*
 * XREFs of NtMITInitMinuserThread @ 0x1C0135420
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     ProtectHandle @ 0x1C006FD98 (ProtectHandle.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 */

_BOOL8 __fastcall NtMITInitMinuserThread(HANDLE Handle)
{
  BOOL v2; // ebx
  __int64 ThreadWin32Thread; // rdi
  int v4; // edx
  int v5; // esi
  int v6; // edx
  __int64 v7; // rcx
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v2 = 1;
  EnterCrit(0LL, 1);
  RIMLockExclusive((__int64)&gWndLock);
  RIMLockExclusive((__int64)&gInputLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(ThreadWin32Thread + 1216) & 0x1000000) == 0 )
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v5 = ProtectHandle(Handle, v4, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
      if ( v5 < 0 )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        if ( *(_QWORD *)(ThreadWin32Thread + 728) )
        {
          ProtectHandle(*(void **)(ThreadWin32Thread + 720), v6, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
          ObCloseHandle(*(HANDLE *)(ThreadWin32Thread + 720), 1);
          ObfDereferenceObject(*(PVOID *)(ThreadWin32Thread + 728));
        }
        *(_QWORD *)(ThreadWin32Thread + 720) = Handle;
        *(_QWORD *)(ThreadWin32Thread + 728) = Object;
        *(_DWORD *)(ThreadWin32Thread + 480) |= 0xC0u;
        *(_DWORD *)(ThreadWin32Thread + 1216) |= 0x1000000u;
      }
    }
    v2 = v5 >= 0;
  }
  qword_1C02563B8 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C02563C8 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit(v7);
  return v2;
}
