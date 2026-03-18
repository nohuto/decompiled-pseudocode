/*
 * XREFs of CfgAddressToBitState @ 0x14059A668
 * Callers:
 *     MiValidateXfgUserCallTarget @ 0x14059A6AC (MiValidateXfgUserCallTarget.c)
 *     MiCfgMarkValidEntries @ 0x140753C58 (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x14096EC0C (MiValidateUserCallTarget.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x14097F73C (MiCheckVerifierFunctionsCfgState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CfgAddressToBitState(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}
