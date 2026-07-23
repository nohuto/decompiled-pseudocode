/*
 * XREFs of CmpCreateHardwareProfiles @ 0x140A56F1C
 * Callers:
 *     CmInitSystem1 @ 0x140A58954 (CmInitSystem1.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14036DE6C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F8450 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1403F8510 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403F8D70 (ZwSetValueKey.c)
 *     RtlEqualUnicodeString @ 0x14061FE70 (RtlEqualUnicodeString.c)
 *     CmSetAcpiHwProfile @ 0x14079B850 (CmSetAcpiHwProfile.c)
 *     CmpOpenDevicesControlSet @ 0x14079C6AC (CmpOpenDevicesControlSet.c)
 *     CmDeleteKeyRecursive @ 0x140879410 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x140879804 (CmpCloneHwProfile.c)
 *     CmpAddDockingInfo @ 0x140A573A4 (CmpAddDockingInfo.c)
 *     CmpAddAliasEntry @ 0x140A915DC (CmpAddAliasEntry.c)
 */

__int64 __fastcall CmpCreateHardwareProfiles(__int64 a1)
{
  char v2; // r12
  int v3; // eax
  HANDLE v4; // rdi
  int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // r14
  unsigned __int16 v8; // dx
  _WORD *v9; // r15
  __int64 v10; // r9
  __int64 v11; // r8
  ULONG Length; // [rsp+28h] [rbp-E0h]
  ULONG Disposition; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v15; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES KeyHandle_8; // [rsp+78h] [rbp-90h] BYREF
  HANDLE v21; // [rsp+A8h] [rbp-60h] BYREF
  HANDLE v22; // [rsp+B0h] [rbp-58h] BYREF
  HANDLE v23; // [rsp+B8h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp-40h] BYREF
  UNICODE_STRING String1; // [rsp+D0h] [rbp-38h] BYREF
  HANDLE v27; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD KeyValueInformation[32]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v29[256]; // [rsp+168h] [rbp+60h] BYREF
  int v30[64]; // [rsp+268h] [rbp+160h] BYREF

  v22 = 0LL;
  ResultLength = 0;
  Disposition = 0;
  memset(&KeyHandle_8, 0, sizeof(KeyHandle_8));
  v27 = 0LL;
  KeyHandle = 0LL;
  v21 = 0LL;
  String1 = 0LL;
  v23 = 0LL;
  DestinationString_8 = 0LL;
  DestinationString = 0LL;
  v15 = 0;
  v2 = 0;
  v3 = CmpOpenDevicesControlSet(a1, &v27, &String1);
  v4 = v27;
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_25;
  KeyHandle_8.RootDirectory = v27;
  KeyHandle_8.Attributes = 576;
  KeyHandle_8.ObjectName = (PUNICODE_STRING)L"$&";
  KeyHandle_8.Length = 48;
  *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &KeyHandle_8);
  v5 = v6;
  if ( v6 == -1073741772 )
  {
    if ( !CmStateSeparationEnabled )
      goto LABEL_25;
    KeyHandle_8.Length = 48;
    KeyHandle_8.ObjectName = (PUNICODE_STRING)&CmpControlString;
    KeyHandle_8.RootDirectory = v4;
    KeyHandle_8.Attributes = 576;
    *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&v22, 0x20019u, &KeyHandle_8, 0, 0LL, 0, &Disposition);
    if ( v5 < 0 )
      goto LABEL_25;
    ZwClose(v22);
    v22 = 0LL;
    KeyHandle_8.ObjectName = (PUNICODE_STRING)L"$&";
    KeyHandle_8.Length = 48;
    KeyHandle_8.RootDirectory = v4;
    KeyHandle_8.Attributes = 576;
    *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&KeyHandle, 0x20019u, &KeyHandle_8, 0, 0LL, 0, &Disposition);
    if ( v5 < 0 )
      goto LABEL_25;
    KeyHandle_8.RootDirectory = KeyHandle;
    KeyHandle_8.Length = 48;
    KeyHandle_8.ObjectName = (PUNICODE_STRING)L"\"$";
    KeyHandle_8.Attributes = 576;
    *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&v22, 0x20019u, &KeyHandle_8, 0, 0LL, 0, &Disposition);
    if ( v5 < 0 )
      goto LABEL_25;
    DestinationString_8.MaximumLength = 256;
    DestinationString_8.Buffer = (wchar_t *)v29;
    RtlUnicodeStringPrintf(&DestinationString_8, L"%04d", 0LL);
    KeyHandle_8.RootDirectory = v22;
    KeyHandle_8.Length = 48;
    KeyHandle_8.ObjectName = &DestinationString_8;
    KeyHandle_8.Attributes = 576;
    *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&v21, 0x20019u, &KeyHandle_8, 0, 0LL, 0, &Disposition);
    ZwClose(v22);
    v22 = 0LL;
    if ( v5 < 0 )
      goto LABEL_25;
    ZwClose(v21);
    v21 = 0LL;
    v5 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentConfigString, 0, 4u, &v15, 4u);
    if ( v5 < 0 )
      goto LABEL_25;
  }
  else
  {
    if ( v6 < 0 )
      goto LABEL_25;
    v5 = ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&CmpCurrentConfigString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x80u,
           &ResultLength);
    if ( v5 < 0 || KeyValueInformation[1] != 4 )
      goto LABEL_25;
    v15 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
  }
  KeyHandle_8.Length = 48;
  KeyHandle_8.ObjectName = (PUNICODE_STRING)L"\"$";
  KeyHandle_8.RootDirectory = v4;
  KeyHandle_8.Attributes = 576;
  *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&v23, 0x20019u, &KeyHandle_8);
  if ( v5 == -1073741772 )
  {
    if ( !CmStateSeparationEnabled )
      goto LABEL_25;
    v5 = ZwCreateKey(&v23, 0x20019u, &KeyHandle_8, 0, 0LL, 0, &Disposition);
  }
  if ( v5 < 0 )
    goto LABEL_25;
  *(_QWORD *)&DestinationString_8.Length = 0x1000000LL;
  DestinationString_8.Buffer = (wchar_t *)v29;
  RtlUnicodeStringPrintf(&DestinationString_8, L"%04d", v15);
  KeyHandle_8.RootDirectory = v23;
  KeyHandle_8.Length = 48;
  KeyHandle_8.ObjectName = &DestinationString_8;
  KeyHandle_8.Attributes = 576;
  *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&v21, 0x2001Fu, &KeyHandle_8);
  if ( v5 == -1073741772 )
  {
    if ( !CmStateSeparationEnabled )
      goto LABEL_25;
    v5 = ZwCreateKey(&v21, 0x2001Fu, &KeyHandle_8, 0, 0LL, 0, &Disposition);
  }
  if ( v5 < 0 )
    goto LABEL_25;
  v7 = *(_QWORD *)(a1 + 240);
  v8 = *(_WORD *)(v7 + 8);
  v9 = (_WORD *)(v7 + 4);
  if ( v8 == 3 )
  {
    v8 = 1;
    *(_WORD *)(v7 + 8) = 1;
  }
  if ( *v9 == 1 )
    goto LABEL_51;
  if ( *v9 == 2 )
  {
LABEL_15:
    KeyHandle_8.RootDirectory = KeyHandle;
    KeyHandle_8.Length = 48;
    KeyHandle_8.ObjectName = (PUNICODE_STRING)&CmpStrCurrentDockInfoString;
    KeyHandle_8.Attributes = 576;
    *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&DestinationString, 0x2001Fu, &KeyHandle_8, 0, 0LL, 1u, &Disposition) >= 0 )
    {
      CmpAddDockingInfo(DestinationString);
      ZwClose(DestinationString);
      DestinationString = 0LL;
    }
    if ( *(_WORD *)(v7 + 8) == 1 )
      v2 = 1;
    goto LABEL_19;
  }
  if ( *v9 != 3 )
  {
LABEL_19:
    KeyHandle_8.Length = 48;
    KeyHandle_8.RootDirectory = v4;
    KeyHandle_8.ObjectName = (PUNICODE_STRING)L"24";
    KeyHandle_8.Attributes = 576;
    *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&DestinationString, 0xF003Fu, &KeyHandle_8) >= 0 )
    {
      CmDeleteKeyRecursive(DestinationString, 0LL, (__int64)v30, v10, Length);
      ZwClose(DestinationString);
      DestinationString = 0LL;
    }
    v5 = ZwCreateKey(&DestinationString, 0x20u, &KeyHandle_8, 0, 0LL, 3u, &Disposition);
    if ( v5 >= 0 )
    {
      *(_QWORD *)&DestinationString_8.Length = 0x1000000LL;
      DestinationString_8.Buffer = (wchar_t *)v29;
      RtlUnicodeStringPrintf(
        &DestinationString_8,
        L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\Hardware Profiles\\%04d",
        &String1,
        v15);
      v5 = ZwSetValueKey(
             DestinationString,
             &CmSymbolicLinkValueName,
             0,
             6u,
             DestinationString_8.Buffer,
             DestinationString_8.Length);
      if ( !RtlEqualUnicodeString(&String1, &CmpSystemHiveNameString, 1u) )
      {
        ZwClose(DestinationString);
        DestinationString = 0LL;
        *(_QWORD *)&DestinationString_8.Length = 0x1000000LL;
        DestinationString_8.Buffer = (wchar_t *)v29;
        RtlUnicodeStringPrintf(
          &DestinationString_8,
          L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\%wZ",
          &CmpSystemHiveNameString,
          L"24");
        KeyHandle_8.Length = 48;
        KeyHandle_8.ObjectName = &DestinationString_8;
        KeyHandle_8.RootDirectory = 0LL;
        KeyHandle_8.Attributes = 576;
        *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
        v5 = ZwCreateKey(&DestinationString, 0x20u, &KeyHandle_8, 0, 0LL, 3u, &Disposition);
        if ( v5 >= 0 )
        {
          *(_QWORD *)&DestinationString_8.Length = 0x1000000LL;
          DestinationString_8.Buffer = (wchar_t *)v29;
          RtlUnicodeStringPrintf(
            &DestinationString_8,
            L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\%wZ",
            &String1,
            L"24");
          v5 = ZwSetValueKey(
                 DestinationString,
                 &CmSymbolicLinkValueName,
                 0,
                 6u,
                 DestinationString_8.Buffer,
                 DestinationString_8.Length);
        }
      }
    }
    if ( v2 )
    {
      Handle = 0LL;
      LOBYTE(v16) = 0;
      LODWORD(v27) = 131073;
      WORD2(v27) = 0;
      v5 = CmSetAcpiHwProfile(
             (unsigned __int16 *)&v27,
             (__int64 (__fastcall *)(PVOID, unsigned int *, _QWORD))CmpHwprofileDefaultSelect,
             v11,
             &Handle,
             &v16);
      ZwClose(Handle);
    }
    goto LABEL_25;
  }
  v5 = CmpCloneHwProfile(KeyHandle, v23, v21, v15, v8, &v21, &v15);
  if ( v5 < 0 )
  {
    v21 = 0LL;
    goto LABEL_25;
  }
  v5 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentConfigString, 0, 4u, &v15, 4u);
  if ( v5 >= 0 )
  {
LABEL_51:
    CmpAddAliasEntry(KeyHandle, v7 + 4, v15);
    goto LABEL_15;
  }
LABEL_25:
  if ( v4 )
    ZwClose(v4);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v21 )
    ZwClose(v21);
  if ( v23 )
    ZwClose(v23);
  if ( DestinationString )
    ZwClose(DestinationString);
  return (unsigned int)v5;
}
