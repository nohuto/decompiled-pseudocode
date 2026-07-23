/*
 * XREFs of AuthzBasepComputeExpression @ 0x1405C2088
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1402F24D0 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepOperandValueTypesCompatible @ 0x1402F3C20 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepComputeBitwise @ 0x1405C2024 (AuthzBasepComputeBitwise.c)
 */

__int64 __fastcall AuthzBasepComputeExpression(char a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int16 *v4; // r9
  bool v5; // zf
  __int16 v9; // bp

  v3 = 0;
  v4 = (__int16 *)(a2 + 40);
  v5 = *(_DWORD *)(a2 + 12) == 1;
  *a3 = 0LL;
  if ( !v5 )
    v4 = (__int16 *)a2;
  v9 = *v4;
  if ( AuthzBasepOperandValueTypesCompatible(a2) && a1 == -93 && v9 == 2 )
    *a3 = AuthzBasepComputeBitwise(163, a2);
  else
    return (unsigned int)-1073741406;
  return v3;
}
