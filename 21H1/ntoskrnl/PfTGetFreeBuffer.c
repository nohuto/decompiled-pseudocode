/*
 * XREFs of PfTGetFreeBuffer @ 0x140654CE4
 * Callers:
 *     PfTReplaceCurrentBuffer @ 0x140654C44 (PfTReplaceCurrentBuffer.c)
 *     PfTAllocateBuffers @ 0x1407AA834 (PfTAllocateBuffers.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PfTGetFreeBuffer(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *result; // rax

  v1 = *(_QWORD **)(a1 + 16);
  result = 0LL;
  if ( v1 )
  {
    *(_QWORD *)(a1 + 16) = *v1;
    result = v1;
    --*(_WORD *)(a1 + 10);
  }
  return result;
}
