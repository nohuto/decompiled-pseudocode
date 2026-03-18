/*
 * XREFs of sub_1C00027A0 @ 0x1C00027A0
 * Callers:
 *     sub_1C0002648 @ 0x1C0002648 (sub_1C0002648.c)
 *     sub_1C00195F0 @ 0x1C00195F0 (sub_1C00195F0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

void __fastcall sub_1C00027A0(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // r10
  KSPIN_LOCK *v5; // rbx
  KIRQL v6; // si

  v3 = a1;
  sub_1C000F050(a1);
  sub_1C000FD80(v3, 16, 1936281683, 0, *(unsigned __int16 *)(a2 + 4));
  v5 = (KSPIN_LOCK *)(v4 + 4944);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 4944));
  if ( *(_QWORD *)(a2 + 792) )
  {
    *(_QWORD *)(a2 + 792) = 0LL;
    KeSetEvent((PRKEVENT)(a2 + 800), 0, 0);
  }
  KeReleaseSpinLock(v5, v6);
}
