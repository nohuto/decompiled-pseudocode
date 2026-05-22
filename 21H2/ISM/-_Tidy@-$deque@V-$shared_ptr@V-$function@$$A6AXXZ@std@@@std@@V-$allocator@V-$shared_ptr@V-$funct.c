/*
 * XREFs of ?_Tidy@?$deque@V?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@V?$allocator@V?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@@2@@std@@AEAAXXZ @ 0x180167730
 * Callers:
 *     ??1?$queue@V?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@V?$deque@V?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@V?$allocator@V?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@@2@@2@@std@@QEAA@XZ @ 0x180157A60 (--1-$queue@V-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@V-$deque@V-$shared_ptr@V-$function@$$A6.c)
 *     ??1ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ @ 0x180157B0C (--1ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::deque<std::shared_ptr<std::function<void (void)>>>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rdx
  std::_Ref_count_base *v3; // rcx
  __int64 v4; // rdi
  void *v5; // rcx
  void *v6; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v3 = *(std::_Ref_count_base **)(*(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (v2 + a1[3] - 1LL))) + 8LL);
    if ( v3 )
    {
      std::_Ref_count_base::_Decref(v3);
      v2 = a1[4];
    }
    a1[4] = v2 - 1;
    if ( v2 == 1 )
      a1[3] = 0LL;
  }
  v4 = a1[2];
  while ( v4 )
  {
    --v4;
    v5 = *(void **)(a1[1] + 8 * v4);
    if ( v5 )
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x10);
  }
  v6 = (void *)a1[1];
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(8LL * a1[2]));
  a1[2] = 0LL;
  a1[1] = 0LL;
}
