/*
 * XREFs of MiPfCompletePrefetchIos @ 0x1402FCB00
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x140274EA0 (MiPrefetchVirtualMemory.c)
 *     MmWaitForCacheManagerPrefetch @ 0x1402FB588 (MmWaitForCacheManagerPrefetch.c)
 *     MmPrefetchPagesEx @ 0x14061C354 (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x140715998 (MiPrefetchControlArea.c)
 * Callees:
 *     MiPfCoalesceAndIssueIOs @ 0x1402C2704 (MiPfCoalesceAndIssueIOs.c)
 *     MiPfCompleteInPageSupport @ 0x1402FCB98 (MiPfCompleteInPageSupport.c)
 *     MiPfCompleteCoalescedIo @ 0x14053908C (MiPfCompleteCoalescedIo.c)
 */

__int64 __fastcall MiPfCompletePrefetchIos(_QWORD *a1, __int64 *a2, __int64 a3)
{
  unsigned int v5; // edi
  _QWORD *v6; // rcx
  __int64 v7; // rax
  int v8; // eax

  if ( a2 )
    MiPfCoalesceAndIssueIOs(a2, (__int64)a1, 0LL);
  v5 = 0;
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
    if ( v8 < 0 && v8 != -1073740748 )
      v5 = v8;
  }
  return v5;
}
