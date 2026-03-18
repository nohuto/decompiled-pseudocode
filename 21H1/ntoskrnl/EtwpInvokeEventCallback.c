/*
 * XREFs of EtwpInvokeEventCallback @ 0x1405A5ADC
 * Callers:
 *     EtwpLogKernelEvent @ 0x1402085B0 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x140256EC0 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x1402D68C0 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AA58C (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x1405A04E0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A0988 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140669E00 (EtwpWriteUserEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KeIsTraceCallbackAllowed @ 0x14051E34C (KeIsTraceCallbackAllowed.c)
 *     EtwpGetNextEventOffsetType @ 0x1405A7800 (EtwpGetNextEventOffsetType.c)
 */

__int64 __fastcall EtwpInvokeEventCallback(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v5; // r10d
  __int64 result; // rax
  char v7; // r9
  __int64 v8; // r10
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a2;
  v5 = *((_DWORD *)a2 + 4);
  v9 = 0;
  result = EtwpGetNextEventOffsetType(v3, v5, &v9);
  if ( (_DWORD)result )
  {
    result = KeIsTraceCallbackAllowed(v7);
    if ( (_DWORD)result )
      return ((__int64 (__fastcall *)(__int64, _QWORD, __int64))qword_140CFCB68)(v3 + v8, v9, a3);
  }
  return result;
}
