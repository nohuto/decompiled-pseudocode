/*
 * XREFs of sub_1C000B920 @ 0x1C000B920
 * Callers:
 *     sub_1C0001D30 @ 0x1C0001D30 (sub_1C0001D30.c)
 *     sub_1C0004874 @ 0x1C0004874 (sub_1C0004874.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C000B920(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 + 16;
  *(_QWORD *)(v1 + 8) = 0LL;
  return ExReleasePushLockExclusiveEx(v1, 0LL);
}
