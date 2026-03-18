/*
 * XREFs of KeSetAffinityThread @ 0x14056B9C0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetLegacyAffinityThread @ 0x14020E6EC (KiSetLegacyAffinityThread.c)
 */

__int64 __fastcall KeSetAffinityThread(__int64 a1, __int64 a2)
{
  return KiSetLegacyAffinityThread(a1, a2);
}
