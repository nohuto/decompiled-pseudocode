/*
 * XREFs of RtlpWaitOnAddressWakeEntireList @ 0x180063A9C
 * Callers:
 *     RtlpWakeByAddress @ 0x18006311C (RtlpWakeByAddress.c)
 *     RtlpOptimizeWaitOnAddressWaitList @ 0x180063830 (RtlpOptimizeWaitOnAddressWaitList.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18006388C (RtlpWaitOnAddressRemoveWaitBlock.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18009DC00 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall RtlpWaitOnAddressWakeEntireList(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rbx
  __int64 result; // rax

  v2 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 )
  {
    do
    {
      v3 = *(_QWORD *)(v2 + 16);
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)(v2 + 40), 2);
      if ( !(_DWORD)result )
        result = ZwAlertThreadByThreadId(*(_QWORD *)(v2 + 8), a2);
      v2 = v3;
    }
    while ( v3 );
  }
  return result;
}
