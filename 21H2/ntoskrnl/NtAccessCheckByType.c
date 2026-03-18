/*
 * XREFs of NtAccessCheckByType @ 0x140241910
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x1402FBEC0 (SeAccessCheckByType.c)
 */

__int64 __fastcall NtAccessCheckByType(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  return SeAccessCheckByType(a1, a2, a3, a4, a5, a6, a7, a8);
}
