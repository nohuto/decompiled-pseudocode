/*
 * XREFs of RtlpInitializeMap @ 0x1800F7D64
 * Callers:
 *     RtlpInitializeLeakDetection @ 0x1800F7CB8 (RtlpInitializeLeakDetection.c)
 *     RtlpSetBlockInfo @ 0x1800F84BC (RtlpSetBlockInfo.c)
 * Callees:
 *     memset @ 0x1800A3EC0 (memset.c)
 */

void *__fastcall RtlpInitializeMap(_QWORD *a1, _QWORD *a2)
{
  void *result; // rax

  result = memset(a1, 0, 0x838uLL);
  a1[263] = a2;
  if ( a2 )
  {
    result = (void *)(*a2 >> 8);
    *a1 = result;
  }
  return result;
}
