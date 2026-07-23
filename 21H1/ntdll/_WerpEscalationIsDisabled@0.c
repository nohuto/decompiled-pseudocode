/*
 * XREFs of _WerpEscalationIsDisabled@0 @ 0x4B33BB2C
 * Callers:
 *     _WerEscalationLazyInit@0 @ 0x4B33B780 (_WerEscalationLazyInit@0.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _WerpEscalationReadUlongFromKey@12 @ 0x4B33BC30 (_WerpEscalationReadUlongFromKey@12.c)
 */

BOOL __stdcall WerpEscalationIsDisabled()
{
  int v0; // esi
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-28h] BYREF
  _UNICODE_STRING DestinationString; // [esp+20h] [ebp-10h] BYREF
  int v4; // [esp+28h] [ebp-8h] BYREF
  HANDLE KeyHandle; // [esp+2Ch] [ebp-4h] BYREF

  v0 = 0;
  KeyHandle = 0;
  v4 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Windows Error Reporting\\Escalation");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0
    && WerpEscalationReadUlongFromKey(KeyHandle, L"DisableEscalation", (int)&v4) >= 0 )
  {
    v0 = v4;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v0 != 0;
}
