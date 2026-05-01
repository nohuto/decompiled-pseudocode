/*
 * XREFs of RmDisconnectFromResourceManager @ 0x18000F900
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientConnectionCleanup @ 0x18000FA38 (RmpClientConnectionCleanup.c)
 */

__int64 __fastcall RmDisconnectFromResourceManager(PVOID P)
{
  RmpClientConnectionCleanup(P);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0LL;
}
