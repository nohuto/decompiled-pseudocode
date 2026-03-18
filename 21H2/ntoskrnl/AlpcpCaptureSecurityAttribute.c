/*
 * XREFs of AlpcpCaptureSecurityAttribute @ 0x1407A80A0
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1407AB790 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1407A817C (AlpcpCaptureSecurityAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttribute(PVOID Object, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  PVOID Objecta; // [rsp+78h] [rbp+20h]

  if ( !KeGetCurrentThread()->PreviousMode )
    return AlpcpCaptureSecurityAttributeInternal(Object, a3);
  Objecta = *(PVOID *)(a2 + 16);
  result = AlpcpCaptureSecurityAttributeInternal(Object, a3);
  if ( (int)result >= 0 )
    *(_QWORD *)(a2 + 16) = Objecta;
  return result;
}
