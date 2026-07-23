/*
 * XREFs of _RtlOsDeploymentState@4 @ 0x4B369A30
 * Callers:
 *     <none>
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _RtlOsDeploymentState@4 @ 0x4B369A30 (_RtlOsDeploymentState@4.c)
 */

OS_DEPLOYEMENT_STATE_VALUES __cdecl RtlOsDeploymentState(DWORD Flags)
{
  OS_DEPLOYEMENT_STATE_VALUES v1; // esi
  _UNICODE_STRING ValueName; // [esp+10h] [ebp-64h] BYREF
  _UNICODE_STRING DestinationString; // [esp+18h] [ebp-5Ch] BYREF
  ULONG ResultLength; // [esp+20h] [ebp-54h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+24h] [ebp-50h] BYREF
  int v7; // [esp+3Ch] [ebp-38h]
  HANDLE KeyHandle; // [esp+40h] [ebp-34h] BYREF
  _BYTE KeyValueInformation[4]; // [esp+44h] [ebp-30h] BYREF
  int v10; // [esp+48h] [ebp-2Ch]
  int v11; // [esp+4Ch] [ebp-28h]
  int v12; // [esp+50h] [ebp-24h]
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]

  KeyHandle = 0;
  v1 = OS_DEPLOYMENT_STANDARD;
  v7 = 1;
  ms_exc.registration.TryLevel = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"Compact");
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
      && v10 == 4
      && v11 == 4
      && v12 )
    {
      v1 = OS_DEPLOYMENT_COMPACT;
      v7 = 2;
    }
  }
  ms_exc.registration.TryLevel = -2;
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v1;
}
