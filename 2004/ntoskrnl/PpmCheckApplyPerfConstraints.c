/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x140768D5C
 * Callers:
 *     PpmRegisterPerfCap @ 0x1403901C0 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14037B118 (PpmCheckCustomRun.c)
 */

__int64 __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  return PpmCheckCustomRun((unsigned int)(a1 != 0) + 1);
}
