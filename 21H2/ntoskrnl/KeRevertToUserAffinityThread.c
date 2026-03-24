/*
 * XREFs of KeRevertToUserAffinityThread @ 0x140513240
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1402EB390 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

void KeRevertToUserAffinityThread(void)
{
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  PreviousAffinity = 0LL;
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
