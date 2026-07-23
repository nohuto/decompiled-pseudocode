/*
 * XREFs of _LdrpAppxEtwGenericIntegrityFailure@4 @ 0x4B32C454
 * Callers:
 *     _LdrAppxHandleIntegrityFailure@4 @ 0x4B32C290 (_LdrAppxHandleIntegrityFailure@4.c)
 * Callees:
 *     _EtwEventRegister@16 @ 0x4B2AE0A0 (_EtwEventRegister@16.c)
 *     _EtwNotificationUnregister@12 @ 0x4B2D99D0 (_EtwNotificationUnregister@12.c)
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall LdrpAppxEtwGenericIntegrityFailure(int a1)
{
  NTSTATUS result; // eax
  ULONGLONG RegHandle; // [esp+8h] [ebp-28h] BYREF
  int v3; // [esp+14h] [ebp-1Ch] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+18h] [ebp-18h] BYREF

  v3 = a1;
  UserData.Ptr = (unsigned int)&v3;
  UserData.Size = 4;
  UserData.Reserved = 0;
  result = EtwEventRegister(&AppModelRuntimeProviderId, 0, 0, &RegHandle);
  if ( !result )
  {
    EtwEventWrite(RegHandle, &AppModelGenericLibraryLoadFailureNoTermination, 1u, &UserData);
    return EtwNotificationUnregister(RegHandle, 0);
  }
  return result;
}
