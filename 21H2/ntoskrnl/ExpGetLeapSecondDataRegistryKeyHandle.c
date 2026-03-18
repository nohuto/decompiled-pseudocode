/*
 * XREFs of ExpGetLeapSecondDataRegistryKeyHandle @ 0x1408583D0
 * Callers:
 *     ExpReadLeapSecondData @ 0x140857F38 (ExpReadLeapSecondData.c)
 *     ExSetLeapSecondEnabled @ 0x1409F7BE8 (ExSetLeapSecondEnabled.c)
 * Callees:
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 */

NTSTATUS __fastcall ExpGetLeapSecondDataRegistryKeyHandle(HANDLE *a1)
{
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&ExpLeapSecondRegkeyPath;
  ObjectAttributes.Attributes = 576;
  result = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
    *a1 = KeyHandle;
  return result;
}
