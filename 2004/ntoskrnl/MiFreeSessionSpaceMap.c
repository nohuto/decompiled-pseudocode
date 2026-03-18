/*
 * XREFs of MiFreeSessionSpaceMap @ 0x1403873F8
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140765340 (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

unsigned __int64 MiFreeSessionSpaceMap()
{
  unsigned __int64 result; // rax

  result = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
  if ( *(_QWORD *)(result + 208) )
    KeBugCheckEx(0xBAu, *(unsigned int *)(result + 8), *(unsigned int *)(result + 216), 0LL, 0LL);
  return result;
}
