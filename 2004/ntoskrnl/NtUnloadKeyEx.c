/*
 * XREFs of NtUnloadKeyEx @ 0x14064FDB0
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x14064FEBC (CmUnloadKey.c)
 */

__int64 __fastcall NtUnloadKeyEx(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return CmUnloadKey(a1, 0LL, a3, a2);
}
