/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x14077736C
 * Callers:
 *     PpmRegisterPerfCap @ 0x140392680 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14037CE48 (PpmCheckCustomRun.c)
 */

__int64 __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  return PpmCheckCustomRun((unsigned int)(a1 != 0) + 1);
}
