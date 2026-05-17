/*
 * XREFs of LdrpAppxEtwGenericIntegrityFailure @ 0x1800CB700
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB4F0 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     EtwEventRegister @ 0x180042E70 (EtwEventRegister.c)
 *     EtwEventWrite @ 0x18004F1A0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x180050390 (EtwNotificationUnregister.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpAppxEtwGenericIntegrityFailure(int a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int *v5; // [rsp+28h] [rbp-20h] BYREF
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+34h] [rbp-14h]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = a1;
  v7 = 0;
  v5 = &v8;
  v6 = 4;
  result = EtwEventRegister((int)&AppModelRuntimeProviderId, 0LL, 0LL, (__int64)&v4);
  if ( !(_DWORD)result )
  {
    EtwEventWrite(v4, (int)&AppModelGenericLibraryLoadFailureNoTermination, 1, (__int64)&v5);
    return EtwNotificationUnregister(v4, 0LL, v2, v3);
  }
  return result;
}
