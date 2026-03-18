/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x14070ED84
 * Callers:
 *     PopUmpoProcessMessage @ 0x14070EC54 (PopUmpoProcessMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x14033CD34 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14037EF24 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x140576788 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopSetNewPolicyValue @ 0x14070EDF0 (PopSetNewPolicyValue.c)
 *     PopAcquirePowerRequestPushLock @ 0x14070F888 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestOverrideInitialize @ 0x1407BE4A0 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerRequestNotificationsFlush @ 0x1408DD1B8 (PopPowerRequestNotificationsFlush.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 *     PfPowerActionNotify @ 0x14098D1AC (PfPowerActionNotify.c)
 */

__int64 __fastcall PopUmpoProcessPowerMessage(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  switch ( *(_DWORD *)a1 )
  {
    case 4:
      result = PopSetNewPolicyValue(a1 + 8, (unsigned int)(*(_DWORD *)a1 - 4));
      if ( (int)result < 0 )
        return result;
      break;
    case 7:
      if ( *(_BYTE *)(a1 + 20) && *(_DWORD *)(a1 + 12) == 18 )
        PfPowerActionNotify(5LL);
      break;
    case 8:
      PopProcessPowerRequestOverrideQueryResponse((unsigned int *)(a1 + 8));
      break;
    case 0xA:
      if ( *(_BYTE *)(a1 + 8) )
      {
        LOBYTE(a1) = 1;
        PopAcquirePowerRequestPushLock(a1);
        PopPowerRequestNotificationsEnabled = 1;
        PopPowerRequestNotificationsFlush(&PopPowerRequestObjectList);
        PopPowerRequestNotificationsFlush(&PopSpecialPowerRequestObjectList);
        PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      }
      PopPowerRequestOverrideInitialize();
      break;
    case 0xE:
      v2 = *(_DWORD *)(a1 + 8);
      PopAcquirePolicyLock(a1);
      dword_140C23370 = v2;
      if ( byte_140C23391 )
      {
        PopIdleCancelAoAcDozeS4Timer(4u);
        PopIdleArmAoAcDozeS4Timer();
      }
      PopReleasePolicyLock(v4, v3);
      break;
  }
  return 0LL;
}
