/*
 * XREFs of PostMouseInputMessage @ 0x1C01ABC00
 * Callers:
 *     NtMITPostMouseInputMessage @ 0x1C012FFA0 (NtMITPostMouseInputMessage.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00747EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01BD540 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall PostMouseInputMessage(__int64 a1, unsigned int a2, __int64 a3)
{
  CInputThread *v3; // rsi
  unsigned int CurrentThreadId; // eax
  int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 MouseProcessor; // rax
  int v15; // eax

  v3 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v8 = *((_DWORD *)v3 + 10);
  v9 = CurrentThreadId;
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 != v8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor && (unsigned __int8)CMouseProcessor::PostMouseInputMessage(MouseProcessor, a1, a2, a3) )
    v15 = 0;
  else
    v15 = -1073741823;
  return v15 != 0;
}
