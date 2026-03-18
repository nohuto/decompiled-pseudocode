/*
 * XREFs of sub_1C002F238 @ 0x1C002F238
 * Callers:
 *     sub_1C002F27C @ 0x1C002F27C (sub_1C002F27C.c)
 *     sub_1C002F348 @ 0x1C002F348 (sub_1C002F348.c)
 *     sub_1C002F3E0 @ 0x1C002F3E0 (sub_1C002F3E0.c)
 *     sub_1C002F4AC @ 0x1C002F4AC (sub_1C002F4AC.c)
 *     sub_1C002F594 @ 0x1C002F594 (sub_1C002F594.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

LONG __fastcall sub_1C002F238(__int64 a1)
{
  struct _KSEMAPHORE *v2; // rax

  v2 = (struct _KSEMAPHORE *)sub_1C000F050(*(_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 112) = 1734964085;
  return KeReleaseSemaphore(v2 + 160, 16, 1, 0);
}
