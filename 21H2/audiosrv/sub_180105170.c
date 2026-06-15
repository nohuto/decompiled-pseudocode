/*
 * XREFs of sub_180105170 @ 0x180105170
 * Callers:
 *     sub_1801157F4 @ 0x1801157F4 (sub_1801157F4.c)
 * Callees:
 *     <none>
 */

__int64 sub_180105170()
{
  __int64 v0; // rbx
  struct _TP_CLEANUP_GROUP *v1; // rcx

  v0 = qword_18019E640;
  v1 = *(struct _TP_CLEANUP_GROUP **)(qword_18019E640 + 80);
  if ( v1 )
  {
    CloseThreadpoolCleanupGroupMembers(v1, 0, 0LL);
    CloseThreadpoolCleanupGroup(*(PTP_CLEANUP_GROUP *)(v0 + 80));
    *(_QWORD *)(v0 + 80) = 0LL;
  }
  return 0LL;
}
