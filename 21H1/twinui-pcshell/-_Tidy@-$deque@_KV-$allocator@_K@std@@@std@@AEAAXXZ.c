/*
 * XREFs of ?_Tidy@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXXZ @ 0x1800BB0D4
 * Callers:
 *     ??1?$_Tidy_guard@V?$deque@_KV?$allocator@_K@std@@@std@@@std@@QEAA@XZ @ 0x1800B4A4C (--1-$_Tidy_guard@V-$deque@_KV-$allocator@_K@std@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x1800B4AC4 (--1-$deque@_KV-$allocator@_K@std@@@std@@QEAA@XZ.c)
 *     ?_Move_assign@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z @ 0x1800BAE9C (-_Move_assign@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<unsigned __int64>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  void *v5; // rcx
  void *v6; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v3 = v2 - 1;
    a1[4] = v3;
    if ( !v3 )
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
