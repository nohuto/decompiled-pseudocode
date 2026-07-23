/*
 * XREFs of @RtlpOpenBaseImageFileOptionsKeyEx@12 @ 0x4B2E5F7F
 * Callers:
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 *     @RtlpOpenBaseImageFileOptionsKey@4 @ 0x4B2E5F35 (@RtlpOpenBaseImageFileOptionsKey@4.c)
 * Callees:
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwCreateKey@28 @ 0x4B2F2B50 (_ZwCreateKey@28.c)
 */

NTSTATUS __fastcall RtlpOpenBaseImageFileOptionsKeyEx(HANDLE *a1, ACCESS_MASK a2, char a3)
{
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+4h] [ebp-20h] BYREF
  HANDLE KeyHandle[2]; // [esp+1Ch] [ebp-8h] BYREF

  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&dword_4B281360;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( a3 )
    result = ZwCreateKey(KeyHandle, a2, &ObjectAttributes, 0, 0, 0, 0);
  else
    result = ZwOpenKey(KeyHandle, a2, &ObjectAttributes);
  if ( result >= 0 )
  {
    *a1 = KeyHandle[0];
    return 0;
  }
  return result;
}
