/*
 * XREFs of EtwpCovSampCaptureAllocateApc @ 0x140944750
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall EtwpCovSampCaptureAllocateApc(__int64 a1, __int64 a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x56777445u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xA0uLL);
    v4[6] = a2;
    v4[2] = 2882190508LL;
  }
  return v4;
}
