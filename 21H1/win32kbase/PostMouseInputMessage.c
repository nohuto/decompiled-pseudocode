/*
 * XREFs of PostMouseInputMessage @ 0x1C01B1960
 * Callers:
 *     NtMITPostMouseInputMessage @ 0x1C0135F90 (NtMITPostMouseInputMessage.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01C32A0 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall PostMouseInputMessage(__int64 a1, unsigned int a2, __int64 a3)
{
  CInputThread *v3; // rsi
  unsigned int CurrentThreadId; // eax
  int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 MouseProcessor; // rax
  int v12; // eax

  v3 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v8 = *((_DWORD *)v3 + 10);
  v9 = CurrentThreadId;
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 != v8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor && (unsigned __int8)CMouseProcessor::PostMouseInputMessage(MouseProcessor, a1, a2, a3) )
    v12 = 0;
  else
    v12 = -1073741823;
  return v12 != 0;
}
