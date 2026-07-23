/*
 * XREFs of ExpWorkQueueDestroy @ 0x140956228
 * Callers:
 *     ExpPartitionCreatePoolInternal @ 0x1407C2AD0 (ExpPartitionCreatePoolInternal.c)
 *     ExpPartitionDestroy @ 0x140956044 (ExpPartitionDestroy.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     KeRundownPriQueue @ 0x1405246AC (KeRundownPriQueue.c)
 */

char __fastcall ExpWorkQueueDestroy(unsigned __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r9
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int16 v7; // bx
  char result; // al
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(a1 + 728) = &Event;
  _m_prefetchw((const void *)(a1 + 712));
  v5 = *(_DWORD *)(a1 + 712);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 712), v5 | 0x8000, v5);
  }
  while ( v6 != v5 );
  v7 = v5;
  result = KeRundownPriQueue(a1, v2, v3, v4);
  if ( (v7 & 0x3FFF) != 0 )
    return KeWaitForSingleObject(*(PVOID *)(a1 + 728), Executive, 0, 0, 0LL);
  return result;
}
