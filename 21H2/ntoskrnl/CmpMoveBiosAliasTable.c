/*
 * XREFs of CmpMoveBiosAliasTable @ 0x140877D78
 * Callers:
 *     CmSetAcpiHwProfile @ 0x1407A5B08 (CmSetAcpiHwProfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403D6A60 (swprintf_s.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1403FA840 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x1403FABC0 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x1403FC000 (ZwDeleteKey.c)
 *     CmpOpenDevicesControlSet @ 0x1407A6964 (CmpOpenDevicesControlSet.c)
 *     CmDeleteKeyRecursive @ 0x140876EF0 (CmDeleteKeyRecursive.c)
 */

__int64 __fastcall CmpMoveBiosAliasTable(
        void *a1,
        void *a2,
        unsigned int a3,
        int a4,
        wchar_t *Dst,
        __int64 a6,
        unsigned __int16 *KeyValueInformation)
{
  int v10; // r13d
  int v11; // r12d
  NTSTATUS v12; // ebx
  ULONG i; // esi
  __int64 v14; // rcx
  NTSTATUS v15; // ebx
  __int64 v16; // r9
  ULONG Length; // [rsp+20h] [rbp-C1h]
  HANDLE Handle; // [rsp+30h] [rbp-B1h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-A9h] BYREF
  HANDLE v21; // [rsp+40h] [rbp-A1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-99h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-89h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-81h] BYREF
  int Data; // [rsp+90h] [rbp-51h] BYREF
  void *v26; // [rsp+98h] [rbp-49h]
  __int128 KeyInformation; // [rsp+A0h] [rbp-41h] BYREF
  __int128 v28; // [rsp+B0h] [rbp-31h]
  __int128 v29; // [rsp+C0h] [rbp-21h]

  v26 = a1;
  KeyHandle = 0LL;
  Handle = 0LL;
  v21 = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  Data = a4;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyInformation = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"SerialNumber");
  if ( ZwQueryValueKey(a2, &DestinationString, KeyValueFullInformation, KeyValueInformation, 0x100u, &ResultLength) >= 0
    && *((_DWORD *)KeyValueInformation + 1) == 4
    && (v10 = *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)),
        RtlInitUnicodeString(&DestinationString, L"DockID"),
        ZwQueryValueKey(a2, &DestinationString, KeyValueFullInformation, KeyValueInformation, 0x100u, &ResultLength) >= 0)
    && *((_DWORD *)KeyValueInformation + 1) == 4 )
  {
    v11 = *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2));
    RtlInitUnicodeString(&DestinationString, L"Alias");
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    {
      v12 = 0;
      KeyHandle = 0LL;
      goto LABEL_36;
    }
    v12 = ZwQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
    if ( v12 >= 0 )
    {
      for ( i = 0; i < DWORD1(v28); ++i )
      {
        v12 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, KeyValueInformation, 0xFEu, &ResultLength);
        if ( v12 < 0 )
          break;
        KeyValueInformation[((unsigned __int64)*((unsigned int *)KeyValueInformation + 3) >> 1) + 8] = 0;
        DestinationString.Length = KeyValueInformation[6];
        DestinationString.MaximumLength = DestinationString.Length + 2;
        DestinationString.Buffer = KeyValueInformation + 8;
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v12 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
        if ( v12 < 0 )
          break;
        RtlInitUnicodeString(&DestinationString, L"ProfileNumber");
        v12 = ZwQueryValueKey(
                Handle,
                &DestinationString,
                KeyValueFullInformation,
                KeyValueInformation,
                0x100u,
                &ResultLength);
        if ( v12 < 0 || *((_DWORD *)KeyValueInformation + 1) != 4 )
          goto LABEL_33;
        if ( a3 != *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
          goto LABEL_14;
        RtlInitUnicodeString(&DestinationString, L"DockID");
        v12 = ZwQueryValueKey(
                Handle,
                &DestinationString,
                KeyValueFullInformation,
                KeyValueInformation,
                0x100u,
                &ResultLength);
        if ( v12 < 0 || *((_DWORD *)KeyValueInformation + 1) != 4 )
          goto LABEL_33;
        if ( v11 != *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
          goto LABEL_14;
        RtlInitUnicodeString(&DestinationString, L"SerialNumber");
        v12 = ZwQueryValueKey(
                Handle,
                &DestinationString,
                KeyValueFullInformation,
                KeyValueInformation,
                0x100u,
                &ResultLength);
        if ( v12 < 0 || *((_DWORD *)KeyValueInformation + 1) != 4 )
          goto LABEL_33;
        if ( v10 == *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
        {
          RtlInitUnicodeString(&DestinationString, L"ProfileNumber");
          ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
          ZwClose(Handle);
          Handle = 0LL;
          RtlInitUnicodeString(&DestinationString, L"Hardware Profiles");
          ObjectAttributes.RootDirectory = v26;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&v21, 0x2001Fu, &ObjectAttributes) < 0 )
            goto LABEL_32;
          swprintf_s(Dst, 0x80uLL, L"%04d", a3);
          RtlInitUnicodeString(&DestinationString, Dst);
          ObjectAttributes.RootDirectory = v21;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes) < 0 )
          {
            Handle = 0LL;
            goto LABEL_33;
          }
          RtlInitUnicodeString(&DestinationString, L"Cloned");
          v12 = ZwQueryValueKey(
                  Handle,
                  &DestinationString,
                  KeyValueFullInformation,
                  KeyValueInformation,
                  0x100u,
                  &ResultLength);
          if ( v12 < 0 || *((_DWORD *)KeyValueInformation + 1) != 4 )
            goto LABEL_33;
          if ( *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
          {
            ZwDeleteKey(Handle);
            ZwClose(Handle);
            ZwClose(v21);
            v21 = 0LL;
            Handle = 0LL;
            if ( (int)CmpOpenDevicesControlSet(v14, &Handle, 0LL) < 0 )
              goto LABEL_32;
            ObjectAttributes.RootDirectory = Handle;
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v15 = ZwOpenKey(&v21, 0x2001Fu, &ObjectAttributes);
            ZwClose(Handle);
            Handle = 0LL;
            if ( v15 < 0 )
            {
LABEL_32:
              v21 = 0LL;
              goto LABEL_33;
            }
            swprintf_s(Dst, 0x80uLL, L"%04d", a3);
            v12 = CmDeleteKeyRecursive(v21, Dst, (__int64)KeyValueInformation, v16, Length);
            ZwClose(v21);
            v21 = 0LL;
          }
          else
          {
            ZwClose(Handle);
            ZwClose(v21);
            v21 = 0LL;
            Handle = 0LL;
          }
        }
        else
        {
LABEL_14:
          ZwClose(Handle);
          Handle = 0LL;
        }
      }
    }
  }
  else
  {
LABEL_33:
    v12 = -1073741492;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_36:
  if ( Handle )
    ZwClose(Handle);
  if ( v21 )
    ZwClose(v21);
  return (unsigned int)v12;
}
