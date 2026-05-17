/*
 * XREFs of TppIopCancelPendingCallbacks @ 0x1801118A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x18005294C (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1801121E4 (TppETWCallbackCancel.c)
 */

void __fastcall TppIopCancelPendingCallbacks(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int32 v5; // edi
  __int64 v6; // rcx

  v5 = _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
  if ( v5 )
  {
    TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), -v5, 0LL, a4);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v6 = 2147353478LL;
    if ( *(_BYTE *)v6 )
      TppETWCallbackCancel(*(_QWORD *)(a1 + 144), a1 + 200, a1 + 80, *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 104), v5);
  }
}
