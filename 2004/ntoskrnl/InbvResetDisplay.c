/*
 * XREFs of InbvResetDisplay @ 0x1404F9C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

char InbvResetDisplay()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50960 && (v0 = *(__int64 (**)(void))(qword_140C50960 + 24)) != 0LL )
    return v0();
  else
    return 0;
}
