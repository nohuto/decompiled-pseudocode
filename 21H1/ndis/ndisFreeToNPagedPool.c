/*
 * XREFs of ndisFreeToNPagedPool @ 0x1C0008A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeToNPagedPool(_QWORD *Buffer, PLOOKASIDE_LIST_EX Lookaside)
{
  _QWORD *v2; // rbx
  KIRQL v3; // al
  __int64 v4; // rcx
  _QWORD *v5; // r8

  v2 = Buffer - 4;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(Buffer - 4) + 8LL));
  v4 = v2[1];
  if ( *(_QWORD **)(v4 + 8) != v2 + 1 || (v5 = (_QWORD *)v2[2], (_QWORD *)*v5 != v2 + 1) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  KeReleaseSpinLock((PKSPIN_LOCK)(*v2 + 8LL), v3);
  ExFreePool(v2);
}
