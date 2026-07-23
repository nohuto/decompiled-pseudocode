/*
 * XREFs of RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180062360
 * Callers:
 *     <none>
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x1800625DC (RtlpRemoveUserSubFromNameSub.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWithCompletionCallback(PVOID a1, __int64 a2, __int64 a3)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( *((_QWORD *)a1 + 13) )
    return 3221227288LL;
  *((_QWORD *)a1 + 13) = a2;
  *((_QWORD *)a1 + 14) = a3;
  return RtlpRemoveUserSubFromNameSub(*((PVOID *)a1 + 3), a1);
}
