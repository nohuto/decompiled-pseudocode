/*
 * XREFs of _ClrWFNoDwmNotify@8 @ 0x145BAC
 * Callers:
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 */

unsigned int __fastcall ClrWFNoDwmNotify(int a1, unsigned __int16 a2)
{
  return SetOrClrWF(0, a1, a2, 0);
}
