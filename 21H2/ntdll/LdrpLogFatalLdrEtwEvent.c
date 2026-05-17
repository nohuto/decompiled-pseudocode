/*
 * XREFs of LdrpLogFatalLdrEtwEvent @ 0x1800CF428
 * Callers:
 *     LdrpInitializationFailure @ 0x1800D0B38 (LdrpInitializationFailure.c)
 *     LdrpGenericExceptionFilter @ 0x1800D558C (LdrpGenericExceptionFilter.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     EtwEventWriteNoRegistration @ 0x180061ED0 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     memmove @ 0x1800A44C0 (memmove.c)
 */

_WORD *__fastcall LdrpLogFatalLdrEtwEvent(unsigned __int16 *a1, __int128 *a2)
{
  const void **v2; // rdi
  __int64 v4; // rdx
  _WORD *v6; // rbx
  _WORD *result; // rax
  _WORD *v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+2Ch] [rbp-2Ch]

  v2 = (const void **)(a1 + 4);
  v4 = *a1;
  if ( v4 + 2 > (unsigned __int64)a1[1] || (v6 = *v2, *((_WORD *)*v2 + ((unsigned __int64)*a1 >> 1))) )
  {
    result = (_WORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v4 + 2);
    v6 = result;
    if ( !result )
      return result;
    memmove(result, *v2, *a1);
    v6[(unsigned __int64)*a1 >> 1] = 0;
    LOWORD(v4) = *a1;
  }
  v8 = v6;
  v9 = (unsigned __int16)v4 + 2;
  v10 = 0;
  result = (_WORD *)EtwEventWriteNoRegistration((__int64)&UserLoaderGuid, a2, 1, (__int64)&v8);
  if ( v6 != *v2 )
    return (_WORD *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v6);
  return result;
}
