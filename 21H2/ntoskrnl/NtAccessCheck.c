/*
 * XREFs of NtAccessCheck @ 0x1402FDDF0
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x1402FBEC0 (SeAccessCheckByType.c)
 */

__int64 __fastcall NtAccessCheck(
        __int16 *a1,
        void *a2,
        int a3,
        _OWORD *a4,
        _DWORD *a5,
        PERESOURCE *a6,
        unsigned int *a7,
        int *a8)
{
  return SeAccessCheckByType(a1, 0LL, a2, a3, 0LL, 0, a4, a5, a6, a7, a8, 0);
}
