/*
 * XREFs of xxxSetProcessWindowStation @ 0x1C00FBCB0
 * Callers:
 *     EditionSetProcessWindowStationEntryPoint @ 0x1C00FBC10 (EditionSetProcessWindowStationEntryPoint.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C0056400 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSetProcessWindowStation(HANDLE SourceHandle, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v4; // r12d
  KPROCESSOR_MODE v5; // r13
  __int64 CurrentProcess; // r14
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // rsi
  unsigned int v14; // ebx
  _QWORD *v15; // rax
  void *ProcessWin32WindowStation; // rbx
  int v17; // edx
  int v18; // eax
  unsigned int v19; // edx
  int v20; // eax
  BOOLEAN v21; // al
  int v22; // ecx
  unsigned int v23; // ecx
  __int64 v25; // rcx
  _QWORD *v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 *v32; // rbx
  __int64 v33; // rcx
  ULONG v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 *v43; // rdx
  struct _OBJECT_HANDLE_INFORMATION HandleAttributes; // [rsp+48h] [rbp-19h] BYREF
  PVOID Object; // [rsp+50h] [rbp-11h] BYREF
  __int64 v46; // [rsp+58h] [rbp-9h] BYREF
  void *TargetHandle; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v48[3]; // [rsp+68h] [rbp+7h] BYREF
  __int128 v49; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v50; // [rsp+90h] [rbp+2Fh]
  PVOID v51; // [rsp+E0h] [rbp+7Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  v5 = a2;
  CurrentProcess = PsGetCurrentProcess(SourceHandle, a2, a3);
  TargetHandle = 0LL;
  HandleAttributes = 0LL;
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(SourceHandle, 0, ExWindowStationObjectType, v5, &Object, &HandleAttributes);
  v13 = Object;
  v14 = v10;
  if ( v10 < 0 )
  {
    v34 = RtlNtStatusToDosError(v10);
    UserSetLastError(v34, v35, v36);
    return v14;
  }
  if ( *(_DWORD *)Object != gSessionId )
  {
    UserSetLastError(87LL, v11, v12);
    ObfDereferenceObject(v13);
    return 3221225485LL;
  }
  if ( ProcessWin32Process )
  {
    v15 = *(_QWORD **)(ProcessWin32Process + 664);
    if ( v15 )
    {
      if ( v15 != Object )
      {
        v26 = v15 + 14;
        v27 = v15[14];
        if ( v27 && *(_QWORD *)(*(_QWORD *)(v27 + 16) + 416LL) == ProcessWin32Process )
        {
          if ( v4 )
          {
            HMAssignmentUnlock(v26);
          }
          else
          {
            v48[2] = 0LL;
            v49 = 0LL;
            v50 = 0LL;
            PushW32ThreadLock((__int64)Object, &v49, UserDereferenceObject);
            v37 = *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 664) + 112LL);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v48[0] = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = v48;
            v48[1] = v37;
            HMLockObject(v37);
            xxxDisownClipboard(*(struct tagWND **)(*(_QWORD *)(ProcessWin32Process + 664) + 112LL));
            ThreadUnlock1(v40, v39, v41);
            v42 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)(v42 + 16) = v49;
          }
        }
        v28 = *(_QWORD **)(ProcessWin32Process + 664);
        v29 = v28[12];
        if ( v29 && *(_QWORD *)(*(_QWORD *)(v29 + 16) + 416LL) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v28 + 12);
          *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 664) + 80LL) = 0LL;
          v28 = *(_QWORD **)(ProcessWin32Process + 664);
        }
        v30 = v28[10];
        if ( v30 && *(_QWORD *)(v30 + 416) == ProcessWin32Process )
        {
          v28[10] = 0LL;
          v28 = *(_QWORD **)(ProcessWin32Process + 664);
        }
        v31 = v28[13];
        if ( v31 && *(_QWORD *)(*(_QWORD *)(v31 + 16) + 416LL) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v28 + 13);
          v28 = *(_QWORD **)(ProcessWin32Process + 664);
        }
        v32 = v28 + 19;
        while ( 1 )
        {
          v33 = *v32;
          if ( !*v32 )
            break;
          v43 = (__int64 *)(v33 + 240);
          if ( *(_QWORD *)(*(_QWORD *)(v33 + 16) + 416LL) == ProcessWin32Process )
          {
            v46 = *v32;
            *v32 = *v43;
            *v43 = 0LL;
            *(_DWORD *)(*(_QWORD *)(v46 + 40) + 232LL) &= ~1u;
            HMAssignmentUnlock(&v46);
          }
          else
          {
            v32 = (__int64 *)(v33 + 240);
          }
        }
      }
    }
  }
  if ( *(HANDLE *)(ProcessWin32Process + 672) != SourceHandle )
  {
    if ( !(unsigned int)SetHandleFlag(SourceHandle, 1LL, 1LL) )
    {
      ObfDereferenceObject(v13);
      return 3221225495LL;
    }
    v25 = *(_QWORD *)(ProcessWin32Process + 672);
    if ( v25 )
      SetHandleFlag(v25, 1LL, 0LL);
  }
  LockObjectAssignment(ProcessWin32Process + 664, v13);
  ObfDereferenceObject(v13);
  *(_QWORD *)(ProcessWin32Process + 672) = SourceHandle;
  ProcessWin32WindowStation = (void *)PsGetProcessWin32WindowStation(CurrentProcess);
  if ( ProcessWin32WindowStation )
  {
    v51 = 0LL;
    if ( ObReferenceObjectByHandle(ProcessWin32WindowStation, 0, ExWindowStationObjectType, v5, &v51, 0LL) < 0 )
    {
      PsSetProcessWindowStation(CurrentProcess, 0LL);
    }
    else
    {
      if ( v13 != v51 )
      {
        ObCloseHandle(ProcessWin32WindowStation, 1);
        PsSetProcessWindowStation(CurrentProcess, 0LL);
      }
      ObfDereferenceObject(v51);
    }
  }
  if ( !PsGetProcessWin32WindowStation(CurrentProcess)
    && ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         SourceHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0,
         2u) >= 0 )
  {
    PsSetProcessWindowStation(CurrentProcess, TargetHandle);
  }
  v17 = *(_DWORD *)(ProcessWin32Process + 12);
  *(_DWORD *)(ProcessWin32Process + 680) = HandleAttributes.GrantedAccess;
  v18 = v17;
  v19 = v17 & 0xFFFBFFFF;
  v20 = v18 | 0x40000;
  if ( (v13[16] & 4) == 0 )
    v19 = v20;
  *(_DWORD *)(ProcessWin32Process + 12) = v19;
  v21 = RtlAreAllAccessesGranted(HandleAttributes.GrantedAccess, 0x200u);
  v22 = *(_DWORD *)(ProcessWin32Process + 12);
  if ( v21 )
    v23 = v22 | 0x10;
  else
    v23 = v22 & 0xFFFFFFEF;
  *(_DWORD *)(ProcessWin32Process + 12) = v23;
  return 0LL;
}
