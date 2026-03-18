/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x1404F9BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 (*InbvNotifyDisplayOwnershipLost())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50960;
  if ( qword_140C50960 )
  {
    result = *(__int64 (**)(void))qword_140C50960;
    if ( *(_QWORD *)qword_140C50960 )
      return (__int64 (*)(void))result();
  }
  return result;
}
