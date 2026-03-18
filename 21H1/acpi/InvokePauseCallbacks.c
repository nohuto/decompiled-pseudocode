/*
 * XREFs of InvokePauseCallbacks @ 0x1C0068090
 * Callers:
 *     RunContext @ 0x1C0004A10 (RunContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

void InvokePauseCallbacks()
{
  __int64 v0; // rcx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = qword_1C00827E0;
    if ( (__int64 *)qword_1C00827E0 == &qword_1C00827E0 )
      break;
    if ( *(__int64 **)(qword_1C00827E0 + 8) != &qword_1C00827E0
      || (v1 = *(_QWORD *)qword_1C00827E0, *(_QWORD *)(*(_QWORD *)qword_1C00827E0 + 8LL) != qword_1C00827E0) )
    {
      __fastfail(3u);
    }
    qword_1C00827E0 = *(_QWORD *)qword_1C00827E0;
    *(_QWORD *)(v1 + 8) = &qword_1C00827E0;
    (*(void (__fastcall **)(_QWORD))(v0 + 16))(*(_QWORD *)(v0 + 24));
  }
}
