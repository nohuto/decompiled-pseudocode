/*
 * XREFs of AlpcpCaptureSecurityAttribute @ 0x1406104CC
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14060EA80 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1406105A4 (AlpcpCaptureSecurityAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttribute(void *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp-30h]

  if ( !KeGetCurrentThread()->PreviousMode )
    return AlpcpCaptureSecurityAttributeInternal(a1, a3);
  v5 = *(_QWORD *)(a2 + 16);
  result = AlpcpCaptureSecurityAttributeInternal(a1, a3);
  if ( (int)result >= 0 )
    *(_QWORD *)(a2 + 16) = v5;
  return result;
}
