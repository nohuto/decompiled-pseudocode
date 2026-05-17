/*
 * XREFs of RtlpTpTimerCallback @ 0x1800771E0
 * Callers:
 *     <none>
 * Callees:
 *     TppStartThreadData @ 0x1800205F0 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x180020680 (TppCompleteThreadData.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpTpImpersonate @ 0x180071160 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x18009D7E0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x180112774 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x180112810 (RtlpTpETWCallbackStop.c)
 */

void __fastcall RtlpTpTimerCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  struct _TEB *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a2 + 88) || !_InterlockedExchange((volatile __int32 *)(a2 + 92), 1) )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( v3 )
      RtlpTpImpersonate(v3);
    v4 = NtCurrentTeb();
    v5 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v6 = 2147353478LL;
    if ( *(_BYTE *)v6 )
      RtlpTpETWCallbackStart(
        0,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v4->SubProcessTag);
    TppStartThreadData(&v9, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v4->SubProcessTag);
    LOBYTE(v7) = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), v7);
    if ( NtCurrentTeb()->IsImpersonating )
    {
      v8 = 0LL;
      NtSetInformationThread(-2LL, 5LL, &v8, 8LL);
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v5 )
      RtlpTpETWCallbackStop(
        0,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v4->SubProcessTag);
    TppCompleteThreadData(v9);
  }
}
