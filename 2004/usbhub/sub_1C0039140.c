/*
 * XREFs of sub_1C0039140 @ 0x1C0039140
 * Callers:
 *     sub_1C0036FAC @ 0x1C0036FAC (sub_1C0036FAC.c)
 *     sub_1C003A78C @ 0x1C003A78C (sub_1C003A78C.c)
 *     sub_1C003AC9C @ 0x1C003AC9C (sub_1C003AC9C.c)
 *     sub_1C0043C9C @ 0x1C0043C9C (sub_1C0043C9C.c)
 *     sub_1C0056E30 @ 0x1C0056E30 (sub_1C0056E30.c)
 *     sub_1C00575A0 @ 0x1C00575A0 (sub_1C00575A0.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 */

void __fastcall sub_1C0039140(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al

  v1 = (KSPIN_LOCK *)sub_1C0011220(a1);
  v2 = KeAcquireSpinLockRaiseToDpc(v1 + 152);
  *((_DWORD *)v1 + 196) = 2;
  KeReleaseSpinLock(v1 + 152, v2);
}
