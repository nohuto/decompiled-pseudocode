/*
 * XREFs of _RtlActivateActivationContextEx@16 @ 0x4B2E3500
 * Callers:
 *     _RtlActivateActivationContext@12 @ 0x4B2E34B0 (_RtlActivateActivationContext@12.c)
 * Callees:
 *     _RtlAddRefActivationContext@4 @ 0x4B2B5090 (_RtlAddRefActivationContext@4.c)
 *     _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0 (_RtlCaptureStackBackTrace@16.c)
 *     _RtlpAllocateActivationContextStackFrame@12 @ 0x4B2E35DF (_RtlpAllocateActivationContextStackFrame@12.c)
 */

NTSTATUS __cdecl RtlActivateActivationContextEx(
        ULONG Flags,
        PTEB Teb,
        PACTIVATION_CONTEXT ActivationContext,
        PULONG_PTR Cookie)
{
  _ACTIVATION_CONTEXT *v4; // esi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // edi
  NTSTATUS result; // eax
  ULONG v7; // ebx
  unsigned int v8; // eax
  unsigned int NextCookieSequenceNumber; // ecx
  int v10; // edx
  ULONG BackTraceHash; // [esp+4h] [ebp-4h] BYREF

  if ( Cookie )
    *(_DWORD *)Cookie = 0;
  v4 = ActivationContext;
  if ( ActivationContext == (PACTIVATION_CONTEXT)-3 )
    v4 = (_ACTIVATION_CONTEXT *)dword_4B28120C;
  if ( (Flags & 0xFFFFFFFE) != 0 || !Teb || v4 == (_ACTIVATION_CONTEXT *)-1 || !Cookie )
    return -1073741811;
  ActivationContextStackPointer = Teb->ActivationContextStackPointer;
  result = RtlpAllocateActivationContextStackFrame(&BackTraceHash);
  if ( result >= 0 )
  {
    v7 = BackTraceHash;
    *(_DWORD *)(BackTraceHash + 8) = 40;
    if ( (Flags & 1) != 0 )
    {
      *(_DWORD *)(v7 + 8) = 43;
      RtlAddRefActivationContext(v4);
    }
    if ( RtlpCaptureActivationContextActivationStacks )
      v8 = RtlCaptureStackBackTrace(2u, 8u, (PVOID *)(v7 + 16), &BackTraceHash);
    else
      v8 = 0;
    if ( v8 < 8 )
      memset((void *)(v7 + 16 + 4 * v8), 0, 4 * (8 - v8));
    *(_DWORD *)v7 = ActivationContextStackPointer->ActiveFrame;
    *(_DWORD *)(v7 + 4) = v4;
    NextCookieSequenceNumber = ActivationContextStackPointer->NextCookieSequenceNumber;
    v10 = (unsigned __int16)NextCookieSequenceNumber | ((ActivationContextStackPointer->StackId & 0xFFF | 0x1000) << 16);
    ActivationContextStackPointer->NextCookieSequenceNumber = NextCookieSequenceNumber + 1;
    *(_DWORD *)(v7 + 12) = v10;
    *(_DWORD *)Cookie = v10;
    result = 0;
    ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)v7;
  }
  return result;
}
