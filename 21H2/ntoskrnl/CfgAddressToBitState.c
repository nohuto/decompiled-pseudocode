/*
 * XREFs of CfgAddressToBitState @ 0x1402A0650
 * Callers:
 *     MiValidateUserCallTarget @ 0x1406BD86C (MiValidateUserCallTarget.c)
 *     MiCfgMarkValidEntries @ 0x1406BE004 (MiCfgMarkValidEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CfgAddressToBitState(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}
