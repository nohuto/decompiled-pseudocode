/*
 * XREFs of RtlpTpIoCallback @ 0x180113310
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetThreadSubProcessTag @ 0x180020570 (RtlSetThreadSubProcessTag.c)
 *     TppStartThreadData @ 0x1800205F0 (TppStartThreadData.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x180112774 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x180112810 (RtlpTpETWCallbackStop.c)
 */

void __fastcall RtlpTpIoCallback(__int64 a1, _GUID *a2, __int64 a3, unsigned int *a4)
{
  void *v4; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(void **)a2[9].Data4;
  if ( v4 )
    RtlSetThreadSubProcessTag(v4);
  NtCurrentTeb()->ActivityId = a2[10];
  v8 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v9 = 2147353478LL;
  if ( *(_BYTE *)v9 )
    RtlpTpETWCallbackStart();
  TppStartThreadData(&v10, *(_QWORD *)a2[-1].Data4, a3, (__int64)NtCurrentTeb()->SubProcessTag);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))a2[-1].Data4)(*a4, *((_QWORD *)a4 + 1), a3);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStop();
  if ( *(_QWORD *)a2[9].Data4 )
  {
    RtlSetThreadSubProcessTag(0LL);
    *(_QWORD *)a2[9].Data4 = 0LL;
  }
  TppCompleteThreadData(v10);
}
