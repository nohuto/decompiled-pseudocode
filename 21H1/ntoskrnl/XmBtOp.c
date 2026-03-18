/*
 * XREFs of XmBtOp @ 0x140362A00
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmBtOp(_DWORD *a1)
{
  __int64 result; // rax

  result = (a1[4] ^ (a1[26] >> a1[27])) & 1;
  a1[4] ^= result;
  return result;
}
