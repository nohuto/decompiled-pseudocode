/*
 * XREFs of rimPredictionPolicyUpdateStateAndApply @ 0x1C0182D44
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C0180134 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     ApiSetDoPrediction @ 0x1C01CCAC8 (ApiSetDoPrediction.c)
 */

__int64 __fastcall rimPredictionPolicyUpdateStateAndApply(__int64 a1, __int64 a2, int a3, int a4)
{
  int v5; // edx
  _DWORD *v6; // rdi
  __int64 result; // rax
  int v8; // ecx
  int v9; // edx

  if ( a4 || (*(_DWORD *)(a1 + 312) & 8) != 0 || (v5 = 1, (unsigned int)(*(_DWORD *)(a1 + 24) - 1) > 3) )
    v5 = 0;
  v6 = (_DWORD *)(a2 + 2440);
  if ( v5 )
  {
    result = ApiSetDoPrediction(a1, *(_QWORD *)(a2 + 2464), *(_QWORD *)(a2 + 2456), a3, a2 + 80, a2 + 2448, a2 + 2440);
    if ( *(_DWORD *)(a2 + 2364) )
    {
      v8 = *v6 - *(_DWORD *)(a2 + 2456);
      v9 = *(_DWORD *)(a2 + 2444) - *(_DWORD *)(a2 + 2460);
      *(_DWORD *)(a2 + 2512) += v8;
      *(_DWORD *)(a2 + 2520) += v8;
      *(_DWORD *)(a2 + 2516) += v9;
      *(_DWORD *)(a2 + 2524) += v9;
    }
  }
  else
  {
    *(_QWORD *)v6 = *(_QWORD *)(a2 + 2456);
    result = *(_QWORD *)(a2 + 2464);
    *(_QWORD *)(a2 + 2448) = result;
  }
  return result;
}
