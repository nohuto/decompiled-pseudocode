/*
 * XREFs of NtAccessCheck @ 0x14022AB60
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x14022A6B0 (SeAccessCheckByType.c)
 */

__int64 __fastcall NtAccessCheck(
        __int16 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        int *a6,
        unsigned int *a7,
        int *a8)
{
  return SeAccessCheckByType(a1, 0LL, a2, a3, 0LL, 0, a4, a5, a6, a7, a8, 0);
}
