/*
 * XREFs of sub_1C00015A0 @ 0x1C00015A0
 * Callers:
 *     sub_1C00017D0 @ 0x1C00017D0 (sub_1C00017D0.c)
 *     sub_1C0001C3C @ 0x1C0001C3C (sub_1C0001C3C.c)
 *     sub_1C0008BD0 @ 0x1C0008BD0 (sub_1C0008BD0.c)
 *     sub_1C0018460 @ 0x1C0018460 (sub_1C0018460.c)
 *     sub_1C0019BF0 @ 0x1C0019BF0 (sub_1C0019BF0.c)
 *     sub_1C001BEB8 @ 0x1C001BEB8 (sub_1C001BEB8.c)
 *     sub_1C0035E78 @ 0x1C0035E78 (sub_1C0035E78.c)
 *     sub_1C004D180 @ 0x1C004D180 (sub_1C004D180.c)
 *     sub_1C004D340 @ 0x1C004D340 (sub_1C004D340.c)
 *     sub_1C004D520 @ 0x1C004D520 (sub_1C004D520.c)
 *     sub_1C004D5F0 @ 0x1C004D5F0 (sub_1C004D5F0.c)
 * Callees:
 *     sub_1C0001648 @ 0x1C0001648 (sub_1C0001648.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

void __fastcall sub_1C00015A0(__int64 a1, __int64 a2)
{
  int v3; // esi
  int v4; // r9d
  KIRQL v5; // r10
  __int64 v6; // [rsp+20h] [rbp-18h]

  v3 = a1;
  if ( (unsigned int)sub_1C0001648(a1, a2) )
  {
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    v4 = *(_DWORD *)(a2 + 12);
    v6 = *(unsigned __int16 *)(a2 + 4);
    *(_DWORD *)(a2 + 448) = 1;
    sub_1C000FD80(v3, 16, 1886479734, v4, v6);
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 30;
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v5);
  }
}
