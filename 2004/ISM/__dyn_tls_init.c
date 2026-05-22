/*
 * XREFs of __dyn_tls_init @ 0x18003D3A0
 * Callers:
 *     <none>
 * Callees:
 *     _o_terminate_0 @ 0x18003C4A8 (_o_terminate_0.c)
 *     dyntls_init_exception_filter @ 0x18003D3E8 (dyntls_init_exception_filter.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall _dyn_tls_init(__int64 a1, int a2)
{
  __int64 (__fastcall **i)(); // rbx
  void *result; // rax

  if ( a2 == 2 )
  {
    for ( i = &off_1801BA040; ; ++i )
    {
      result = &unk_1801BA048;
      if ( i == (__int64 (__fastcall **)())&unk_1801BA048 )
        break;
      if ( *i )
        ((void (__fastcall *)(__int64))*i)(a1);
    }
  }
  return result;
}
