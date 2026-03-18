/*
 * XREFs of PfpEventHandleOutOfBuffers @ 0x14031A5E0
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x14031A604 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpEventHandleOutOfBuffers(struct _EX_RUNDOWN_REF *a1)
{
  __int64 result; // rax

  result = PfFbBufferListAllocateTemporary(a1);
  if ( (int)result < 0 )
    ++DWORD1(xmmword_140C4FE10);
  return result;
}
