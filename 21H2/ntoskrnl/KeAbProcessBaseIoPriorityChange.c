/*
 * XREFs of KeAbProcessBaseIoPriorityChange @ 0x1402F7370
 * Callers:
 *     PspNotifyProcessBackgroundTransition @ 0x1402F0C14 (PspNotifyProcessBackgroundTransition.c)
 *     PsSetIoPriorityThread @ 0x1402F72F0 (PsSetIoPriorityThread.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1402F73AC (KeAbProcessBaseIoPriorityChangeInternal.c)
 */

void __fastcall KeAbProcessBaseIoPriorityChange(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdx
  BOOL v5; // eax

  v4 = 0LL;
  if ( a3 >= 2 )
  {
    if ( a2 >= 2 )
      return;
    v4 = 1LL;
    v5 = 1;
  }
  else
  {
    v5 = a2 >= 2;
  }
  if ( v5 )
    KeAbProcessBaseIoPriorityChangeInternal(a1, v4);
}
