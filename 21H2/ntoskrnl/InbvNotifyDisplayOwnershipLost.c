/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x1404FF000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvNotifyDisplayOwnershipLost())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50B68;
  if ( qword_140C50B68 )
  {
    result = *(__int64 (**)(void))qword_140C50B68;
    if ( *(_QWORD *)qword_140C50B68 )
      return (__int64 (*)(void))result();
  }
  return result;
}
