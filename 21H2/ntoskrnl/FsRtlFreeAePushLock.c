/*
 * XREFs of FsRtlFreeAePushLock @ 0x1405417A0
 * Callers:
 *     <none>
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1402A3D50 (ExCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlFreeAePushLock(PVOID P)
{
  ExCleanupAutoExpandPushLock((__int64)P);
  ExFreePoolWithTag(P, 0);
}
