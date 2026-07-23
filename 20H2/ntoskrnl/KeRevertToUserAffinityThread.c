/*
 * XREFs of KeRevertToUserAffinityThread @ 0x140511700
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14033CF00 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

void KeRevertToUserAffinityThread(void)
{
  _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  PreviousAffinity = 0LL;
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
