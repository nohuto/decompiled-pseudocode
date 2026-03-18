/*
 * XREFs of AlpcpCaptureSecurityAttributeInternal @ 0x1407A817C
 * Callers:
 *     AlpcpCaptureSecurityAttribute32 @ 0x1406B778C (AlpcpCaptureSecurityAttribute32.c)
 *     AlpcpCaptureSecurityAttribute @ 0x1407A80A0 (AlpcpCaptureSecurityAttribute.c)
 * Callees:
 *     AlpcpDeleteBlob @ 0x1407A59D8 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSecurityContext @ 0x1407A74A4 (AlpcpCreateSecurityContext.c)
 *     AlpcReferenceBlobByHandle @ 0x1407A7EB0 (AlpcReferenceBlobByHandle.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttributeInternal(
        volatile signed __int64 *Object,
        int a2,
        struct _SECURITY_QUALITY_OF_SERVICE *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v8; // rcx
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // rbx
  __int64 result; // rax
  char v12; // di
  __int64 v13; // rdx
  ULONG_PTR v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v14[0] = 0LL;
  if ( (a2 & 0xFFFCFFFF) != 0 || (a2 & 0x30000) == 0x30000 )
    return 3221225485LL;
  if ( *a4 != -2LL )
  {
    v8 = *((_QWORD *)Object + 2);
    if ( v8 )
    {
      v9 = AlpcReferenceBlobByHandle((_QWORD *)(v8 + 40), *a4, AlpcSecurityType);
      v10 = v9;
      if ( v9 )
      {
        if ( Object == *(volatile signed __int64 **)(v9 + 24) )
        {
          if ( (a2 & 0x10000) != 0 )
          {
            if ( AlpcpDeleteBlob(v9) )
              AlpcpDereferenceBlobEx(v10, 1);
            AlpcpDereferenceBlobEx(v10, 1);
            v10 = 0LL;
          }
          *(_QWORD *)(a5 + 32) = v10;
          return 0LL;
        }
        else
        {
          AlpcpDereferenceBlobEx(v9, 1);
          return 3221225506LL;
        }
      }
    }
    return 3221225480LL;
  }
  if ( (a2 & 0x20000) != 0 )
  {
    v12 = 1;
  }
  else
  {
    if ( (a2 & 0x10000) != 0 )
      return 3221225480LL;
    v12 = 0;
  }
  result = AlpcpCreateSecurityContext(Object, KeGetCurrentThread(), v12, a3, v14);
  if ( (int)result >= 0 )
  {
    v13 = v14[0];
    *(_QWORD *)(a5 + 32) = v14[0];
    if ( v12 )
      *a4 = *(_QWORD *)(v13 + 8);
  }
  return result;
}
