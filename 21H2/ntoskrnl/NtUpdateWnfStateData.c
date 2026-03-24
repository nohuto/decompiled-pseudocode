/*
 * XREFs of NtUpdateWnfStateData @ 0x14060E5A0
 * Callers:
 *     SepSecureBootCheckForUpdates @ 0x140A937A0 (SepSecureBootCheckForUpdates.c)
 * Callees:
 *     ExpNtUpdateWnfStateData @ 0x14060E5DC (ExpNtUpdateWnfStateData.c)
 */

__int64 __fastcall NtUpdateWnfStateData(int a1, int a2, int a3, int a4, __int64 a5, int a6, int a7)
{
  return ExpNtUpdateWnfStateData(a1, a2, a3, a4, a5, a6, a7, 1);
}
