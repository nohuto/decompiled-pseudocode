/*
 * XREFs of RtlpInitializeMap @ 0x1800F8274
 * Callers:
 *     RtlpInitializeLeakDetection @ 0x1800F81C8 (RtlpInitializeLeakDetection.c)
 *     RtlpSetBlockInfo @ 0x1800F89CC (RtlpSetBlockInfo.c)
 * Callees:
 *     memset @ 0x1800A4180 (memset.c)
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
