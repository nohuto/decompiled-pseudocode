/*
 * XREFs of sub_1C001CA78 @ 0x1C001CA78
 * Callers:
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C00131B0 @ 0x1C00131B0 (sub_1C00131B0.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

void __fastcall sub_1C001CA78(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v4; // si
  __int64 v5; // rcx
  WORK_QUEUE_TYPE v6; // r10d
  PVOID v7; // r9

  v2 = (KSPIN_LOCK *)(a2 + 2448);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
  if ( *(_DWORD *)(a2 + 2412) != 1 )
  {
    v5 = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(a2 + 2412) = 1;
    sub_1C000FD80(v5, 512, 1364214615, a2, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(a2 + 2440), v6);
    IoQueueWorkItem(*(PIO_WORKITEM *)(a2 + 2456), (PIO_WORKITEM_ROUTINE)WorkerRoutine, v6, v7);
  }
  KeReleaseSpinLock(v2, v4);
}
