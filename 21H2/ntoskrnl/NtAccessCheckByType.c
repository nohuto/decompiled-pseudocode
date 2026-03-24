/*
 * XREFs of NtAccessCheckByType @ 0x1402B9350
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x14027DF60 (SeAccessCheckByType.c)
 */

__int64 __fastcall NtAccessCheckByType(
        __int16 *a1,
        void *a2,
        void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int128 *a7,
        _DWORD *a8,
        unsigned int *a9,
        unsigned int *a10,
        int *a11)
{
  return SeAccessCheckByType(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, 0);
}
