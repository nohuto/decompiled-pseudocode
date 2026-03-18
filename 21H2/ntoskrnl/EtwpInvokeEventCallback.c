/*
 * XREFs of EtwpInvokeEventCallback @ 0x140632EEC
 * Callers:
 *     EtwpTraceMessageVa @ 0x14022A8D0 (EtwpTraceMessageVa.c)
 *     EtwpLogKernelEvent @ 0x1402AB170 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x140300E50 (EtwpEventWriteFull.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AB658 (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x140460192 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x140630ACC (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1407B4D70 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpGetNextEventOffsetType @ 0x1403B3D20 (EtwpGetNextEventOffsetType.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KeIsTraceCallbackAllowed @ 0x14057ADE8 (KeIsTraceCallbackAllowed.c)
 */

__int64 __fastcall EtwpInvokeEventCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  unsigned int v5; // r10d
  __int64 result; // rax
  char v7; // r9
  __int64 v8; // r10
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(unsigned int **)a2;
  v5 = *(_DWORD *)(a2 + 16);
  v9 = 0;
  result = EtwpGetNextEventOffsetType(v3, v5, &v9);
  if ( (_DWORD)result )
  {
    result = KeIsTraceCallbackAllowed(v7);
    if ( (_DWORD)result )
      return ((__int64 (__fastcall *)(char *, _QWORD, __int64))qword_140D070A8)((char *)v3 + v8, v9, a3);
  }
  return result;
}
