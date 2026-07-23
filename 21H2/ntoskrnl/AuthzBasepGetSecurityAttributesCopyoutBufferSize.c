/*
 * XREFs of AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x1402F3190
 * Callers:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1402F3050 (AuthzBasepQuerySecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x1402F3440 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x1402F350C (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 */

__int64 __fastcall AuthzBasepGetSecurityAttributesCopyoutBufferSize(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        ULONGLONG *a4)
{
  NTSTATUS SecurityAttributeValueCopyoutBufferSize; // r10d
  unsigned __int64 v9; // rax
  ULONGLONG v10; // rbx
  unsigned int v11; // ebp
  __int64 SecurityAttribute; // rax
  unsigned __int64 v14; // rdx
  unsigned int *v15; // rdi
  unsigned int *v16; // r14
  unsigned __int64 v17; // rcx
  ULONGLONG pullResult; // [rsp+48h] [rbp+10h] BYREF

  SecurityAttributeValueCopyoutBufferSize = 0;
  pullResult = 0LL;
  if ( !a2 )
  {
    SecurityAttributeValueCopyoutBufferSize = RtlULongLongMult(0x28uLL, *a1, &pullResult);
    if ( SecurityAttributeValueCopyoutBufferSize < 0 )
      return (unsigned int)SecurityAttributeValueCopyoutBufferSize;
    v10 = pullResult + 16;
    if ( pullResult < 0xFFFFFFFFFFFFFFF0uLL )
    {
      v15 = (unsigned int *)*((_QWORD *)a1 + 1);
      v16 = a1 + 2;
      if ( v15 == v16 )
        goto LABEL_20;
      while ( 1 )
      {
        v17 = (v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v17 < v10 || v17 + *((unsigned __int16 *)v15 + 16) < v17 )
          break;
        pullResult = v17 + *((unsigned __int16 *)v15 + 16);
        SecurityAttributeValueCopyoutBufferSize = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v15, &pullResult);
        if ( SecurityAttributeValueCopyoutBufferSize < 0 )
          return (unsigned int)SecurityAttributeValueCopyoutBufferSize;
        v15 = *(unsigned int **)v15;
        v10 = pullResult;
        if ( v15 == v16 )
          goto LABEL_20;
      }
    }
    return (unsigned int)-1073741675;
  }
  pullResult = 0LL;
  v9 = 40LL * a3;
  if ( !is_mul_ok(0x28uLL, a3) )
    return (unsigned int)-1073741675;
  v10 = v9 + 16;
  if ( v9 >= 0xFFFFFFFFFFFFFFF0uLL )
    return (unsigned int)-1073741675;
  v11 = 0;
  if ( !a3 )
  {
LABEL_20:
    *a4 = v10;
    return (unsigned int)SecurityAttributeValueCopyoutBufferSize;
  }
  do
  {
    SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, a2 + 16LL * v11);
    if ( !SecurityAttribute )
      return (unsigned int)-1073741275;
    v14 = (v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v14 < v10 || v14 + *(unsigned __int16 *)(SecurityAttribute + 32) < v14 )
      return (unsigned int)-1073741675;
    pullResult = v14 + *(unsigned __int16 *)(SecurityAttribute + 32);
    SecurityAttributeValueCopyoutBufferSize = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(
                                                SecurityAttribute,
                                                &pullResult);
    if ( SecurityAttributeValueCopyoutBufferSize < 0 )
      return (unsigned int)SecurityAttributeValueCopyoutBufferSize;
    v10 = pullResult;
    ++v11;
  }
  while ( v11 < a3 );
  *a4 = pullResult;
  return (unsigned int)SecurityAttributeValueCopyoutBufferSize;
}
