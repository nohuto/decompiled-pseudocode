/*
 * XREFs of CmpCreateHwProfileFriendlyName @ 0x140874470
 * Callers:
 *     CmpCloneHwProfile @ 0x140873CB4 (CmpCloneHwProfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403D32F0 (swprintf_s.c)
 *     wcscpy_s @ 0x1403D4C70 (wcscpy_s.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F38A0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1403F41C0 (ZwSetValueKey.c)
 *     KeGetBugMessageText @ 0x140512654 (KeGetBugMessageText.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063D070 (RtlAnsiStringToUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x140642DF0 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 */

__int64 __fastcall CmpCreateHwProfileFriendlyName(void *a1, char a2, unsigned int a3, UNICODE_STRING *a4)
{
  unsigned int v8; // edi
  const WCHAR *v9; // rdx
  unsigned __int16 v10; // cx
  wchar_t *Buffer; // rsi
  NTSTATUS v12; // ebx
  int v13; // ecx
  ULONG Length[2]; // [rsp+20h] [rbp-E0h]
  unsigned int Data; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  ANSI_STRING SourceString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v21; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  wchar_t Dst[80]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD KeyValueInformation[64]; // [rsp+160h] [rbp+60h] BYREF

  ResultLength = 0;
  Data = 0;
  KeyHandle = 0LL;
  SourceString = 0LL;
  UnicodeString = 0LL;
  DestinationString = 0LL;
  v21 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( !a4 )
    return 3221225485LL;
  if ( a1 )
  {
    if ( (a2 & 3) == 3 )
      goto LABEL_9;
    if ( (a2 & 2) != 0 )
    {
      v8 = 1073807362;
      v9 = L"Docked";
      goto LABEL_10;
    }
    if ( (a2 & 1) == 0 )
    {
LABEL_9:
      v8 = 1073807363;
      v9 = L"Unknown";
    }
    else
    {
      v8 = 1073807361;
      v9 = L"Undocked";
    }
LABEL_10:
    RtlInitUnicodeString(&DestinationString, v9);
    if ( KeGetBugMessageText(v8, (__int64)&SourceString)
      && RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
    {
      v10 = UnicodeString.Length;
      Buffer = UnicodeString.Buffer;
      if ( UnicodeString.Length > 4u )
      {
        v10 = UnicodeString.Length - 4;
        UnicodeString.Length = v10;
        UnicodeString.Buffer[(unsigned __int64)v10 >> 1] = 0;
      }
      if ( (unsigned __int64)v10 + 12 <= 0xA0 )
      {
        RtlInitUnicodeString(&v21, L"Hardware Profiles");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v21;
        ObjectAttributes.RootDirectory = a1;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v12 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        if ( v12 >= 0 )
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) >= 0
            && KeyValueInformation[1] == 4 )
          {
            v13 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]) + 1;
          }
          else
          {
            v13 = 1;
          }
          Data = v13;
          v12 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
          if ( v12 >= 0 )
          {
            if ( v8 == 1073807363 || Data > 1 )
            {
              Length[0] = Data;
              swprintf_s(Dst, 0x50uLL, L"%s %u", Buffer, *(_QWORD *)Length);
            }
            else
            {
              wcscpy_s(Dst, 0x50uLL, Buffer);
            }
          }
        }
        else
        {
          KeyHandle = 0LL;
        }
      }
      else
      {
        v12 = -1073741823;
      }
      RtlFreeAnsiString(&UnicodeString);
      if ( KeyHandle )
        ZwClose(KeyHandle);
      if ( v12 >= 0 )
        goto LABEL_31;
    }
  }
  Dst[0] = 0;
  swprintf_s(Dst, 0x50uLL, L"%04d", a3);
  v12 = 0;
LABEL_31:
  if ( !RtlCreateUnicodeString(a4, Dst) )
    return (unsigned int)-1073741823;
  return (unsigned int)v12;
}
