/*
 * XREFs of IopInterlockedInsertTailList @ 0x1403C88F0
 * Callers:
 *     IoRegisterBootDriverReinitialization @ 0x1407C2980 (IoRegisterBootDriverReinitialization.c)
 *     IoRegisterDriverReinitialization @ 0x1407C2A00 (IoRegisterDriverReinitialization.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall IopInterlockedInsertTailList(__int64 a1, _QWORD *a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rcx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = *(_QWORD **)(a1 + 8);
  if ( *v5 != a1 )
    __fastfail(3u);
  a2[1] = v5;
  *a2 = a1;
  *v5 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  KeReleaseQueuedSpinLock(0xAuLL, v4);
}
