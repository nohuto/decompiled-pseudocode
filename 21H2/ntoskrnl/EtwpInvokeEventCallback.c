/*
 * XREFs of EtwpInvokeEventCallback @ 0x1405AB678
 * Callers:
 *     EtwpTraceMessageVa @ 0x14025D560 (EtwpTraceMessageVa.c)
 *     EtwpEventWriteFull @ 0x14025DF60 (EtwpEventWriteFull.c)
 *     EtwpLogKernelEvent @ 0x140350000 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AEB1C (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x1405A60A0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A6548 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140627BC0 (EtwpWriteUserEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     KeIsTraceCallbackAllowed @ 0x140523E4C (KeIsTraceCallbackAllowed.c)
 *     EtwpGetNextEventOffsetType @ 0x1405AD450 (EtwpGetNextEventOffsetType.c)
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
      return ((__int64 (__fastcall *)(__int64, _QWORD, __int64))qword_140CFCB98)(v3 + v8, v9, a3);
  }
  return result;
}
