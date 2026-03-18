/*
 * XREFs of InbvResetDisplay @ 0x140550CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char InbvResetDisplay()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C54D10 && (v0 = *(__int64 (**)(void))(qword_140C54D10 + 24)) != 0LL )
    return v0();
  else
    return 0;
}
