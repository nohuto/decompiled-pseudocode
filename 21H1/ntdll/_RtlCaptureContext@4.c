/*
 * XREFs of _RtlCaptureContext@4 @ 0x4B308820
 * Callers:
 *     ___report_securityfailure @ 0x4B2F4C46 (___report_securityfailure.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _LdrAppxHandleIntegrityFailure@4 @ 0x4B32C290 (_LdrAppxHandleIntegrityFailure@4.c)
 *     _LdrpLogIntegrityContinuityTelemetry@20 @ 0x4B33057E (_LdrpLogIntegrityContinuityTelemetry@20.c)
 *     _RtlpPossibleDeadlock@4 @ 0x4B34A99E (_RtlpPossibleDeadlock@4.c)
 *     _RtlAssert@16 @ 0x4B34FBC0 (_RtlAssert@16.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlCaptureContext(PCONTEXT ContextRecord)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned int v6; // [esp+0h] [ebp-4h]

  ContextRecord->Eax = v1;
  ContextRecord->Ecx = v3;
  ContextRecord->Edx = v2;
  ContextRecord->Ebx = v6;
  ContextRecord->Esi = v5;
  ContextRecord->Edi = v4;
  JUMPOUT(0x4B308891);
}
