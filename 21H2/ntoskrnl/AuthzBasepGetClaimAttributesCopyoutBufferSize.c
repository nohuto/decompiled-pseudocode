/*
 * XREFs of AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x140A1AC54
 * Callers:
 *     AuthzBasepQueryClaimAttributesToken @ 0x1406C1884 (AuthzBasepQueryClaimAttributesToken.c)
 * Callees:
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x140A1AAAC (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 */

__int64 __fastcall AuthzBasepGetClaimAttributesCopyoutBufferSize(unsigned int *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // r8
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned int *v7; // rdi
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v11 = 0LL;
  v4 = 32 * v2;
  if ( !is_mul_ok(0x20uLL, v2) )
    return 3221225621LL;
  result = 0LL;
  v6 = v4 + 16;
  if ( v4 >= 0xFFFFFFFFFFFFFFF0uLL )
    return 3221225621LL;
  v7 = a1 + 2;
  v8 = *((_QWORD *)a1 + 1);
  while ( (unsigned int *)v8 != v7 )
  {
    v9 = (v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v9 < v6 )
      return 3221225621LL;
    v10 = v9 + *(unsigned __int16 *)(v8 + 32);
    if ( v10 < v9 || v10 + 2 < v10 )
      return 3221225621LL;
    v11 = v10 + 2;
    result = AuthzBasepGetClaimAttributeValueCopyoutBufferSize(v8, &v11);
    if ( (int)result < 0 )
      return result;
    v8 = *(_QWORD *)v8;
    v6 = v11;
  }
  *a2 = v6;
  return result;
}
