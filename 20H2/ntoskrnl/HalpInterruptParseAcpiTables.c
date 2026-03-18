/*
 * XREFs of HalpInterruptParseAcpiTables @ 0x1403AEBE0
 * Callers:
 *     HalpInitializeInterrupts @ 0x140A45CAC (HalpInitializeInterrupts.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14025EF70 (HalpAcpiGetTable.c)
 *     HalpInterruptParseMadt @ 0x1403AEC54 (HalpInterruptParseMadt.c)
 */

__int64 __fastcall HalpInterruptParseAcpiTables(__int64 a1, unsigned int a2)
{
  int v3; // ebx
  __int64 Table; // rax

  v3 = 0;
  Table = HalpAcpiGetTable(a1, 1128878145, 0, 0);
  if ( Table && (v3 = HalpInterruptParseMadt(Table, a2), v3 < 0) )
  {
    HalpInterruptLastProblem = 1;
  }
  else
  {
    if ( !HalpInterruptMaxProcessors )
      HalpInterruptMaxProcessors = 1;
    if ( a2 == 1 )
    {
      HalpInterruptProcessorStateInitialized = 1;
      *(_WORD *)(HalpInterruptProcessorState + 12) = 257;
    }
  }
  return (unsigned int)v3;
}
