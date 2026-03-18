/*
 * XREFs of NtAccessCheck @ 0x14033A040
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x140294B50 (SeAccessCheckByType.c)
 */

__int64 __fastcall NtAccessCheck(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        volatile void *a5,
        int *a6,
        __int64 a7,
        volatile void *a8)
{
  return SeAccessCheckByType(a1, 0, a2, a3, 0LL, 0, a4, a5, a6, a7, a8, 0);
}
