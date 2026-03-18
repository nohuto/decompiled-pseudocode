/*
 * XREFs of AuthzBasepFindSystemSecurityAttribute @ 0x1406F7850
 * Callers:
 *     AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x1406F77E0 (AuthzBasepQuerySystemSecurityAttributeAndValues.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x140338E68 (AuthzBasepEqualUnicodeString.c)
 */

__int64 __fastcall AuthzBasepFindSystemSecurityAttribute(const UNICODE_STRING *a1)
{
  char v1; // bl
  __int64 v3; // rdx
  const void **v4; // rsi
  const void **v5; // rax
  const void **v6; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v10 = 0LL;
  _InterlockedExchange64(&v10, WindowsSystemAttributes);
  v3 = v10;
  v4 = 0LL;
  if ( v10 )
  {
    v5 = (const void **)(v10 + 8);
    v6 = *(const void ***)(v10 + 8);
    while ( v6 != v5 )
    {
      v4 = v6;
      if ( AuthzBasepEqualUnicodeString(v6 + 4, a1) )
      {
LABEL_5:
        v1 = 1;
        return (unsigned __int64)v4 & -(__int64)(v1 != 0);
      }
      v3 = v10;
      v6 = (const void **)*v6;
      v5 = (const void **)(v10 + 8);
    }
    v8 = (_QWORD *)(v3 + 32);
    v9 = *(_QWORD **)(v3 + 32);
    while ( v9 != v8 )
    {
      v4 = (const void **)(v9 - 2);
      if ( (v9[5] & 1) == 0 )
      {
        if ( AuthzBasepEqualUnicodeString(v4 + 4, a1) )
          goto LABEL_5;
        v3 = v10;
      }
      v9 = (_QWORD *)*v9;
      v8 = (_QWORD *)(v3 + 32);
    }
  }
  return (unsigned __int64)v4 & -(__int64)(v1 != 0);
}
