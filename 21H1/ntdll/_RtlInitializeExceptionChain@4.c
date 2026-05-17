/*
 * XREFs of _RtlInitializeExceptionChain@4 @ 0x4B2E7A60
 * Callers:
 *     __RtlUserThreadStart@8 @ 0x4B2E7A03 (__RtlUserThreadStart@8.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlInitializeExceptionChain(_EXCEPTION_REGISTRATION_RECORD *a1)
{
  struct _TEB *v1; // ecx
  int result; // eax

  if ( RtlpProcessECVPolicy != 1 )
  {
    v1 = NtCurrentTeb();
    result = RtlpFinalExceptionHandler;
    a1->Next = (_EXCEPTION_REGISTRATION_RECORD *)-1;
    a1->Handler = (_EXCEPTION_DISPOSITION (__stdcall *)(_EXCEPTION_RECORD *, void *, _CONTEXT *, void *))result;
    if ( v1->NtTib.ExceptionList == (_EXCEPTION_REGISTRATION_RECORD *)-1 )
    {
      result = 512;
      v1->NtTib.ExceptionList = a1;
      v1->SameTebFlags |= 0x200u;
    }
  }
  return result;
}
