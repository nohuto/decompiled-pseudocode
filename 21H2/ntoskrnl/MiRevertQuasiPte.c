/*
 * XREFs of MiRevertQuasiPte @ 0x140252130
 * Callers:
 *     MiUpdateUserMappings @ 0x140995E58 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRevertQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 1;
}
