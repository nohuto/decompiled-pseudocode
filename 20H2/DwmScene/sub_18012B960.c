/*
 * XREFs of sub_18012B960 @ 0x18012B960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18012B960()
{
  __int64 v0; // rcx

  v0 = qword_1802188C8;
  if ( qword_1802188C8 )
  {
    qword_1802188C8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  }
}
