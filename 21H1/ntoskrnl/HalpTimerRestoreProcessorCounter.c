/*
 * XREFs of HalpTimerRestoreProcessorCounter @ 0x140382F88
 * Callers:
 *     HalpPostSleepMP @ 0x1409910C4 (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpTimerRestoreProcessorCounter()
{
  unsigned __int64 result; // rax

  if ( !qword_140C4A368 )
  {
    LODWORD(result) = KeGetPcr()->Prcb.Number;
    result = *(_QWORD *)(HalpTimerSavedProcessorCounter + 8 * result);
    __writemsr(0x10u, result);
  }
  return result;
}
