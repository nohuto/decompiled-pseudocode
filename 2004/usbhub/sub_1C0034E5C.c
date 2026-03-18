/*
 * XREFs of sub_1C0034E5C @ 0x1C0034E5C
 * Callers:
 *     sub_1C0001C3C @ 0x1C0001C3C (sub_1C0001C3C.c)
 *     sub_1C0008BD0 @ 0x1C0008BD0 (sub_1C0008BD0.c)
 *     sub_1C000F4B0 @ 0x1C000F4B0 (sub_1C000F4B0.c)
 *     sub_1C0016130 @ 0x1C0016130 (sub_1C0016130.c)
 *     sub_1C0019BF0 @ 0x1C0019BF0 (sub_1C0019BF0.c)
 *     sub_1C001C7A8 @ 0x1C001C7A8 (sub_1C001C7A8.c)
 *     sub_1C0035E78 @ 0x1C0035E78 (sub_1C0035E78.c)
 *     sub_1C004C428 @ 0x1C004C428 (sub_1C004C428.c)
 *     sub_1C004D340 @ 0x1C004D340 (sub_1C004D340.c)
 * Callees:
 *     sub_1C0033D58 @ 0x1C0033D58 (sub_1C0033D58.c)
 *     sub_1C0034DE4 @ 0x1C0034DE4 (sub_1C0034DE4.c)
 */

void __fastcall sub_1C0034E5C(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  KIRQL v5; // bl

  if ( (unsigned int)sub_1C0033D58(a1, a2) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    *(_DWORD *)(a2 + 448) = 1;
    v5 = v4;
    sub_1C0034DE4(a1, a2, 0LL, 30);
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v5);
  }
}
