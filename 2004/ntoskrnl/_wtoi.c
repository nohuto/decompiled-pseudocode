/*
 * XREFs of _wtoi @ 0x1403CEE30
 * Callers:
 *     WmipPrepareWnodeSI @ 0x140741C54 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x1407429B8 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x140873CB4 (CmpCloneHwProfile.c)
 * Callees:
 *     _wtol @ 0x1403CEE50 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
