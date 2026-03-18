/*
 * XREFs of MiMakeQuasiPte @ 0x140360E34
 * Callers:
 *     MiUpdateUserMappings @ 0x140991DE8 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
}
