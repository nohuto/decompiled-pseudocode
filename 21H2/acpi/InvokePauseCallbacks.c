/*
 * XREFs of InvokePauseCallbacks @ 0x1C00696A4
 * Callers:
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

void InvokePauseCallbacks()
{
  __int64 v0; // rcx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = qword_1C0081DB0;
    if ( (__int64 *)qword_1C0081DB0 == &qword_1C0081DB0 )
      break;
    if ( *(__int64 **)(qword_1C0081DB0 + 8) != &qword_1C0081DB0
      || (v1 = *(_QWORD *)qword_1C0081DB0, *(_QWORD *)(*(_QWORD *)qword_1C0081DB0 + 8LL) != qword_1C0081DB0) )
    {
      __fastfail(3u);
    }
    qword_1C0081DB0 = *(_QWORD *)qword_1C0081DB0;
    *(_QWORD *)(v1 + 8) = &qword_1C0081DB0;
    (*(void (__fastcall **)(_QWORD))(v0 + 16))(*(_QWORD *)(v0 + 24));
  }
}
