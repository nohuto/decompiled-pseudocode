/*
 * XREFs of ??0?$vector@PEAXV?$allocator@PEAX@std@@@std@@QEAA@_KAEBV?$allocator@PEAX@1@@Z @ 0x1801492D0
 * Callers:
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@@Z @ 0x180048DD4 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 * Callees:
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     ?_Buy_nonzero@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAX_K@Z @ 0x180149438 (-_Buy_nonzero@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAX_K@Z.c)
 */

__int64 *__fastcall std::vector<void *>::vector<void *>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  size_t v5; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    std::vector<void *>::_Buy_nonzero();
    v4 = *a1;
    v5 = 8 * a2;
    memset_0((void *)*a1, 0, v5);
    a1[1] = v5 + v4;
  }
  return a1;
}
