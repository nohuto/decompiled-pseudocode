/*
 * XREFs of wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_4acf0ee5e37bcf1c6596b10e593f8e28__void_ @ 0x1801AD734
 * Callers:
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801B20D4 (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_4acf0ee5e37bcf1c6596b10e593f8e28__void_(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rcx

  *(_QWORD *)(a1 + 112) = 0LL;
  v3 = (_QWORD *)(a1 + 8);
  *v3 = &off_180492060;
  v4 = *a2;
  v5 = a2 + 1;
  v3[1] = v4;
  v3[2] = 0LL;
  if ( v3 + 2 != v5 )
  {
    v3[2] = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)(a1 + 112) = v3;
  v6 = *v5;
  if ( *v5 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return a1;
}
