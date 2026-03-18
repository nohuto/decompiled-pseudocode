/*
 * XREFs of AuthzBasepEvaluateExpression @ 0x140219B90
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140219130 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepEvaluateSetRelationship @ 0x140218C94 (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140218F84 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x140219C44 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14064A96C (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x14064ABF8 (AuthzBasepCompareIntegerOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x14064AD1C (AuthzBasepCompareOctetStringOperands.c)
 */

__int64 __fastcall AuthzBasepEvaluateExpression(char a1, __int64 a2, _DWORD *a3)
{
  int v3; // ebp
  unsigned __int16 *v4; // r9
  bool v5; // zf
  unsigned int v9; // ebx
  unsigned __int16 v10; // r15
  __int64 v11; // rcx
  int v13; // ecx
  int v14; // eax
  int v15; // eax

  v3 = 0;
  v4 = (unsigned __int16 *)(a2 + 40);
  v5 = *(_DWORD *)(a2 + 12) == 1;
  *a3 = 0;
  if ( !v5 )
    v4 = (unsigned __int16 *)a2;
  v9 = 0;
  v10 = *v4;
  if ( !(unsigned __int8)AuthzBasepOperandValueTypesCompatible(a2) )
    goto LABEL_4;
  if ( (unsigned __int8)a1 < 0x80u )
    return v9;
  if ( (unsigned __int8)a1 > 0x81u )
  {
    if ( (unsigned __int8)a1 > 0x85u )
    {
      if ( a1 == -122 )
      {
LABEL_11:
        v13 = 1;
        goto LABEL_12;
      }
      if ( a1 != -120 )
      {
        if ( a1 == -114 )
          goto LABEL_11;
        if ( a1 != -113 )
          return v9;
      }
      v13 = 2;
LABEL_12:
      v9 = AuthzBasepEvaluateSetRelationship(v13, a2, a3);
      if ( (v9 & 0x80000000) == 0 )
        return v9;
      goto LABEL_5;
    }
    if ( !v10 )
      goto LABEL_4;
    if ( v10 <= 2u )
    {
      LOBYTE(v11) = a1;
      v14 = AuthzBasepCompareIntegerOperands(v11, a2);
      goto LABEL_28;
    }
    switch ( v10 )
    {
      case 3u:
        v15 = AuthzBasepCompareUnicodeStringOperands(a1, a2, a3);
        break;
      case 4u:
        LOBYTE(v11) = a1;
        v15 = AuthzBasepCompareFQBNOperands(v11, a2, a3);
        break;
      case 5u:
      case 0x10u:
        LOBYTE(v11) = a1;
        v14 = AuthzBasepCompareOctetStringOperands(v11, a2);
LABEL_28:
        *a3 = v14;
        return v9;
      default:
LABEL_4:
        v9 = -1073741406;
LABEL_5:
        *a3 = -1;
        return v9;
    }
    v9 = v15;
    if ( v15 >= 0 )
      return v9;
    goto LABEL_5;
  }
  v9 = AuthzBasepEvaluateSetRelationship(0, a2, a3);
  if ( (v9 & 0x80000000) != 0 )
    goto LABEL_5;
  if ( a1 == -127 && *a3 != -1 )
  {
    LOBYTE(v3) = *a3 == 0;
    *a3 = v3;
  }
  return v9;
}
