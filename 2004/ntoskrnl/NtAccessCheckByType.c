/*
 * XREFs of NtAccessCheckByType @ 0x140344F60
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x140294B50 (SeAccessCheckByType.c)
 */

__int64 __fastcall NtAccessCheckByType(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        volatile void *a8,
        int *a9,
        __int64 a10,
        volatile void *a11)
{
  return SeAccessCheckByType(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, 0);
}
