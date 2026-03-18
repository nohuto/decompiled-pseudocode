/*
 * XREFs of KiSetDebuggerOwner @ 0x140518914
 * Callers:
 *     KeBugCheck2 @ 0x140511010 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x140517BF0 (KeFreezeExecution.c)
 *     KeSwitchFrozenProcessor @ 0x140518000 (KeSwitchFrozenProcessor.c)
 *     KiFreezeTargetExecution @ 0x140518360 (KiFreezeTargetExecution.c)
 *     KiSendThawExecution @ 0x140518750 (KiSendThawExecution.c)
 * Callees:
 *     <none>
 */

char __fastcall KiSetDebuggerOwner(__int64 a1)
{
  char result; // al
  __int64 v2; // rdx

  result = KiDebuggerIsStallOwner;
  if ( KiDebuggerIsStallOwner
    || !a1
    || (result = KeNumberProcessors_0, (_DWORD)KeNumberProcessors_0 == 1)
    || (result = MEMORY[0xFFFFF780000003C6]) != 0 )
  {
    v2 = a1;
  }
  else
  {
    v2 = qword_140CFDC88;
    if ( *(_DWORD *)(a1 + 36) )
      v2 = KiProcessorBlock[0];
  }
  KiFreezeStallOwner = v2;
  _InterlockedExchange64(&KiDebuggerOwner, a1);
  return result;
}
