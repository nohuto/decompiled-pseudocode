/*
 * XREFs of ?ReadTabletButtonIndex@@YGJIPAK@Z @ 0x146DD6
 * Callers:
 *     ?ReadTabletButtonSettings@@YGXXZ @ 0x146F47 (-ReadTabletButtonSettings@@YGXXZ.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPAGIPBGZZ @ 0x7F16E (-RtlStringCchPrintfW@@YAJPAGIPBGZZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall ReadTabletButtonIndex(int a1, _DWORD *a2)
{
  _DWORD *v4; // esi
  NTSTATUS v6; // edi
  unsigned int v7; // ecx
  int v8; // edx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-248h] BYREF
  struct _UNICODE_STRING ValueName; // [esp+28h] [ebp-230h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+30h] [ebp-228h] BYREF
  ULONG ResultLength; // [esp+38h] [ebp-220h] BYREF
  void *KeyHandle; // [esp+3Ch] [ebp-21Ch] BYREF
  WCHAR SourceString[266]; // [esp+40h] [ebp-218h] BYREF

  KeyHandle = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0;
  ResultLength = 0;
  *a2 = 0;
  v4 = (_DWORD *)Win32AllocPool(548, 1984656213);
  if ( !v4 )
    return -1073741801;
  RtlStringCchPrintfW(
    SourceString,
    0x105u,
    L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\TabletPC\\TabletButtons\\%d",
    a1);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"ButtonId");
    v6 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v4, 0x224u, &ResultLength);
    if ( v6 < 0 || v4[3] != 4 || (v7 = *(_DWORD *)((char *)v4 + v4[2]), ((v7 - 1) & v7) != 0) || v7 - 1 > 0x3FE )
    {
      v6 = -1073741492;
    }
    else
    {
      do
      {
        v7 >>= 1;
        v8 = (*a2)++;
      }
      while ( v7 );
      *a2 = v8;
    }
    ZwClose(KeyHandle);
  }
  Win32FreePool(v4);
  return v6;
}
