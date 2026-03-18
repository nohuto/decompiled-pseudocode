/*
 * XREFs of _xxxSetProcessWindowStation@12 @ 0x98412
 * Callers:
 *     _EditionSetProcessWindowStationEntryPoint@4 @ 0xF1C74 (_EditionSetProcessWindowStationEntryPoint@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?xxxDisownClipboard@@YGXPAUtagWND@@@Z @ 0x18244D (-xxxDisownClipboard@@YGXPAUtagWND@@@Z.c)
 */

int __stdcall xxxSetProcessWindowStation(HANDLE Handle, KPROCESSOR_MODE AccessMode, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // esi
  int CurrentProcess; // edi
  PEPROCESS ThreadProcess; // eax
  _DWORD *ProcessWin32Process; // ebx
  int v7; // eax
  _BYTE *v8; // esi
  struct _NT_TIB *v9; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // ecx
  int v13; // eax
  int v14; // esi
  PKTHREAD v15; // eax
  int ThreadWin32Thread; // eax
  PKTHREAD v17; // eax
  int v18; // eax
  _DWORD *v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // eax
  _DWORD *v23; // edi
  _DWORD *v24; // ecx
  _DWORD *v25; // edx
  int v26; // eax
  void *ProcessWin32WindowStation; // eax
  int v28; // eax
  unsigned int v29; // eax
  BOOLEAN v30; // al
  int v31; // ecx
  unsigned int v32; // ecx
  struct tagWND *v33; // [esp+0h] [ebp-40h]
  _DWORD v34[3]; // [esp+Ch] [ebp-34h] BYREF
  _DWORD v35[3]; // [esp+18h] [ebp-28h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [esp+24h] [ebp-1Ch] BYREF
  HANDLE v37; // [esp+2Ch] [ebp-14h]
  int v38; // [esp+30h] [ebp-10h]
  void *TargetHandle; // [esp+34h] [ebp-Ch] BYREF
  int v40; // [esp+38h] [ebp-8h]
  PVOID Object; // [esp+3Ch] [ebp-4h] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentProcess = PsGetCurrentProcess();
  v40 = CurrentProcess;
  TargetHandle = 0;
  HandleInformation.HandleAttributes = 0;
  HandleInformation.GrantedAccess = 0;
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  ProcessWin32Process = (_DWORD *)PsGetProcessWin32Process(ThreadProcess);
  Object = 0;
  v7 = ObReferenceObjectByHandle(Handle, 0, ExWindowStationObjectType, AccessMode, &Object, &HandleInformation);
  v8 = Object;
  v38 = v7;
  v37 = Object;
  if ( v7 < 0 )
  {
    v9 = (struct _NT_TIB *)RtlNtStatusToDosError(v7);
    UserSetLastError(v9);
    return v38;
  }
  if ( *(_DWORD *)Object != _gSessionId )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    ObfDereferenceObject(v8);
    return -1073741811;
  }
  if ( ProcessWin32Process )
  {
    v11 = (_DWORD *)ProcessWin32Process[89];
    if ( v11 )
    {
      if ( v11 != Object )
      {
        v12 = v11 + 14;
        v13 = v11[14];
        if ( v13 && *(_DWORD **)(*(_DWORD *)(v13 + 8) + 232) == ProcessWin32Process )
        {
          if ( a3 )
          {
            HMAssignmentUnlock(v12);
          }
          else
          {
            v35[2] = 0;
            memset(v34, 0, sizeof(v34));
            PushW32ThreadLock((int)Object, v34, (int)UserDereferenceObject);
            v14 = *(_DWORD *)(ProcessWin32Process[89] + 56);
            v15 = KeGetCurrentThread();
            ThreadWin32Thread = W32GetThreadWin32Thread(v15);
            v35[0] = *(_DWORD *)(ThreadWin32Thread + 228);
            *(_DWORD *)(ThreadWin32Thread + 228) = v35;
            v35[1] = v14;
            HMLockObject(v14);
            xxxDisownClipboard(v33);
            ThreadUnlock1();
            v17 = KeGetCurrentThread();
            v18 = W32GetThreadWin32Thread(v17);
            v8 = v37;
            *(_DWORD *)(v18 + 8) = v34[0];
          }
        }
        v19 = (_DWORD *)ProcessWin32Process[89];
        v20 = v19[12];
        if ( v20 && *(_DWORD **)(*(_DWORD *)(v20 + 8) + 232) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v19 + 12);
          *(_DWORD *)(ProcessWin32Process[89] + 40) = 0;
          v19 = (_DWORD *)ProcessWin32Process[89];
        }
        v21 = v19[10];
        if ( v21 && *(_DWORD **)(v21 + 232) == ProcessWin32Process )
        {
          v19[10] = 0;
          v19 = (_DWORD *)ProcessWin32Process[89];
        }
        v22 = v19[13];
        if ( v22 && *(_DWORD **)(*(_DWORD *)(v22 + 8) + 232) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v19 + 13);
          v19 = (_DWORD *)ProcessWin32Process[89];
        }
        v23 = v19 + 20;
        while ( 1 )
        {
          v24 = (_DWORD *)*v23;
          if ( !*v23 )
            break;
          v25 = v24 + 35;
          if ( *(_DWORD **)(v24[2] + 232) == ProcessWin32Process )
          {
            a3 = (_DWORD *)*v23;
            *v23 = *v25;
            *v25 = 0;
            *(_DWORD *)(a3[5] + 144) &= ~1u;
            HMAssignmentUnlock(&a3);
          }
          else
          {
            v23 = v24 + 35;
          }
        }
        CurrentProcess = v40;
      }
    }
  }
  if ( (HANDLE)ProcessWin32Process[90] != Handle )
  {
    if ( !SetHandleFlag(Handle, 1, 1) )
    {
      ObfDereferenceObject(v8);
      return -1073741801;
    }
    v26 = ProcessWin32Process[90];
    if ( v26 )
      SetHandleFlag(v26, 1, 0);
  }
  LockObjectAssignment(ProcessWin32Process + 89, v8);
  ObfDereferenceObject(v8);
  ProcessWin32Process[90] = Handle;
  ProcessWin32WindowStation = (void *)PsGetProcessWin32WindowStation(CurrentProcess);
  v37 = ProcessWin32WindowStation;
  if ( ProcessWin32WindowStation )
  {
    a3 = 0;
    if ( ObReferenceObjectByHandle(ProcessWin32WindowStation, 0, ExWindowStationObjectType, AccessMode, (PVOID *)&a3, 0) < 0 )
    {
      PsSetProcessWindowStation(CurrentProcess, 0);
    }
    else
    {
      if ( v8 != (_BYTE *)a3 )
      {
        ObCloseHandle(v37, 1);
        PsSetProcessWindowStation(CurrentProcess, 0);
      }
      ObfDereferenceObject(a3);
    }
  }
  if ( !PsGetProcessWin32WindowStation(CurrentProcess)
    && ZwDuplicateObject((HANDLE)0xFFFFFFFF, Handle, (HANDLE)0xFFFFFFFF, &TargetHandle, 0, 0, 2u) >= 0 )
  {
    PsSetProcessWindowStation(CurrentProcess, TargetHandle);
  }
  ProcessWin32Process[91] = HandleInformation.GrantedAccess;
  v28 = ProcessWin32Process[2];
  if ( (v8[32] & 4) != 0 )
    v29 = v28 & 0xFFFBFFFF;
  else
    v29 = v28 | 0x40000;
  ProcessWin32Process[2] = v29;
  v30 = RtlAreAllAccessesGranted(HandleInformation.GrantedAccess, 0x200u);
  v31 = ProcessWin32Process[2];
  if ( v30 )
    v32 = v31 | 0x10;
  else
    v32 = v31 & 0xFFFFFFEF;
  ProcessWin32Process[2] = v32;
  return 0;
}
