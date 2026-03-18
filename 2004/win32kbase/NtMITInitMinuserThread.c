/*
 * XREFs of NtMITInitMinuserThread @ 0x1C012F430
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     ProtectHandle @ 0x1C0076AA0 (ProtectHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 */

_BOOL8 __fastcall NtMITInitMinuserThread(HANDLE Handle)
{
  BOOL v2; // ebx
  __int64 ThreadWin32Thread; // rdi
  int v4; // edx
  int v5; // esi
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v2 = 1;
  EnterCrit(0LL, 1);
  RIMLockExclusive((__int64)&gWndLock);
  RIMLockExclusive((__int64)&gInputLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(ThreadWin32Thread + 1224) & 0x1000000) == 0 )
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
        *(_DWORD *)(ThreadWin32Thread + 1224) |= 0x1000000u;
      }
    }
    v2 = v5 >= 0;
  }
  qword_1C0250438 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C0250448 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v2;
}
