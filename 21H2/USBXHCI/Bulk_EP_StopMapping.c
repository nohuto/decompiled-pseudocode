/*
 * XREFs of Bulk_EP_StopMapping @ 0x1C000CBC0
 * Callers:
 *     <none>
 * Callees:
 *     TR_AttemptStateChange @ 0x1C000A724 (TR_AttemptStateChange.c)
 */

__int64 __fastcall Bulk_EP_StopMapping(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 108), 1);
  if ( (_DWORD)result == 2 )
    return TR_AttemptStateChange(a1, 1, 0);
  return result;
}
