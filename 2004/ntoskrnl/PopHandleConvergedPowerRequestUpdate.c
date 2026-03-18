/*
 * XREFs of PopHandleConvergedPowerRequestUpdate @ 0x1406A71B0
 * Callers:
 *     PopSystemRequiredCallback @ 0x1406A8650 (PopSystemRequiredCallback.c)
 *     PopExecutionRequiredCallback @ 0x1407104B0 (PopExecutionRequiredCallback.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140202510 (RtlLookupElementGenericTableAvl.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopHandleSystemRequiredPowerRequestsUpdate @ 0x1402DE9DC (PopHandleSystemRequiredPowerRequestsUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406A85E8 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x1406A8624 (PopPowerRequestIsExecutionRequiredCapable.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x1406A8670 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopPowerRequestIsExecutionRequiredStatusHeld @ 0x1406A86F0 (PopPowerRequestIsExecutionRequiredStatusHeld.c)
 */

__int64 __fastcall PopHandleConvergedPowerRequestUpdate(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  _QWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1;
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  Buffer = 0LL;
  DWORD2(Buffer) = v2;
  v4 = RtlLookupElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
  if ( v4 && (unsigned __int8)PopPowerRequestIsExecutionRequiredCapable(*v4) )
  {
    if ( !(unsigned __int8)PopPowerRequestIsExecutionRequiredStatusHeld(v5) )
    {
      v6 = 0LL;
      goto LABEL_6;
    }
    if ( (_BYTE)PopExecutionRequiredContext )
    {
      LOBYTE(v6) = 1;
LABEL_6:
      PopUpdatePowerRequestProcessWakeCounter(v7, v6);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  return PopHandleSystemRequiredPowerRequestsUpdate(a2, v8);
}
