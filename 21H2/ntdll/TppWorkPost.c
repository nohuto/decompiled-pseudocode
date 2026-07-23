/*
 * XREFs of TppWorkPost @ 0x1800129B8
 * Callers:
 *     TpSimpleTryPost @ 0x180010BE0 (TpSimpleTryPost.c)
 *     TpPostWork @ 0x1800128C0 (TpPostWork.c)
 *     TppSingleTimerExpiration @ 0x180014100 (TppSingleTimerExpiration.c)
 * Callees:
 *     TpPostTask @ 0x180012A98 (TpPostTask.c)
 *     TppBarrierAdjust @ 0x18004CF8C (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackEnqueue @ 0x180112698 (RtlpTpETWCallbackEnqueue.c)
 */

__int64 __fastcall TppWorkPost(__int64 a1)
{
  __int64 result; // rax
  int v3; // r8d
  int v4; // ett
  _DWORD *SharedData; // rcx
  __int64 v6; // rcx

  TppBarrierAdjust(a1 + 56, 1LL);
  _m_prefetchw((const void *)(a1 + 232));
  LODWORD(result) = *(_DWORD *)(a1 + 232);
  do
  {
    v3 = result & 1;
    v4 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a1 + 232),
                             (result & 0xFFFFFFFE) + 2,
                             result);
  }
  while ( v4 != (_DWORD)result );
  if ( v3 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a1, 2u);
    *(_QWORD *)(a1 + 128) = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v6 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v6 = 2147353478LL;
    if ( *(_BYTE *)v6 )
      RtlpTpETWCallbackEnqueue(
        *(_QWORD *)(a1 + 144),
        a1 + 200,
        *(_QWORD *)(a1 + 80),
        *(_QWORD *)(a1 + 88),
        *(_QWORD *)(a1 + 104));
    TpPostTask(a1 + 200, *(_QWORD *)(a1 + 144), *(unsigned int *)(a1 + 192), 0LL);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
