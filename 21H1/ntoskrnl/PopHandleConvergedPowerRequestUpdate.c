/*
 * XREFs of PopHandleConvergedPowerRequestUpdate @ 0x14070E454
 * Callers:
 *     PopSystemRequiredCallback @ 0x1406EA700 (PopSystemRequiredCallback.c)
 *     PopExecutionRequiredCallback @ 0x1406EC9D0 (PopExecutionRequiredCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     RtlLookupElementGenericTableAvl @ 0x1402E5E00 (RtlLookupElementGenericTableAvl.c)
 *     PopHandleSystemRequiredPowerRequestsUpdate @ 0x14035CAF0 (PopHandleSystemRequiredPowerRequestsUpdate.c)
 *     PopPowerRequestIsExecutionRequiredStatusHeld @ 0x1406E952C (PopPowerRequestIsExecutionRequiredStatusHeld.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14070099C (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopAcquirePowerRequestPushLock @ 0x14070F888 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x14070F8C4 (PopPowerRequestIsExecutionRequiredCapable.c)
 */

__int64 __fastcall PopHandleConvergedPowerRequestUpdate(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  _QWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  char v7; // dl
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
    if ( !PopPowerRequestIsExecutionRequiredStatusHeld(v5) )
    {
      v7 = 0;
      goto LABEL_6;
    }
    if ( (_BYTE)PopExecutionRequiredContext )
    {
      v7 = 1;
LABEL_6:
      PopUpdatePowerRequestProcessWakeCounter(v6, v7);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  return PopHandleSystemRequiredPowerRequestsUpdate(a2, v8);
}
