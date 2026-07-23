/*
 * XREFs of InbvNotifyDisplayOwnershipChange @ 0x1403A7C80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 InbvNotifyDisplayOwnershipChange()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50BA8 && (v0 = *(__int64 (**)(void))(qword_140C50BA8 + 16)) != 0LL )
    return v0();
  else
    return 3221225474LL;
}
