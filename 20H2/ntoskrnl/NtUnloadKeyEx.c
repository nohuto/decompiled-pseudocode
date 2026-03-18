/*
 * XREFs of NtUnloadKeyEx @ 0x1406A2090
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x1406A219C (CmUnloadKey.c)
 */

__int64 __fastcall NtUnloadKeyEx(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return CmUnloadKey(a1, 0LL, a3, a2);
}
