/*
 * XREFs of CfgAddressToBitState @ 0x1402AC6A8
 * Callers:
 *     MiCfgMarkValidEntries @ 0x14063C194 (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x1406E9D74 (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CfgAddressToBitState(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}
