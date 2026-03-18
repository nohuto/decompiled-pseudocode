/*
 * XREFs of setjmp @ 0x140407200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl setjmp(jmp_buf Buf)
{
  return _setjmp(Buf);
}
