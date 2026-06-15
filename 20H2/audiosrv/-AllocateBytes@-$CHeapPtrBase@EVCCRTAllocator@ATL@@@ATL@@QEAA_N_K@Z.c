/*
 * XREFs of ?AllocateBytes@?$CHeapPtrBase@EVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1801004C8
 * Callers:
 *     ?Start@CMonitor@@QEAAJXZ @ 0x18010382C (-Start@CMonitor@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ATL::CHeapPtrBase<unsigned char,ATL::CCRTAllocator>::AllocateBytes(_QWORD *a1, size_t a2)
{
  void *v3; // rax

  v3 = malloc(a2);
  *a1 = v3;
  return v3 != 0LL;
}
