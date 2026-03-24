/*
 * XREFs of IopQueryName @ 0x1406AE640
 * Callers:
 *     <none>
 * Callees:
 *     IopQueryNameInternal @ 0x140620504 (IopQueryNameInternal.c)
 */

__int64 __fastcall IopQueryName(__int64 a1, __int64 a2, UNICODE_STRING *a3, unsigned int a4, _DWORD *a5, char a6)
{
  return IopQueryNameInternal(a1, a2, 0, a3, a4, a5, a6);
}
