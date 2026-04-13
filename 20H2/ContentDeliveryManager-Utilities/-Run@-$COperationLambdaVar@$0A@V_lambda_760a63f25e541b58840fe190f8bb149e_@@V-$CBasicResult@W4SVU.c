/*
 * XREFs of ?Run@?$COperationLambdaVar@$0A@V_lambda_760a63f25e541b58840fe190f8bb149e_@@V?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@Internal@Windows@@$$V@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@23@@Z @ 0x18001BFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_760a63f25e541b58840fe190f8bb149e_@@QEBAJAEAV?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@Internal@Windows@@@Z @ 0x180011838 (--R_lambda_760a63f25e541b58840fe190f8bb149e_@@QEBAJAEAV-$CBasicResult@W4SVUpgradeOfferedState@Co.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar<0,_lambda_760a63f25e541b58840fe190f8bb149e_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeOfferedState,0>,>::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 16);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)_lambda_760a63f25e541b58840fe190f8bb149e_::operator()(a1, a4);
  return (unsigned int)a3;
}
