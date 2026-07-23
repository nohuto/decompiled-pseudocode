/*
 * XREFs of KeRevertToUserAffinityThread @ 0x14050D780
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1403374F0 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void KeRevertToUserAffinityThread(void)
{
  _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  PreviousAffinity = 0LL;
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
