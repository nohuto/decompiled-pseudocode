/*
 * XREFs of StorPortAdapterActiveCondition @ 0x1C003F0F0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterRestartQueues @ 0x1C00120DC (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C00121B0 (RaidResumeAdapterQueue.c)
 *     RaidIsAdapterControlSupported @ 0x1C0018548 (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C00361A0 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C003D9D8 (RaidAdapterSendPoFxActiveToMiniport.c)
 */

void __fastcall StorPortAdapterActiveCondition(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  KIRQL v7; // bl
  __int64 v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( StorEtwLoggingEnabled && (byte_1C0068841 & 1) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 56);
    McTemplateK0pqq_EtwWriteTransfer(a1, &EventAdapterActiveConditionStart, a3, **(_QWORD **)(a1 + 5088), v9, a2);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 5088) + 20LL) |= 1u;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    RaidAdapterSendPoFxActiveToMiniport(a1);
  if ( !(unsigned int)RaidResumeAdapterQueue(a1) )
  {
    v7 = KfRaiseIrql(2u);
    RaidAdapterRestartQueues(a1);
    KeLowerIrql(v7);
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0068841 & 1) != 0 )
    {
      LODWORD(v10) = a2;
      LODWORD(v8) = *(_DWORD *)(a1 + 56);
      McTemplateK0pqq_EtwWriteTransfer(v5, &EventAdapterActiveConditionStop, v6, **(_QWORD **)(a1 + 5088), v8, v10);
    }
  }
}
