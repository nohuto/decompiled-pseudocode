/*
 * XREFs of TppCompleteThreadData @ 0x180020680
 * Callers:
 *     TppExecuteWaitCallback @ 0x180010E18 (TppExecuteWaitCallback.c)
 *     TppIopExecuteCallback @ 0x180020FD0 (TppIopExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x180070B90 (RtlpTpWorkCallback.c)
 *     TppSimplepExecuteCallback @ 0x180071CA0 (TppSimplepExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x1800726A0 (TppTimerpExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x1800771E0 (RtlpTpTimerCallback.c)
 *     RtlpTpWaitCallback @ 0x180079620 (RtlpTpWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x1800807B0 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x1801132D0 (RtlpTpIoCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall TppCompleteThreadData(__int64 a1)
{
  if ( a1 )
  {
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 24) = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - *(_QWORD *)(a1 + 24);
  }
}
