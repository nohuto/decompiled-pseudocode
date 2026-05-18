/*
 * XREFs of unknown_libname_161 @ 0x1801311E0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
void __fastcall unknown_libname_161()
{
  __int64 v0; // rcx
  void (__fastcall ***v1)(_QWORD, __int64); // rax

  while ( qword_180222618 )
  {
    v0 = *(_QWORD *)(qword_180222618 + 8);
    qword_180222618 = *(_QWORD *)qword_180222618;
    v1 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
    if ( v1 )
      (**v1)(v1, 1LL);
    j_j__o_free();
  }
}
