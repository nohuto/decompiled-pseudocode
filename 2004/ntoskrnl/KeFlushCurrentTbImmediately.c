/*
 * XREFs of KeFlushCurrentTbImmediately @ 0x14039DCF0
 * Callers:
 *     HalpFlushTLB @ 0x1403B8710 (HalpFlushTLB.c)
 *     PopHandleNextState @ 0x140990110 (PopHandleNextState.c)
 *     KiSetPageAttributesTable @ 0x1409960B8 (KiSetPageAttributesTable.c)
 *     KeLoadMTRR @ 0x1409961A0 (KeLoadMTRR.c)
 * Callees:
 *     <none>
 */

unsigned __int64 KeFlushCurrentTbImmediately()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 result; // rax

  v0 = __readcr4();
  if ( (v0 & 0x20080) != 0 )
  {
    result = v0 ^ 0x80;
    __writecr4(v0 ^ 0x80);
    __writecr4(v0);
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
