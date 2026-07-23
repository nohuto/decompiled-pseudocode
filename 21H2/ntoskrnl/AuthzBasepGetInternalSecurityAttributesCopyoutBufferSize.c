/*
 * XREFs of AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize @ 0x1406CBD50
 * Callers:
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x1406CBCC4 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize @ 0x1402A7314 (AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize.c)
 */

__int64 __fastcall AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize(unsigned int *a1, unsigned int *a2)
{
  unsigned __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int InternalSecurityAttributeValueCopyoutBufferSize; // edx
  unsigned int *v8; // rsi
  __int64 v9; // rbx
  unsigned int v10; // r8d
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v14; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && a2 )
  {
    v4 = 112LL * *a1;
    if ( v4 > 0xFFFFFFFF )
    {
      return (unsigned int)-1073741675;
    }
    else
    {
      v5 = v4 + 48;
      v6 = -1;
      if ( v5 >= 0x30 )
        v6 = v5;
      InternalSecurityAttributeValueCopyoutBufferSize = v5 < 0x30 ? 0xC0000095 : 0;
      if ( v5 >= 0x30 )
      {
        v8 = a1 + 2;
        v9 = *((_QWORD *)a1 + 1);
        while ( (unsigned int *)v9 != v8 )
        {
          v10 = (v6 + 1) & 0xFFFFFFFE;
          if ( v10 < v6 )
            return (unsigned int)-1073741675;
          v11 = -1;
          v12 = v10 + *(unsigned __int16 *)(v9 + 32);
          if ( v12 >= v10 )
            v11 = v10 + *(unsigned __int16 *)(v9 + 32);
          InternalSecurityAttributeValueCopyoutBufferSize = v12 < v10 ? 0xC0000095 : 0;
          v14 = v11;
          if ( v12 < v10 )
            return InternalSecurityAttributeValueCopyoutBufferSize;
          InternalSecurityAttributeValueCopyoutBufferSize = AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize(
                                                              v9,
                                                              &v14);
          if ( (InternalSecurityAttributeValueCopyoutBufferSize & 0x80000000) != 0 )
            return InternalSecurityAttributeValueCopyoutBufferSize;
          v9 = *(_QWORD *)v9;
          v6 = v14;
        }
        *a2 = v6;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return InternalSecurityAttributeValueCopyoutBufferSize;
}
