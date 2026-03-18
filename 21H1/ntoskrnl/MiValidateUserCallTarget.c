/*
 * XREFs of MiValidateUserCallTarget @ 0x1406E9D74
 * Callers:
 *     MiCfgMarkValidEntries @ 0x14063C194 (MiCfgMarkValidEntries.c)
 *     MmValidateUserCallTarget @ 0x1408D3528 (MmValidateUserCallTarget.c)
 * Callees:
 *     MiIsProcessCfgExportSuppressionEnabled @ 0x1402AC65C (MiIsProcessCfgExportSuppressionEnabled.c)
 *     CfgAddressToBitState @ 0x1402AC6A8 (CfgAddressToBitState.c)
 */

__int64 __fastcall MiValidateUserCallTarget(unsigned __int64 a1, __int64 a2)
{
  char v3; // di
  unsigned int v4; // ebx
  int v5; // r8d
  int v6; // r8d
  int v8; // r8d
  bool v9; // zf

  v3 = a1;
  v4 = 0;
  v5 = CfgAddressToBitState(a1, *(const signed __int64 **)a2);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v8 = v6 - 1;
      if ( v8 )
      {
        v9 = v8 == 1;
      }
      else
      {
        if ( MiIsProcessCfgExportSuppressionEnabled() )
          return v4;
        v9 = (v3 & 0xF) == (unsigned __int64)*(unsigned int *)(a2 + 24);
      }
      if ( v9 )
        return 1;
    }
    else
    {
      return (v3 & 0xF) == (unsigned __int64)*(unsigned int *)(a2 + 24);
    }
  }
  return v4;
}
