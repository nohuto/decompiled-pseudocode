/*
 * XREFs of ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C01C43CC
 * Callers:
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01C32A0 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 * Callees:
 *     ?DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ @ 0x1C004F43C (-DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ.c)
 *     ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x1C01C10E0 (--_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::BufferedMouseInputList::ResolveIdToMessage(
        CMouseProcessor::BufferedMouseInputList *this,
        __int64 a2)
{
  CInputThread *v2; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  CMouseProcessor::MouseInputMessage *v10; // rbx
  __int64 v12; // rcx
  unsigned int v13; // edx

  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v6 = *((_DWORD *)v2 + 10);
  v7 = CurrentThreadId;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 != v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  v9 = (_QWORD *)((char *)this + 8);
  v10 = (CMouseProcessor::MouseInputMessage *)*((_QWORD *)this + 1);
  if ( v10 == (CMouseProcessor::BufferedMouseInputList *)((char *)this + 8) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    return 0LL;
  }
  else
  {
    if ( *((_QWORD **)v10 + 1) != v9
      || (v12 = *(_QWORD *)v10, *(CMouseProcessor::MouseInputMessage **)(*(_QWORD *)v10 + 8LL) != v10) )
    {
      __fastfail(3u);
    }
    *v9 = v12;
    *(_QWORD *)(v12 + 8) = v9;
    if ( *((_QWORD *)v10 + 2) != a2 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
      CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(v10);
      CMouseProcessor::BufferedMouseInputList::DropAllMouseInput(this, v13);
      return 0LL;
    }
    return v10;
  }
}
