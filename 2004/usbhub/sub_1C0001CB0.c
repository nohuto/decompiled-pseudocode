/*
 * XREFs of sub_1C0001CB0 @ 0x1C0001CB0
 * Callers:
 *     sub_1C0004220 @ 0x1C0004220 (sub_1C0004220.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

void __fastcall sub_1C0001CB0(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdi
  KIRQL v5; // al

  v3 = a1;
  v4 = sub_1C000F050(a1);
  sub_1C000FD80(v3, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
  *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 10;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 4944));
  *(_BYTE *)(a2 + 2838) = 0;
  LOBYTE(v3) = v5;
  *(_DWORD *)(a2 + 696) = 3;
  KeResetEvent((PRKEVENT)(a2 + 712));
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 4944), v3);
}
