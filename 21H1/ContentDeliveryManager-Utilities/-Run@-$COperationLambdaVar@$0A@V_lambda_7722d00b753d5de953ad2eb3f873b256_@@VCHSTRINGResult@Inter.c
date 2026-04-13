/*
 * XREFs of ?Run@?$COperationLambdaVar@$0A@V_lambda_7722d00b753d5de953ad2eb3f873b256_@@VCHSTRINGResult@Internal@Windows@@$$V@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAVCHSTRINGResult@23@@Z @ 0x18001B820
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_7722d00b753d5de953ad2eb3f873b256_@@QEBAJAEAVCHSTRINGResult@Internal@Windows@@@Z @ 0x180010E1C (--R_lambda_7722d00b753d5de953ad2eb3f873b256_@@QEBAJAEAVCHSTRINGResult@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar<0,_lambda_7722d00b753d5de953ad2eb3f873b256_,Windows::Internal::CHSTRINGResult,>::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)_lambda_7722d00b753d5de953ad2eb3f873b256_::operator()(a1 + 8, a4);
  return (unsigned int)a3;
}
