/*
 * XREFs of sub_1C001518C @ 0x1C001518C
 * Callers:
 *     sub_1C00017D0 @ 0x1C00017D0 (sub_1C00017D0.c)
 *     sub_1C0002648 @ 0x1C0002648 (sub_1C0002648.c)
 *     sub_1C0008BD0 @ 0x1C0008BD0 (sub_1C0008BD0.c)
 *     sub_1C000B0E0 @ 0x1C000B0E0 (sub_1C000B0E0.c)
 *     sub_1C00131B0 @ 0x1C00131B0 (sub_1C00131B0.c)
 *     sub_1C0017E8C @ 0x1C0017E8C (sub_1C0017E8C.c)
 *     sub_1C00195F0 @ 0x1C00195F0 (sub_1C00195F0.c)
 *     sub_1C00336FC @ 0x1C00336FC (sub_1C00336FC.c)
 *     sub_1C0035E78 @ 0x1C0035E78 (sub_1C0035E78.c)
 *     sub_1C0036FAC @ 0x1C0036FAC (sub_1C0036FAC.c)
 *     sub_1C0039C2C @ 0x1C0039C2C (sub_1C0039C2C.c)
 *     sub_1C003A2BC @ 0x1C003A2BC (sub_1C003A2BC.c)
 *     sub_1C004C8A0 @ 0x1C004C8A0 (sub_1C004C8A0.c)
 *     sub_1C004D8C0 @ 0x1C004D8C0 (sub_1C004D8C0.c)
 *     sub_1C004E668 @ 0x1C004E668 (sub_1C004E668.c)
 *     sub_1C0058268 @ 0x1C0058268 (sub_1C0058268.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 */

void __fastcall sub_1C001518C(__int64 a1, __int64 a2, int a3)
{
  KSPIN_LOCK *v6; // rdi
  KIRQL v7; // si
  PRKEVENT *v8; // rax

  v6 = (KSPIN_LOCK *)(sub_1C000F050(a1) + 1292);
  v7 = KeAcquireSpinLockRaiseToDpc(v6);
  if ( a2 && *((_QWORD *)sub_1C0011220(a2) + 108) )
  {
    sub_1C0011220(a2)[218] = a3;
    sub_1C000FD80(a1, 4, 1936287557, a2, 0LL);
    v8 = (PRKEVENT *)sub_1C0011220(a2);
    KeSetEvent(v8[108], 0, 0);
  }
  KeReleaseSpinLock(v6, v7);
}
