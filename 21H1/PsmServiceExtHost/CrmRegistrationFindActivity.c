/*
 * XREFs of CrmRegistrationFindActivity @ 0x18002F2E8
 * Callers:
 *     CrmSrvActivityQueryWindowClosedReasons @ 0x18002E09C (CrmSrvActivityQueryWindowClosedReasons.c)
 *     CrmSrvActivityStart @ 0x18002EB68 (CrmSrvActivityStart.c)
 *     CrmSrvActivityStop @ 0x18002F128 (CrmSrvActivityStop.c)
 *     CrmSrvActivityFree @ 0x18002F958 (CrmSrvActivityFree.c)
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x18003B418 (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x18003D3BC (CrmSrvActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CrmRegistrationFindActivity(__int64 a1, __int64 a2)
{
  __int64 *v2; // r8
  __int64 **v3; // rcx
  __int64 *i; // rax

  v2 = 0LL;
  v3 = (__int64 **)(a1 + 56);
  for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
  {
    if ( i[6] == a2 )
    {
      v2 = i;
      if ( _InterlockedIncrement64(i + 2) <= 1 )
        __fastfail(0xEu);
      return v2;
    }
  }
  return v2;
}
