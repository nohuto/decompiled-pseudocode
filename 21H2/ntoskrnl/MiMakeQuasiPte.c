/*
 * XREFs of MiMakeQuasiPte @ 0x1402D3ED4
 * Callers:
 *     MiUpdateUserMappings @ 0x140994E58 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
}
