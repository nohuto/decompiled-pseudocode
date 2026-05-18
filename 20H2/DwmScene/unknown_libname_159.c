/*
 * XREFs of unknown_libname_159 @ 0x18012B8D0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
void __fastcall unknown_libname_159()
{
  __int64 v0; // rcx
  void (__fastcall ***v1)(_QWORD, __int64); // rax

  while ( qword_18021B2E8 )
  {
    v0 = *(_QWORD *)(qword_18021B2E8 + 8);
    qword_18021B2E8 = *(_QWORD *)qword_18021B2E8;
    v1 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
    if ( v1 )
      (**v1)(v1, 1LL);
    j_j__o_free();
  }
}
