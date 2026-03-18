/*
 * XREFs of PfSnCleanupPrefetchHeader @ 0x140605468
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1406BB750 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     PfSnCleanupPrefetchSectionInfo @ 0x140605574 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpOpenHandleClose @ 0x140605A14 (PfpOpenHandleClose.c)
 *     PfpPrefetchSharedDeref @ 0x1406D1AB0 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedCleanup @ 0x1406D1AE0 (PfpPrefetchSharedCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnCleanupPrefetchHeader(_QWORD *a1)
{
  void *v2; // rcx
  unsigned int v3; // edi
  _QWORD **v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  v2 = (void *)a1[7];
  if ( v2 )
  {
    if ( *a1 )
    {
      v3 = 0;
      if ( *(_DWORD *)(*a1 + 88LL) )
      {
        do
          PfSnCleanupPrefetchSectionInfo(a1[7] + 56LL * v3++, a1, 0LL);
        while ( v3 < *(_DWORD *)(*a1 + 88LL) );
        v2 = (void *)a1[7];
      }
    }
    ExFreePoolWithTag(v2, 0);
  }
  v4 = (_QWORD **)(a1 + 5);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v6[1] = v4;
    PfpOpenHandleClose(v5 + 8, a1[1]);
    PfpOpenHandleClose(v5 + 4, a1[1]);
  }
  v7 = (void *)a1[2];
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = (void *)a1[10];
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  v9 = (void *)a1[11];
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( a1[1] )
  {
    PfpPrefetchSharedCleanup();
    PfpPrefetchSharedDeref(a1[1]);
  }
  v10 = (void *)a1[14];
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
}
