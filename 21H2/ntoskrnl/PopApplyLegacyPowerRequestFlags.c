/*
 * XREFs of PopApplyLegacyPowerRequestFlags @ 0x1403698C4
 * Callers:
 *     PoRegisterSystemState @ 0x140201CD0 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x1407EDD60 (NtSetThreadExecutionState.c)
 * Callees:
 *     PoClearPowerRequest @ 0x140369EA0 (PoClearPowerRequest.c)
 *     PoSetPowerRequest @ 0x140369FB0 (PoSetPowerRequest.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14036A48C (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 *     PopAcquirePowerRequestSpinLock @ 0x1405C6B2C (PopAcquirePowerRequestSpinLock.c)
 *     PopReleasePowerRequestSpinLock @ 0x1405C6BA4 (PopReleasePowerRequestSpinLock.c)
 */

int __fastcall PopApplyLegacyPowerRequestFlags(PVOID Object, char a2, char a3)
{
  int v3; // ebx
  int result; // eax
  int v8; // esi
  int v9; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (a3 & 1) != 0 )
  {
    if ( (a2 & 1) != 0 )
      PoSetPowerRequest(Object, PowerRequestSystemRequired);
    else
      PoClearPowerRequest(Object, PowerRequestSystemRequired);
  }
  else if ( (a2 & 1) != 0 )
  {
    v3 = 2;
  }
  result = a2 & 2;
  if ( (a3 & 2) != 0 )
  {
    if ( (a2 & 2) != 0 )
      result = PoSetPowerRequest(Object, PowerRequestDisplayRequired);
    else
      result = PoClearPowerRequest(Object, PowerRequestDisplayRequired);
  }
  else if ( (a2 & 2) != 0 )
  {
    v3 |= 1u;
  }
  v8 = a2 & 0x40;
  if ( (a3 & 0x40) != 0 )
  {
    if ( v8 )
      result = PoSetPowerRequest(Object, PowerRequestAwayModeRequired);
    else
      result = PoClearPowerRequest(Object, PowerRequestAwayModeRequired);
  }
  else if ( v8 )
  {
    v3 |= 4u;
  }
  if ( v3 )
  {
    PopAcquirePowerRequestSpinLock(&LockHandle);
    v9 = *((_DWORD *)Object + 7);
    if ( (v9 & v3) != 0 )
    {
      *((_DWORD *)Object + 7) = v9 & ~v3;
      PopPowerRequestEvaluatePendingRequestStatus(Object);
      PopQueueWorkItem(&PopPowerRequestUpdateWorkItem, 0LL);
    }
    return PopReleasePowerRequestSpinLock(&LockHandle);
  }
  return result;
}
