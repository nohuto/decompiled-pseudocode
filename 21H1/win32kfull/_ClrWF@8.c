/*
 * XREFs of _ClrWF@8 @ 0x140084
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 */

unsigned int __fastcall ClrWF(int a1, unsigned __int16 a2)
{
  return SetOrClrWF(0, a1, a2, 1);
}
