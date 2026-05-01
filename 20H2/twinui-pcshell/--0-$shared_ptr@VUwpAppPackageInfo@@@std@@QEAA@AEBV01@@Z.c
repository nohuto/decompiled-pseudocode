/*
 * XREFs of ??0?$shared_ptr@VUwpAppPackageInfo@@@std@@QEAA@AEBV01@@Z @ 0x180458CC4
 * Callers:
 *     ?TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800BCFE0 (-TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Win.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<UwpAppPackageInfo>::shared_ptr<UwpAppPackageInfo>(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
