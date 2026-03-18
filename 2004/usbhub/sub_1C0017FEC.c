/*
 * XREFs of sub_1C0017FEC @ 0x1C0017FEC
 * Callers:
 *     sub_1C00017D0 @ 0x1C00017D0 (sub_1C00017D0.c)
 *     sub_1C0008BD0 @ 0x1C0008BD0 (sub_1C0008BD0.c)
 *     sub_1C0017E8C @ 0x1C0017E8C (sub_1C0017E8C.c)
 *     sub_1C00195F0 @ 0x1C00195F0 (sub_1C00195F0.c)
 *     sub_1C0035E78 @ 0x1C0035E78 (sub_1C0035E78.c)
 *     sub_1C0036FAC @ 0x1C0036FAC (sub_1C0036FAC.c)
 *     sub_1C0039C2C @ 0x1C0039C2C (sub_1C0039C2C.c)
 *     sub_1C003A2BC @ 0x1C003A2BC (sub_1C003A2BC.c)
 *     sub_1C004C7A4 @ 0x1C004C7A4 (sub_1C004C7A4.c)
 *     sub_1C004C8A0 @ 0x1C004C8A0 (sub_1C004C8A0.c)
 *     sub_1C004D8C0 @ 0x1C004D8C0 (sub_1C004D8C0.c)
 *     sub_1C004E668 @ 0x1C004E668 (sub_1C004E668.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C00180B8 @ 0x1C00180B8 (sub_1C00180B8.c)
 */

void __fastcall sub_1C0017FEC(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // r9
  KIRQL v6; // r10
  __int64 v7; // [rsp+20h] [rbp-18h]

  sub_1C000FD80(a1, 16, 1685213745, a2, *(unsigned __int16 *)(a2 + 4));
  if ( (unsigned int)sub_1C00180B8(a1, v4) )
  {
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    v5 = *(int *)(a2 + 12);
    v7 = *(unsigned __int16 *)(a2 + 4);
    *(_DWORD *)(a2 + 448) = 1;
    sub_1C000FD80(a1, 16, 1886479734, v5, v7);
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1404) = 30;
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v6);
  }
}
