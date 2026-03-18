/*
 * XREFs of NtUnloadKey @ 0x14064FA50
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x14064FEBC (CmUnloadKey.c)
 */

__int64 __fastcall NtUnloadKey(__int64 a1)
{
  return CmUnloadKey(a1, 0LL, 0LL, 0LL);
}
