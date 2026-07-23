/*
 * XREFs of HalpBlkIdlePortRead @ 0x140A19080
 * Callers:
 *     HalpBlkIdleLoop @ 0x140A1B530 (HalpBlkIdleLoop.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall HalpBlkIdlePortRead(unsigned __int16 a1)
{
  unsigned __int8 result; // al

  _enable();
  result = __inbyte(a1);
  _disable();
  return result;
}
