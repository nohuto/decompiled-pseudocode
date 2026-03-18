/*
 * XREFs of PopFxComponentWork @ 0x140381040
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     PopFxIdleWorker @ 0x1402467F4 (PopFxIdleWorker.c)
 *     memset @ 0x140411300 (memset.c)
 */

LONG __fastcall PopFxComponentWork(__int64 a1)
{
  __int64 v2; // rcx
  LONG result; // eax
  _BYTE v4[64]; // [rsp+20h] [rbp-48h] BYREF

  memset(v4, 0, sizeof(v4));
  do
    PopFxIdleWorker(*(__int64 **)(a1 + 80), *(_DWORD *)(a1 + 16));
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 56), 0xFFFFFFFF) != 1 );
  v2 = *(_QWORD *)(a1 + 80);
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(v2 + 248), 0, 0);
  return result;
}
