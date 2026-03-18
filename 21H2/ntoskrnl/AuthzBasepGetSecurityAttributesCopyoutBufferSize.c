/*
 * XREFs of AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x140300720
 * Callers:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403005E0 (AuthzBasepQuerySecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x140234F78 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1403008B0 (AuthzBasepFindSecurityAttribute.c)
 */

__int64 __fastcall AuthzBasepGetSecurityAttributesCopyoutBufferSize(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  int SecurityAttributeValueCopyoutBufferSize; // r8d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned int v11; // ebp
  __int64 SecurityAttribute; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  unsigned int *v16; // r14
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // [rsp+48h] [rbp+10h] BYREF

  SecurityAttributeValueCopyoutBufferSize = 0;
  v19 = 0LL;
  if ( !a2 )
  {
    v14 = 40LL * *a1;
    if ( is_mul_ok(0x28uLL, *a1) )
    {
      v10 = v14 + 16;
      if ( v14 < 0xFFFFFFFFFFFFFFF0uLL )
      {
        v15 = *((_QWORD *)a1 + 1);
        v16 = a1 + 2;
        if ( (unsigned int *)v15 == a1 + 2 )
          goto LABEL_15;
        while ( 1 )
        {
          v17 = (v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v17 < v10 || v17 + *(unsigned __int16 *)(v15 + 32) < v17 )
            break;
          v19 = v17 + *(unsigned __int16 *)(v15 + 32);
          SecurityAttributeValueCopyoutBufferSize = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v15, &v19);
          if ( SecurityAttributeValueCopyoutBufferSize < 0 )
            return (unsigned int)SecurityAttributeValueCopyoutBufferSize;
          v15 = *(_QWORD *)v15;
          v10 = v19;
          if ( (unsigned int *)v15 == v16 )
            goto LABEL_15;
        }
      }
    }
    return (unsigned int)-1073741675;
  }
  v9 = 40LL * a3;
  if ( !is_mul_ok(0x28uLL, a3) )
    return (unsigned int)-1073741675;
  v10 = v9 + 16;
  if ( v9 >= 0xFFFFFFFFFFFFFFF0uLL )
    return (unsigned int)-1073741675;
  v11 = 0;
  if ( !a3 )
  {
LABEL_15:
    *a4 = v10;
    return (unsigned int)SecurityAttributeValueCopyoutBufferSize;
  }
  while ( 1 )
  {
    SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, a2 + 16LL * v11);
    if ( !SecurityAttribute )
      return (unsigned int)-1073741275;
    v18 = (v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v18 < v10 || v18 + *(unsigned __int16 *)(SecurityAttribute + 32) < v18 )
      return (unsigned int)-1073741675;
    v19 = v18 + *(unsigned __int16 *)(SecurityAttribute + 32);
    SecurityAttributeValueCopyoutBufferSize = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(
                                                SecurityAttribute,
                                                &v19);
    if ( SecurityAttributeValueCopyoutBufferSize < 0 )
      return (unsigned int)SecurityAttributeValueCopyoutBufferSize;
    v10 = v19;
    if ( ++v11 >= a3 )
      goto LABEL_15;
  }
}
