/*
 * XREFs of KeAbProcessBaseIoPriorityChange @ 0x14028F718
 * Callers:
 *     PsSetIoPriorityThread @ 0x14028F698 (PsSetIoPriorityThread.c)
 *     PspNotifyProcessBackgroundTransition @ 0x14035B760 (PspNotifyProcessBackgroundTransition.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x14028F748 (KeAbProcessBaseIoPriorityChangeInternal.c)
 */

__int64 __fastcall KeAbProcessBaseIoPriorityChange(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = (unsigned int)a2;
  if ( a3 < 2 )
  {
    v4 = 0LL;
    if ( (int)result < 2 )
      return result;
    return KeAbProcessBaseIoPriorityChangeInternal(a1, v4);
  }
  if ( a2 < 2 )
  {
    v4 = 1LL;
    return KeAbProcessBaseIoPriorityChangeInternal(a1, v4);
  }
  return result;
}
