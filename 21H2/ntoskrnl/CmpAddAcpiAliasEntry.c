/*
 * XREFs of CmpAddAcpiAliasEntry @ 0x14087706C
 * Callers:
 *     CmSetAcpiHwProfile @ 0x1407A5B08 (CmSetAcpiHwProfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x1403D6A60 (swprintf_s.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 */

__int64 __fastcall CmpAddAcpiAliasEntry(
        void *a1,
        unsigned __int16 *a2,
        int a3,
        wchar_t *a4,
        ULONG Disposition,
        HANDLE KeyHandle,
        int a7,
        int Data)
{
  unsigned int v10; // edi
  NTSTATUS v13; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  Data = 0;
  Disposition = 0;
  a7 = 0;
  DestinationString = 0LL;
  v10 = 0;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  RtlInitUnicodeString(&DestinationString, L"AcpiAlias");
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v13 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v13 == -1073741772 )
    v13 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( v13 >= 0 )
  {
    while ( 1 )
    {
      swprintf_s(a4, 0x80uLL, L"%04d", ++v10);
      RtlInitUnicodeString(&DestinationString, a4);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v13 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
      if ( v13 < 0 )
        break;
      ZwClose(Handle);
      Handle = 0LL;
      if ( v10 >= 0xC8 )
        goto LABEL_10;
    }
    if ( v13 == -1073741772 )
      v13 = 0;
LABEL_10:
    if ( v13 < 0 || (v13 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition), v13 < 0) )
    {
      Handle = 0LL;
    }
    else
    {
      Data = *a2;
      RtlInitUnicodeString(&DestinationString, L"DockingState");
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
      ZwSetValueKey(Handle, &DestinationString, 0, 3u, a2 + 2, a2[1]);
      Data = a3;
      RtlInitUnicodeString(&DestinationString, L"ProfileNumber");
      v13 = ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    KeyHandle = 0LL;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v13;
}
