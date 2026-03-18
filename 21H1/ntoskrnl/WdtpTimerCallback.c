/*
 * XREFs of WdtpTimerCallback @ 0x1405C0C00
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     ExSetTimer @ 0x14035BB10 (ExSetTimer.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WdtpTimerCallback(__int64 a1, __int64 a2)
{
  void (__fastcall *v3)(_QWORD); // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a2 + 48) )
    return (*(__int64 (__fastcall **)(_QWORD))(a2 + 40))(*(_QWORD *)(a2 + 8));
  v3 = *(void (__fastcall **)(_QWORD))(a2 + 16);
  *(_BYTE *)(a2 + 48) = 1;
  if ( v3 )
    v3(*(_QWORD *)(a2 + 8));
  if ( *(_QWORD *)(a2 + 24) )
  {
    KeResetEvent((PRKEVENT)(a2 + 104));
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 96));
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 64), CriticalWorkQueue);
  }
  result = *(unsigned int *)(a2 + 36);
  if ( (_DWORD)result )
    return ExSetTimer(*(_QWORD *)(a2 + 56), -10000LL * (unsigned int)(result - *(_DWORD *)(a2 + 32)), 0LL, 0LL);
  return result;
}
