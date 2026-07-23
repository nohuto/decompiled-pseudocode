/*
 * XREFs of PfSnCleanupPrefetchHeader @ 0x140677C08
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x140674BE0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     PfpPrefetchSharedDeref @ 0x140675528 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedCleanup @ 0x140675994 (PfpPrefetchSharedCleanup.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x140677D14 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpOpenHandleClose @ 0x140677F80 (PfpOpenHandleClose.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnCleanupPrefetchHeader(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rcx
  unsigned int v6; // edi
  _QWORD **v7; // rsi
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  ULONG_PTR v13; // rcx
  void *v14; // rcx

  v5 = *(void **)(a1 + 56);
  if ( v5 )
  {
    if ( *(_QWORD *)a1 )
    {
      v6 = 0;
      if ( *(_DWORD *)(*(_QWORD *)a1 + 88LL) )
      {
        do
          PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(a1 + 56) + 56LL * v6++, a1, 0LL);
        while ( v6 < *(_DWORD *)(*(_QWORD *)a1 + 88LL) );
        v5 = *(void **)(a1 + 56);
      }
    }
    ExFreePoolWithTag(v5, 0);
  }
  v7 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      break;
    if ( (_QWORD **)v8[1] != v7 || (v9 = (_QWORD *)*v8, *(_QWORD **)(*v8 + 8LL) != v8) )
      __fastfail(3u);
    *v7 = v9;
    v9[1] = v7;
    PfpOpenHandleClose(v8 + 8, *(_QWORD *)(a1 + 8));
    PfpOpenHandleClose(v8 + 4, *(_QWORD *)(a1 + 8));
  }
  v10 = *(void **)(a1 + 16);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = *(void **)(a1 + 80);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = *(void **)(a1 + 88);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v13 = *(_QWORD *)(a1 + 8);
  if ( v13 )
  {
    PfpPrefetchSharedCleanup(v13, a2, a3, a4);
    PfpPrefetchSharedDeref(*(volatile signed __int64 **)(a1 + 8));
  }
  v14 = *(void **)(a1 + 112);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
}
