/*
 * XREFs of _RtlValidateUserCallTarget@8 @ 0x4B363B20
 * Callers:
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _LdrpUnsuppressAddressTakenIat@12 @ 0x4B3345D2 (_LdrpUnsuppressAddressTakenIat@12.c)
 *     _RtlpUnsuppressForwardReferencingCallTarget@4 @ 0x4B363CC9 (_RtlpUnsuppressForwardReferencingCallTarget@4.c)
 * Callees:
 *     _LdrControlFlowGuardEnforcedWithExportSuppression@0 @ 0x4B2D00AD (_LdrControlFlowGuardEnforcedWithExportSuppression@0.c)
 *     _CfgAddressToBitState@12 @ 0x4B363939 (_CfgAddressToBitState@12.c)
 */

int __fastcall RtlValidateUserCallTarget(unsigned int a1, _DWORD *a2)
{
  int v3; // eax
  BOOL v4; // ebx
  int v5; // eax
  int v6; // eax
  char v8; // [esp+Ch] [ebp-4h]

  v8 = a1;
  v3 = CfgAddressToBitState(a1, qword_4B3A9300, a1);
  v4 = 0;
  if ( !v3 )
    goto LABEL_12;
  v5 = v3 - 1;
  if ( !v5 )
  {
    v4 = (v8 & 0xF) == 0;
    *a2 = ((v8 & 0xF) != 0) + 1;
    return v4;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    {
      *a2 = 16;
      return v4;
    }
    if ( (v8 & 0xF) == 0 )
    {
      *a2 = 4;
      return 1;
    }
LABEL_12:
    *a2 = 2;
    return v4;
  }
  if ( v6 != 1 )
    goto LABEL_12;
  *a2 = 8;
  return 1;
}
