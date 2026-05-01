/*
 * XREFs of wistd::function_void___cdecl(unsigned_long_const_&)_::function_void___cdecl(unsigned_long_const_&)___lambda_56f82e2d72bc142b92699b1566ad23a5__void_ @ 0x1801C3064
 * Callers:
 *     ?RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801C6A48 (-RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function_void___cdecl_unsigned_long_const____::function_void___cdecl_unsigned_long_const______lambda_56f82e2d72bc142b92699b1566ad23a5__void_(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rcx

  *(_QWORD *)(a1 + 112) = 0LL;
  v3 = (_QWORD *)(a1 + 8);
  *v3 = &off_18046E4E8;
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
