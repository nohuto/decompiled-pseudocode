/*
 * XREFs of ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C01BC2D8
 * Callers:
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01BB1D0 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 * Callees:
 *     ?DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ @ 0x1C00BD57C (-DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ.c)
 *     ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x1C01B9010 (--_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::BufferedMouseInputList::ResolveIdToMessage(
        CMouseProcessor::BufferedMouseInputList *this,
        __int64 a2)
{
  CInputThread *v2; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  CMouseProcessor::MouseInputMessage *v13; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // edx

  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v6 = *((_DWORD *)v2 + 10);
  v7 = CurrentThreadId;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 != v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  v12 = (_QWORD *)((char *)this + 8);
  v13 = (CMouseProcessor::MouseInputMessage *)*((_QWORD *)this + 1);
  if ( v13 == (CMouseProcessor::BufferedMouseInputList *)((char *)this + 8) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
    return 0LL;
  }
  else
  {
    if ( *((_QWORD **)v13 + 1) != v12
      || (v15 = *(_QWORD *)v13, *(CMouseProcessor::MouseInputMessage **)(*(_QWORD *)v13 + 8LL) != v13) )
    {
      __fastfail(3u);
    }
    *v12 = v15;
    *(_QWORD *)(v15 + 8) = v12;
    if ( *((_QWORD *)v13 + 2) != a2 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v8, v10, v11);
      CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(v13, v16, v17, v18);
      CMouseProcessor::BufferedMouseInputList::DropAllMouseInput(this, v19);
      return 0LL;
    }
    return v13;
  }
}
