/*
 * XREFs of ndisFreeNblToNPagedPool @ 0x1C0007F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeNblToNPagedPool(__int64 a1)
{
  void *v2; // rcx
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // r8

  v2 = *(void **)(a1 + 368);
  if ( v2 )
    ExFreePool(v2);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 - 32) + 8LL));
  v4 = a1 - 24;
  v5 = *(_QWORD *)(a1 - 24);
  if ( *(_QWORD *)(v5 + 8) != a1 - 24 || (v6 = *(_QWORD **)(v4 + 8), *v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 - 32) + 8LL), v3);
  ExFreePool((PVOID)(a1 - 32));
}
