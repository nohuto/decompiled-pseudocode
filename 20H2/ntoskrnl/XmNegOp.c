/*
 * XREFs of XmNegOp @ 0x1404E3F40
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x140396738 (XmSubOperands.c)
 */

__int64 __fastcall XmNegOp(_DWORD *a1)
{
  int v1; // eax

  v1 = a1[26];
  a1[26] = 0;
  a1[27] = v1;
  return XmSubOperands(a1, 0);
}
