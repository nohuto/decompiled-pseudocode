/*
 * XREFs of LdrpAppxEtwIntegrityFailure @ 0x1800CB788
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB4F0 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     EtwEventRegister @ 0x180042E70 (EtwEventRegister.c)
 *     EtwEventWrite @ 0x18004F1A0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x180050390 (EtwNotificationUnregister.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

NTSTATUS __fastcall LdrpAppxEtwIntegrityFailure(int a1, unsigned __int64 a2, __int64 a3)
{
  const EVENT_DESCRIPTOR *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  NTSTATUS result; // eax
  ULONGLONG RegHandle; // [rsp+20h] [rbp-40h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-38h] BYREF
  int *v9; // [rsp+38h] [rbp-28h]
  __int64 v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+48h] [rbp-18h]
  int v12; // [rsp+50h] [rbp-10h]
  int v13; // [rsp+54h] [rbp-Ch]
  int v14; // [rsp+70h] [rbp+10h] BYREF

  v14 = a1;
  if ( a1 == -1073740673 )
  {
    v3 = &AppModelLibraryLoadFailureNgenBinary;
  }
  else
  {
    v3 = (const EVENT_DESCRIPTOR *)&AppModelLibraryLoadFailureSystemBinary;
    if ( a1 != -1073740674 )
      v3 = (const EVENT_DESCRIPTOR *)&AppModelLibraryLoadFailureApplicationBinary;
  }
  v4 = -1LL;
  UserData.Ptr = a2;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a2 + 2 * v5) );
  UserData.Reserved = 0;
  UserData.Size = 2 * v5 + 2;
  v9 = &v14;
  v10 = 4LL;
  v11 = a3;
  do
    ++v4;
  while ( *(_WORD *)(a3 + 2 * v4) );
  v13 = 0;
  v12 = 2 * v4 + 2;
  result = EtwEventRegister(&AppModelRuntimeProviderId, 0LL, 0LL, &RegHandle);
  if ( !result )
  {
    EtwEventWrite(RegHandle, v3, 3u, &UserData);
    return EtwNotificationUnregister(RegHandle, 0LL);
  }
  return result;
}
