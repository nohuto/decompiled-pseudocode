/*
 * XREFs of AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1406C5D64
 * Callers:
 *     NtCompareTokens @ 0x1406C5850 (NtCompareTokens.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x1402F3440 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x1406C5E30 (AuthzBasepIsCompareRelevantAttribute.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x1406C5E64 (AuthzBasepCompareSecurityAttribute.c)
 */

bool __fastcall AuthzBasepCompareLegacySecurityAttributesInformation(int *a1, __int64 a2)
{
  int v2; // ebp
  char v3; // bl
  int v4; // esi
  __int64 *v6; // r14
  const UNICODE_STRING *i; // rdi
  const UNICODE_STRING *SecurityAttribute; // rax
  _QWORD *v10; // rdi
  char IsCompareRelevantAttribute; // al
  int v12; // ecx

  v2 = *a1;
  v3 = 0;
  v4 = *(_DWORD *)a2;
  if ( !*a1 && !v4 )
    return 1;
  v6 = (__int64 *)(a1 + 2);
  for ( i = (const UNICODE_STRING *)*((_QWORD *)a1 + 1);
        i != (const UNICODE_STRING *)v6;
        i = *(const UNICODE_STRING **)&i->Length )
  {
    if ( (unsigned __int8)AuthzBasepIsCompareRelevantAttribute(i) )
    {
      SecurityAttribute = AuthzBasepFindSecurityAttribute(a2, i + 2);
      if ( !SecurityAttribute || !(unsigned __int8)AuthzBasepCompareSecurityAttribute(i, SecurityAttribute) )
        return v3;
    }
    else
    {
      --v2;
    }
  }
  v10 = *(_QWORD **)(a2 + 8);
  while ( v10 != (_QWORD *)(a2 + 8) )
  {
    IsCompareRelevantAttribute = AuthzBasepIsCompareRelevantAttribute(v10);
    v10 = (_QWORD *)*v10;
    v12 = v4 - 1;
    if ( IsCompareRelevantAttribute )
      v12 = v4;
    v4 = v12;
  }
  return v2 == v4;
}
