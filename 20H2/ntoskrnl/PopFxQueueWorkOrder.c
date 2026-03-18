/*
 * XREFs of PopFxQueueWorkOrder @ 0x140380F58
 * Callers:
 *     PopFxIdleComponent @ 0x140246C40 (PopFxIdleComponent.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1403A6E20 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140569940 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxIssueDirectedPowerTransition @ 0x140569B7C (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxAddRefDevice @ 0x1402461CC (PopFxAddRefDevice.c)
 *     ExTryQueueWorkItem @ 0x1402D4690 (ExTryQueueWorkItem.c)
 *     KeReleaseSemaphoreEx @ 0x1402DCAE0 (KeReleaseSemaphoreEx.c)
 *     ExInterlockedInsertTailList @ 0x1403039C0 (ExInterlockedInsertTailList.c)
 */

__int64 __fastcall PopFxQueueWorkOrder(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  __int64 result; // rax
  __int64 v5; // r9

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
  if ( (_DWORD)result == 1 )
  {
    if ( a3 )
      PopFxAddRefDevice(a3);
    result = ExTryQueueWorkItem(a2, 0x30u);
    if ( !(_BYTE)result )
    {
      ExInterlockedInsertTailList(&stru_140C24830, (PLIST_ENTRY)a2, &Lock);
      return KeReleaseSemaphoreEx((__int64)&unk_140C24840, 0, 1, v5, 0);
    }
  }
  return result;
}
