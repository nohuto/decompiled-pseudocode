/*
 * XREFs of AuthzBasepEvaluateExpression @ 0x1402F3B70
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1402F24D0 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepOperandValueTypesCompatible @ 0x1402F3C20 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1402F3D70 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepEvaluateSetRelationship @ 0x1402F49EC (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepCompareFQBNOperands @ 0x1405C1AC0 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x1405C1D48 (AuthzBasepCompareIntegerOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1405C1E74 (AuthzBasepCompareOctetStringOperands.c)
 */

__int64 __fastcall AuthzBasepEvaluateExpression(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  unsigned __int16 *v3; // r9
  bool v4; // zf
  int v8; // ebx
  unsigned __int16 v9; // r14
  __int64 v10; // rcx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax

  v3 = (unsigned __int16 *)(a2 + 40);
  v4 = *(_DWORD *)(a2 + 12) == 1;
  *a3 = 0;
  if ( !v4 )
    v3 = (unsigned __int16 *)a2;
  v8 = 0;
  v9 = *v3;
  if ( !(unsigned __int8)AuthzBasepOperandValueTypesCompatible(a2) )
    goto LABEL_4;
  if ( a1 < 0x80u )
    return (unsigned int)v8;
  if ( a1 <= 0x81u )
  {
    v8 = AuthzBasepEvaluateSetRelationship(0LL, a2, a3);
    if ( v8 < 0 )
      goto LABEL_5;
    if ( a1 == 0x81 && *a3 != -1 )
      *a3 = *a3 == 0;
    goto LABEL_13;
  }
  if ( a1 > 0x85u )
  {
    if ( a1 == 0x86 )
    {
LABEL_11:
      v12 = 1LL;
      goto LABEL_12;
    }
    if ( a1 != 0x88 )
    {
      if ( a1 == 0x8E )
        goto LABEL_11;
      if ( a1 != 0x8F )
        return (unsigned int)v8;
    }
    v12 = 2LL;
LABEL_12:
    v8 = AuthzBasepEvaluateSetRelationship(v12, a2, a3);
    if ( v8 < 0 )
      goto LABEL_5;
LABEL_13:
    if ( v8 >= 0 )
      return (unsigned int)v8;
    goto LABEL_5;
  }
  if ( !v9 )
    goto LABEL_4;
  if ( v9 <= 2u )
  {
    LOBYTE(v10) = a1;
    v13 = AuthzBasepCompareIntegerOperands(v10, a2);
    goto LABEL_27;
  }
  switch ( v9 )
  {
    case 3u:
      LOBYTE(v10) = a1;
      v14 = AuthzBasepCompareUnicodeStringOperands(v10, a2, a3);
      goto LABEL_30;
    case 4u:
      LOBYTE(v10) = a1;
      v14 = AuthzBasepCompareFQBNOperands(v10, a2, a3);
LABEL_30:
      v8 = v14;
      goto LABEL_13;
    case 5u:
    case 0x10u:
      LOBYTE(v10) = a1;
      v13 = AuthzBasepCompareOctetStringOperands(v10, a2);
LABEL_27:
      *a3 = v13;
      return (unsigned int)v8;
  }
LABEL_4:
  v8 = -1073741406;
LABEL_5:
  *a3 = -1;
  return (unsigned int)v8;
}
