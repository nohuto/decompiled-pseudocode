/*
 * XREFs of ?ReadTabletButtonConfig@@YGJIQBGPAUtagTABLET_BUTTON_DESK_CONFIG@@@Z @ 0x146BAE
 * Callers:
 *     ?ReadTabletButtonSettings@@YGXXZ @ 0x146F47 (-ReadTabletButtonSettings@@YGXXZ.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPAGIPBGZZ @ 0x7F16E (-RtlStringCchPrintfW@@YAJPAGIPBGZZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __userpurge ReadTabletButtonConfig@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned int a3,
        const unsigned __int16 *const a4,
        struct tagTABLET_BUTTON_DESK_CONFIG *a5)
{
  _DWORD *v6; // esi
  NTSTATUS v8; // ebx
  unsigned int v9; // edi
  NTSTATUS v10; // eax
  int *v11; // edx
  int v12; // eax
  unsigned int v13; // ecx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-290h] BYREF
  struct _UNICODE_STRING ValueName; // [esp+24h] [ebp-278h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+2Ch] [ebp-270h] BYREF
  ULONG ResultLength; // [esp+34h] [ebp-268h] BYREF
  int v18; // [esp+38h] [ebp-264h]
  void *KeyHandle; // [esp+3Ch] [ebp-260h] BYREF
  _DWORD v20[8]; // [esp+40h] [ebp-25Ch]
  PCWSTR v21[8]; // [esp+60h] [ebp-23Ch]
  WCHAR SourceString[266]; // [esp+80h] [ebp-21Ch] BYREF

  v18 = a1;
  KeyHandle = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0;
  ResultLength = 0;
  v6 = (_DWORD *)Win32AllocPool(548, 1984656213);
  if ( !v6 )
    return -1073741801;
  RtlStringCchPrintfW(
    SourceString,
    0x105u,
    L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\TabletPC\\TabletButtons\\%d\\%ws",
    a2,
    v18);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v8 >= 0 )
  {
    v20[0] = a3;
    v20[1] = a3 + 4;
    v20[2] = a3 + 8;
    v20[3] = a3 + 12;
    v20[4] = a3 + 16;
    v20[5] = a3 + 20;
    v20[6] = a3 + 24;
    v20[7] = a3 + 28;
    v9 = 0;
    v21[0] = L"DEFACTION";
    v21[1] = L"DEFACTIONDATA";
    v21[2] = L"DEFHOLDACTION";
    v21[3] = L"DEFHOLDACTIONDATA";
    v21[4] = L"WINLOGONACTION";
    v21[5] = L"WINLOGONACTIONDATA";
    v21[6] = L"WINLOGONHOLDACTION";
    v21[7] = L"WINLOGONHOLDACTIONDATA";
    do
    {
      RtlInitUnicodeString(&ValueName, v21[v9]);
      v10 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v6, 0x224u, &ResultLength);
      v11 = (int *)v20[v9];
      v8 = v10;
      if ( v10 < 0 )
      {
        *v11 = 0;
      }
      else
      {
        v12 = *(_DWORD *)((char *)v6 + v6[2]);
        *v11 = v12;
        v13 = v6[3];
        v18 = v12;
        if ( v13 < 4 )
          *v11 = v18 & ((1 << (8 * v13)) - 1);
      }
      ++v9;
    }
    while ( v9 < 8 );
    ZwClose(KeyHandle);
  }
  Win32FreePool(v6);
  return v8;
}
