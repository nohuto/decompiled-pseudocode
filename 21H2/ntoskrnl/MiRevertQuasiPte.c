/*
 * XREFs of MiRevertQuasiPte @ 0x1402D3EC0
 * Callers:
 *     MiUpdateUserMappings @ 0x140994E58 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRevertQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 1;
}
