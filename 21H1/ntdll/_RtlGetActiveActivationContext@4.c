/*
 * XREFs of _RtlGetActiveActivationContext@4 @ 0x4B2E6750
 * Callers:
 *     _LdrpAllocateModuleEntry@4 @ 0x4B2D0962 (_LdrpAllocateModuleEntry@4.c)
 * Callees:
 *     _RtlAddRefActivationContext@4 @ 0x4B2B5090 (_RtlAddRefActivationContext@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 */

NTSTATUS __cdecl RtlGetActiveActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // ecx
  unsigned int ActiveFrame; // esi
  EXCEPTION_RECORD ExceptionRecord; // [esp+8h] [ebp-5Ch] BYREF

  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( !ActivationContext )
    return -1073741811;
  ActivationContext->RefCount = 0;
  if ( ActivationContextStackPointer )
  {
    ActiveFrame = (unsigned int)ActivationContextStackPointer->ActiveFrame;
    if ( ActivationContextStackPointer->ActiveFrame )
    {
      if ( (*(_DWORD *)(ActiveFrame + 8) & 0x70) != 0x20
        || (*(_BYTE *)(ActiveFrame + 8) & 8) == 0
        && *(_DWORD *)(ActiveFrame - 8) >= 0x24u
        && (*(_DWORD *)(ActiveFrame + 12) != ~*(_DWORD *)ActiveFrame
         || *(_DWORD *)(ActiveFrame + 16) != ~*(_DWORD *)(ActiveFrame + 4)) )
      {
        ExceptionRecord.ExceptionRecord = 0;
        ExceptionRecord.NumberParameters = 4;
        ExceptionRecord.ExceptionInformation[0] = (unsigned int)ActivationContextStackPointer;
        ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
        ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
        ExceptionRecord.ExceptionInformation[3] = *(_DWORD *)(ActiveFrame + 8);
        ExceptionRecord.ExceptionCode = -1072365548;
        ExceptionRecord.ExceptionFlags = 1;
        RtlRaiseException(&ExceptionRecord);
      }
      RtlAddRefActivationContext(*(PACTIVATION_CONTEXT *)(ActiveFrame + 4));
      ActivationContext->RefCount = *(_DWORD *)(ActiveFrame + 4);
    }
  }
  return 0;
}
