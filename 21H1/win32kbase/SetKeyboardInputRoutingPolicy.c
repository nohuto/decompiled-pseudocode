/*
 * XREFs of SetKeyboardInputRoutingPolicy @ 0x1C004FD30
 * Callers:
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x1C004FC50 (NtMITSetKeyboardInputRoutingPolicy.c)
 * Callees:
 *     ?SetKeyboardInputRoutingPolicy@CKeyboardProcessor@@QEAAXW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C004FE1C (-SetKeyboardInputRoutingPolicy@CKeyboardProcessor@@QEAAXW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C00614E4 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetKeyboardInputRoutingPolicy(unsigned int a1)
{
  CInputThread *v1; // rsi
  unsigned int CurrentThreadId; // eax
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rcx
  CInputThread *v7; // rdi
  int v8; // ebx
  __int64 KeyboardProcessor; // rax

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v4 = *((_DWORD *)v1 + 10);
  v5 = CurrentThreadId;
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 != v4
    || (v7 = gpInputThread,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(v7, 0LL),
        v8 = *((_DWORD *)v7 + 4),
        ExReleasePushLockSharedEx(v7, 0LL),
        KeLeaveCriticalRegion(),
        v8 != 2) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  }
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor();
  CKeyboardProcessor::SetKeyboardInputRoutingPolicy(KeyboardProcessor, a1);
  return 0LL;
}
