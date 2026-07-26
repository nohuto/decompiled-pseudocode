/*
 * XREFs of NdisMIdleNotificationComplete @ 0x1C00A8A10
 * Callers:
 *     <none>
 * Callees:
 *     NdisMIdleNotificationCompleteEx @ 0x1C00A8A30 (NdisMIdleNotificationCompleteEx.c)
 */

__int64 __fastcall NdisMIdleNotificationComplete(struct _NDIS_MINIPORT_BLOCK *a1)
{
  return NdisMIdleNotificationCompleteEx(a1, 0);
}
