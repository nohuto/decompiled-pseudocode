/*
 * XREFs of NtGdiBitBlt @ 0x1C00AFFF0
 * Callers:
 *     <none>
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 */

__int64 __fastcall NtGdiBitBlt(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  return NtGdiBitBltInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11 & 0xFFFFFFFD);
}
