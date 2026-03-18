/*
 * XREFs of _wtoi @ 0x1403CDFF0
 * Callers:
 *     WmipPrepareWnodeSI @ 0x1407400D4 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x140740E38 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x1408729C4 (CmpCloneHwProfile.c)
 * Callees:
 *     _wtol @ 0x1403CE010 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
