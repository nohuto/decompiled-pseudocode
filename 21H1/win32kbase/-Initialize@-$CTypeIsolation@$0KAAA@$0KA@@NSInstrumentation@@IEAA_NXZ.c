/*
 * XREFs of ?Initialize@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1C002003C
 * Callers:
 *     ?Create@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C001FF4C (-Create@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C003DEC4 (-Create@-$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ @ 0x1C00D0838 (-PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ.c)
 */

char __fastcall NSInstrumentation::CTypeIsolation<40960,160>::Initialize(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  struct _PAGED_LOOKASIDE_LIST *v5; // rax

  if ( !NSInstrumentation::PlatformDebugModeEnabled((NSInstrumentation *)a1) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 8uLL, 0x6F736955u);
    *(_QWORD *)(a1 + 16) = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      v3 = (_QWORD *)NSInstrumentation::CSectionEntry<40960,160>::Create();
      if ( v3 )
      {
        v4 = *(_QWORD **)(a1 + 8);
        *(_DWORD *)(a1 + 32) = 250;
        if ( *v4 != a1 )
          __fastfail(3u);
        *v3 = a1;
        v3[1] = v4;
        *v4 = v3;
        *(_QWORD *)(a1 + 8) = v3;
        return 1;
      }
    }
    return 0;
  }
  *(_BYTE *)(a1 + 36) = 1;
  v5 = (struct _PAGED_LOOKASIDE_LIST *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x80uLL, 0x6F736955u);
  *(_QWORD *)(a1 + 24) = v5;
  if ( !v5 )
    return 0;
  ExInitializePagedLookasideList(
    v5,
    _lambda_e89b7db45cbb2019c1d92629e8a0e919_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long>,
    _lambda_63d17d6d41434870d2c55e28a74f5cc8_::_lambda_invoker_cdecl_<void *>,
    0x220u,
    0xA0uLL,
    0x6F736955u,
    0x100u);
  return 1;
}
