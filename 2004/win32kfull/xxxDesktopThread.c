/*
 * XREFs of xxxDesktopThread @ 0x1C00BD8D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00BA988 (xxxCleanupMotherDesktopWindow.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BDFE8 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxDesktopThreadWaiter @ 0x1C00BE118 (xxxDesktopThreadWaiter.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C00C793C (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
LONG __fastcall xxxDesktopThread(struct tagTERMINAL *a1)
{
  unsigned int v2; // edi
  char v3; // r12
  int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  const WCHAR *v7; // rdx
  __int64 CurrentThreadWin32Thread; // rax
  const wchar_t *v9; // rdx
  struct tagTHREADINFO *ThreadWin32Thread; // rax
  struct tagTHREADINFO *v11; // r13
  _DWORD *v12; // r15
  LONG result; // eax
  PRKEVENT v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _KEVENT *v18; // rcx
  void *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  struct _KEVENT *v24; // rcx
  bool v25; // zf
  void *v26; // rcx
  LegacyInputDispatcher *v27; // rcx
  PRKEVENT v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // edi
  unsigned int v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rcx
  int v40; // eax
  LegacyInputDispatcher *v41; // rcx
  signed __int32 v42[8]; // [rsp+8h] [rbp-79h] BYREF
  LegacyInputDispatcher *v43; // [rsp+38h] [rbp-49h] BYREF
  int ProcessInformation; // [rsp+40h] [rbp-41h] BYREF
  int v45; // [rsp+44h] [rbp-3Dh]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v47[10]; // [rsp+58h] [rbp-29h] BYREF

  v45 = 0;
  v43 = 0LL;
  v2 = 0;
  v3 = 0;
  DestinationString = 0LL;
  memset(v47, 0, sizeof(v47));
  v4 = *(_DWORD *)a1 & 2;
  SetThreadBasePriority(KeGetCurrentThread(), v4 != 0 ? 12 : 16);
  if ( !v4 )
  {
    if ( qword_1C033AEE8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
    qword_1C033AEE8 = (PRKEVENT)CreateKernelEvent(1LL);
  }
  v7 = L"IO_DT";
  if ( v4 )
    v7 = L"NOIO_DT";
  RtlInitUnicodeString(&DestinationString, v7);
  if ( v4 )
  {
    v9 = L"Win32k Desktop Thread (NOIO_DT)";
  }
  else
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      *(_DWORD *)(CurrentThreadWin32Thread + 48) = 1;
    v9 = L"Win32k Desktop Thread (IO_DT)";
  }
  SetThreadName(-2LL, v9);
  if ( (int)InitSystemThread(&DestinationString) >= 0 && (v4 || qword_1C033AEE8) )
  {
    ThreadWin32Thread = (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *((_QWORD *)a1 + 2) = ThreadWin32Thread;
    v11 = ThreadWin32Thread;
    v12 = (_DWORD *)*((_QWORD *)ThreadWin32Thread + 53);
    *((_QWORD *)a1 + 3) = v12;
    ++v12[99];
    *((_QWORD *)ThreadWin32Thread + 57) = gpkdiStatic;
    *((_QWORD *)ThreadWin32Thread + 76) = 0LL;
    if ( (int)LegacyInputDispatcher::Create(&v43) < 0 )
    {
      *(_DWORD *)a1 |= 8u;
      _InterlockedOr(v42, 0);
      result = KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
      if ( v4 )
        return result;
      v14 = qword_1C033AEE8;
      goto LABEL_75;
    }
    if ( !v4 )
    {
      v47[0] = Feedback::gpevtPointerCursorOperation;
      v47[1] = OnPointerCursorOperation;
      v47[3] = OnPTPMouseOperation;
      v47[4] = qword_1C033AEE8;
      v47[5] = lambda_037b13f66b36a5642f7113becdf3aece_::_lambda_invoker_cdecl_;
      v47[2] = gpevtPTPOperation;
      v47[6] = GetSynthesizedContainerMouseInputEvent();
      v2 = 4;
      v47[7] = ChildProcessRootSynthesizedMouseInput;
      v45 = 4;
      if ( gSessionId == gServiceSessionId )
      {
        CBaseInput::InitializeSensor(gpMouseSensor);
        v3 = 1;
      }
      else
      {
        v3 = 1;
        if ( (int)CBaseInput::InitializeSensor(gpMouseSensor) >= 0 )
        {
          if ( gProtocolType )
          {
            EnterCrit(0LL, 1LL);
            CBaseInput::HandleTSRequest(gpMouseSensor, 0LL);
            UserSessionSwitchLeaveCrit(v16, v15, v17);
          }
          CBaseInput::Read(gpMouseSensor);
        }
      }
    }
    EnterCrit(0LL, 1LL);
    v18 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
    *(_DWORD *)a1 |= 4u;
    KeSetEvent(v18, 1, 0);
    v19 = (void *)*((_QWORD *)a1 + 7);
    ObReferenceObjectByPointer(v19, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
    if ( gdwInAtomicOperation )
    {
      v20 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v20, gdwInAtomicOperation, v21);
    KeWaitForSingleObject(v19, WrUserRequest, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
    ObfDereferenceObject(v19);
    if ( (*(_DWORD *)a1 & 8) != 0 )
    {
      _InterlockedOr(v42, 0);
      if ( *((_QWORD *)a1 + 1) )
        xxxCleanupMotherDesktopWindow((__int64)a1);
      v24 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
      if ( v24 )
        KeSetEvent(v24, 1, 0);
      v25 = v12[99]-- == 1;
      if ( v25 && !v12[98] && (v12[97] & 0x4000000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v22);
      v26 = (void *)*((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 2) = 0LL;
      *((_QWORD *)a1 + 3) = 0LL;
      *(_DWORD *)a1 = 0;
      if ( v26 )
      {
        ObfDereferenceObject(v26);
        *((_QWORD *)a1 + 7) = 0LL;
      }
      if ( v3 )
        CleanupSensorExplicitly(0LL);
      v27 = v43;
      if ( v43 )
        LegacyInputDispatcher::`scalar deleting destructor'(v43, v22);
      if ( !v4 )
      {
        v28 = qword_1C033AEE8;
        if ( !qword_1C033AEE8 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v22);
          v28 = qword_1C033AEE8;
        }
        Win32FreePool(v28);
        qword_1C033AEE8 = 0LL;
      }
    }
    else
    {
      *((_QWORD *)a1 + 8) = **((_QWORD **)a1 + 2);
      ProcessInformation = 1;
      ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
      v29 = 2LL * v2;
      v30 = v2 + 1;
      v47[v29] = *((_QWORD *)v11 + 176);
      v31 = v30 + 8;
      if ( v4 )
        v31 = v30;
      LegacyInputDispatcher::Initialize(v43, 1, 0, v31, v30, (struct LegacyDispatcherObject *)v47);
      if ( v31 != v30 )
        CBaseInput::RegisterDispatcherObject(gpMouseSensor, v43);
      v35 = v45;
      *((_DWORD *)v43 + 15) = v45;
      if ( v4 )
        qword_1C033AEF0 = (__int64)v43;
      else
        qword_1C033AEF8 = (__int64)v43;
      do
      {
        do
          LOBYTE(v32) = 1;
        while ( (unsigned int)xxxDesktopThreadWaiter(v32, 0LL, v33, v34) != v35 );
      }
      while ( (unsigned int)xxxHandleDesktopMessages(v11, a1) );
      if ( a1 == (struct tagTERMINAL *)gTermIO[0] )
        gdwHydraHint |= 0x100000u;
      *((_QWORD *)a1 + 2) = 0LL;
      *((_QWORD *)a1 + 3) = 0LL;
      *((_DWORD *)a1 + 8) = 0;
      *(_DWORD *)a1 = 0;
      v37 = *((_QWORD *)v11 + 56);
      if ( v37 )
      {
        HMAssignmentUnlock(v37 + 184);
        v38 = *((_QWORD *)v11 + 56);
        v39 = (_QWORD *)(*(_QWORD *)(v38 + 8) + 24LL);
        if ( *v39 )
        {
          *(_QWORD *)(**(_QWORD **)(v38 + 8) + 8LL) = 0LL;
          HMAssignmentUnlock(v39);
        }
      }
      *((_QWORD *)v11 + 57) = gpkdiStatic;
      v40 = v12[99];
      if ( !v40 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(gpkdiStatic, v36);
        v40 = v12[99];
      }
      v12[99] = v40 - 1;
      if ( *((_DWORD **)v11 + 53) != v12 )
        zzzDestroyQueue(v12);
      if ( v3 )
        CleanupSensorExplicitly(0LL);
      v41 = v43;
      if ( v43 )
        LegacyInputDispatcher::`scalar deleting destructor'(v43, v36);
      v43 = 0LL;
      UserSessionSwitchLeaveCrit(v41, v36, v33);
      if ( !v4 )
      {
        Win32FreePool(qword_1C033AEE8);
        qword_1C033AEE8 = 0LL;
      }
      ProcessInformation = 0;
      ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
      EnterCrit(0LL, 1LL);
      *((_QWORD *)a1 + 8) = 0LL;
    }
    return UserSessionSwitchLeaveCrit(v27, v22, v23);
  }
  else
  {
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v42, 0);
    result = KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
    if ( !v4 )
    {
      v14 = qword_1C033AEE8;
      if ( qword_1C033AEE8 )
      {
LABEL_75:
        result = Win32FreePool(v14);
        qword_1C033AEE8 = 0LL;
      }
    }
  }
  return result;
}
