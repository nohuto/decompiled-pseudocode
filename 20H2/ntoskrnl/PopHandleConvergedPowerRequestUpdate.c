/*
 * XREFs of PopHandleConvergedPowerRequestUpdate @ 0x14071EAC4
 * Callers:
 *     PopExecutionRequiredCallback @ 0x14071E0F0 (PopExecutionRequiredCallback.c)
 *     PopSystemRequiredCallback @ 0x14071E580 (PopSystemRequiredCallback.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14023F6F0 (RtlLookupElementGenericTableAvl.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopHandleSystemRequiredPowerRequestsUpdate @ 0x1403632DC (PopHandleSystemRequiredPowerRequestsUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x14071EC18 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x14071EC54 (PopPowerRequestIsExecutionRequiredCapable.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14072002C (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopPowerRequestIsExecutionRequiredStatusHeld @ 0x1407200AC (PopPowerRequestIsExecutionRequiredStatusHeld.c)
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
