/*
 * XREFs of InbvResetDisplay @ 0x1404FD4C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

char InbvResetDisplay()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C509E8 && (v0 = *(__int64 (**)(void))(qword_140C509E8 + 24)) != 0LL )
    return v0();
  else
    return 0;
}
