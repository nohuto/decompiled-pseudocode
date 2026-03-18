/*
 * XREFs of InbvNotifyDisplayOwnershipChange @ 0x1403A46F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 InbvNotifyDisplayOwnershipChange()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50A98 && (v0 = *(__int64 (**)(void))(qword_140C50A98 + 16)) != 0LL )
    return v0();
  else
    return 3221225474LL;
}
