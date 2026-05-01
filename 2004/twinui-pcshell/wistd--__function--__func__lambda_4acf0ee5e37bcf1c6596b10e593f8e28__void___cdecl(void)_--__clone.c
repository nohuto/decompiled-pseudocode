/*
 * XREFs of wistd::__function::__func__lambda_4acf0ee5e37bcf1c6596b10e593f8e28__void___cdecl(void)_::__clone @ 0x1801B2330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_4acf0ee5e37bcf1c6596b10e593f8e28__void___cdecl_void__::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  *a2 = &off_180492060;
  result = *(_QWORD *)(a1 + 8);
  a2[1] = result;
  v3 = *(_QWORD *)(a1 + 16);
  a2[2] = v3;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
