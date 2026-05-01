/*
 * XREFs of sub_1800090A8 @ 0x1800090A8
 * Callers:
 *     sub_180008F9C @ 0x180008F9C (sub_180008F9C.c)
 *     sub_180009018 @ 0x180009018 (sub_180009018.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1800090A8(__int64 a1)
{
  return *(_DWORD *)(a1 + 128) == GetCurrentThreadId();
}
