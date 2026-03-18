/*
 * XREFs of IopDecrementCompletionContextUsageCount @ 0x1404178E8
 * Callers:
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall IopDecrementCompletionContextUsageCount(ULONG_PTR BugCheckParameter1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v3; // al
  __int64 v4; // r8
  signed __int64 BugCheckParameter4; // rsi

  v1 = (KSPIN_LOCK *)(BugCheckParameter1 + 184);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter1 + 184));
  v4 = *(_QWORD *)(BugCheckParameter1 + 176);
  BugCheckParameter4 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = BugCheckParameter4 - 1;
  KeReleaseSpinLock(v1, v3);
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 176), 0x82uLL, BugCheckParameter4);
}
