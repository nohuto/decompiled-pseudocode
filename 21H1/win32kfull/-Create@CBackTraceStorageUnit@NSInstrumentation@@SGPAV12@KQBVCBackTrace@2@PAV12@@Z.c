/*
 * XREFs of ?Create@CBackTraceStorageUnit@NSInstrumentation@@SGPAV12@KQBVCBackTrace@2@PAV12@@Z @ 0x24A170
 * Callers:
 *     ?Insert@CBackTraceBucket@NSInstrumentation@@QAEPAVCBackTraceStorageUnit@2@KQBVCBackTrace@2@@Z @ 0x24A37A (-Insert@CBackTraceBucket@NSInstrumentation@@QAEPAVCBackTraceStorageUnit@2@KQBVCBackTrace@2@@Z.c)
 * Callees:
 *     <none>
 */

struct NSInstrumentation::CBackTraceStorageUnit *__userpurge NSInstrumentation::CBackTraceStorageUnit::Create@<eax>(
        const void *a1@<edx>,
        int a2@<ecx>,
        unsigned int a3,
        const struct NSInstrumentation::CBackTrace *const a4,
        struct NSInstrumentation::CBackTraceStorageUnit *a5)
{
  _DWORD *PoolWithTag; // edx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x60u, 0x30497355u);
  if ( PoolWithTag )
  {
    PoolWithTag[1] = a2;
    qmemcpy(PoolWithTag + 2, a1, 0x50u);
    *PoolWithTag = a3;
    PoolWithTag[22] = 1;
  }
  return (struct NSInstrumentation::CBackTraceStorageUnit *)PoolWithTag;
}
