/*
 * XREFs of NtAccessCheckByTypeResultList @ 0x1405942F0
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x14022A6B0 (SeAccessCheckByType.c)
 */

__int64 __fastcall NtAccessCheckByTypeResultList(
        __int16 *a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        _DWORD *a8,
        int *a9,
        unsigned int *a10,
        int *a11)
{
  return SeAccessCheckByType(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, 1);
}
