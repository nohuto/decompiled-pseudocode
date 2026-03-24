/*
 * XREFs of NtUnloadKey @ 0x1406C3E90
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x140719C78 (CmUnloadKey.c)
 */

__int64 __fastcall NtUnloadKey(__int64 a1)
{
  return CmUnloadKey(a1, 0LL, 0LL, 0LL);
}
