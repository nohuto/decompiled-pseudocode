/*
 * XREFs of CrmActivityDereference @ 0x18002FAA4
 * Callers:
 *     CrmSrvActivityQueryWindowClosedReasons @ 0x18002E09C (CrmSrvActivityQueryWindowClosedReasons.c)
 *     CrmSrvActivityStart @ 0x18002EB68 (CrmSrvActivityStart.c)
 *     CrmSrvActivityStop @ 0x18002F128 (CrmSrvActivityStop.c)
 *     CrmSrvActivityAllocate @ 0x18002F840 (CrmSrvActivityAllocate.c)
 *     CrmSrvActivityFree @ 0x18002F958 (CrmSrvActivityFree.c)
 *     CrmRegistrationCreateActivity @ 0x18002FE98 (CrmRegistrationCreateActivity.c)
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x18003B418 (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x18003D3BC (CrmSrvActivityWindowClosedReasonSubscribe.c)
 *     CrmRegistrationRemoveActivity @ 0x1800847DC (CrmRegistrationRemoveActivity.c)
 * Callees:
 *     CrmActivityCleanup @ 0x18002F330 (CrmActivityCleanup.c)
 */

char __fastcall CrmActivityDereference(volatile signed __int64 *a1)
{
  signed __int64 v2; // rax
  bool v3; // zf
  bool v4; // sf
  bool v5; // of
  signed __int64 v6; // rax

  v2 = _InterlockedExchangeAdd64(a1 + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = __OFSUB__(v2, 1LL);
  v3 = v2 == 1;
  v4 = v2 - 1 < 0;
  v6 = v2 - 1;
  if ( v4 ^ v5 | v3 )
  {
    if ( v6 )
      __fastfail(0xEu);
    CrmActivityCleanup((__int64)a1);
    LOBYTE(v6) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
  }
  return v6;
}
