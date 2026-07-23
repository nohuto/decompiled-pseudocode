/*
 * XREFs of TppTimerpExecuteCallback @ 0x180071570
 * Callers:
 *     <none>
 * Callees:
 *     TppWorkCallbackPrologRelease @ 0x18001FEF8 (TppWorkCallbackPrologRelease.c)
 *     TppStartThreadData @ 0x1800205F0 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x180020680 (TppCompleteThreadData.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     TppETWCallbackDequeue @ 0x18011228C (TppETWCallbackDequeue.c)
 *     RtlpTpETWCallbackStart @ 0x1801123C4 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x180112460 (RtlpTpETWCallbackStop.c)
 */

void __fastcall TppTimerpExecuteCallback(_QWORD *Instance, __int64 a2)
{
  int v2; // esi
  __int64 *v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  v3 = (__int64 *)(a2 - 200);
  v5 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    TppETWCallbackDequeue(v3[18], v2, v3[10], v3[11], v3[13]);
  if ( (unsigned int)TppWorkCallbackPrologRelease(Instance, (__int64)v3, 0) )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v7 = 2147353478LL;
    if ( *(_BYTE *)v7 )
      RtlpTpETWCallbackStart(v3[18], v2, v3[10], v3[11], v3[13]);
    TppStartThreadData(&v8, v3[10], v3[11], v3[13]);
    Instance[11] = v3[10];
    Instance[12] = v3[11];
    ((void (__fastcall *)(_QWORD *, __int64, __int64 *))v3[10])(Instance, v3[11], v3);
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v5 )
      RtlpTpETWCallbackStop(v3[18], v2, v3[10], v3[11], v3[13]);
    TppCompleteThreadData(v8);
  }
}
