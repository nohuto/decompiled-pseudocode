/*
 * XREFs of sub_180047140 @ 0x180047140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180047140()
{
  __int64 v0; // rcx

  v0 = qword_18005AE20;
  if ( qword_18005AE20 )
  {
    qword_18005AE20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  }
}
