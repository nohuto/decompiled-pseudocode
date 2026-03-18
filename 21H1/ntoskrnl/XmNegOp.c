/*
 * XREFs of XmNegOp @ 0x1404E03F0
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x1403936A8 (XmSubOperands.c)
 */

__int64 __fastcall XmNegOp(_DWORD *a1)
{
  int v1; // eax

  v1 = a1[26];
  a1[26] = 0;
  a1[27] = v1;
  return XmSubOperands(a1, 0);
}
