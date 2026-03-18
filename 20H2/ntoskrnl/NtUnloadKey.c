/*
 * XREFs of NtUnloadKey @ 0x1406A0FC0
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x1406A219C (CmUnloadKey.c)
 */

__int64 __fastcall NtUnloadKey(__int64 a1)
{
  return CmUnloadKey(a1, 0LL, 0LL, 0LL);
}
