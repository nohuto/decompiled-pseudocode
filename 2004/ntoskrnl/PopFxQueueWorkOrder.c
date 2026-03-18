/*
 * XREFs of PopFxQueueWorkOrder @ 0x14037F228
 * Callers:
 *     PopFxIdleComponent @ 0x1402C9FD0 (PopFxIdleComponent.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1403A4A00 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140565F0C (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxIssueDirectedPowerTransition @ 0x140566148 (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x1402BCD60 (ExTryQueueWorkItem.c)
 *     PopFxAddRefDevice @ 0x1402CA530 (PopFxAddRefDevice.c)
 *     KeReleaseSemaphoreEx @ 0x1402EBC30 (KeReleaseSemaphoreEx.c)
 *     ExInterlockedInsertTailList @ 0x140330B10 (ExInterlockedInsertTailList.c)
 */

char __fastcall PopFxQueueWorkOrder(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  signed __int32 v4; // eax
  _DWORD *v5; // r9

  v4 = _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
  if ( v4 == 1 )
  {
    if ( a3 )
      PopFxAddRefDevice(a3);
    LOBYTE(v4) = ExTryQueueWorkItem((_QWORD *)a2, 0x30u);
    if ( !(_BYTE)v4 )
    {
      ExInterlockedInsertTailList(&stru_140C24730, (PLIST_ENTRY)a2, &Lock);
      LOBYTE(v4) = KeReleaseSemaphoreEx((__int64)&unk_140C24740, 0LL, 1LL, v5, 0);
    }
  }
  return v4;
}
