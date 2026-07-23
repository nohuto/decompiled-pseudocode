/*
 * XREFs of KeRevertToUserAffinityThread @ 0x14050DDD0
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1402E44A0 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

void KeRevertToUserAffinityThread(void)
{
  _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  PreviousAffinity = 0LL;
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
