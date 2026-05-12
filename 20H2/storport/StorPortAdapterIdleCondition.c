/*
 * XREFs of StorPortAdapterIdleCondition @ 0x1C0040750
 * Callers:
 *     <none>
 * Callees:
 *     RaidPauseAdapterQueue @ 0x1C001393C (RaidPauseAdapterQueue.c)
 *     RaidIsAdapterControlSupported @ 0x1C00189E0 (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0037010 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C003E8F8 (RaidAdapterSendPoFxActiveToMiniport.c)
 */

NTSTATUS __fastcall StorPortAdapterIdleCondition(__int64 a1, unsigned int a2, __int64 a3)
{
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( StorEtwLoggingEnabled && (byte_1C0069841 & 1) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 56);
    McTemplateK0pqq_EtwWriteTransfer(a1, &EventAdapterIdleConditionStart, a3, **(_QWORD **)(a1 + 5088), v9, a2);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 5088) + 20LL) &= ~1u;
  RaidPauseAdapterQueue(a1);
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    RaidAdapterSendPoFxActiveToMiniport(a1);
  result = PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 5088), a2);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0069841 & 1) != 0 )
    {
      LODWORD(v10) = a2;
      LODWORD(v8) = *(_DWORD *)(a1 + 56);
      return McTemplateK0pqq_EtwWriteTransfer(v6, &EventAdapterIdleConditionStop, v7, **(_QWORD **)(a1 + 5088), v8, v10);
    }
  }
  return result;
}
