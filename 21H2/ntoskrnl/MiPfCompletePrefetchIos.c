/*
 * XREFs of MiPfCompletePrefetchIos @ 0x1402792E0
 * Callers:
 *     MmWaitForCacheManagerPrefetch @ 0x14027C6DC (MmWaitForCacheManagerPrefetch.c)
 *     MiPrefetchVirtualMemory @ 0x140284EB0 (MiPrefetchVirtualMemory.c)
 *     MiPrefetchControlArea @ 0x1406B85C8 (MiPrefetchControlArea.c)
 *     MmPrefetchPagesEx @ 0x1406FA730 (MmPrefetchPagesEx.c)
 * Callees:
 *     MiPfCoalesceAndIssueIOs @ 0x14024B1FC (MiPfCoalesceAndIssueIOs.c)
 *     MiPfCompleteInPageSupport @ 0x14027938C (MiPfCompleteInPageSupport.c)
 *     MiPfCompleteCoalescedIo @ 0x140594698 (MiPfCompleteCoalescedIo.c)
 */

__int64 __fastcall MiPfCompletePrefetchIos(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // edi
  _QWORD *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // eax

  v3 = 0;
  if ( a2 )
    MiPfCoalesceAndIssueIOs(a2, (__int64)a1, 0LL);
  while ( 1 )
  {
    v6 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      break;
    if ( (_QWORD *)v6[1] != a1 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *a1 = v7;
    *(_QWORD *)(v7 + 8) = a1;
    if ( (v6[24] & 0x800000) != 0 )
      v8 = MiPfCompleteCoalescedIo(v6);
    else
      v8 = MiPfCompleteInPageSupport(v6, a3);
    if ( ((v8 + 0x80000000) & 0x80000000) == 0 && v8 != -1073740748 )
      v3 = v8;
  }
  return v3;
}
