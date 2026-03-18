/*
 * XREFs of _xxxDesktopThread@4 @ 0xE3DD4
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?xxxHandleDesktopMessages@@YGHPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0xA18FA (-xxxHandleDesktopMessages@@YGHPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     _xxxDesktopThreadWaiter@8 @ 0xA6EF2 (_xxxDesktopThreadWaiter@8.c)
 *     ??1LegacyInputDispatcher@@QAE@XZ @ 0xD4644 (--1LegacyInputDispatcher@@QAE@XZ.c)
 *     _xxxCleanupMotherDesktopWindow@4 @ 0xD4B02 (_xxxCleanupMotherDesktopWindow@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
PRKEVENT __stdcall xxxDesktopThread(int a1)
{
  int v1; // edi
  PKTHREAD CurrentThread; // eax
  const WCHAR *v3; // eax
  int CurrentThreadWin32Thread; // eax
  PKTHREAD v5; // eax
  _DWORD *ThreadWin32Thread; // eax
  _DWORD *v7; // ebx
  PRKEVENT result; // eax
  struct _KEVENT *v9; // eax
  bool v10; // zf
  void *v11; // ecx
  LegacyInputDispatcher *v12; // esi
  PRKEVENT v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  int v17; // ecx
  _DWORD *v18; // ebx
  int v19; // edi
  int v20; // edi
  signed __int32 v21; // ebx
  int v22; // ecx
  _DWORD *v23; // ecx
  _DWORD *v24; // edx
  int v25; // eax
  LegacyInputDispatcher *v26; // ebx
  char v27; // [esp+1Dh] [ebp-51h]
  LegacyInputDispatcher *v28; // [esp+1Eh] [ebp-50h] BYREF
  PVOID Object; // [esp+22h] [ebp-4Ch] BYREF
  _DWORD *v30; // [esp+26h] [ebp-48h]
  int v31; // [esp+2Ah] [ebp-44h]
  int ProcessInformation; // [esp+2Eh] [ebp-40h] BYREF
  _DWORD *v33; // [esp+32h] [ebp-3Ch] BYREF
  int v34; // [esp+36h] [ebp-38h]
  struct _UNICODE_STRING DestinationString; // [esp+3Ah] [ebp-34h] BYREF
  _QWORD v36[5]; // [esp+42h] [ebp-2Ch] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  memset(v36, 0, sizeof(v36));
  v1 = *(_DWORD *)a1 & 2;
  DestinationString.Buffer = 0;
  v31 = 0;
  v27 = 0;
  v28 = 0;
  v34 = v1;
  CurrentThread = KeGetCurrentThread();
  SetThreadBasePriority(CurrentThread, 4 * (v1 == 0) + 12);
  if ( v1 )
  {
    v3 = L"NOIO_DT";
  }
  else
  {
    if ( Event )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    Event = (PRKEVENT)CreateKernelEvent(1, 0);
    v3 = L"IO_DT";
  }
  RtlInitUnicodeString(&DestinationString, v3);
  if ( v1 )
  {
    SetThreadName(-2, L"Win32k Desktop Thread (NOIO_DT)");
  }
  else
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      *(_DWORD *)(CurrentThreadWin32Thread + 48) = 1;
    SetThreadName(-2, L"Win32k Desktop Thread (IO_DT)");
  }
  if ( (int)InitSystemThread(&DestinationString) >= 0 && (v1 || Event) )
  {
    v5 = KeGetCurrentThread();
    ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(v5);
    *(_DWORD *)(a1 + 8) = ThreadWin32Thread;
    v30 = ThreadWin32Thread;
    v7 = (_DWORD *)ThreadWin32Thread[59];
    *(_DWORD *)(a1 + 12) = v7;
    v33 = v7;
    ++v7[73];
    ThreadWin32Thread[63] = _gpkdiStatic;
    ThreadWin32Thread[83] = 0;
    if ( (int)LegacyInputDispatcher::Create(&v28) < 0 )
    {
      *(_DWORD *)a1 |= 8u;
      Object = 0;
      _InterlockedOr((volatile signed __int32 *)&Object, 0);
      result = (PRKEVENT)KeSetEvent(*(PRKEVENT *)(a1 + 20), 1, 0);
      if ( v1 )
        return result;
      result = (PRKEVENT)Win32FreePool(Event);
      goto LABEL_78;
    }
    if ( !v1 )
    {
      v36[0] = __PAIR64__(OnPointerCursorOperation, (unsigned int)Feedback::gpevtPointerCursorOperation);
      v36[1] = __PAIR64__(OnPTPMouseOperation, _gpevtPTPOperation);
      v36[2] = __PAIR64__(lambda_3ef8aac84d3e2e990d213b9149cc4885_::_lambda_invoker_stdcall_, (unsigned int)Event);
      v36[3] = __PAIR64__((unsigned int)ChildProcessRootSynthesizedMouseInput, GetSynthesizedContainerMouseInputEvent());
      v31 = 4;
      if ( _gSessionId == _gServiceSessionId )
      {
        CBaseInput::InitializeSensor(_gpMouseSensor);
        v27 = 1;
      }
      else
      {
        v27 = 1;
        if ( (int)CBaseInput::InitializeSensor(_gpMouseSensor) >= 0 )
        {
          if ( _gProtocolType )
          {
            EnterCrit(0, 1);
            CBaseInput::HandleTSRequest(_gpMouseSensor, 0);
            UserSessionSwitchLeaveCrit();
          }
          CBaseInput::Read(_gpMouseSensor);
        }
      }
    }
    EnterCrit(0, 1);
    *(_DWORD *)a1 |= 4u;
    KeSetEvent(*(PRKEVENT *)(a1 + 20), 1, 0);
    Object = *(PVOID *)(a1 + 28);
    ObReferenceObjectByPointer(Object, (ACCESS_MASK)&loc_1F0002 + 1, (POBJECT_TYPE)ExEventObjectType, 0);
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    UserSessionSwitchLeaveCrit();
    KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0);
    EnterCrit(0, 1);
    ObfDereferenceObject(Object);
    if ( (*(_BYTE *)a1 & 8) != 0 )
    {
      Object = 0;
      _InterlockedOr((volatile signed __int32 *)&Object, 0);
      if ( *(_DWORD *)(a1 + 4) )
        xxxCleanupMotherDesktopWindow((_DWORD *)a1);
      v9 = *(struct _KEVENT **)(a1 + 20);
      if ( v9 )
        KeSetEvent(v9, 1, 0);
      v10 = v7[73]-- == 1;
      if ( v10 && !v7[72] && (v7[71] & 0x4000000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v11 = *(void **)(a1 + 28);
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 12) = 0;
      *(_DWORD *)a1 = 0;
      if ( v11 )
      {
        ObfDereferenceObject(v11);
        *(_DWORD *)(a1 + 28) = 0;
      }
      if ( v27 )
        CleanupSensorExplicitly(0);
      v12 = v28;
      if ( v28 )
      {
        LegacyInputDispatcher::~LegacyInputDispatcher(v28);
        Win32FreePool(v12);
      }
      if ( !v1 )
      {
        v13 = Event;
        if ( !Event )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v13 = Event;
        }
        Win32FreePool(v13);
        Event = 0;
      }
      return (PRKEVENT)UserSessionSwitchLeaveCrit();
    }
    *(_DWORD *)(a1 + 32) = **(_DWORD **)(a1 + 8);
    ProcessInformation = 1;
    ZwSetInformationProcess((HANDLE)0xFFFFFFFF, ProcessBreakOnTermination, &ProcessInformation, 4u);
    v14 = v31;
    LODWORD(v36[v31]) = v30[203];
    v15 = v14 + 1;
    if ( v1 )
    {
      v16 = v14 + 1;
      Object = (PVOID)v15;
    }
    else
    {
      v16 = v14 + 9;
      Object = (PVOID)(v15 + 8);
    }
    LegacyInputDispatcher::Initialize(v28, 1, 0, v16, v15, (struct LegacyDispatcherObject *)v36);
    v17 = v31;
    if ( Object != (PVOID)(v31 + 1) )
    {
      CBaseInput::RegisterDispatcherObject(_gpMouseSensor, v28);
      v17 = v31;
    }
    *((_DWORD *)v28 + 10) = v17;
    if ( v1 )
      dword_2742D8 = (int)v28;
    else
      dword_2742DC = (int)v28;
    v18 = v30;
    v19 = v31;
    do
    {
      while ( xxxDesktopThreadWaiter(1, 0) != v19 )
        ;
    }
    while ( xxxHandleDesktopMessages(v18, (int *)a1) );
    v20 = v34;
    v21 = (signed __int32)v33;
    if ( a1 == _gTermIO[0] )
      _gdwHydraHint |= 0x100000u;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)a1 = 0;
    v22 = v30[62];
    if ( v22 )
    {
      HMAssignmentUnlock(v22 + 100);
      v23 = v30;
      v24 = *(_DWORD **)(v30[62] + 4);
      if ( !v24[3] )
      {
LABEL_64:
        v23[63] = _gpkdiStatic;
        v25 = *(_DWORD *)(v21 + 292);
        if ( !v25 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v25 = *(_DWORD *)(v21 + 292);
        }
        *(_DWORD *)(v21 + 292) = v25 - 1;
        if ( v30[59] != v21 )
          zzzDestroyQueue(v21, v30);
        if ( v27 )
          CleanupSensorExplicitly(0);
        v26 = v28;
        if ( v28 )
        {
          LegacyInputDispatcher::~LegacyInputDispatcher(v28);
          Win32FreePool(v26);
        }
        v28 = 0;
        UserSessionSwitchLeaveCrit();
        if ( !v20 )
        {
          Win32FreePool(Event);
          Event = 0;
        }
        ProcessInformation = 0;
        ZwSetInformationProcess((HANDLE)0xFFFFFFFF, ProcessBreakOnTermination, &ProcessInformation, 4u);
        EnterCrit(0, 1);
        *(_DWORD *)(a1 + 32) = 0;
        return (PRKEVENT)UserSessionSwitchLeaveCrit();
      }
      *(_DWORD *)(*v24 + 4) = 0;
      HMAssignmentUnlock(v24 + 3);
    }
    v23 = v30;
    goto LABEL_64;
  }
  *(_DWORD *)a1 |= 8u;
  v33 = 0;
  _InterlockedOr((volatile signed __int32 *)&v33, 0);
  result = (PRKEVENT)KeSetEvent(*(PRKEVENT *)(a1 + 20), 1, 0);
  if ( !v1 )
  {
    result = Event;
    if ( Event )
    {
      result = (PRKEVENT)Win32FreePool(Event);
LABEL_78:
      Event = 0;
    }
  }
  return result;
}
