/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x1404FEF80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 (*InbvNotifyDisplayOwnershipLost())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50BA8;
  if ( qword_140C50BA8 )
  {
    result = *(__int64 (**)(void))qword_140C50BA8;
    if ( *(_QWORD *)qword_140C50BA8 )
      return (__int64 (*)(void))result();
  }
  return result;
}
