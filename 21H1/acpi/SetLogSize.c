/*
 * XREFs of SetLogSize @ 0x1C0010268
 * Callers:
 *     AMLIInitialize @ 0x1C00BCBA0 (AMLIInitialize.c)
 * Callees:
 *     memset @ 0x1C0032180 (memset.c)
 */

char SetLogSize()
{
  char v0; // bl
  PVOID PoolWithTag; // rax

  v0 = 0;
  if ( qword_1C00828E0 )
  {
    ExFreePoolWithTag(qword_1C00828E0, 0);
    qword_1C00828E0 = 0LL;
    qword_1C00828D8 = 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3960uLL, 0x474F4C45u);
  qword_1C00828E0 = PoolWithTag;
  if ( PoolWithTag )
  {
    qword_1C00828D8 = 204LL;
    memset(PoolWithTag, 0, 0x3960uLL);
    return 1;
  }
  return v0;
}
