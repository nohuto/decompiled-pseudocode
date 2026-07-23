/*
 * XREFs of AuthzBasepCompareIntegerOperands @ 0x1405C1D48
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x1402F3B70 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x1402F47C8 (AuthzBasepValueInSet.c)
 * Callees:
 *     AuthzBasepCompareUnsigned @ 0x1405C1FB4 (AuthzBasepCompareUnsigned.c)
 */

__int64 __fastcall AuthzBasepCompareIntegerOperands(unsigned __int8 a1, __int64 a2)
{
  unsigned int v2; // r8d
  int v3; // r9d
  signed __int64 **v4; // rdx
  __int64 v5; // rcx
  unsigned __int16 v6; // r10
  signed __int64 *v7; // rax
  __int64 v8; // rcx
  bool v9; // al
  signed __int64 v11; // [rsp+20h] [rbp-10h]
  signed __int64 v12; // [rsp+28h] [rbp-8h]

  v11 = -1LL;
  v2 = 0;
  v12 = -1LL;
  v3 = a1;
  v4 = (signed __int64 **)(a2 + 32);
  v5 = 0LL;
  v6 = 2;
  do
  {
    if ( *((_DWORD *)v4 - 5) == 1 )
    {
      v7 = *v4;
    }
    else
    {
      v6 = *((_WORD *)v4 - 16);
      v7 = (signed __int64 *)(*(v4 - 2))[6];
    }
    v4 += 5;
    *(&v11 + v5++) = *v7;
  }
  while ( v5 < 2 );
  if ( v6 == 1 )
  {
    switch ( v3 )
    {
      case 128:
        if ( v11 == v12 )
          return 1;
        v9 = 0;
        break;
      case 129:
        v9 = v11 != v12;
        break;
      case 130:
        v9 = v11 < v12;
        break;
      case 131:
        v9 = v11 <= v12;
        break;
      case 132:
        v9 = v11 > v12;
        break;
      case 133:
        v9 = v11 >= v12;
        break;
      default:
        return v2;
    }
    if ( !v9 )
      return v2;
    return 1;
  }
  v8 = (unsigned int)v6 - 2;
  if ( v6 == 2 )
    goto LABEL_12;
  if ( v6 == 6 )
  {
    if ( (unsigned __int64)v11 > 1 || (unsigned __int64)v12 >= 2 )
      return (unsigned int)-1;
LABEL_12:
    LOBYTE(v8) = v3;
    return (unsigned int)AuthzBasepCompareUnsigned(v8);
  }
  return v2;
}
