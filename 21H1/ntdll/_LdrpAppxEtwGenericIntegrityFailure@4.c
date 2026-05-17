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

int __thiscall LdrpAppxEtwGenericIntegrityFailure(void *this)
{
  int result; // eax
  int v2; // [esp+8h] [ebp-28h] BYREF
  int v3; // [esp+Ch] [ebp-24h]
  void *v4; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v5[5]; // [esp+18h] [ebp-18h] BYREF

  v4 = this;
  v5[0] = &v4;
  v5[1] = 0;
  v5[2] = 4;
  v5[3] = 0;
  result = EtwEventRegister(AppModelRuntimeProviderId, 0, 0, (int)&v2);
  if ( !result )
  {
    EtwEventWrite(v2, v3, AppModelGenericLibraryLoadFailureNoTermination, 1, (int)v5);
    return EtwNotificationUnregister(v2, v3, 0);
  }
  return result;
}
