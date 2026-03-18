/*
 * XREFs of PiDqIrpCancel @ 0x140508410
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     PiDqQueryLock @ 0x1408A0750 (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x1408A077C (PiDqQueryUnlock.c)
 */

void __fastcall PiDqIrpCancel(__int64 a1, IRP *a2)
{
  char v3; // si
  _DWORD *FsContext2; // rbx

  v3 = 0;
  FsContext2 = a2->Tail.Overlay.CurrentStackLocation->FileObject->FsContext2;
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  PiDqQueryLock(FsContext2);
  if ( *((_QWORD *)FsContext2 + 22) )
  {
    FsContext2[54] &= ~0x10u;
    v3 = 1;
    *((_QWORD *)FsContext2 + 22) = 0LL;
  }
  PiDqQueryUnlock(FsContext2);
  if ( v3 )
  {
    a2->IoStatus.Information = 0LL;
    a2->IoStatus.Status = -1073741536;
    IofCompleteRequest(a2, 0);
  }
}
