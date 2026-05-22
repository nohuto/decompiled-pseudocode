/*
 * XREFs of __dyn_tls_init @ 0x18003D0F0
 * Callers:
 *     <none>
 * Callees:
 *     _o_terminate_0 @ 0x18003C1E8 (_o_terminate_0.c)
 *     dyntls_init_exception_filter @ 0x18003D138 (dyntls_init_exception_filter.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall _dyn_tls_init(__int64 a1, int a2)
{
  __int64 (__fastcall **i)(); // rbx
  void *result; // rax

  if ( a2 == 2 )
  {
    for ( i = &off_1801BB030; ; ++i )
    {
      result = &unk_1801BB038;
      if ( i == (__int64 (__fastcall **)())&unk_1801BB038 )
        break;
      if ( *i )
        ((void (__fastcall *)(__int64))*i)(a1);
    }
  }
  return result;
}
