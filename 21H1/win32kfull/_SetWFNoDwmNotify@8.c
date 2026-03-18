/*
 * XREFs of _SetWFNoDwmNotify@8 @ 0x145C6B
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 */

unsigned int __fastcall SetWFNoDwmNotify(int a1, unsigned __int16 a2)
{
  return SetOrClrWF(1, a1, a2, 0);
}
