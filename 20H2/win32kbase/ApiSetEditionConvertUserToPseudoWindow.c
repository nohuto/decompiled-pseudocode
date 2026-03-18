/*
 * XREFs of ApiSetEditionConvertUserToPseudoWindow @ 0x1C0091C5C
 * Callers:
 *     ?notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@AEBU_LUID@@2AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C0091B9C (-notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTAT.c)
 *     NtUserGetPointerInfoList @ 0x1C0131A10 (NtUserGetPointerInfoList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionConvertUserToPseudoWindow(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( qword_1C0251A80 )
    v5 = qword_1C0251A80();
  else
    v5 = -1073741637;
  if ( v5 < 0 )
  {
    *a2 = 0LL;
    return 3221225485LL;
  }
  else
  {
    if ( qword_1C0251A88 )
      return (unsigned int)qword_1C0251A88(a1, a2);
    return v2;
  }
}
