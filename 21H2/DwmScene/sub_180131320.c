/*
 * XREFs of sub_180131320 @ 0x180131320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180131320()
{
  __int64 v0; // rcx

  v0 = qword_18021FBF8;
  if ( qword_18021FBF8 )
  {
    qword_18021FBF8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  }
}
