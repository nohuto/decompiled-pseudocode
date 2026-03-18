/*
 * XREFs of SetKeyboardInputRoutingPolicy @ 0x1C005D840
 * Callers:
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x1C005D760 (NtMITSetKeyboardInputRoutingPolicy.c)
 * Callees:
 *     ?SetKeyboardInputRoutingPolicy@CKeyboardProcessor@@QEAAXW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C005D92C (-SetKeyboardInputRoutingPolicy@CKeyboardProcessor@@QEAAXW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C006A414 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetKeyboardInputRoutingPolicy(unsigned int a1)
{
  CInputThread *v1; // rsi
  unsigned int CurrentThreadId; // eax
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  CInputThread *v10; // rdi
  int v11; // ebx
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
    || (v10 = gpInputThread,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(v10, 0LL),
        v11 = *((_DWORD *)v10 + 4),
        ExReleasePushLockSharedEx(v10, 0LL),
        KeLeaveCriticalRegion(),
        v11 != 2) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  }
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor();
  CKeyboardProcessor::SetKeyboardInputRoutingPolicy(KeyboardProcessor, a1);
  return 0LL;
}
