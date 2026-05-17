/*
 * XREFs of RtlpTpWaitCallback @ 0x1800784F0
 * Callers:
 *     <none>
 * Callees:
 *     TppStartThreadData @ 0x1800205F0 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x180020680 (TppCompleteThreadData.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpTpImpersonate @ 0x180070030 (RtlpTpImpersonate.c)
 *     RtlpTpWaitCheckReset @ 0x18007860C (RtlpTpWaitCheckReset.c)
 *     NtSetInformationThread @ 0x18009CFB0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x1801123C4 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x180112460 (RtlpTpETWCallbackStop.c)
 */

void __fastcall RtlpTpWaitCallback(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _TEB *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12[6]; // [rsp+38h] [rbp-30h] BYREF

  if ( (*(_BYTE *)(a2 + 8) & 4) == 0 )
    RtlpTpWaitCheckReset(a2, a4);
  if ( *(_QWORD *)a2 )
    RtlpTpImpersonate(*(_QWORD *)a2);
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
    *(_DWORD *)(a2 + 88) = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = NtCurrentTeb();
  v7 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStart(
      0,
      *(_QWORD *)(a2 + 48),
      *(_QWORD *)(a2 + 32),
      *(_QWORD *)(a2 + 40),
      (__int64)v6->SubProcessTag);
  TppStartThreadData(v12, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v6->SubProcessTag);
  LOBYTE(v9) = a4 == 258;
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), v9);
  v10 = *(_DWORD *)(a2 + 8);
  if ( (v10 & 4) != 0 )
    *(_DWORD *)(a2 + 88) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v11 = 0LL;
    NtSetInformationThread(-2LL, 5LL, &v11, 8LL);
    v10 = *(_DWORD *)(a2 + 8);
  }
  if ( (v10 & 4) != 0 )
    RtlpTpWaitCheckReset(a2, a4);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v7 )
    RtlpTpETWCallbackStop(
      0,
      *(_QWORD *)(a2 + 48),
      *(_QWORD *)(a2 + 32),
      *(_QWORD *)(a2 + 40),
      (__int64)v6->SubProcessTag);
  TppCompleteThreadData(v12[0]);
}
