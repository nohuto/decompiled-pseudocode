/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x14076697C
 * Callers:
 *     PpmRegisterPerfCap @ 0x14038F650 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14037A398 (PpmCheckCustomRun.c)
 */

__int64 __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  return PpmCheckCustomRun((unsigned int)(a1 != 0) + 1);
}
