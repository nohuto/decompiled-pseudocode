/*
 * XREFs of KeSetUmsThreadKernelLock @ 0x1408BD778
 * Callers:
 *     PspInsertThread @ 0x14063DE48 (PspInsertThread.c)
 *     PspUmsInitThread @ 0x14090A8AC (PspUmsInitThread.c)
 *     PspUmsUnInitThread @ 0x14090A9FC (PspUmsUnInitThread.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090ED2C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetUmsThreadKernelLock(__int64 a1, unsigned __int64 *a2)
{
  signed __int64 v2; // rax
  unsigned int v4; // [rsp+0h] [rbp-18h]
  signed __int64 v5; // [rsp+30h] [rbp+18h]

  v4 = 0;
  _m_prefetchw((const void *)(a1 + 1272));
  v2 = *(_QWORD *)(a1 + 1272);
  while ( (v2 & 3) != 3 )
  {
    v5 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1272), v2 + 1, v2);
    if ( v2 == v5 )
      goto LABEL_6;
  }
  v4 = -1073741823;
LABEL_6:
  if ( a2 )
    *a2 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
  return v4;
}
