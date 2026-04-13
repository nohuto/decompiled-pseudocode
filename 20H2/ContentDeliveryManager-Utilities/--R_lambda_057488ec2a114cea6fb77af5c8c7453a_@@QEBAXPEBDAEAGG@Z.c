/*
 * XREFs of ??R_lambda_057488ec2a114cea6fb77af5c8c7453a_@@QEBAXPEBDAEAGG@Z @ 0x18000A694
 * Callers:
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x18000A4C0 (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(
        __int64 a1,
        _QWORD *a2,
        unsigned __int16 *a3,
        unsigned __int16 a4)
{
  _QWORD *result; // rax
  __int64 v8; // r10
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rbx
  rsize_t v12; // rbx

  if ( !a4 )
    goto LABEL_7;
  result = a2;
  v8 = **(_QWORD **)a1 + a4 - (_QWORD)a2;
  do
  {
    v9 = *((unsigned __int8 *)result + v8);
    v10 = *(unsigned __int8 *)result - v9;
    if ( v10 )
      break;
    result = (_QWORD *)((char *)result + 1);
  }
  while ( v9 );
  if ( v10 )
  {
LABEL_7:
    v11 = -1LL;
    do
      ++v11;
    while ( *((_BYTE *)a2 + v11) );
    v12 = v11 + 1;
    **(_QWORD **)(a1 + 8) += v12;
    result = **(_QWORD ***)(a1 + 16);
    if ( **(_QWORD **)(a1 + 8) <= (unsigned __int64)result )
    {
      memcpy_s(**(void *const **)(a1 + 24), **(_QWORD **)(a1 + 32) - **(_QWORD **)(a1 + 24), a2, v12);
      *a3 = **(_WORD **)(a1 + 24) - **(_WORD **)a1;
      result = *(_QWORD **)(a1 + 24);
      *result += v12;
    }
  }
  else
  {
    *a3 = a4;
  }
  return result;
}
