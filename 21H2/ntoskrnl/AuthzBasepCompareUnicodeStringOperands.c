/*
 * XREFs of AuthzBasepCompareUnicodeStringOperands @ 0x1402F3D70
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x1402F3B70 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x1402F47C8 (AuthzBasepValueInSet.c)
 * Callees:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1402F3610 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     RtlIsNameInExpression @ 0x1402F4040 (RtlIsNameInExpression.c)
 *     AuthzBasepGetOperandStringCaseForEvaluation @ 0x1402F4770 (AuthzBasepGetOperandStringCaseForEvaluation.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1402F49CC (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepCompareUnicodeStringCaseSensitive @ 0x1405C1F60 (AuthzBasepCompareUnicodeStringCaseSensitive.c)
 *     RtlCompareUnicodeString @ 0x1406DDA80 (RtlCompareUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepCompareUnicodeStringOperands(char a1, __int64 a2, _DWORD *a3)
{
  wchar_t **p_Buffer; // rax
  __int64 v7; // rcx
  int OperandStringCaseForEvaluation; // eax
  int v9; // r13d
  UNICODE_STRING *p_Name; // rdx
  __int64 v11; // r12
  char v12; // zf
  UNICODE_STRING *v13; // rdx
  UNICODE_STRING *p_Expression; // rcx
  int IsNameInExpression; // ecx
  unsigned int v16; // r14d
  __int64 v17; // rdi
  wchar_t **v18; // rsi
  BOOLEAN v20; // al
  unsigned int v21; // eax
  BOOL v22; // eax
  _WORD v23[2]; // [rsp+20h] [rbp-48h] BYREF
  int v24; // [rsp+24h] [rbp-44h]
  UNICODE_STRING *v25; // [rsp+28h] [rbp-40h]
  UNICODE_STRING Name; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING Expression; // [rsp+40h] [rbp-28h] BYREF
  char v28; // [rsp+88h] [rbp+20h] BYREF

  v23[0] = 0;
  v28 = 0;
  p_Buffer = &Name.Buffer;
  v7 = 2LL;
  do
  {
    *p_Buffer = 0LL;
    p_Buffer += 2;
    --v7;
  }
  while ( v7 );
  *a3 = 0;
  OperandStringCaseForEvaluation = AuthzBasepGetOperandStringCaseForEvaluation(a2, &v28);
  v24 = OperandStringCaseForEvaluation;
  if ( OperandStringCaseForEvaluation < 0 )
  {
LABEL_25:
    *a3 = -1;
    v16 = OperandStringCaseForEvaluation;
    goto LABEL_19;
  }
  v9 = 0;
  p_Name = &Name;
  v25 = &Name;
  v11 = a2 + 16;
  do
  {
    if ( *(_DWORD *)(v11 - 4) == 1 )
    {
      v12 = v28 == 0;
    }
    else
    {
      v12 = v28 == 0;
      if ( v28 )
      {
        *p_Name = *(UNICODE_STRING *)*(_QWORD *)(*(_QWORD *)v11 + 48LL);
        goto LABEL_9;
      }
    }
    OperandStringCaseForEvaluation = AuthzBasepUnicodeStringFromOperandValue(
                                       a2 + 40LL * v9,
                                       v12,
                                       &Name.Length + 8 * v9,
                                       (_BYTE *)v23 + v9);
    v24 = OperandStringCaseForEvaluation;
    if ( OperandStringCaseForEvaluation < 0 )
      goto LABEL_25;
    p_Name = v25;
LABEL_9:
    ++v9;
    v11 += 40LL;
    v25 = ++p_Name;
  }
  while ( v9 < 2 );
  if ( (unsigned __int8)(a1 + 0x80) > 1u )
  {
    if ( v28 )
      v21 = AuthzBasepCompareUnicodeStringCaseSensitive(&Name, &Expression);
    else
      v21 = RtlCompareUnicodeString(&Name, &Expression, 1u);
    *a3 = v21;
    if ( a1 != -126 )
    {
      if ( a1 == -125 )
      {
        v22 = *a3 <= 0;
LABEL_40:
        *a3 = v22;
LABEL_43:
        v16 = v24;
        goto LABEL_19;
      }
      if ( a1 == -124 )
      {
        v22 = *a3 > 0;
        goto LABEL_40;
      }
      if ( a1 != -123 )
        goto LABEL_43;
      v21 = ~*a3;
    }
    v22 = v21 >> 31;
    goto LABEL_40;
  }
  if ( *(_DWORD *)(a2 + 12) == 2 || *(_DWORD *)(a2 + 52) == 2 )
  {
    if ( *(_DWORD *)(a2 + 52) == 1 )
    {
      v13 = &Name;
      p_Expression = &Expression;
    }
    else
    {
      v13 = &Expression;
      p_Expression = &Name;
    }
    IsNameInExpression = RtlIsNameInExpression(p_Expression, v13, v28 == 0, 0LL);
    *a3 = IsNameInExpression;
  }
  else
  {
    if ( v28 )
      v20 = AuthzBasepEqualUnicodeStringCaseSensitive(&Name, &Expression);
    else
      v20 = RtlEqualUnicodeString(&Name, &Expression, 1u);
    IsNameInExpression = v20;
    *a3 = v20;
  }
  v12 = a1 == -127;
  v16 = v24;
  if ( v12 )
    *a3 = IsNameInExpression != 1;
LABEL_19:
  v17 = 0LL;
  v18 = &Name.Buffer;
  do
  {
    if ( *((_BYTE *)v23 + v17) )
      ExFreePoolWithTag(*v18, 0);
    ++v17;
    v18 += 2;
  }
  while ( v17 < 2 );
  return v16;
}
