/*
 * XREFs of TlsCallback_0 @ 0x18011F020
 * Callers:
 *     <none>
 * Callees:
 *     _o_terminate @ 0x18011E082 (_o_terminate.c)
 *     dyntls_init_exception_filter @ 0x18011F064 (dyntls_init_exception_filter.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall TlsCallback_0(__int64 a1, int a2)
{
  void (__fastcall **i)(__int64); // rbx
  void *result; // rax

  if ( a2 == 2 )
  {
    for ( i = (void (__fastcall **)(__int64))&unk_1801364C8; ; ++i )
    {
      result = &unk_1801364C8;
      if ( i == (void (__fastcall **)(__int64))&unk_1801364C8 )
        break;
      if ( *i )
        (*i)(a1);
    }
  }
  return result;
}
