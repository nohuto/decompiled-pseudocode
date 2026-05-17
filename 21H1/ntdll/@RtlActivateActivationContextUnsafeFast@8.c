/*
 * XREFs of @RtlActivateActivationContextUnsafeFast@8 @ 0x4B2CDC10
 * Callers:
 *     _RtlDispatchAPC@12 @ 0x4B2ABFD0 (_RtlDispatchAPC@12.c)
 *     _TppCleanupGroupMemberCallbackProlog@8 @ 0x4B2B6FC7 (_TppCleanupGroupMemberCallbackProlog@8.c)
 *     _LdrpQuerySxSMUIFile@20 @ 0x4B2B9006 (_LdrpQuerySxSMUIFile@20.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _LdrpInitializeThread@4 @ 0x4B2CDA29 (_LdrpInitializeThread@4.c)
 *     _LdrpLoadForwardedDll@24 @ 0x4B2CE9C0 (_LdrpLoadForwardedDll@24.c)
 *     _LdrShutdownThread@0 @ 0x4B2CF610 (_LdrShutdownThread@0.c)
 *     _LdrpInitializeNode@4 @ 0x4B2D16BE (_LdrpInitializeNode@4.c)
 *     _LdrpProcessDetachNode@4 @ 0x4B2DA4B3 (_LdrpProcessDetachNode@4.c)
 *     _LdrShutdownProcess@0 @ 0x4B2DD6A0 (_LdrShutdownProcess@0.c)
 *     _RtlpTpWorkCallback@8 @ 0x4B2E9340 (_RtlpTpWorkCallback@8.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 */

_RTL_ACTIVATION_CONTEXT_STACK_FRAME *__fastcall RtlActivateActivationContextUnsafeFast(_DWORD *a1, int a2)
{
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // edi
  unsigned int ActiveFrame; // edx
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *result; // eax
  EXCEPTION_RECORD ExceptionRecord; // [esp+8h] [ebp-58h] BYREF
  _UNKNOWN *retaddr; // [esp+64h] [ebp+4h]

  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned int)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0;
  if ( *a1 >= 0x24u )
  {
    a1[5] = ~ActiveFrame;
    a1[6] = ~a2;
    a1[7] = retaddr;
  }
  if ( ActiveFrame )
  {
    if ( (*(_DWORD *)(ActiveFrame + 8) & 0x70) != 0x20 )
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
  }
  a1[2] = ActiveFrame;
  result = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)(a1 + 2);
  a1[3] = a2;
  a1[4] = 32;
  if ( ActiveFrame )
  {
    if ( *(_DWORD *)(ActiveFrame + 4) == a2 )
      goto LABEL_8;
  }
  else if ( !a2 )
  {
LABEL_8:
    a1[4] = 48;
    return result;
  }
  ActivationContextStackPointer->ActiveFrame = result;
  return result;
}
