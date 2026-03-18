/*
 * XREFs of _SetWF@8 @ 0x1401CD
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 */

unsigned int __fastcall SetWF(int a1, unsigned __int16 a2)
{
  return SetOrClrWF(1, a1, a2, 1);
}
