/*
 * XREFs of _LdrpAppxEtwIntegrityFailure@12 @ 0x4B32C4D5
 * Callers:
 *     _LdrAppxHandleIntegrityFailure@4 @ 0x4B32C290 (_LdrAppxHandleIntegrityFailure@4.c)
 * Callees:
 *     _EtwEventRegister@16 @ 0x4B2AE0A0 (_EtwEventRegister@16.c)
 *     _EtwNotificationUnregister@12 @ 0x4B2D99D0 (_EtwNotificationUnregister@12.c)
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall LdrpAppxEtwIntegrityFailure(int a1, const unsigned __int16 *a2, const unsigned __int16 *a3)
{
  int *v3; // esi
  int result; // eax
  int v5; // [esp+10h] [ebp-48h] BYREF
  int v6; // [esp+14h] [ebp-44h]
  int v7; // [esp+1Ch] [ebp-3Ch] BYREF
  _DWORD v8[13]; // [esp+20h] [ebp-38h] BYREF

  v7 = a1;
  if ( a1 == -1073740673 )
  {
    v3 = AppModelLibraryLoadFailureNgenBinary;
  }
  else
  {
    v3 = AppModelLibraryLoadFailureSystemBinary;
    if ( a1 != -1073740674 )
      v3 = AppModelLibraryLoadFailureApplicationBinary;
  }
  v8[0] = a2;
  v8[1] = 0;
  v8[3] = 0;
  v8[5] = 0;
  v8[6] = 4;
  v8[2] = 2 * wcslen(a2) + 2;
  v8[7] = 0;
  v8[4] = &v7;
  v8[8] = a3;
  v8[9] = 0;
  v8[11] = 0;
  v8[10] = 2 * wcslen(a3) + 2;
  result = EtwEventRegister(AppModelRuntimeProviderId, 0, 0, (int)&v5);
  if ( !result )
  {
    EtwEventWrite(v5, v6, v3, 3, (int)v8);
    return EtwNotificationUnregister(v5, v6, 0);
  }
  return result;
}
