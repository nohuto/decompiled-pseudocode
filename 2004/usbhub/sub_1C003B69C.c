/*
 * XREFs of sub_1C003B69C @ 0x1C003B69C
 * Callers:
 *     sub_1C0031080 @ 0x1C0031080 (sub_1C0031080.c)
 *     sub_1C0036430 @ 0x1C0036430 (sub_1C0036430.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011260 @ 0x1C0011260 (sub_1C0011260.c)
 */

void __fastcall sub_1C003B69C(__int64 a1, __int64 *a2)
{
  KSPIN_LOCK *v4; // rdi
  void *v5; // r14
  KIRQL v6; // al
  KIRQL v7; // bl

  v4 = (KSPIN_LOCK *)sub_1C000F050(a1);
  sub_1C000FD80(a1, 0x2000, 1718773076, (__int64)a2, *a2);
  v5 = (void *)*a2;
  if ( *a2 )
  {
    sub_1C0011260(a1, *a2);
    v6 = KeAcquireSpinLockRaiseToDpc(v4 + 466);
    *a2 = 0LL;
    v7 = v6;
    sub_1C000FD80(a1, 0x2000, 1718768689, (__int64)v5, 0LL);
    ExFreePoolWithTag(v5, 0);
    KeReleaseSpinLock(v4 + 466, v7);
  }
}
