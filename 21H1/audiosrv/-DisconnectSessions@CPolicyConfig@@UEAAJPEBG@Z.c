/*
 * XREFs of ?DisconnectSessions@CPolicyConfig@@UEAAJPEBG@Z @ 0x18002ADF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x18002B5B4 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 */

__int64 __fastcall CPolicyConfig::DisconnectSessions(CPolicyConfig *this, const unsigned __int16 *a2)
{
  CPolicyConfig::DisconnectHelper(a2);
  return 0LL;
}
