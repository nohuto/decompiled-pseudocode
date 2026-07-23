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

NTSTATUS __fastcall LdrpAppxEtwIntegrityFailure(int a1, const unsigned __int16 *a2, const unsigned __int16 *a3)
{
  const EVENT_DESCRIPTOR *v3; // esi
  NTSTATUS result; // eax
  ULONGLONG RegHandle; // [esp+10h] [ebp-48h] BYREF
  int v6; // [esp+1Ch] [ebp-3Ch] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+20h] [ebp-38h] BYREF
  int *v8; // [esp+30h] [ebp-28h]
  int v9; // [esp+34h] [ebp-24h]
  int v10; // [esp+38h] [ebp-20h]
  int v11; // [esp+3Ch] [ebp-1Ch]
  const unsigned __int16 *v12; // [esp+40h] [ebp-18h]
  int v13; // [esp+44h] [ebp-14h]
  unsigned int v14; // [esp+48h] [ebp-10h]
  int v15; // [esp+4Ch] [ebp-Ch]

  v6 = a1;
  if ( a1 == -1073740673 )
  {
    v3 = &AppModelLibraryLoadFailureNgenBinary;
  }
  else
  {
    v3 = (const EVENT_DESCRIPTOR *)AppModelLibraryLoadFailureSystemBinary;
    if ( a1 != -1073740674 )
      v3 = (const EVENT_DESCRIPTOR *)AppModelLibraryLoadFailureApplicationBinary;
  }
  UserData.Ptr = (unsigned int)a2;
  UserData.Reserved = 0;
  v9 = 0;
  v10 = 4;
  UserData.Size = 2 * wcslen(a2) + 2;
  v11 = 0;
  v8 = &v6;
  v12 = a3;
  v13 = 0;
  v15 = 0;
  v14 = 2 * wcslen(a3) + 2;
  result = EtwEventRegister(&AppModelRuntimeProviderId, 0, 0, &RegHandle);
  if ( !result )
  {
    EtwEventWrite(RegHandle, v3, 3u, &UserData);
    return EtwNotificationUnregister(RegHandle, 0);
  }
  return result;
}
