/*
 * XREFs of sub_1C000B950 @ 0x1C000B950
 * Callers:
 *     sub_1C0001D30 @ 0x1C0001D30 (sub_1C0001D30.c)
 *     sub_1C0004874 @ 0x1C0004874 (sub_1C0004874.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall sub_1C000B950(__int64 a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *result; // rax

  v1 = a1 + 16;
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(v1 + 8) = result;
  return result;
}
