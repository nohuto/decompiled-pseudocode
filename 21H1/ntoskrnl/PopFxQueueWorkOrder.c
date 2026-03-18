/*
 * XREFs of PopFxQueueWorkOrder @ 0x14037E838
 * Callers:
 *     PopFxIdleComponent @ 0x1402371A0 (PopFxIdleComponent.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1403A42A0 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1405658BC (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxIssueDirectedPowerTransition @ 0x140565AF8 (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x14022A0E0 (ExTryQueueWorkItem.c)
 *     PopFxAddRefDevice @ 0x140237700 (PopFxAddRefDevice.c)
 *     ExInterlockedInsertTailList @ 0x1402F3F10 (ExInterlockedInsertTailList.c)
 *     KeReleaseSemaphoreEx @ 0x140330D70 (KeReleaseSemaphoreEx.c)
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
      ExInterlockedInsertTailList(&stru_140C248F0, (PLIST_ENTRY)a2, &Lock);
      LOBYTE(v4) = KeReleaseSemaphoreEx((__int64)&unk_140C24900, 0LL, 1LL, v5, 0);
    }
  }
  return v4;
}
